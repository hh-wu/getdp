
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
#define	tExit	424
#define	tBreak	425
#define	tHelp	426
#define	tCpu	427
#define	tDEF	428
#define	tAND	429
#define	tOR	430
#define	tNOTEQUAL	431
#define	tEQUAL	432
#define	tAPPROXEQUAL	433
#define	tLESSOREQUAL	434
#define	tGREATEROREQUAL	435
#define	tLESSLESS	436
#define	tGREATERGREATER	437
#define	tCROSSPRODUCT	438
#define	UNARYPREC	439

#line 1 "yacc.y"

/* $Id: yacc.tab.c,v 1.22 2000-10-21 12:16:24 geuzaine Exp $ */

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
extern int                     InteractiveCompute, InteractiveExit ;

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



#define	YYFINAL		1538
#define	YYFLAG		-32768
#define	YYNTBASE	206

#define YYTRANSLATE(x) ((unsigned)(x) <= 439 ? yytranslate[x] : 388)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   194,     2,   196,   197,   191,     2,     2,   203,
   204,   189,   187,   202,   188,   205,   190,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   181,
     2,   182,   175,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   200,     2,   201,   195,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   198,     2,   199,     2,     2,     2,     2,     2,
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
   167,   168,   169,   170,   171,   172,   173,   174,   176,   177,
   178,   179,   180,   183,   184,   185,   186,   192,   193
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    75,    79,    82,    83,    86,    87,    88,    92,    97,
   103,   104,   111,   117,   119,   120,   121,   129,   132,   134,
   137,   139,   141,   143,   145,   146,   150,   155,   157,   159,
   163,   164,   168,   173,   175,   179,   186,   188,   193,   197,
   198,   202,   209,   210,   212,   217,   218,   221,   225,   226,
   229,   235,   242,   250,   252,   253,   257,   262,   267,   268,
   271,   272,   275,   277,   278,   279,   287,   291,   295,   302,
   306,   310,   314,   318,   322,   326,   330,   334,   338,   342,
   346,   350,   354,   358,   361,   364,   367,   371,   373,   377,
   380,   382,   385,   386,   392,   397,   402,   403,   411,   418,
   421,   424,   427,   430,   434,   437,   441,   444,   448,   450,
   454,   455,   459,   466,   473,   474,   479,   480,   483,   487,
   492,   493,   498,   499,   502,   506,   510,   515,   516,   521,
   522,   525,   529,   533,   538,   539,   544,   545,   548,   552,
   556,   561,   562,   567,   568,   571,   575,   579,   583,   587,
   591,   595,   596,   599,   603,   605,   606,   609,   613,   618,
   622,   627,   633,   634,   639,   640,   643,   647,   651,   655,
   659,   663,   667,   675,   679,   683,   687,   691,   695,   703,
   711,   719,   720,   723,   727,   729,   730,   733,   737,   742,
   746,   751,   756,   761,   766,   767,   772,   773,   776,   780,
   784,   789,   794,   798,   802,   803,   804,   805,   824,   825,
   830,   831,   834,   838,   842,   844,   848,   849,   853,   854,
   859,   860,   863,   867,   871,   875,   876,   881,   882,   885,
   889,   895,   899,   903,   908,   909,   912,   916,   918,   919,
   922,   926,   931,   935,   940,   945,   946,   951,   952,   955,
   959,   963,   967,   971,   972,   979,   983,   984,   990,   994,
   998,  1002,  1006,  1007,  1011,  1012,  1015,  1020,  1025,  1030,
  1035,  1036,  1039,  1043,  1047,  1051,  1052,  1055,  1059,  1063,
  1067,  1071,  1072,  1075,  1076,  1077,  1087,  1091,  1095,  1099,
  1100,  1103,  1107,  1108,  1109,  1119,  1120,  1122,  1124,  1126,
  1128,  1130,  1132,  1137,  1141,  1142,  1145,  1149,  1151,  1152,
  1155,  1159,  1164,  1169,  1170,  1176,  1177,  1182,  1183,  1186,
  1190,  1194,  1198,  1202,  1206,  1210,  1214,  1218,  1221,  1225,
  1226,  1230,  1232,  1236,  1237,  1241,  1242,  1245,  1249,  1253,
  1258,  1263,  1268,  1273,  1279,  1285,  1288,  1296,  1308,  1316,
  1324,  1334,  1346,  1360,  1376,  1377,  1385,  1386,  1394,  1402,
  1406,  1408,  1410,  1411,  1414,  1418,  1422,  1425,  1426,  1429,
  1433,  1437,  1441,  1445,  1450,  1451,  1454,  1458,  1462,  1466,
  1470,  1474,  1479,  1480,  1483,  1487,  1491,  1495,  1499,  1504,
  1505,  1508,  1512,  1516,  1520,  1524,  1528,  1533,  1538,  1543,
  1544,  1549,  1550,  1553,  1557,  1561,  1565,  1569,  1573,  1577,
  1578,  1581,  1585,  1587,  1588,  1591,  1595,  1600,  1605,  1609,
  1614,  1615,  1620,  1621,  1624,  1628,  1633,  1634,  1640,  1646,
  1647,  1650,  1651,  1658,  1662,  1663,  1668,  1672,  1676,  1677,
  1680,  1684,  1686,  1687,  1690,  1694,  1698,  1702,  1706,  1711,
  1712,  1721,  1722,  1723,  1727,  1735,  1743,  1747,  1754,  1756,
  1758,  1760,  1762,  1763,  1767,  1769,  1772,  1775,  1800,  1803,
  1804,  1819,  1828,  1849,  1879,  1918,  1931,  1932,  1935,  1939,
  1944,  1949,  1953,  1956,  1960,  1964,  1968,  1972,  1976,  1980,
  1984,  1988,  1992,  1996,  2000,  2004,  2008,  2014,  2015,  2018,
  2019,  2023,  2025,  2029,  2030,  2032,  2036,  2038,  2040,  2044,
  2048,  2052,  2059,  2064,  2069,  2076,  2086,  2092,  2093,  2097,
  2103,  2109,  2111,  2113,  2115,  2117,  2119,  2121,  2123,  2125,
  2127,  2129,  2131,  2133,  2135,  2137,  2139,  2141,  2143,  2145,
  2147,  2149,  2151,  2153,  2157,  2160,  2163,  2167,  2171,  2175,
  2179,  2183,  2187,  2191,  2195,  2199,  2203,  2207,  2211,  2215,
  2219,  2224,  2229,  2234,  2239,  2244,  2249,  2254,  2259,  2264,
  2269,  2276,  2281,  2286,  2291,  2296,  2301,  2306,  2313,  2320,
  2327,  2333,  2336,  2338,  2340,  2342,  2344,  2346,  2348,  2350,
  2352,  2354
};

static const short yyrhs[] = {    -1,
   207,   208,     0,     0,     0,   208,   209,   210,     0,    41,
   198,   213,   199,     0,    77,   198,   233,   199,     0,    48,
   198,   264,   199,     0,    61,   198,   249,   199,     0,    63,
   198,   255,   199,     0,    73,   198,   271,   199,     0,    86,
   198,   292,   199,     0,   103,   198,   318,   199,     0,   136,
   198,   348,   199,     0,   138,   198,   360,   199,     0,   364,
     0,   382,     0,     9,   387,     0,   211,     0,   170,     7,
     0,   172,     7,     0,   172,     5,     7,     0,   173,     7,
     0,     0,   212,   368,     0,     0,     0,   213,   214,   215,
     0,     5,   174,   217,     7,     0,     5,   232,   174,   217,
     7,     0,     0,     5,   230,   174,   216,   217,     7,     0,
    42,   200,   228,   201,     7,     0,   382,     0,     0,     0,
   221,   200,   218,   222,   219,   223,   201,     0,   196,   225,
     0,   217,     0,     5,   231,     0,    49,     0,     5,     0,
   225,     0,    43,     0,     0,   229,   224,   225,     0,   229,
    44,     5,   231,     0,     5,     0,   227,     0,   198,   226,
   199,     0,     0,   226,   229,   227,     0,   226,   229,   188,
   227,     0,     3,     0,     3,     8,     3,     0,     3,     8,
   200,   385,   201,     3,     0,     5,     0,     5,   198,   385,
   199,     0,     5,   198,   199,     0,     0,   228,   229,     5,
     0,   228,   229,     5,   198,   385,   199,     0,     0,   202,
     0,   198,   196,   385,   199,     0,     0,   198,   199,     0,
   198,   385,   199,     0,     0,   233,   234,     0,    45,   200,
   235,   201,     7,     0,     5,   200,   201,   174,   236,     7,
     0,     5,   200,   220,   201,   174,   236,     7,     0,   382,
     0,     0,   235,   229,     5,     0,    10,   200,   385,   201,
     0,    77,   200,     5,   201,     0,     0,   237,   238,     0,
     0,   239,   240,     0,   243,     0,     0,     0,   240,   175,
   241,   240,     8,   242,   240,     0,   240,   189,   240,     0,
   240,   192,   240,     0,    40,   200,   240,   202,   240,   201,
     0,   240,   190,   240,     0,   240,   187,   240,     0,   240,
   188,   240,     0,   240,   191,   240,     0,   240,   195,   240,
     0,   240,   181,   240,     0,   240,   182,   240,     0,   240,
   183,   240,     0,   240,   184,   240,     0,   240,   179,   240,
     0,   240,   178,   240,     0,   240,   180,   240,     0,   240,
   176,   240,     0,   240,   177,   240,     0,   188,   240,     0,
   187,   240,     0,   194,   240,     0,   203,   240,   204,     0,
   386,     0,   384,   246,   248,     0,     5,   317,     0,   317,
     0,   317,   246,     0,     0,    96,   244,   200,   238,   201,
     0,    37,   200,   317,   201,     0,    39,   200,   317,   201,
     0,     0,    38,   245,   200,   238,   202,   220,   201,     0,
   181,     5,   182,   200,   238,   201,     0,   197,     5,     0,
   197,   159,     0,   197,   114,     0,   197,     3,     0,   243,
   196,     3,     0,   196,     3,     0,   200,   205,   201,     0,
   200,   201,     0,   200,   247,   201,     0,   240,     0,   247,
   202,   240,     0,     0,   198,   380,   199,     0,   198,    49,
   200,   220,   201,   199,     0,   198,    46,   200,     5,   201,
   199,     0,     0,   249,   198,   250,   199,     0,     0,   250,
   251,     0,    74,     5,     7,     0,    62,   198,   252,   199,
     0,     0,   252,   198,   253,   199,     0,     0,   253,   254,
     0,    49,   220,     7,     0,    49,    43,     7,     0,    61,
     5,   248,     7,     0,     0,   255,   198,   256,   199,     0,
     0,   256,   257,     0,    74,     5,     7,     0,    66,   236,
     7,     0,    62,   198,   258,   199,     0,     0,   258,   198,
   259,   199,     0,     0,   259,   260,     0,    64,     5,     7,
     0,    65,     5,     7,     0,    62,   198,   261,   199,     0,
     0,   261,   198,   262,   199,     0,     0,   262,   263,     0,
    67,     5,     7,     0,    68,   385,     7,     0,    69,   385,
     7,     0,    70,   385,     7,     0,    71,   385,     7,     0,
    72,   385,     7,     0,     0,   264,   265,     0,   198,   266,
   199,     0,   382,     0,     0,   266,   267,     0,    74,     5,
     7,     0,    74,     5,   230,     7,     0,    64,     5,     7,
     0,    62,   198,   268,   199,     0,    62,     5,   198,   268,
   199,     0,     0,   268,   198,   269,   199,     0,     0,   269,
   270,     0,    64,     5,     7,     0,    49,   220,     7,     0,
    50,   220,     7,     0,    56,   236,     7,     0,    55,   236,
     7,     0,    60,     5,     7,     0,    57,   198,     3,   229,
     3,   199,     7,     0,    51,   220,     7,     0,    52,   220,
     7,     0,    77,   236,     7,     0,    54,   236,     7,     0,
    53,   236,     7,     0,    77,   200,   236,   202,   236,   201,
     7,     0,    54,   200,   236,   202,   236,   201,     7,     0,
    53,   200,   236,   202,   236,   201,     7,     0,     0,   271,
   272,     0,   198,   273,   199,     0,   382,     0,     0,   273,
   274,     0,    74,     5,     7,     0,    74,     5,   230,     7,
     0,    64,     5,     7,     0,    75,   198,   275,   199,     0,
    80,   198,   281,   199,     0,    82,   198,   286,   199,     0,
    48,   198,   289,   199,     0,     0,   275,   198,   276,   199,
     0,     0,   276,   277,     0,    74,     5,     7,     0,    76,
     5,     7,     0,    76,     5,   230,     7,     0,    77,     5,
   278,     7,     0,    78,   220,     7,     0,    79,   220,     7,
     0,     0,     0,     0,   198,    87,     5,     7,    86,     5,
   230,     7,   279,    41,   220,     7,   280,   103,     5,   231,
     7,   199,     0,     0,   281,   198,   282,   199,     0,     0,
   282,   283,     0,    74,     5,     7,     0,    81,   284,     7,
     0,     5,     0,   198,   285,   199,     0,     0,   285,   229,
     5,     0,     0,   286,   198,   287,   199,     0,     0,   287,
   288,     0,    74,     5,     7,     0,    64,     5,     7,     0,
    76,     5,     7,     0,     0,   289,   198,   290,   199,     0,
     0,   290,   291,     0,    76,     5,     7,     0,    79,   221,
    85,     5,     7,     0,    83,   221,     7,     0,    84,   224,
     7,     0,    85,     5,   231,     7,     0,     0,   292,   293,
     0,   198,   294,   199,     0,   382,     0,     0,   294,   295,
     0,    74,     5,     7,     0,    74,     5,   230,     7,     0,
    64,     5,     7,     0,    87,   198,   296,   199,     0,    91,
   198,   302,   199,     0,     0,   296,   198,   297,   199,     0,
     0,   297,   298,     0,    74,     5,     7,     0,    64,    82,
     7,     0,    64,    92,     7,     0,    64,     5,     7,     0,
     0,    88,     5,   231,   299,   301,     7,     0,    89,     3,
     7,     0,     0,   200,   300,   238,   201,     7,     0,   102,
   220,     7,     0,    63,     5,     7,     0,    61,     5,     7,
     0,    90,     3,     7,     0,     0,   200,     5,   201,     0,
     0,   302,   303,     0,    92,   198,   308,   199,     0,    93,
   198,   308,   199,     0,    94,   198,   312,   199,     0,    95,
   198,   304,   199,     0,     0,   304,   305,     0,    64,     5,
     7,     0,    85,     5,     7,     0,   198,   306,   199,     0,
     0,   306,   307,     0,    58,   317,     7,     0,    59,   317,
     7,     0,    91,   317,     7,     0,   102,   220,     7,     0,
     0,   308,   309,     0,     0,     0,   316,   200,   310,   238,
   311,   202,   238,   201,     7,     0,   102,   220,     7,     0,
    61,     5,     7,     0,    63,     5,     7,     0,     0,   312,
   313,     0,   102,   220,     7,     0,     0,     0,   316,   200,
   314,   238,   315,   202,   317,   201,     7,     0,     0,    96,
     0,    97,     0,    98,     0,    99,     0,   100,     0,   101,
     0,   198,     5,     5,   199,     0,   198,     5,   199,     0,
     0,   318,   319,     0,   198,   320,   199,     0,   382,     0,
     0,   320,   321,     0,    74,     5,     7,     0,    74,     5,
   230,     7,     0,   104,   198,   323,   199,     0,     0,   111,
   322,   198,   330,   199,     0,     0,   323,   198,   324,   199,
     0,     0,   324,   325,     0,    74,     5,     7,     0,    64,
     5,     7,     0,   105,   326,     7,     0,   106,   387,     7,
     0,   109,   328,     7,     0,   110,     5,     7,     0,   107,
   379,     7,     0,   108,   387,     7,     0,     5,   231,     0,
   198,   327,   199,     0,     0,   327,   229,     5,     0,     5,
     0,   198,   329,   199,     0,     0,   329,   229,     5,     0,
     0,   330,   331,     0,     5,     5,     7,     0,   113,   236,
     7,     0,   121,   198,   337,   199,     0,   125,   198,   339,
   199,     0,   128,   198,   341,   199,     0,   131,   198,   343,
   199,     0,     5,   200,     5,   201,     7,     0,   113,   200,
   236,   201,     7,     0,   171,     7,     0,   117,   200,   236,
   201,   198,   330,   199,     0,   117,   200,   236,   201,   198,
   330,   199,   118,   198,   330,   199,     0,   115,   200,     5,
   202,   236,   201,     7,     0,   120,   200,     5,   202,   236,
   201,     7,     0,   116,   200,     5,   202,     5,   202,   379,
   201,     7,     0,   119,   200,     5,   202,   385,   202,   379,
   202,   385,   201,     7,     0,   121,   200,   385,   202,   385,
   202,   236,   202,   236,   201,   198,   330,   199,     0,   125,
   200,   385,   202,   385,   202,   236,   202,   385,   202,   385,
   201,   198,   330,   199,     0,     0,   143,   332,   200,   334,
   335,   201,     7,     0,     0,   144,   333,   200,   334,   335,
   201,     7,     0,   134,   200,   220,   202,   236,   201,     7,
     0,   135,     6,     7,     0,   377,     0,     5,     0,     0,
   335,   336,     0,   202,   156,   387,     0,   202,   159,   379,
     0,   202,   379,     0,     0,   337,   338,     0,   122,   385,
     7,     0,   123,   385,     7,     0,   114,   236,     7,     0,
   124,   236,     7,     0,   111,   198,   330,   199,     0,     0,
   339,   340,     0,   122,   385,     7,     0,   123,   385,     7,
     0,   114,   236,     7,     0,   126,   385,     7,     0,   127,
   385,     7,     0,   111,   198,   330,   199,     0,     0,   341,
   342,     0,   129,   385,     7,     0,   130,   236,     7,     0,
    66,   385,     7,     0,   169,   385,     7,     0,   111,   198,
   330,   199,     0,     0,   343,   344,     0,   129,   385,     7,
     0,   132,   385,     7,     0,    66,   385,     7,     0,   169,
   385,     7,     0,   104,     5,     7,     0,   133,   198,   345,
   199,     0,   111,   198,   330,   199,     0,   112,   198,   330,
   199,     0,     0,   345,   198,   346,   199,     0,     0,   346,
   347,     0,    64,     5,     7,     0,    87,     5,     7,     0,
   102,   220,     7,     0,    66,   385,     7,     0,    77,   236,
     7,     0,   169,     5,     7,     0,     0,   348,   349,     0,
   198,   350,   199,     0,   382,     0,     0,   350,   351,     0,
    74,     5,     7,     0,    74,     5,   230,     7,     0,   105,
     5,   231,     7,     0,   137,     5,     7,     0,    87,   198,
   352,   199,     0,     0,   352,   198,   353,   199,     0,     0,
   353,   354,     0,    74,     5,     7,     0,    55,   198,   355,
   199,     0,     0,   355,    92,   198,   356,   199,     0,   355,
     5,   198,   356,   199,     0,     0,   356,   357,     0,     0,
   316,   200,   358,   238,   201,     7,     0,    64,     5,     7,
     0,     0,   102,   359,   220,     7,     0,    61,     5,     7,
     0,    63,     5,     7,     0,     0,   360,   361,     0,   198,
   362,   199,     0,   382,     0,     0,   362,   363,     0,    74,
     5,     7,     0,   139,     5,     7,     0,   161,     5,     7,
     0,   141,   387,     7,     0,   111,   198,   366,   199,     0,
     0,   138,     5,   140,     5,   365,   198,   366,   199,     0,
     0,     0,   366,   367,   368,     0,   142,   200,   369,   372,
   374,   201,     7,     0,   143,   200,   369,   372,   374,   201,
     7,     0,     5,   371,   202,     0,     5,   371,   370,     5,
   371,   202,     0,   189,     0,   190,     0,   187,     0,   188,
     0,     0,   200,   220,   201,     0,   146,     0,   147,   220,
     0,   148,   220,     0,   150,   198,   198,   385,   202,   385,
   202,   385,   199,   198,   385,   202,   385,   202,   385,   199,
   198,   385,   202,   385,   202,   385,   199,   199,     0,   149,
   220,     0,     0,   149,   198,   236,   202,   236,   202,   236,
   199,   198,   379,   373,   202,   379,   199,     0,   151,   198,
   385,   202,   385,   202,   385,   199,     0,   152,   198,   198,
   385,   202,   385,   202,   385,   199,   198,   385,   202,   385,
   202,   385,   199,   199,   198,   385,   199,     0,   153,   198,
   198,   385,   202,   385,   202,   385,   199,   198,   385,   202,
   385,   202,   385,   199,   198,   385,   202,   385,   202,   385,
   199,   199,   198,   385,   202,   385,   199,     0,   154,   198,
   198,   385,   202,   385,   202,   385,   199,   198,   385,   202,
   385,   202,   385,   199,   198,   385,   202,   385,   202,   385,
   199,   198,   385,   202,   385,   202,   385,   199,   199,   198,
   385,   202,   385,   202,   385,   199,     0,   147,   220,   155,
     5,   198,   385,   202,   385,   199,   198,   385,   199,     0,
     0,   374,   375,     0,   202,   156,   387,     0,   202,   156,
   182,   387,     0,   202,   156,   186,   387,     0,   202,   157,
   385,     0,   202,   164,     0,   202,   165,   385,     0,   202,
   160,   385,     0,   202,   161,     5,     0,   202,   162,   376,
     0,   202,   163,   376,     0,   202,   161,   376,     0,   202,
   158,   385,     0,   202,   159,   379,     0,   202,   145,     5,
     0,   202,   167,     5,     0,   202,   166,   385,     0,   202,
    55,   379,     0,   202,   168,   385,     0,   202,   168,   198,
   380,   199,     0,     0,   376,     6,     0,     0,   198,   378,
   199,     0,   236,     0,   378,   202,   236,     0,     0,   385,
     0,   198,   380,   199,     0,   385,     0,   381,     0,   380,
   202,   385,     0,   380,   202,   381,     0,   385,     8,   385,
     0,   385,     8,   200,   385,   201,   385,     0,     5,   174,
   385,     7,     0,     5,   174,     6,     7,     0,     5,   174,
   198,   380,   199,     7,     0,     5,   174,    47,   200,     5,
   202,     5,   201,     7,     0,    11,   200,   383,   201,     7,
     0,     0,   383,   229,     5,     0,   383,   229,     5,   174,
   385,     0,   383,   229,     5,   174,     6,     0,    17,     0,
    18,     0,    19,     0,    20,     0,    21,     0,    22,     0,
    23,     0,    24,     0,    25,     0,    26,     0,    27,     0,
    28,     0,    29,     0,    30,     0,    31,     0,    32,     0,
    33,     0,    34,     0,    35,     0,    36,     0,     5,     0,
   386,     0,   203,   385,   204,     0,   188,   385,     0,   194,
   385,     0,   385,   188,   385,     0,   385,   187,   385,     0,
   385,   189,   385,     0,   385,   190,   385,     0,   385,   191,
   385,     0,   385,   195,   385,     0,   385,   181,   385,     0,
   385,   182,   385,     0,   385,   183,   385,     0,   385,   184,
   385,     0,   385,   179,   385,     0,   385,   178,   385,     0,
   385,   176,   385,     0,   385,   177,   385,     0,    17,   200,
   385,   201,     0,    18,   200,   385,   201,     0,    19,   200,
   385,   201,     0,    20,   200,   385,   201,     0,    21,   200,
   385,   201,     0,    22,   200,   385,   201,     0,    23,   200,
   385,   201,     0,    24,   200,   385,   201,     0,    25,   200,
   385,   201,     0,    26,   200,   385,   201,     0,    27,   200,
   385,   202,   385,   201,     0,    28,   200,   385,   201,     0,
    29,   200,   385,   201,     0,    30,   200,   385,   201,     0,
    31,   200,   385,   201,     0,    32,   200,   385,   201,     0,
    33,   200,   385,   201,     0,    34,   200,   385,   202,   385,
   201,     0,    35,   200,   385,   202,   385,   201,     0,    36,
   200,   385,   202,   385,   201,     0,   385,   175,   385,     8,
   385,     0,   385,   196,     0,     4,     0,     3,     0,    12,
     0,    13,     0,    14,     0,    15,     0,    16,     0,     5,
     0,     6,     0,     5,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   315,   352,   390,   393,   396,   399,   402,   403,   404,   405,
   406,   407,   408,   409,   410,   412,   414,   416,   421,   430,
   434,   438,   441,   443,   451,   465,   468,   469,   472,   477,
   480,   482,   485,   487,   491,   499,   510,   519,   528,   535,
   570,   575,   585,   588,   602,   607,   610,   659,   671,   697,
   702,   717,   735,   756,   762,   771,   785,   819,   832,   852,
   856,   866,   883,   883,   886,   892,   895,   898,   908,   911,
   914,   918,   938,   982,   986,   989,  1006,  1015,  1022,  1025,
  1031,  1037,  1044,  1048,  1061,  1076,  1090,  1096,  1102,  1108,
  1114,  1120,  1126,  1132,  1138,  1144,  1150,  1156,  1162,  1168,
  1174,  1180,  1186,  1193,  1199,  1201,  1210,  1214,  1220,  1298,
  1332,  1342,  1355,  1357,  1368,  1374,  1380,  1382,  1411,  1435,
  1446,  1452,  1459,  1465,  1476,  1490,  1493,  1494,  1497,  1500,
  1503,  1508,  1510,  1517,  1542,  1549,  1554,  1559,  1563,  1570,
  1575,  1580,  1585,  1591,  1595,  1600,  1603,  1632,  1640,  1645,
  1654,  1658,  1667,  1670,  1675,  1680,  1685,  1693,  1697,  1708,
  1717,  1722,  1727,  1732,  1744,  1748,  1803,  1806,  1809,  1812,
  1815,  1824,  1831,  1834,  1856,  1859,  1869,  1873,  1881,  1888,
  1896,  1899,  1919,  1936,  1958,  1968,  1972,  1983,  2007,  2032,
  2037,  2045,  2053,  2063,  2079,  2086,  2092,  2098,  2106,  2114,
  2122,  2140,  2148,  2151,  2174,  2178,  2187,  2191,  2199,  2206,
  2214,  2217,  2220,  2223,  2228,  2246,  2281,  2296,  2300,  2305,
  2310,  2315,  2327,  2351,  2406,  2410,  2414,  2423,  2486,  2492,
  2497,  2502,  2506,  2513,  2518,  2536,  2541,  2545,  2562,  2568,
  2575,  2582,  2586,  2593,  2602,  2613,  2630,  2702,  2714,  2718,
  2738,  2752,  2755,  2758,  2802,  2809,  2812,  2834,  2838,  2846,
  2850,  2858,  2865,  2874,  2876,  2881,  2896,  2912,  2929,  2933,
  2938,  2942,  2945,  2954,  2993,  3017,  3022,  3028,  3178,  3183,
  3192,  3201,  3206,  3209,  3247,  3264,  3290,  3295,  3298,  3301,
  3306,  3314,  3317,  3328,  3338,  3350,  3359,  3362,  3366,  3368,
  3370,  3376,  3394,  3398,  3409,  3470,  3516,  3540,  3549,  3561,
  3578,  3582,  3616,  3625,  3679,  3695,  3698,  3699,  3700,  3701,
  3702,  3703,  3707,  3723,  3739,  3746,  3749,  3770,  3774,  3782,
  3786,  3795,  3802,  3805,  3807,  3812,  3828,  3845,  3860,  3864,
  3869,  3877,  3880,  3885,  3890,  3895,  3905,  3912,  3951,  3956,
  3961,  3971,  3983,  3987,  3992,  4003,  4012,  4019,  4039,  4046,
  4052,  4058,  4064,  4072,  4088,  4095,  4101,  4112,  4123,  4139,
  4151,  4173,  4194,  4207,  4221,  4228,  4230,  4237,  4239,  4249,
  4259,  4269,  4279,  4285,  4288,  4292,  4301,  4312,  4324,  4328,
  4334,  4338,  4342,  4347,  4356,  4369,  4373,  4379,  4383,  4387,
  4391,  4396,  4405,  4417,  4420,  4426,  4430,  4434,  4439,  4448,
  4463,  4466,  4472,  4476,  4480,  4485,  4495,  4501,  4507,  4516,
  4520,  4524,  4538,  4541,  4552,  4581,  4584,  4587,  4595,  4609,
  4617,  4620,  4641,  4644,  4655,  4658,  4666,  4674,  4720,  4725,
  4730,  4734,  4738,  4745,  4749,  4753,  4758,  4764,  4770,  4782,
  4793,  4796,  4804,  4832,  4842,  4842,  4848,  4857,  4873,  4881,
  4884,  4889,  4892,  4901,  4904,  4912,  4924,  4934,  4939,  4944,
  4962,  4971,  4975,  4980,  4988,  4996,  5003,  5017,  5039,  5042,
  5043,  5044,  5047,  5051,  5055,  5063,  5070,  5077,  5093,  5100,
  5114,  5124,  5132,  5145,  5163,  5187,  5207,  5224,  5227,  5235,
  5242,  5249,  5253,  5257,  5261,  5265,  5274,  5279,  5284,  5304,
  5311,  5318,  5326,  5334,  5341,  5348,  5352,  5364,  5371,  5417,
  5423,  5427,  5432,  5437,  5440,  5441,  5445,  5450,  5459,  5462,
  5471,  5479,  5496,  5504,  5510,  5522,  5566,  5570,  5573,  5579,
  5585,  5596,  5598,  5599,  5600,  5601,  5602,  5603,  5604,  5605,
  5606,  5607,  5608,  5609,  5610,  5611,  5612,  5613,  5614,  5615,
  5616,  5617,  5619,  5621,  5622,  5623,  5624,  5625,  5626,  5627,
  5628,  5629,  5630,  5631,  5632,  5633,  5634,  5635,  5636,  5637,
  5638,  5639,  5640,  5641,  5642,  5643,  5644,  5645,  5646,  5647,
  5648,  5649,  5650,  5651,  5652,  5653,  5654,  5655,  5656,  5657,
  5658,  5659,  5662,  5665,  5666,  5667,  5668,  5669,  5670,  5671,
  5688,  5693
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
"tFooter","tSkin","tSmoothing","tTarget","tSort","tIso","tFlag","tExit","tBreak",
"tHelp","tCpu","tDEF","'?'","tAND","tOR","tNOTEQUAL","tEQUAL","tAPPROXEQUAL",
"'<'","'>'","tLESSOREQUAL","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'",
"'-'","'*'","'/'","'%'","tCROSSPRODUCT","UNARYPREC","'!'","'^'","'#'","'$'",
"'{'","'}'","'['","']'","','","'('","')'","'.'","Stats","@1","ProblemDefinitions",
"@2","ProblemDefinition","Interactive","@3","Groups","@4","Group","@5","ReducedGroupRHS",
"@6","@7","GroupRHS","FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion",
"SuppListTypeForGroup","ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups",
"Comma","DefineDimension","MultipleIndex","Index","Functions","Function","DefineFunctions",
"Expression","@8","WholeQuantityExpression","@9","WholeQuantity","@10","@11",
"WholeQuantity_Single","@12","@13","ArgumentsForFunction","RecursiveListOfQuantity",
"ParametersForFunction","JacobianMethods","JacobianMethod","JacobianMethodTerm",
"JacobianCases","JacobianCase","JacobianCaseTerm","IntegrationMethods","IntegrationMethod",
"IntegrationMethodTerm","IntegrationCases","IntegrationCase","IntegrationCaseTerm",
"QuadratureCases","QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint",
"Constraint","ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm",
"FunctionSpaces","BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions",
"BasisFunction","BasisFunctionTerm","OptionalParametersForBasisFunction","@14",
"@15","SubSpaces","SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
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
   207,   206,   208,   209,   208,   210,   210,   210,   210,   210,
   210,   210,   210,   210,   210,   210,   210,   210,   210,   211,
   211,   211,   211,   212,   211,   213,   214,   213,   215,   215,
   216,   215,   215,   215,   218,   219,   217,   217,   220,   220,
   221,   221,   222,   222,   223,   223,   223,   224,   225,   225,
   226,   226,   226,   227,   227,   227,   227,   227,   227,   228,
   228,   228,   229,   229,   230,   231,   231,   232,   233,   233,
   234,   234,   234,   234,   235,   235,   236,   236,   237,   236,
   239,   238,   240,   241,   242,   240,   240,   240,   240,   240,
   240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
   240,   240,   240,   240,   240,   240,   243,   243,   243,   243,
   243,   243,   244,   243,   243,   243,   245,   243,   243,   243,
   243,   243,   243,   243,   243,   246,   246,   246,   247,   247,
   248,   248,   248,   248,   249,   249,   250,   250,   251,   251,
   252,   252,   253,   253,   254,   254,   254,   255,   255,   256,
   256,   257,   257,   257,   258,   258,   259,   259,   260,   260,
   260,   261,   261,   262,   262,   263,   263,   263,   263,   263,
   263,   264,   264,   265,   265,   266,   266,   267,   267,   267,
   267,   267,   268,   268,   269,   269,   270,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   271,   271,   272,   272,   273,   273,   274,   274,   274,
   274,   274,   274,   274,   275,   275,   276,   276,   277,   277,
   277,   277,   277,   277,   278,   279,   280,   278,   281,   281,
   282,   282,   283,   283,   284,   284,   285,   285,   286,   286,
   287,   287,   288,   288,   288,   289,   289,   290,   290,   291,
   291,   291,   291,   291,   292,   292,   293,   293,   294,   294,
   295,   295,   295,   295,   295,   296,   296,   297,   297,   298,
   298,   298,   298,   299,   298,   298,   300,   298,   298,   298,
   298,   298,   301,   301,   302,   302,   303,   303,   303,   303,
   304,   304,   305,   305,   305,   306,   306,   307,   307,   307,
   307,   308,   308,   310,   311,   309,   309,   309,   309,   312,
   312,   313,   314,   315,   313,   316,   316,   316,   316,   316,
   316,   316,   317,   317,   318,   318,   319,   319,   320,   320,
   321,   321,   321,   322,   321,   323,   323,   324,   324,   325,
   325,   325,   325,   325,   325,   325,   325,   326,   326,   327,
   327,   328,   328,   329,   329,   330,   330,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   332,   331,   333,   331,   331,   331,
   334,   334,   335,   335,   336,   336,   336,   337,   337,   338,
   338,   338,   338,   338,   339,   339,   340,   340,   340,   340,
   340,   340,   341,   341,   342,   342,   342,   342,   342,   343,
   343,   344,   344,   344,   344,   344,   344,   344,   344,   345,
   345,   346,   346,   347,   347,   347,   347,   347,   347,   348,
   348,   349,   349,   350,   350,   351,   351,   351,   351,   351,
   352,   352,   353,   353,   354,   354,   355,   355,   355,   356,
   356,   358,   357,   357,   359,   357,   357,   357,   360,   360,
   361,   361,   362,   362,   363,   363,   363,   363,   363,   365,
   364,   366,   367,   366,   368,   368,   369,   369,   370,   370,
   370,   370,   371,   371,   372,   372,   372,   372,   372,   373,
   372,   372,   372,   372,   372,   372,   374,   374,   375,   375,
   375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
   375,   375,   375,   375,   375,   375,   375,   376,   376,   377,
   377,   378,   378,   379,   379,   379,   380,   380,   380,   380,
   381,   381,   382,   382,   382,   382,   382,   383,   383,   383,
   383,   384,   384,   384,   384,   384,   384,   384,   384,   384,
   384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
   384,   384,   385,   385,   385,   385,   385,   385,   385,   385,
   385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
   385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
   385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
   385,   385,   386,   386,   386,   386,   386,   386,   386,   386,
   387,   387
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     2,     3,     2,     0,     2,     0,     0,     3,     4,     5,
     0,     6,     5,     1,     0,     0,     7,     2,     1,     2,
     1,     1,     1,     1,     0,     3,     4,     1,     1,     3,
     0,     3,     4,     1,     3,     6,     1,     4,     3,     0,
     3,     6,     0,     1,     4,     0,     2,     3,     0,     2,
     5,     6,     7,     1,     0,     3,     4,     4,     0,     2,
     0,     2,     1,     0,     0,     7,     3,     3,     6,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     2,     2,     2,     3,     1,     3,     2,
     1,     2,     0,     5,     4,     4,     0,     7,     6,     2,
     2,     2,     2,     3,     2,     3,     2,     3,     1,     3,
     0,     3,     6,     6,     0,     4,     0,     2,     3,     4,
     0,     4,     0,     2,     3,     3,     4,     0,     4,     0,
     2,     3,     3,     4,     0,     4,     0,     2,     3,     3,
     4,     0,     4,     0,     2,     3,     3,     3,     3,     3,
     3,     0,     2,     3,     1,     0,     2,     3,     4,     3,
     4,     5,     0,     4,     0,     2,     3,     3,     3,     3,
     3,     3,     7,     3,     3,     3,     3,     3,     7,     7,
     7,     0,     2,     3,     1,     0,     2,     3,     4,     3,
     4,     4,     4,     4,     0,     4,     0,     2,     3,     3,
     4,     4,     3,     3,     0,     0,     0,    18,     0,     4,
     0,     2,     3,     3,     1,     3,     0,     3,     0,     4,
     0,     2,     3,     3,     3,     0,     4,     0,     2,     3,
     5,     3,     3,     4,     0,     2,     3,     1,     0,     2,
     3,     4,     3,     4,     4,     0,     4,     0,     2,     3,
     3,     3,     3,     0,     6,     3,     0,     5,     3,     3,
     3,     3,     0,     3,     0,     2,     4,     4,     4,     4,
     0,     2,     3,     3,     3,     0,     2,     3,     3,     3,
     3,     0,     2,     0,     0,     9,     3,     3,     3,     0,
     2,     3,     0,     0,     9,     0,     1,     1,     1,     1,
     1,     1,     4,     3,     0,     2,     3,     1,     0,     2,
     3,     4,     4,     0,     5,     0,     4,     0,     2,     3,
     3,     3,     3,     3,     3,     3,     3,     2,     3,     0,
     3,     1,     3,     0,     3,     0,     2,     3,     3,     4,
     4,     4,     4,     5,     5,     2,     7,    11,     7,     7,
     9,    11,    13,    15,     0,     7,     0,     7,     7,     3,
     1,     1,     0,     2,     3,     3,     2,     0,     2,     3,
     3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     4,     0,
     2,     3,     3,     3,     3,     3,     4,     4,     4,     0,
     4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
     2,     3,     1,     0,     2,     3,     4,     4,     3,     4,
     0,     4,     0,     2,     3,     4,     0,     5,     5,     0,
     2,     0,     6,     3,     0,     4,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     3,     3,     3,     4,     0,
     8,     0,     0,     3,     7,     7,     3,     6,     1,     1,
     1,     1,     0,     3,     1,     2,     2,    24,     2,     0,
    14,     8,    20,    29,    38,    12,     0,     2,     3,     4,
     4,     3,     2,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     5,     0,     2,     0,
     3,     1,     3,     0,     1,     3,     1,     1,     3,     3,
     3,     6,     4,     4,     6,     9,     5,     0,     3,     5,
     5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     3,     2,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     6,     4,     4,     4,     4,     4,     4,     6,     6,     6,
     5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1
};

static const short yydefact[] = {     1,
     3,     4,    24,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,     0,   612,   611,    18,   538,    26,
   172,   135,   148,   202,    69,   255,   325,   430,     0,   459,
    20,     0,    21,    23,     0,     0,    25,   604,   603,   610,
     0,   605,   606,   607,   608,   609,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   563,    63,    27,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    22,     0,     0,   534,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   565,   566,     0,   528,   527,     0,   533,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   602,     0,    64,     0,     6,     0,   176,     8,
   173,   175,   137,     9,   150,    10,   206,    11,   203,   205,
     0,     0,     7,    70,    74,   259,    12,   256,   258,   329,
    13,   326,   328,   434,    14,   431,   433,   470,   463,    15,
   460,   462,   483,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   564,
     0,   579,   580,   578,   577,   573,   574,   575,   576,   568,
   567,   569,   570,   571,   572,   537,   539,     0,     0,    28,
    34,     0,     0,     0,     0,     0,    75,     0,     0,     0,
     0,     0,     0,     0,   485,     0,     0,     0,     0,     0,
     0,     0,     0,   497,   497,   581,   582,   583,   584,   585,
   586,   587,   588,   589,   590,     0,   592,   593,   594,   595,
   596,   597,     0,     0,     0,     0,   535,   530,   529,     0,
   531,     0,     0,     0,     0,     0,     0,    60,     0,     0,
     0,   174,   177,     0,     0,   136,   138,     0,    79,     0,
   149,   151,     0,     0,     0,     0,     0,     0,   204,   207,
    66,    41,     0,     0,    39,     0,     0,    63,     0,     0,
     0,     0,   257,   260,     0,     0,   334,   327,   330,     0,
     0,     0,     0,   432,   435,   472,     0,     0,     0,     0,
     0,   461,   464,     0,   481,   482,   479,   480,   477,     0,
   486,   487,    79,   489,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   601,   541,   540,
   610,     0,     0,     0,    31,     0,    63,     0,   183,     0,
     0,   141,     0,   155,     0,     0,     0,    81,     0,   246,
     0,     0,   215,   229,   239,     0,    40,    54,    57,    51,
    38,    49,    79,     0,    35,     0,     0,     0,     0,   266,
   285,     0,   336,     0,     0,   441,    66,     0,   473,     0,
   472,     0,     0,     0,   484,   483,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   498,     0,   591,   598,   599,
   600,     0,     0,    29,     0,    68,     0,    42,     0,     0,
     0,   183,     0,   180,   178,     0,     0,     0,   139,     0,
     0,     0,   153,    80,     0,   152,     0,   210,   208,     0,
     0,     0,     0,    67,     0,     0,    63,     0,    79,     0,
    71,    76,   263,   261,     0,     0,     0,   331,     0,     0,
   356,   436,     0,     0,     0,   439,   471,     0,   465,   473,
   466,   468,   467,     0,     0,    79,     0,     0,     0,     0,
     0,   475,   524,     0,     0,     0,     0,   524,     0,   518,
   518,   518,   503,     0,     0,     0,     0,   476,   536,   532,
    65,     0,    30,    33,    61,     0,   185,   181,   179,   143,
   140,   157,   154,     0,     0,   610,   542,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
   556,   557,   558,   559,   560,   561,     0,   117,     0,     0,
   113,     0,     0,     0,     0,     0,     0,     0,     0,    82,
    83,   111,     0,   108,   248,   214,   209,   217,   211,   231,
   212,   241,   213,    55,     0,    59,     0,    50,     0,    72,
     0,    44,    36,    43,   262,   268,   264,     0,     0,     0,
     0,   265,   286,   332,   338,   333,     0,   437,   443,   440,
   438,   474,   469,   478,     0,     0,     0,     0,     0,     0,
     0,     0,   515,   525,   512,     0,     0,   499,   502,   510,
   511,   505,   506,   509,   507,   508,   504,   514,   513,     0,
   516,    32,     0,   182,     0,     0,     0,    77,    78,   110,
     0,     0,     0,     0,     0,     0,   105,   104,   106,   125,
   123,   120,   122,   121,     0,     0,    84,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   112,   131,     0,     0,     0,
     0,     0,    58,     0,    52,    73,    63,     0,   302,   302,
   310,   291,     0,     0,    79,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   375,   377,     0,   335,
   357,     0,     0,    79,     0,     0,     0,     0,     0,     0,
   500,   501,   519,     0,     0,     0,     0,     0,     0,    79,
    79,    79,    79,     0,     0,     0,    79,   184,   186,     0,
     0,   142,   144,     0,     0,     0,   156,   158,     0,    81,
     0,     0,    81,     0,     0,   324,   107,     0,   102,   103,
   100,    99,   101,    95,    96,    97,    98,    91,    92,    87,
    90,    93,    88,    94,   124,   127,     0,   129,     0,     0,
   109,     0,     0,     0,     0,     0,   247,   249,     0,     0,
     0,     0,     0,   216,   218,     0,     0,   230,   232,     0,
     0,     0,   240,   242,     0,    53,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   267,   277,   269,   316,
   316,   316,     0,     0,     0,     0,     0,   524,     0,     0,
     0,   337,   339,     0,     0,    79,     0,     0,     0,    79,
     0,     0,   388,     0,   395,     0,   403,   410,     0,     0,
     0,     0,   366,     0,     0,   442,   444,     0,     0,     0,
     0,     0,     0,     0,   526,   517,    62,     0,     0,     0,
     0,    79,     0,    79,     0,     0,     0,     0,     0,     0,
    79,     0,     0,     0,   131,   162,     0,     0,   115,     0,
   116,     0,     0,    81,   323,     0,   126,   128,     0,     0,
     0,     0,     0,     0,     0,    48,     0,    66,     0,     0,
   225,     0,     0,     0,   235,   237,     0,     0,     0,     0,
    56,    37,     0,     0,     0,     0,     0,     0,     0,     0,
    66,     0,     0,     0,    81,     0,     0,   317,   318,   319,
   320,   321,   322,     0,   287,   303,     0,   288,     0,   289,
   311,     0,     0,     0,   296,   290,   292,     0,     0,    66,
   350,     0,     0,     0,     0,   352,   354,     0,     0,   358,
     0,     0,   359,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   380,   520,   520,   447,     0,
     0,     0,     0,   492,     0,     0,     0,   188,   189,   194,
   195,     0,   198,     0,   197,   191,   190,    63,   192,   187,
     0,   196,   146,   145,     0,     0,   159,   160,     0,     0,
   114,     0,    85,   130,     0,     0,   132,   250,     0,   252,
   253,     0,   219,   220,     0,     0,     0,   223,   224,   233,
    63,   234,   244,   243,   245,    66,    46,   281,   280,   273,
   271,   272,   270,   274,   276,   282,   279,     0,     0,     0,
     0,   304,     0,   313,     0,     0,     0,   341,   340,   348,
    63,   342,   343,   346,   347,    63,   344,   345,     0,     0,
    79,     0,     0,     0,    79,     0,    79,     0,     0,    79,
   360,   389,     0,     0,    79,     0,     0,     0,     0,   361,
   396,     0,     0,     0,     0,    79,     0,   362,   404,     0,
     0,     0,     0,     0,     0,     0,     0,   363,   411,    79,
   382,    79,   383,   381,   383,     0,   445,     0,   524,     0,
     0,     0,     0,    79,    79,     0,    79,   147,   164,   161,
     0,    89,   119,     0,     0,     0,     0,   254,   221,     0,
   222,   236,     0,    47,   283,     0,   308,   309,   307,    81,
   312,    81,   293,   294,     0,     0,     0,     0,   295,   297,
   349,     0,   353,     0,   364,   365,     0,     0,   356,     0,
     0,   356,     0,     0,     0,     0,     0,   356,     0,     0,
     0,     0,     0,     0,     0,   356,     0,     0,     0,     0,
     0,   356,   356,     0,     0,   420,     0,     0,   522,     0,
     0,     0,     0,     0,   446,     0,   490,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   118,    86,     0,     0,
   251,     0,   238,     0,     0,   278,   305,   314,     0,     0,
     0,     0,   351,   355,     0,   524,     0,   524,     0,     0,
   392,   390,   391,   393,    79,     0,   399,   397,   398,   400,
   401,    79,   407,     0,   405,   406,   408,   414,   416,     0,
     0,   412,   413,     0,   415,     0,   521,    79,     0,   524,
   384,     0,   450,   450,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   163,   165,   134,   133,     0,     0,   275,     0,     0,   298,
   299,   300,   301,   369,     0,   367,     0,   370,   394,     0,
   402,     0,   409,   418,   419,   422,   417,   379,   523,   376,
     0,   524,   387,   378,   316,   316,   496,   524,     0,     0,
     0,     0,   201,   200,   193,   199,     0,     0,     0,     0,
     0,     0,     0,   284,    81,     0,     0,     0,     0,    79,
     0,     0,   385,   386,     0,     0,     0,   455,   449,     0,
   451,   448,     0,     0,     0,     0,     0,   166,   167,   168,
   169,   170,   171,     0,     0,     0,   371,   356,     0,     0,
     0,     0,     0,    79,     0,     0,     0,   421,   423,     0,
     0,     0,     0,   452,   491,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   457,   458,   454,     0,    81,     0,     0,     0,
     0,   226,   306,   315,   368,   372,   356,     0,   424,   427,
   428,   425,   426,   429,   456,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
   356,   453,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   227,   374,     0,   493,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    66,     0,     0,     0,
     0,   488,     0,     0,     0,     0,     0,   228,     0,     0,
     0,     0,     0,     0,   494,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   495,     0,     0,     0
};

static const short yydefgoto[] = {  1536,
     1,     2,     3,    20,    21,    22,    85,   148,   230,   447,
   315,   480,   707,   316,   317,   603,   827,   927,   401,   477,
   402,   377,   146,   286,   397,   287,    90,   164,   318,   387,
   388,   464,   465,   580,   778,  1164,   581,   665,   662,   696,
   799,   801,    87,   233,   297,   458,   656,   763,    88,   234,
   302,   460,   657,   768,  1036,  1246,  1322,    86,   151,   232,
   293,   453,   655,   759,    89,   159,   235,   310,   471,   699,
   815,  1057,  1471,  1499,   472,   700,   819,   937,  1061,   473,
   701,   824,   467,   698,   808,    91,   168,   238,   324,   486,
   708,   839,  1175,   955,  1255,   487,   613,   843,   977,  1087,
  1190,   840,   966,  1180,  1328,   842,   971,  1182,  1329,   967,
   582,    92,   172,   239,   329,   414,   490,   713,   853,   982,
  1091,   988,  1096,   617,   731,   871,   872,  1143,  1231,  1301,
   999,  1112,  1001,  1121,  1003,  1129,  1004,  1139,  1294,  1382,
  1419,    93,   176,   240,   335,   494,   732,   877,  1146,  1355,
  1391,  1447,  1423,    95,   181,   242,   343,    23,   241,   419,
   498,    47,   184,   350,   244,   254,  1306,   360,   436,   644,
  1144,  1230,   633,   123,   124,    24,    84,   583,   634,    83,
    28
};

static const short yypact[] = {-32768,
-32768,    36,  2441,  -134,   189,  -153,  -137,   -45,   -40,    75,
    79,   101,   106,   111,   142,    21,   205,   201,   321,-32768,
-32768,   104,-32768,-32768,  1174,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,     9,-32768,
-32768,   374,-32768,-32768,   -31,   199,-32768,-32768,-32768,-32768,
   398,-32768,-32768,-32768,-32768,-32768,   216,   238,   242,   281,
   293,   296,   315,   328,   340,   349,   353,   355,   366,   369,
   371,   382,   388,   403,   408,   452,   496,  1825,  1825,  1825,
  1825,   402,-32768,   187,   249,    22,   228,   267,    46,    23,
    55,   118,   121,   449,   128,-32768,   467,   467,-32768,  1825,
  1825,  1825,  1825,  1825,  1825,  1825,  1825,  1825,  1825,  1825,
  1825,  1825,  1825,  1825,  1825,  1825,  1825,  1825,  1825,   514,
   290,   290,  -158,-32768,  2230,  2347,-32768,  1825,  1825,  1825,
  1825,  1825,  1825,  1825,  1825,  1825,  1825,  1825,  1825,  1825,
  1825,  1825,-32768,   483,-32768,   553,-32768,   162,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -131,   500,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   506,  1195,  1195,  3325,  3352,  3379,  3406,  3433,
  3460,  3487,  3514,  3541,  3568,  2406,  3595,  3622,  3649,  3676,
  3703,  3730,  2440,  2462,  2484,   430,   678,  1825,  1284,-32768,
  2253,  1246,  1246,  1594,  1594,   638,   638,   638,   638,   491,
   491,   290,   290,   290,   290,-32768,   517,   105,   508,-32768,
-32768,   272,    76,   236,   123,    15,-32768,   410,   204,   657,
   524,   579,   125,   372,-32768,   125,   125,   116,   543,   545,
   563,   570,   572,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1825,-32768,-32768,-32768,-32768,
-32768,-32768,  1825,  1825,  1825,   707,-32768,-32768,  2230,  1825,
  4550,  1825,  1497,   338,  1531,   562,   597,-32768,    41,   725,
   768,-32768,-32768,   576,   771,-32768,-32768,   581,    87,   775,
-32768,-32768,   584,   778,   780,   589,   591,   592,-32768,-32768,
   200,-32768,    20,   618,-32768,   594,   593,   323,   791,   792,
   600,   602,-32768,-32768,   796,   605,-32768,-32768,-32768,   800,
   622,   816,   818,-32768,-32768,-32768,   825,   634,   833,   189,
   838,-32768,-32768,   644,-32768,-32768,-32768,-32768,-32768,   839,
   692,-32768,    87,-32768,   650,  1825,   651,   652,   653,   336,
   350,  3757,  3784,  3811,  3838,   662,  3865,  4550,-32768,  4550,
   664,   845,  1825,  4000,-32768,   129,   363,   667,-32768,   859,
    12,-32768,   860,-32768,   668,   698,   892,-32768,   893,-32768,
   894,    63,-32768,-32768,-32768,   709,-32768,   905,   716,-32768,
-32768,-32768,    87,   746,-32768,   914,   917,   918,    64,-32768,
-32768,    66,-32768,   733,    67,-32768,   738,   936,   750,   943,
-32768,   945,   952,   955,-32768,   506,   953,   798,  1825,  2506,
  1825,  1825,  1825,   991,  1001,-32768,   994,-32768,-32768,-32768,
-32768,  1000,  1825,-32768,  4025,-32768,   129,-32768,  1002,  1004,
  1014,-32768,   377,-32768,-32768,   824,  1016,   396,-32768,   412,
  1825,  1021,-32768,-32768,   951,-32768,   414,-32768,-32768,  1020,
   425,   428,   432,-32768,    14,  1565,  -101,  1022,    87,    19,
-32768,-32768,-32768,-32768,  1023,   443,   368,-32768,  1026,   445,
-32768,-32768,  1028,   485,  1032,-32768,-32768,   104,-32768,   822,
-32768,-32768,-32768,   841,   848,    87,  2528,  1825,  2550,  2572,
  2594,-32768,  1599,  1043,    90,  1825,  1825,  1599,  1825,  1044,
-32768,-32768,-32768,  1825,  1825,  1045,  1633,-32768,-32768,  4550,
-32768,  1050,-32768,-32768,   854,   495,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  3892,   858,   277,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   863,-32768,   864,   865,
-32768,  1061,   951,   951,   951,  1064,    34,  1072,   951,  4572,
   882,   880,   880,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1825,-32768,  4050,-32768,   151,-32768,
  1074,-32768,-32768,-32768,-32768,-32768,-32768,   884,   889,   891,
   903,-32768,-32768,-32768,-32768,-32768,   324,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1825,   883,  1825,  2616,  1825,  1825,
  1825,  1825,-32768,  4550,-32768,   189,   189,-32768,  4550,  4550,
-32768,  4550,-32768,  1084,  1084,  1084,  4550,  4550,-32768,  1825,
  4550,-32768,  1825,-32768,   758,   -19,    97,-32768,-32768,-32768,
   906,   907,   906,   951,   908,   921,   911,   911,   911,-32768,
-32768,-32768,-32768,-32768,    16,  2279,-32768,   951,   951,   951,
   951,   951,   951,   951,   951,   951,   951,   951,   951,   951,
   951,   951,   951,  1108,   857,-32768,   920,   299,   112,   -29,
   271,  3919,-32768,   477,-32768,-32768,   503,   415,-32768,-32768,
-32768,-32768,   887,    13,   130,   923,   924,   930,   931,   935,
   312,   335,   939,   944,   941,  1130,-32768,-32768,  1137,-32768,
-32768,   108,  2638,    87,  2660,  1825,  2682,  2704,  2726,  -100,
-32768,-32768,-32768,   -55,  4075,   125,   125,   125,   125,   190,
   191,    87,    87,   972,  1145,  1148,   192,-32768,-32768,   117,
  1166,-32768,-32768,   975,  1169,  1170,-32768,-32768,   980,-32768,
   981,  2378,-32768,   984,   986,-32768,-32768,   951,  4590,  4590,
  1559,  1559,  1559,  1035,  1035,  1035,  1035,   556,   556,   184,
   184,   184,   911,   911,-32768,-32768,  1011,  4572,   513,   643,
-32768,  1212,   269,   269,  1213,  1214,-32768,-32768,  1215,  1224,
  1229,   125,   125,-32768,-32768,  1230,    45,-32768,-32768,  1231,
  1232,  1233,-32768,-32768,  1262,-32768,  1075,   141,  1272,  1279,
   319,  1280,  1285,  1318,  1319,   125,-32768,-32768,-32768,   332,
   538,   446,    72,  1320,  1321,    53,   189,  1599,   189,    54,
  1323,-32768,-32768,  1316,  1324,    87,  1317,  1326,  1327,    87,
  1328,  1345,-32768,  1825,-32768,  1825,-32768,-32768,   125,  1344,
  1152,  1153,-32768,  1161,  1355,-32768,-32768,  1825,  1162,  1825,
  4100,  1825,  1825,  1825,-32768,-32768,-32768,  1356,  1357,  1358,
  1359,    87,  1360,    87,  1362,  1363,  1364,  1370,  1367,  1368,
    87,  1369,  1371,  1372,   920,-32768,  1373,  1374,-32768,  1180,
-32768,   951,  1182,-32768,-32768,  1091,-32768,-32768,   951,  1185,
  1186,   195,  1382,  1312,  1391,-32768,  1392,   738,  1393,   135,
  1207,  1399,  1400,  1401,-32768,-32768,  1402,  1403,  1405,  1406,
-32768,-32768,  1409,    20,  1410,  1411,  1412,  1413,  1414,  1416,
   738,  1425,  1431,  1432,-32768,  1435,  1438,-32768,-32768,-32768,
-32768,-32768,-32768,   125,-32768,-32768,  1244,-32768,   125,-32768,
-32768,  1245,  1441,  1442,-32768,-32768,-32768,  1444,  1447,   738,
-32768,  1448,  1449,  1450,  1451,-32768,-32768,  1453,  1454,-32768,
  1247,  1248,-32768,  1260,  1261,  1264,  1266,  1267,  1216,  2748,
  1029,  2770,   358,  1856,  1268,-32768,    58,    58,-32768,  1464,
  4125,  1275,  4150,-32768,  4175,  4200,  4225,-32768,-32768,-32768,
-32768,  1277,-32768,  1278,-32768,-32768,-32768,  1281,-32768,-32768,
  1283,-32768,-32768,-32768,  1467,   529,-32768,-32768,   125,  3304,
-32768,  1287,-32768,  4572,  1476,   125,-32768,-32768,  1477,-32768,
-32768,  1479,-32768,-32768,  1483,  1407,  1485,-32768,-32768,-32768,
   218,-32768,-32768,-32768,-32768,   738,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1296,  1491,  1498,
  1500,-32768,  1530,-32768,  1532,  1533,   247,-32768,-32768,-32768,
   223,-32768,-32768,-32768,-32768,   248,-32768,-32768,  1534,  1535,
    87,  1566,  1340,  1825,    87,  1375,    87,  1825,  1825,    87,
-32768,-32768,  1825,  1376,    87,  1825,  1825,  1825,  1825,-32768,
-32768,  1825,  1825,  1377,  1825,    87,  1825,-32768,-32768,  1825,
  1571,  1443,  1445,  1825,  1825,  1446,  1825,-32768,-32768,    87,
-32768,    87,-32768,-32768,-32768,    43,-32768,  1472,  1599,  1473,
  1474,  1475,  1478,    87,    87,  1602,    87,-32768,-32768,-32768,
  1408,-32768,-32768,   951,  1439,  1480,  1600,-32768,-32768,  1603,
-32768,-32768,  1605,-32768,  1489,  1632,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   906,   906,   906,   125,-32768,-32768,
-32768,  1637,-32768,  1669,-32768,-32768,  1492,  1488,-32768,  2792,
  1493,-32768,  1668,   728,   751,  1670,  2814,-32768,  1671,   938,
  1861,  1884,  1906,  2836,  1928,-32768,  1950,  1672,  1974,  1997,
  1690,-32768,-32768,  2020,  2046,-32768,  2069,  1502,-32768,   254,
   532,   537,  1501,  1506,-32768,  1825,-32768,  1825,  1825,  1825,
  1825,  1504,  1505,  1508,  1507,   550,-32768,  4572,  1510,  1513,
-32768,  1706,-32768,  1710,  1716,-32768,-32768,-32768,  1717,  1721,
  1723,  1724,-32768,-32768,  1726,  1599,   582,  1599,  1730,   897,
-32768,-32768,-32768,-32768,    87,  1567,-32768,-32768,-32768,-32768,
-32768,    87,-32768,  1601,-32768,-32768,-32768,-32768,-32768,  1691,
  1750,-32768,-32768,   561,-32768,  1732,-32768,    87,  1745,  1228,
-32768,  1749,-32768,-32768,  4250,  1555,  2858,  2880,  2902,  2924,
  1751,  1753,  1754,  1755,  1758,  1825,  1825,  1825,  1825,  1825,
-32768,-32768,-32768,-32768,  1679,  1568,-32768,  1569,  1572,-32768,
-32768,-32768,-32768,-32768,  1578,  1649,  1584,-32768,-32768,  1589,
-32768,  1590,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   189,  1599,-32768,-32768,   973,  1294,-32768,  1599,  1825,  1825,
  1825,  1825,-32768,-32768,-32768,-32768,  1763,  2091,  2113,  2135,
  2159,  2182,  1768,-32768,-32768,   906,  1773,  1596,  1825,    87,
  1825,   655,-32768,-32768,  1790,  1791,  1793,-32768,-32768,  1609,
-32768,-32768,  1604,  2946,  2968,  2990,  3012,-32768,-32768,-32768,
-32768,-32768,-32768,  1607,  1598,  1612,-32768,-32768,  3946,  1613,
  3034,  1796,  1825,    87,  1810,   125,  1812,-32768,-32768,  1811,
  1813,  1816,   125,-32768,-32768,  1825,  1825,  1825,  1825,  1817,
  1826,  1865,  1783,  1866,  1676,  1825,  1869,  2205,  1870,  1872,
  1873,  1875,-32768,-32768,-32768,  1876,-32768,  4275,  4300,  4325,
  4350,-32768,-32768,-32768,-32768,-32768,-32768,  3973,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1685,  1689,  1693,  1697,  1699,
  1847,  1827,  1703,  1882,  1825,  1707,  1825,  1825,   125,-32768,
-32768,-32768,  3056,  1825,  3078,  3100,  1899,  1859,  1825,  4375,
  1825,  1825,-32768,-32768,  3122,-32768,  3144,  3166,  1804,  1825,
  1825,  1825,  1904,  4400,  4425,  4450,   738,  1711,  1713,  1718,
  1908,-32768,  1722,  1825,  1720,  1825,  3188,-32768,  3210,  1825,
  1825,  3232,  4475,  1825,-32768,  4500,  1725,  1727,  1825,  3254,
  1825,  3276,  1825,  4525,-32768,  1923,  1929,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -184,-32768,-32768,  -240,   -49,-32768,-32768,  1100,  -471,-32768,
  -561,-32768,  -305,  -380,  -412,-32768,-32768,-32768,-32768,  -338,
-32768,  -759,-32768,  -455,-32768,-32768,-32768,-32768,-32768,  1347,
-32768,  1027,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1481,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1221,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -826,
  -536,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1071,-32768,-32768,-32768,   926,   793,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   632,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1516,
-32768,  1452,  1841,-32768,  1515,  1760,-32768,  1696,-32768,   243,
-32768,-32768,  -516,  -601,  1748,   913,-32768,-32768,   -25,  -398,
  -336
};


#define	YYLAST		4785


static const short yytable[] = {    82,
   457,   641,   344,   423,   495,   351,   352,   354,   604,   660,
   910,   470,   407,   913,   428,   972,   594,   854,   455,   311,
   775,   398,   398,   399,   399,    39,     4,   161,   485,   760,
   740,   489,     6,     6,   493,    -2,   671,   705,   672,    25,
   207,   761,    25,   208,   816,   378,    29,  1233,   744,   935,
     4,   817,   121,   122,   125,   126,     6,   980,   986,     4,
    30,   602,  1141,   312,   478,     6,   584,   162,   236,   469,
   484,   451,   488,   492,   186,   187,   188,   189,   190,   191,
   192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
   202,   203,   204,   205,    26,    27,   385,   598,   885,   372,
   145,   208,   211,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,   222,   223,   224,   225,   667,   668,   669,
   311,   311,     4,   676,   769,     4,   771,  1267,     6,   311,
  1270,     6,     4,   448,  1234,   973,  1276,   294,     6,   385,
   601,  1054,   826,   886,  1284,   926,   208,   673,    94,   295,
  1290,  1291,    31,   398,  1042,   399,   974,    32,   764,   903,
   765,   766,   874,   386,   312,   312,   228,   626,    97,   818,
   303,   599,     6,   312,   584,   584,   584,   312,   638,   762,
   584,   875,   279,   281,   943,   809,   304,   810,   811,   812,
   813,   449,   674,    26,    27,  1078,   305,   306,   922,   385,
   385,   385,   307,   229,   308,    42,   386,    43,   772,   456,
   313,    41,   855,   595,   776,   314,   400,   400,    40,   149,
   150,   163,   779,   780,   781,   782,   783,   784,   785,   786,
   787,   788,   789,   790,   791,   792,   793,   794,   379,   798,
   362,  1235,   936,   157,   158,    45,    46,   363,   364,   365,
   981,   987,   166,   167,   367,  1142,   368,   370,    82,   374,
   456,   456,   532,   456,   456,   584,   386,   386,   386,   975,
   976,   636,    33,   448,   296,   637,    34,   325,   284,   584,
   584,   584,   584,   584,   584,   584,   584,   584,   584,   584,
   584,   584,   584,   584,   584,   767,   584,   298,    35,   741,
   742,   299,   285,    36,  1185,  1186,   876,   326,    37,   300,
   814,   313,   313,   353,   327,   170,   171,   312,   174,   175,
   313,   309,   916,   947,   313,   179,   180,    44,   714,   856,
   430,   984,   456,   289,   820,   290,  1433,  1187,   704,    38,
    48,    49,   371,    51,   821,   291,   822,   445,  1188,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,   802,   692,   857,   803,   693,   584,
    96,   804,   805,   806,    77,  1472,   312,   144,   145,   892,
   894,   901,   956,  1047,   957,   879,   208,   396,    98,   -42,
   948,   828,   328,   507,    99,   509,   510,   511,   127,  1488,
   949,   893,   895,   896,   897,   100,  1172,   530,   902,   145,
  1257,  1191,  1258,  1123,   145,   153,   154,   958,   959,   960,
   961,   962,   963,   964,   301,   544,   715,   101,   716,   717,
   718,   102,   719,   720,   721,  1189,  1193,   147,   722,   145,
   597,   723,  1297,   178,   724,  1298,  1040,   725,   726,   608,
   609,   610,   611,  1044,   155,   156,   727,   728,  1124,   823,
   292,   183,  1067,   319,   578,   829,  -562,   830,   831,   398,
   103,   399,   628,   320,   142,   143,  1125,  1126,   832,   226,
   639,   640,   104,   642,   729,   105,   321,   807,   647,   648,
   322,   651,   833,   834,   835,   888,   889,   890,   891,   863,
   983,   864,   985,   584,   106,  1052,   836,   992,   206,   904,
   584,   996,   730,   406,   145,    78,  1127,   107,  1390,  1390,
   965,    79,   865,   313,   866,    80,   434,   435,  1074,   108,
    81,   958,   959,   960,   961,   962,   963,   969,   109,  1055,
   437,   435,   110,  1022,   111,  1024,  1128,   227,   345,   346,
   347,   348,  1031,   450,   145,   112,   612,  1090,   113,   702,
   114,   932,   933,   349,   537,   538,   128,   129,   130,   131,
   132,   115,   133,   134,   135,   136,   714,   116,   137,   138,
   139,   140,   141,   540,   541,   954,   142,   143,   956,   733,
   957,   735,   117,   737,   738,   739,   125,   118,   323,   542,
   543,   585,   586,   837,   838,  1405,  1315,  1316,  1317,  1318,
  1319,  1320,   588,   589,   125,   590,   591,   745,  1005,   592,
   593,   276,  1237,   958,   959,   960,   961,   962,   963,   964,
   606,   607,   615,   616,   970,    48,    49,    50,  1259,  1260,
  1261,   119,   337,  1174,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,   139,
   140,   141,   619,   620,   277,   142,   143,  1466,   920,   338,
   283,   921,   537,   654,   715,   120,   716,   717,   718,   237,
   719,   720,   721,   -45,   145,   243,   722,   288,  1248,   723,
   881,   366,   724,   918,   919,   725,   726,   339,  1412,   340,
  1413,   336,  1156,  1081,   727,   728,  1159,  1160,  1083,   380,
   330,  1414,  1299,  1300,  1272,   375,   968,  1302,  1300,   341,
   355,  1415,   356,   331,   689,   690,   691,   692,  1321,  1335,
   693,  1337,   729,   924,   925,  1173,  1416,  1273,  1346,  1347,
   357,   332,  1197,   645,   646,   584,  1201,   358,  1203,   359,
   376,  1206,   381,   382,   125,   383,  1209,   342,   384,   389,
  1336,   390,   391,  1353,   392,  1192,   393,  1218,   394,   395,
  1194,   403,   405,   333,   404,   408,   409,   410,  1161,   411,
   412,  1228,   413,  1229,   415,  1166,   746,   747,   748,   749,
   750,   751,   752,   753,   754,  1242,  1243,   755,  1245,   416,
   417,   756,   418,  1417,   137,   138,   139,   140,   141,   420,
    78,   421,   142,   143,   757,  1384,    79,   422,  1000,  1406,
  1002,  1393,   424,   426,   425,    81,   427,   429,   431,   432,
   433,   444,  1011,  1418,  1013,   334,  1015,  1016,  1017,    48,
    49,   546,   442,   -42,   452,   454,   459,   461,    52,    53,
    54,    55,    56,   547,   548,   549,   550,   551,   552,   553,
   554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
   564,   565,   566,   567,   568,   569,   570,   462,   463,   466,
   468,   714,   128,   129,   130,   131,   132,   474,   133,   134,
   135,   136,   475,   476,   137,   138,   139,   140,   141,   479,
   481,   482,   142,   143,   483,   128,   129,   130,   131,   132,
   491,   133,   134,   135,   136,   396,  1340,   137,   138,   139,
   140,   141,   496,  1342,  1278,   142,   143,  1262,   497,   499,
   844,   501,   571,    48,    49,   546,   758,   505,   502,  1349,
   845,   503,    52,    53,    54,    55,    56,   547,   548,   549,
   550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
   560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
   570,   846,   847,   848,   849,   850,   851,   512,   152,   506,
   528,   160,   165,   169,   173,   177,   529,   182,   533,   715,
   534,   716,   717,   718,  1383,   719,   720,   721,   535,   373,
   623,   722,   539,  1430,   723,   545,   587,   724,   600,   605,
   725,   726,   614,  1385,   618,  1386,  1387,   572,   621,   727,
   728,  1410,   624,   573,   574,   625,   571,   635,   643,   649,
   575,   653,   576,   577,   578,   513,   652,   796,   659,   579,
   231,   797,   661,   663,   664,   666,   670,   729,   958,   959,
   960,   961,   962,   963,  1388,  1439,   675,   694,  1200,   695,
   706,   709,  1204,  1205,   734,   852,   710,  1207,   711,   743,
  1210,  1211,  1212,  1213,  1511,  1339,  1214,  1215,  1043,  1217,
   712,  1219,   774,   578,  1220,   693,   770,   773,  1224,  1225,
   795,  1227,   128,   129,   130,   131,   132,   800,   133,   134,
   135,   136,   858,   859,   137,   138,   139,   140,   141,   860,
   861,   572,   142,   143,   862,   870,   867,   573,   574,  1114,
   869,   868,  1115,   873,   575,   514,   576,   577,   578,   899,
  1116,  1117,   900,   579,  1118,  1119,   515,   516,   517,   518,
   519,   520,   521,   522,   523,   524,   525,   526,   527,   898,
   905,  1389,   906,   907,   908,  1441,    48,    49,    50,    51,
   909,   911,  1446,   914,   915,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
  1305,   917,  1307,  1308,  1309,  1310,   923,   926,   928,   929,
    77,   687,   688,   689,   690,   691,   692,  1120,   930,   693,
    48,    49,    50,   931,   934,   938,   939,   940,  1487,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,   941,   677,   678,   679,   680,   681,
   682,   683,   684,   685,   686,   942,   945,   687,   688,   689,
   690,   691,   692,   946,   950,   693,    48,    49,    50,   951,
  1368,  1369,  1370,  1371,  1372,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
   952,   953,   990,   993,   978,   979,  1106,   989,   991,  1107,
   994,   995,   997,  1394,  1395,  1396,  1397,  1108,  1109,  1110,
   245,   246,   247,   248,   249,   250,   251,   252,   253,   998,
  1006,  1007,  1008,  1409,  1385,  1411,  1386,  1387,  1009,  1010,
  1012,    78,  1018,  1019,  1020,  1021,  1023,    79,  1025,  1026,
  1027,    80,  1028,  1029,  1030,  1032,    81,  1033,  1034,  1037,
  1038,  1039,  1041,  1351,  1045,  1046,  1352,  1438,  1048,   958,
   959,   960,   961,   962,   963,  1388,  1049,  1050,  1051,  1053,
  1448,  1449,  1450,  1451,  1056,  1058,  1059,  1060,  1062,  1063,
  1458,  1064,  1065,  1066,  1111,    78,  1068,  1069,  1070,  1071,
  1072,    79,  1073,   131,   132,   632,   133,   134,   135,   136,
    81,  1075,   137,   138,   139,   140,   141,  1076,  1077,  1079,
   142,   143,  1080,  1082,  1084,  1085,  1086,  1099,  1100,  1483,
  1088,  1485,  1486,  1089,  1092,  1093,  1094,  1095,  1490,  1097,
  1098,  1101,  1102,  1495,  1103,  1497,  1498,  1104,  1105,  1140,
  1147,    78,  1149,  1158,  1504,  1505,  1506,    79,  1154,  1155,
  1165,  1167,   145,   280,  1157,  1168,    81,  1163,  1517,  1169,
  1519,  1171,  1392,  1170,  1522,  1523,  1176,  1177,  1526,    48,
    49,    50,   369,  1530,  1178,  1532,  1179,  1534,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    48,    49,    50,  1181,  1199,  1183,  1184,
  1195,  1196,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,    48,    49,    50,
  1198,   714,  1202,  1208,  1216,  1221,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    48,    49,    50,  1244,   714,  1251,  1252,  1247,  1253,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,    48,    49,    50,  1256,  1249,
  1222,  1263,  1223,  1226,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,  1236,
  1238,  1239,  1240,  1264,  1271,  1241,  1274,  1277,  1286,   715,
  1250,   716,   717,   718,    78,   719,   720,   721,  1254,  1266,
    79,   722,  1265,  1269,   723,   714,  1289,   724,  1303,    81,
   725,   726,  1296,  1304,  1311,  1312,  1313,  1314,  1323,   727,
   728,  1324,  1325,   715,  1326,   716,   717,   718,    78,   719,
   720,   721,  1327,  1330,    79,   722,   373,  1331,   723,  1332,
  1333,   724,  1334,    81,   725,   726,  1338,   729,  1348,   683,
   684,   685,   686,   727,   728,   687,   688,   689,   690,   691,
   692,  1350,    78,   693,   714,  1354,  1358,  1363,    79,  1364,
  1365,  1366,  1367,   596,  1373,  1341,  1378,    81,  1374,  1398,
  1375,   729,  1404,  1376,   133,   134,   135,   136,  1377,  1407,
   137,   138,   139,   140,   141,  1379,    78,   714,   142,   143,
  1380,  1381,    79,  1408,  1420,  1421,   632,  1422,  1431,  1343,
  1437,    81,  1425,   715,   456,   716,   717,   718,  1424,   719,
   720,   721,  1432,  1435,  1440,   722,  1442,  1443,   723,  1444,
    78,   724,  1445,  1452,   725,   726,    79,    48,    49,    50,
   650,   714,  1453,   727,   728,    81,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,   729,   715,   714,   716,   717,   718,  1279,   719,   720,
   721,  1454,  1456,  1457,   722,  1459,  1461,   723,  1462,  1463,
   724,  1464,  1465,   725,   726,  1474,  1475,  1479,  1482,  1344,
  1280,  1476,   727,   728,  1477,   715,  1478,   716,   717,   718,
  1481,   719,   720,   721,  1484,  1493,  1503,   722,  1507,  1512,
   723,  1513,  1281,   724,  1515,  1514,   725,   726,  1518,  1516,
   729,  1130,  1537,  1528,  1529,   727,   728,   944,  1538,   697,
   841,  1035,   536,  1145,  1283,  1356,   500,  1232,   185,   715,
   504,   716,   717,   718,   255,   719,   720,   721,  1345,   622,
   361,   722,     0,   729,   723,   278,  1285,   724,     0,  1131,
   725,   726,     0,     0,     0,     0,  1132,  1133,     0,   727,
   728,   715,     0,   716,   717,   718,     0,   719,   720,   721,
  1287,  1455,     0,   722,  1134,     0,   723,  1135,  1136,   724,
     0,     0,   725,   726,     0,     0,     0,   729,     0,     0,
     0,   727,   728,  1288,     0,     0,     0,     0,     0,     0,
     0,     0,    78,     0,     0,     0,     0,     0,    79,     0,
     0,     0,     0,     0,  1137,  1480,  1292,    81,     0,   729,
     0,     0,     0,     0,     0,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,  1293,     0,  1138,   142,   143,  1494,   128,   129,
   130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,  1295,     0,     0,   142,   143,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,  1399,     0,     0,
   142,   143,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,  1400,
     0,     0,   142,   143,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,  1401,     0,     0,   142,   143,     0,     0,   128,   129,
   130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,  1402,     0,     0,   142,   143,
     0,   128,   129,   130,   131,   132,     0,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,  1403,     0,
     0,   142,   143,     0,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,  1460,     0,     0,   142,   143,     0,     0,     0,     0,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,   209,     0,     0,
   142,   143,     0,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
   282,     0,     0,   142,   143,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,     0,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     4,     0,   142,   143,     5,
     0,     6,     0,   677,   678,   679,   680,   681,   682,   683,
   684,   685,   686,     0,     0,   687,   688,   689,   690,   691,
   692,     0,     0,   693,     0,     0,     0,     0,     0,     0,
     0,     7,   777,     0,     0,     0,     0,     0,     8,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     9,     0,    10,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    11,     0,     0,     0,    12,     0,     0,
     0,   128,   129,   130,   131,   132,    13,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,    14,     0,     0,     0,     0,     0,     0,
   210,     0,   677,   678,   679,   680,   681,   682,   683,   684,
   685,   686,     0,     0,   687,   688,   689,   690,   691,   692,
     0,     0,   693,     0,     0,     0,    15,     0,    16,   912,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,     0,   266,     0,     0,
    17,     0,    18,    19,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,   273,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,   274,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,   275,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,   508,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,   627,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,   629,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,   630,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,   631,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,   736,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,   878,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,   880,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,   882,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,   883,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,   884,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1113,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1122,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1268,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1275,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1282,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1359,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1360,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1361,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1362,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1426,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1427,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1428,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1429,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1436,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1489,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1491,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1492,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1500,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1501,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1502,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1520,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1521,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1524,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1531,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,     0,  1533,   677,   678,
   679,   680,   681,   682,   683,   684,   685,   686,     0,     0,
   687,   688,   689,   690,   691,   692,     0,     0,   693,   128,
   129,   130,   131,   132,  1162,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,     0,     0,   256,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,     0,   257,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,   258,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,   259,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,     0,     0,   260,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,     0,     0,
   261,   128,   129,   130,   131,   132,     0,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,     0,     0,     0,     0,   262,   128,   129,
   130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
     0,     0,     0,     0,   263,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,     0,
     0,   264,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,     0,     0,   265,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,     0,     0,   267,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,     0,   268,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,   269,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,   270,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,     0,     0,   271,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,     0,     0,
   272,   128,   129,   130,   131,   132,     0,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,     0,     0,     0,     0,   438,   128,   129,
   130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
     0,     0,     0,     0,   439,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,     0,
     0,   440,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,     0,     0,   441,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,     0,     0,   443,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,     0,   658,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,   825,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,  1434,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,     0,     0,  1473,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,   446,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,   531,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,   703,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,   887,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,  1014,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,  1148,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,  1150,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,  1151,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,  1152,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,  1153,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,  1357,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,  1467,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,  1468,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,  1469,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,  1470,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,  1496,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,  1508,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,  1509,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,  1510,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,  1525,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,  1527,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,  1535,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   677,   678,   679,   680,
   681,   682,   683,   684,   685,   686,     0,     0,   687,   688,
   689,   690,   691,   692,     0,     0,   693,   680,   681,   682,
   683,   684,   685,   686,     0,     0,   687,   688,   689,   690,
   691,   692,     0,     0,   693
};

static const short yycheck[] = {    25,
   381,   518,   243,   340,   417,   246,   247,   248,   480,   546,
   770,   392,   318,   773,   353,   842,     3,     5,     7,     5,
     5,     3,     3,     5,     5,     5,     5,     5,   409,    49,
   632,   412,    11,    11,   415,     0,     3,   599,     5,   174,
   199,    61,   174,   202,    74,     5,   200,     5,   650,     5,
     5,    81,    78,    79,    80,    81,    11,     5,     5,     5,
   198,    43,     5,    49,   403,    11,   465,    45,   200,     7,
     7,   377,     7,     7,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,     5,     6,    10,   199,   199,   284,
   202,   202,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,   141,   142,   573,   574,   575,
     5,     5,     5,   579,   661,     5,   663,  1199,    11,     5,
  1202,    11,     5,     5,    92,    64,  1208,    62,    11,    10,
   479,     7,   704,   199,  1216,     5,   202,   114,   140,    74,
  1222,  1223,   198,     3,   914,     5,    85,   198,    62,    43,
    64,    65,    55,    77,    49,    49,     5,   506,   200,   199,
    48,   477,    11,    49,   573,   574,   575,    49,   515,   199,
   579,    74,   208,   209,    44,    74,    64,    76,    77,    78,
    79,   376,   159,     5,     6,   955,    74,    75,   800,    10,
    10,    10,    80,    42,    82,     5,    77,     7,   664,   198,
   196,     7,   200,   200,   199,   201,   198,   198,   198,   198,
   199,   199,   678,   679,   680,   681,   682,   683,   684,   685,
   686,   687,   688,   689,   690,   691,   692,   693,   198,   695,
   266,   199,   198,   198,   199,   142,   143,   273,   274,   275,
   198,   198,   198,   199,   280,   198,   282,   283,   284,   285,
   198,   198,   447,   198,   198,   664,    77,    77,    77,   198,
   199,   182,   198,     5,   199,   186,   198,    74,   174,   678,
   679,   680,   681,   682,   683,   684,   685,   686,   687,   688,
   689,   690,   691,   692,   693,   199,   695,    62,   198,   636,
   637,    66,   198,   198,    58,    59,   199,   104,   198,    74,
   199,   196,   196,   198,   111,   198,   199,    49,   198,   199,
   196,   199,   778,     5,   196,   198,   199,     7,     5,   200,
   356,   848,   198,    62,    64,    64,  1408,    91,   188,   198,
     3,     4,     5,     6,    74,    74,    76,   373,   102,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    76,   192,   715,    79,   195,   778,
     7,    83,    84,    85,    47,  1457,    49,   201,   202,   200,
   200,   200,    61,   199,    63,   734,   202,   198,   200,   200,
    82,   707,   199,   429,     7,   431,   432,   433,     7,  1481,
    92,   750,   751,   752,   753,   200,   199,   443,   757,   202,
  1180,   199,  1182,    66,   202,   198,   199,    96,    97,    98,
    99,   100,   101,   102,   199,   461,   113,   200,   115,   116,
   117,   200,   119,   120,   121,   199,   199,   199,   125,   202,
   476,   128,   199,     5,   131,   202,   912,   134,   135,    92,
    93,    94,    95,   919,   198,   199,   143,   144,   111,   199,
   199,     5,   944,    64,   198,    61,   200,    63,    64,     3,
   200,     5,   508,    74,   195,   196,   129,   130,    74,     7,
   516,   517,   200,   519,   171,   200,    87,   199,   524,   525,
    91,   527,    88,    89,    90,   746,   747,   748,   749,   198,
   847,   200,   849,   912,   200,   928,   102,   856,     5,   760,
   919,   860,   199,   201,   202,   188,   169,   200,  1355,  1356,
   199,   194,   198,   196,   200,   198,   201,   202,   951,   200,
   203,    96,    97,    98,    99,   100,   101,   102,   200,   930,
   201,   202,   200,   892,   200,   894,   199,     5,   187,   188,
   189,   190,   901,   201,   202,   200,   199,   980,   200,   595,
   200,   812,   813,   202,   198,   199,   175,   176,   177,   178,
   179,   200,   181,   182,   183,   184,     5,   200,   187,   188,
   189,   190,   191,   198,   199,   836,   195,   196,    61,   625,
    63,   627,   200,   629,   630,   631,   632,   200,   199,   198,
   199,   198,   199,   199,   200,  1375,    67,    68,    69,    70,
    71,    72,   198,   199,   650,   198,   199,   653,   869,   198,
   199,   202,  1149,    96,    97,    98,    99,   100,   101,   102,
   198,   199,   198,   199,   199,     3,     4,     5,  1185,  1186,
  1187,   200,    74,  1066,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,   189,
   190,   191,   198,   199,     7,   195,   196,  1447,    46,   111,
   174,    49,   198,   199,   113,   200,   115,   116,   117,   200,
   119,   120,   121,   201,   202,   200,   125,   200,  1164,   128,
   736,     5,   131,   201,   202,   134,   135,   139,    64,   141,
    66,   198,  1028,   964,   143,   144,   198,   199,   969,     5,
    74,    77,   201,   202,     7,   174,   199,   201,   202,   161,
   198,    87,   198,    87,   189,   190,   191,   192,   199,  1266,
   195,  1268,   171,   803,   804,  1061,   102,     7,   198,   199,
   198,   105,  1101,   521,   522,  1164,  1105,   198,  1107,   198,
   174,  1110,     5,   198,   800,     5,  1115,   199,   198,     5,
   199,   198,     5,  1300,     5,  1091,   198,  1126,   198,   198,
  1096,   174,   200,   137,   201,     5,     5,   198,  1039,   198,
     5,  1140,   198,  1142,     5,  1046,    49,    50,    51,    52,
    53,    54,    55,    56,    57,  1154,  1155,    60,  1157,   198,
     5,    64,     5,   169,   187,   188,   189,   190,   191,     5,
   188,   198,   195,   196,    77,  1352,   194,     5,   864,  1376,
   866,  1358,     5,     5,   201,   203,   155,   198,   198,   198,
   198,     7,   878,   199,   880,   199,   882,   883,   884,     3,
     4,     5,   201,   200,   198,     7,     7,   200,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,   200,     7,     7,
     7,     5,   175,   176,   177,   178,   179,   199,   181,   182,
   183,   184,     8,   198,   187,   188,   189,   190,   191,   174,
     7,     5,   195,   196,     7,   175,   176,   177,   178,   179,
   198,   181,   182,   183,   184,   198,  1275,   187,   188,   189,
   190,   191,     7,  1282,     7,   195,   196,  1188,   199,     7,
    64,     7,    96,     3,     4,     5,   199,     5,     7,  1298,
    74,     7,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,   105,   106,   107,   108,   109,   110,     7,    86,   202,
     7,    89,    90,    91,    92,    93,     7,    95,     7,   113,
     7,   115,   116,   117,  1351,   119,   120,   121,     5,   196,
   199,   125,     7,  1404,   128,     5,     7,   131,     7,     7,
   134,   135,     7,    61,     7,    63,    64,   181,     7,   143,
   144,  1380,   202,   187,   188,   198,    96,     5,     5,     5,
   194,   198,   196,   197,   198,    55,     7,   201,   201,   203,
   148,   205,   200,   200,   200,     5,     3,   171,    96,    97,
    98,    99,   100,   101,   102,  1414,     5,   196,  1104,   200,
     7,   198,  1108,  1109,   202,   199,   198,  1113,   198,     6,
  1116,  1117,  1118,  1119,  1507,   199,  1122,  1123,     8,  1125,
   198,  1127,   182,   198,  1130,   195,   200,   200,  1134,  1135,
     3,  1137,   175,   176,   177,   178,   179,   198,   181,   182,
   183,   184,   200,   200,   187,   188,   189,   190,   191,   200,
   200,   181,   195,   196,   200,     6,   198,   187,   188,   111,
   200,   198,   114,     7,   194,   145,   196,   197,   198,     5,
   122,   123,     5,   203,   126,   127,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   198,
     5,   199,   198,     5,     5,  1416,     3,     4,     5,     6,
   201,   201,  1423,   200,   199,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
  1236,   201,  1238,  1239,  1240,  1241,     5,     5,     5,     5,
    47,   187,   188,   189,   190,   191,   192,   199,     5,   195,
     3,     4,     5,     5,     5,     5,     5,     5,  1479,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,     3,   175,   176,   177,   178,   179,
   180,   181,   182,   183,   184,   201,     5,   187,   188,   189,
   190,   191,   192,     5,     5,   195,     3,     4,     5,     5,
  1316,  1317,  1318,  1319,  1320,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     3,     3,     7,     7,     5,     5,   111,     5,     5,   114,
     5,     5,     5,  1359,  1360,  1361,  1362,   122,   123,   124,
   146,   147,   148,   149,   150,   151,   152,   153,   154,     5,
     7,   200,   200,  1379,    61,  1381,    63,    64,   198,     5,
   199,   188,     7,     7,     7,     7,     7,   194,     7,     7,
     7,   198,     3,     7,     7,     7,   203,     7,     7,     7,
     7,   202,   201,   156,   200,   200,   159,  1413,     7,    96,
    97,    98,    99,   100,   101,   102,    85,     7,     7,     7,
  1426,  1427,  1428,  1429,   198,     7,     7,     7,     7,     7,
  1436,     7,     7,     5,   199,   188,     7,     7,     7,     7,
     7,   194,     7,   178,   179,   198,   181,   182,   183,   184,
   203,     7,   187,   188,   189,   190,   191,     7,     7,     5,
   195,   196,     5,   200,   200,     5,     5,   201,   201,  1475,
     7,  1477,  1478,     7,     7,     7,     7,     7,  1484,     7,
     7,   202,   202,  1489,   201,  1491,  1492,   202,   202,   202,
     7,   188,   198,     7,  1500,  1501,  1502,   194,   202,   202,
     5,     5,   202,   200,   202,     7,   203,   201,  1514,     7,
  1516,     7,   199,    87,  1520,  1521,   201,     7,  1524,     3,
     4,     5,     6,  1529,     7,  1531,     7,  1533,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,     3,     4,     5,     7,   198,     7,     7,
     7,     7,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,     3,     4,     5,
     5,     5,   198,   198,   198,     5,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,     3,     4,     5,     3,     5,     7,     5,   201,     5,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,     3,     4,     5,     7,   201,
   198,     5,   198,   198,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,   198,
   198,   198,   198,     5,     7,   198,     7,     7,     7,   113,
   201,   115,   116,   117,   188,   119,   120,   121,   200,   202,
   194,   125,   201,   201,   128,     5,     7,   131,   198,   203,
   134,   135,   201,   198,   201,   201,   199,   201,   199,   143,
   144,   199,     7,   113,     5,   115,   116,   117,   188,   119,
   120,   121,     7,     7,   194,   125,   196,     7,   128,     7,
     7,   131,     7,   203,   134,   135,     7,   171,     7,   181,
   182,   183,   184,   143,   144,   187,   188,   189,   190,   191,
   192,     7,   188,   195,     5,     7,   202,     7,   194,     7,
     7,     7,     5,   199,    86,   199,   118,   203,   201,     7,
   202,   171,     5,   202,   181,   182,   183,   184,   201,     7,
   187,   188,   189,   190,   191,   202,   188,     5,   195,   196,
   202,   202,   194,   198,     5,     5,   198,     5,   201,   199,
     5,   203,   199,   113,   198,   115,   116,   117,   200,   119,
   120,   121,   201,   201,     5,   125,     5,     7,   128,     7,
   188,   131,     7,     7,   134,   135,   194,     3,     4,     5,
   198,     5,     7,   143,   144,   203,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,   171,   113,     5,   115,   116,   117,     7,   119,   120,
   121,     7,     7,   198,   125,     7,     7,   128,     7,     7,
   131,     7,     7,   134,   135,   201,   198,    41,     7,   199,
     7,   199,   143,   144,   198,   113,   198,   115,   116,   117,
   198,   119,   120,   121,   198,     7,   103,   125,     5,   199,
   128,   199,     7,   131,     7,   198,   134,   135,   199,   198,
   171,    66,     0,   199,   198,   143,   144,   828,     0,   583,
   710,   905,   452,  1008,     7,  1304,   421,  1145,    98,   113,
   426,   115,   116,   117,   185,   119,   120,   121,   199,   498,
   255,   125,    -1,   171,   128,   208,     7,   131,    -1,   104,
   134,   135,    -1,    -1,    -1,    -1,   111,   112,    -1,   143,
   144,   113,    -1,   115,   116,   117,    -1,   119,   120,   121,
     7,   199,    -1,   125,   129,    -1,   128,   132,   133,   131,
    -1,    -1,   134,   135,    -1,    -1,    -1,   171,    -1,    -1,
    -1,   143,   144,     7,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,   194,    -1,
    -1,    -1,    -1,    -1,   169,   199,     7,   203,    -1,   171,
    -1,    -1,    -1,    -1,    -1,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,     7,    -1,   199,   195,   196,   199,   175,   176,
   177,   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,     7,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,     7,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,    -1,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,     7,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,     7,    -1,    -1,   195,   196,    -1,    -1,   175,   176,
   177,   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,     7,    -1,    -1,   195,   196,
    -1,   175,   176,   177,   178,   179,    -1,   181,   182,   183,
   184,    -1,    -1,   187,   188,   189,   190,   191,     7,    -1,
    -1,   195,   196,    -1,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,     7,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,     8,    -1,    -1,
   195,   196,    -1,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
     8,    -1,    -1,   195,   196,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,    -1,   175,   176,   177,   178,
   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,    -1,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,     5,    -1,   195,   196,     9,
    -1,    11,    -1,   175,   176,   177,   178,   179,   180,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    41,   204,    -1,    -1,    -1,    -1,    -1,    48,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
    -1,   175,   176,   177,   178,   179,    86,   181,   182,   183,
   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,
    -1,   195,   196,   103,    -1,    -1,    -1,    -1,    -1,    -1,
   204,    -1,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,   192,
    -1,    -1,   195,    -1,    -1,    -1,   136,    -1,   138,   202,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,
   170,    -1,   172,   173,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,    -1,   202,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,   192,    -1,    -1,   195,   175,
   176,   177,   178,   179,   201,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,   178,
   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,
    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,   201,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,
    -1,    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,
   201,   175,   176,   177,   178,   179,    -1,   181,   182,   183,
   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,
    -1,   195,   196,    -1,    -1,    -1,    -1,   201,   175,   176,
   177,   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
    -1,    -1,    -1,    -1,   201,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,
    -1,   201,   175,   176,   177,   178,   179,    -1,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,   201,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,   178,
   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,
    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,   201,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,
    -1,    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,
   201,   175,   176,   177,   178,   179,    -1,   181,   182,   183,
   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,
    -1,   195,   196,    -1,    -1,    -1,    -1,   201,   175,   176,
   177,   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
    -1,    -1,    -1,    -1,   201,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,
    -1,   201,   175,   176,   177,   178,   179,    -1,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,   201,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,   178,
   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,
    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,   201,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,
    -1,    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   180,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,   192,    -1,    -1,   195,   178,   179,   180,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,   192,    -1,    -1,   195
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
{ InteractiveExit = 1; ;
    break;}
case 21:
#line 435 "yacc.y"
{ Help(NULL); ;
    break;}
case 22:
#line 439 "yacc.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 24:
#line 443 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 25:
#line 451 "yacc.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 27:
#line 468 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 29:
#line 475 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 30:
#line 478 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 31:
#line 481 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 32:
#line 483 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 35:
#line 494 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 36:
#line 499 "yacc.y"
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
case 37:
#line 511 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 38:
#line 520 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 39:
#line 531 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 40:
#line 536 "yacc.y"
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
case 41:
#line 573 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 42:
#line 576 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 43:
#line 587 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 44:
#line 589 "yacc.y"
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
case 45:
#line 605 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 46:
#line 608 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 47:
#line 611 "yacc.y"
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
case 48:
#line 662 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 49:
#line 674 "yacc.y"
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
case 50:
#line 698 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 51:
#line 705 "yacc.y"
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
case 52:
#line 718 "yacc.y"
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
case 53:
#line 736 "yacc.y"
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
case 54:
#line 759 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 55:
#line 763 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 56:
#line 772 "yacc.y"
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
case 57:
#line 786 "yacc.y"
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
case 58:
#line 820 "yacc.y"
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
case 59:
#line 833 "yacc.y"
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
case 61:
#line 857 "yacc.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 62:
#line 867 "yacc.y"
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
case 65:
#line 889 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 66:
#line 894 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 67:
#line 895 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 68:
#line 900 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 72:
#line 919 "yacc.y"
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
case 73:
#line 939 "yacc.y"
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
case 76:
#line 990 "yacc.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 77:
#line 1010 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 78:
#line 1016 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 79:
#line 1022 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 80:
#line 1025 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 81:
#line 1033 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 82:
#line 1037 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 84:
#line 1049 "yacc.y"
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
case 85:
#line 1062 "yacc.y"
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
case 86:
#line 1076 "yacc.y"
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
case 87:
#line 1091 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 88:
#line 1097 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1103 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1109 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1115 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1121 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1127 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1133 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1139 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1145 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1151 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1157 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1163 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1169 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1175 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1181 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1187 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1194 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 106:
#line 1202 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 108:
#line 1215 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 109:
#line 1221 "yacc.y"
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
case 110:
#line 1299 "yacc.y"
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
case 111:
#line 1333 "yacc.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator =
	Quantity_TypeOperator ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 112:
#line 1343 "yacc.y"
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
case 113:
#line 1356 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 114:
#line 1358 "yacc.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof definition out of context") ;
    ;
    break;}
case 115:
#line 1369 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 116:
#line 1375 "yacc.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 117:
#line 1381 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 118:
#line 1383 "yacc.y"
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
case 119:
#line 1412 "yacc.y"
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
case 120:
#line 1436 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError) 
	vyyerror("Unknown Current Value: $%s %s", yyvsp[0].c, Get_Valid_SXP(Current_Value)) ;
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 121:
#line 1447 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 122:
#line 1453 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 123:
#line 1460 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 124:
#line 1466 "yacc.y"
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
case 125:
#line 1477 "yacc.y"
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
case 126:
#line 1492 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 127:
#line 1493 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 128:
#line 1494 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 129:
#line 1499 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 130:
#line 1500 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 131:
#line 1506 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 133:
#line 1511 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 134:
#line 1518 "yacc.y"
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
case 135:
#line 1545 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 136:
#line 1550 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 137:
#line 1557 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianPerRegion = NULL ; ;
    break;}
case 139:
#line 1566 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 140:
#line 1571 "yacc.y"
{ JacobianMethod_S.JacobianPerRegion = yyvsp[-1].l ; ;
    break;}
case 141:
#line 1578 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 142:
#line 1581 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 143:
#line 1588 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 145:
#line 1598 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 146:
#line 1601 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 147:
#line 1604 "yacc.y"
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
case 148:
#line 1635 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 149:
#line 1641 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 150:
#line 1648 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.Method = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 152:
#line 1661 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 153:
#line 1668 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 154:
#line 1671 "yacc.y"
{ IntegrationMethod_S.Method = yyvsp[-1].l ; ;
    break;}
case 155:
#line 1678 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 156:
#line 1681 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 157:
#line 1688 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 159:
#line 1700 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 160:
#line 1709 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 161:
#line 1718 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 162:
#line 1725 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 163:
#line 1728 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 164:
#line 1735 "yacc.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 166:
#line 1751 "yacc.y"
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
case 167:
#line 1804 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 168:
#line 1807 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 169:
#line 1810 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 170:
#line 1813 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 171:
#line 1816 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 172:
#line 1827 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 174:
#line 1837 "yacc.y"
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
case 176:
#line 1862 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 178:
#line 1876 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 179:
#line 1882 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 180:
#line 1889 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 181:
#line 1897 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 182:
#line 1900 "yacc.y"
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
case 183:
#line 1922 "yacc.y"
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
case 184:
#line 1937 "yacc.y"
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
case 185:
#line 1961 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 187:
#line 1975 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 188:
#line 1984 "yacc.y"
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
case 189:
#line 2008 "yacc.y"
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
case 190:
#line 2033 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 191:
#line 2038 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 192:
#line 2046 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 193:
#line 2054 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 194:
#line 2064 "yacc.y"
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
case 195:
#line 2080 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 196:
#line 2087 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 197:
#line 2093 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 198:
#line 2099 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 199:
#line 2107 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 200:
#line 2115 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 201:
#line 2123 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 202:
#line 2143 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 204:
#line 2154 "yacc.y"
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
case 206:
#line 2181 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 208:
#line 2194 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 209:
#line 2200 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 210:
#line 2207 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 211:
#line 2215 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 212:
#line 2218 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 213:
#line 2221 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 214:
#line 2224 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2231 "yacc.y"
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
case 216:
#line 2247 "yacc.y"
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
case 217:
#line 2284 "yacc.y"
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
case 219:
#line 2303 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 220:
#line 2306 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 221:
#line 2311 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 222:
#line 2316 "yacc.y"
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
case 223:
#line 2328 "yacc.y"
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
case 224:
#line 2352 "yacc.y"
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
case 226:
#line 2412 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 227:
#line 2415 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 228:
#line 2424 "yacc.y"
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
case 229:
#line 2489 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 230:
#line 2493 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 231:
#line 2500 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 233:
#line 2509 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 234:
#line 2514 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 235:
#line 2521 "yacc.y"
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
case 236:
#line 2537 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 237:
#line 2543 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 238:
#line 2546 "yacc.y"
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
case 239:
#line 2565 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 240:
#line 2569 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 241:
#line 2578 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 243:
#line 2589 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 244:
#line 2594 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 245:
#line 2603 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 246:
#line 2616 "yacc.y"
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
case 247:
#line 2631 "yacc.y"
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
case 248:
#line 2705 "yacc.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 250:
#line 2721 "yacc.y"
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
case 251:
#line 2739 "yacc.y"
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
case 252:
#line 2753 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 253:
#line 2756 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 254:
#line 2759 "yacc.y"
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
case 255:
#line 2805 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 257:
#line 2815 "yacc.y"
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
case 259:
#line 2841 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 261:
#line 2853 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 262:
#line 2859 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 263:
#line 2866 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 265:
#line 2877 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 266:
#line 2883 "yacc.y"
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
case 267:
#line 2897 "yacc.y"
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
case 268:
#line 2915 "yacc.y"
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
case 270:
#line 2936 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 271:
#line 2939 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 272:
#line 2943 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 273:
#line 2946 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 274:
#line 2955 "yacc.y"
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
case 275:
#line 2994 "yacc.y"
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
case 276:
#line 3018 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 277:
#line 3023 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 278:
#line 3029 "yacc.y"
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
case 279:
#line 3179 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 280:
#line 3184 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 281:
#line 3193 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 282:
#line 3202 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 284:
#line 3210 "yacc.y"
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
case 285:
#line 3250 "yacc.y"
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
case 286:
#line 3265 "yacc.y"
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
case 287:
#line 3293 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 288:
#line 3296 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 289:
#line 3299 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 290:
#line 3302 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 291:
#line 3309 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 293:
#line 3320 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 294:
#line 3329 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 295:
#line 3339 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 296:
#line 3353 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 298:
#line 3365 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 299:
#line 3367 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 300:
#line 3369 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 301:
#line 3371 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 302:
#line 3379 "yacc.y"
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
case 304:
#line 3401 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 305:
#line 3409 "yacc.y"
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
case 306:
#line 3471 "yacc.y"
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
case 307:
#line 3517 "yacc.y"
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
case 308:
#line 3541 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3550 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 310:
#line 3564 "yacc.y"
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
case 312:
#line 3593 "yacc.y"
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
case 313:
#line 3617 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 314:
#line 3625 "yacc.y"
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
case 315:
#line 3680 "yacc.y"
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
case 316:
#line 3697 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 317:
#line 3698 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 318:
#line 3699 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 319:
#line 3700 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 320:
#line 3701 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 321:
#line 3702 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 322:
#line 3703 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 323:
#line 3710 "yacc.y"
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
case 324:
#line 3724 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 325:
#line 3742 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 327:
#line 3752 "yacc.y"
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
case 329:
#line 3777 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 331:
#line 3789 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 332:
#line 3796 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 333:
#line 3803 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 334:
#line 3806 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 335:
#line 3808 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 336:
#line 3814 "yacc.y"
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
case 337:
#line 3829 "yacc.y"
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
case 338:
#line 3848 "yacc.y"
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
case 340:
#line 3867 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 341:
#line 3870 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 342:
#line 3878 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 343:
#line 3881 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 344:
#line 3886 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 345:
#line 3891 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 346:
#line 3896 "yacc.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 347:
#line 3906 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 348:
#line 3915 "yacc.y"
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
case 349:
#line 3952 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 350:
#line 3959 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 351:
#line 3962 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 352:
#line 3974 "yacc.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 353:
#line 3984 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 354:
#line 3990 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 355:
#line 3993 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 356:
#line 4005 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 357:
#line 4013 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 358:
#line 4024 "yacc.y"
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
case 359:
#line 4040 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 360:
#line 4047 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 361:
#line 4053 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 362:
#line 4059 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 363:
#line 4065 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 364:
#line 4073 "yacc.y"
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
case 365:
#line 4089 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 366:
#line 4096 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 367:
#line 4102 "yacc.y"
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
case 368:
#line 4113 "yacc.y"
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
case 369:
#line 4124 "yacc.y"
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
case 370:
#line 4140 "yacc.y"
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
case 371:
#line 4152 "yacc.y"
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
case 372:
#line 4174 "yacc.y"
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
case 373:
#line 4196 "yacc.y"
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
case 374:
#line 4209 "yacc.y"
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
case 375:
#line 4222 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 377:
#line 4231 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 379:
#line 4240 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 380:
#line 4250 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 381:
#line 4261 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 382:
#line 4270 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 383:
#line 4280 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 385:
#line 4290 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 386:
#line 4293 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 387:
#line 4302 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 388:
#line 4315 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 390:
#line 4331 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 391:
#line 4335 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 392:
#line 4339 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 393:
#line 4343 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 394:
#line 4348 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 395:
#line 4359 "yacc.y"
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
case 397:
#line 4376 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 398:
#line 4380 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 399:
#line 4384 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 400:
#line 4388 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 401:
#line 4392 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 402:
#line 4397 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 403:
#line 4408 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 405:
#line 4423 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 406:
#line 4427 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 407:
#line 4431 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 408:
#line 4435 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 409:
#line 4440 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 410:
#line 4451 "yacc.y"
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
case 412:
#line 4469 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 413:
#line 4473 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 414:
#line 4477 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 415:
#line 4481 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 416:
#line 4486 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 417:
#line 4496 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 418:
#line 4502 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 419:
#line 4508 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 420:
#line 4518 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 421:
#line 4521 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 422:
#line 4526 "yacc.y"
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
case 424:
#line 4544 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 425:
#line 4553 "yacc.y"
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
case 426:
#line 4582 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 427:
#line 4585 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 428:
#line 4588 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 429:
#line 4596 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 430:
#line 4611 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 432:
#line 4623 "yacc.y"
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
case 434:
#line 4646 "yacc.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 436:
#line 4660 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 437:
#line 4667 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 438:
#line 4675 "yacc.y"
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
case 439:
#line 4721 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 440:
#line 4726 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 441:
#line 4732 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 442:
#line 4735 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 443:
#line 4740 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 445:
#line 4751 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 446:
#line 4754 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 447:
#line 4760 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 448:
#line 4765 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 449:
#line 4771 "yacc.y"
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
case 450:
#line 4784 "yacc.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 452:
#line 4798 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 453:
#line 4805 "yacc.y"
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
case 454:
#line 4833 "yacc.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError) 
       vyyerror("Unknown Type of Operation: %s %s", 
		yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 455:
#line 4842 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 456:
#line 4843 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 457:
#line 4849 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 458:
#line 4858 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 459:
#line 4875 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 461:
#line 4887 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 463:
#line 4894 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 465:
#line 4906 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 466:
#line 4913 "yacc.y"
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
case 467:
#line 4925 "yacc.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[-1].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 468:
#line 4935 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 469:
#line 4940 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 470:
#line 4946 "yacc.y"
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
case 471:
#line 4963 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 472:
#line 4973 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 473:
#line 4976 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 474:
#line 4980 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 475:
#line 4991 "yacc.y"
{
      vyyerror("Plot has been superseded by Print "
	       "(Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 476:
#line 4997 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 477:
#line 5006 "yacc.y"
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
case 478:
#line 5018 "yacc.y"
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
case 479:
#line 5041 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 480:
#line 5042 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 481:
#line 5043 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 482:
#line 5044 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 483:
#line 5050 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 484:
#line 5052 "yacc.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 485:
#line 5058 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 486:
#line 5064 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 487:
#line 5071 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 488:
#line 5080 "yacc.y"
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
case 489:
#line 5094 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 490:
#line 5102 "yacc.y"
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
case 491:
#line 5115 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 492:
#line 5125 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 493:
#line 5134 "yacc.y"
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
case 494:
#line 5148 "yacc.y"
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
case 495:
#line 5167 "yacc.y"
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
case 496:
#line 5189 "yacc.y"
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
case 497:
#line 5209 "yacc.y"
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
case 499:
#line 5229 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 500:
#line 5236 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 501:
#line 5243 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 502:
#line 5250 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 503:
#line 5254 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 504:
#line 5258 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 505:
#line 5262 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 506:
#line 5266 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 507:
#line 5275 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 508:
#line 5280 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 509:
#line 5285 "yacc.y"
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
case 510:
#line 5305 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Print") ;  	
    ;
    break;}
case 511:
#line 5312 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 512:
#line 5319 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 513:
#line 5327 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 514:
#line 5335 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 515:
#line 5342 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 516:
#line 5349 "yacc.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 517:
#line 5353 "yacc.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 518:
#line 5366 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 519:
#line 5372 "yacc.y"
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
case 520:
#line 5419 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 522:
#line 5430 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 523:
#line 5433 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 524:
#line 5439 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 525:
#line 5440 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 527:
#line 5448 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 528:
#line 5451 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 529:
#line 5460 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 530:
#line 5463 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 531:
#line 5474 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 532:
#line 5480 "yacc.y"
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
case 533:
#line 5499 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 534:
#line 5505 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 535:
#line 5511 "yacc.y"
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
case 536:
#line 5523 "yacc.y"
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
case 539:
#line 5574 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 540:
#line 5580 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 541:
#line 5586 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 542:
#line 5597 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 543:
#line 5598 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 544:
#line 5599 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 545:
#line 5600 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 546:
#line 5601 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 547:
#line 5602 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 548:
#line 5603 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 549:
#line 5604 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 550:
#line 5605 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 551:
#line 5606 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 552:
#line 5607 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 553:
#line 5608 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 554:
#line 5609 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 555:
#line 5610 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 556:
#line 5611 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 557:
#line 5612 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 558:
#line 5613 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 559:
#line 5614 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 560:
#line 5615 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 561:
#line 5616 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 562:
#line 5617 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 563:
#line 5620 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 564:
#line 5621 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 565:
#line 5622 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 566:
#line 5623 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 567:
#line 5624 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 568:
#line 5625 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 569:
#line 5626 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 570:
#line 5627 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 571:
#line 5628 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 572:
#line 5629 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 573:
#line 5630 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 574:
#line 5631 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 575:
#line 5632 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 576:
#line 5633 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 577:
#line 5634 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 578:
#line 5635 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 579:
#line 5636 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 580:
#line 5637 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 581:
#line 5638 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 582:
#line 5639 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 583:
#line 5640 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 584:
#line 5641 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 585:
#line 5642 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 586:
#line 5643 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 587:
#line 5644 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 588:
#line 5645 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 589:
#line 5646 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 590:
#line 5647 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 591:
#line 5648 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 592:
#line 5649 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 593:
#line 5650 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 594:
#line 5651 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 595:
#line 5652 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 596:
#line 5653 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 597:
#line 5654 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 598:
#line 5655 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 599:
#line 5656 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 600:
#line 5657 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 601:
#line 5658 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 602:
#line 5659 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 603:
#line 5664 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 604:
#line 5665 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 605:
#line 5666 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 606:
#line 5667 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 607:
#line 5668 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 608:
#line 5669 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 609:
#line 5670 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 610:
#line 5672 "yacc.y"
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
case 611:
#line 5691 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 612:
#line 5694 "yacc.y"
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
#line 5710 "yacc.y"



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


