
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

/* $Id: yacc.tab.c,v 1.17 2000-10-19 11:27:08 dular Exp $ */

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



#define	YYFINAL		1677
#define	YYFLAG		-32768
#define	YYNTBASE	206

#define YYTRANSLATE(x) ((unsigned)(x) <= 439 ? yytranslate[x] : 390)

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
  1614,  1615,  1620,  1621,  1624,  1628,  1632,  1637,  1638,  1644,
  1650,  1651,  1654,  1655,  1662,  1666,  1667,  1672,  1676,  1680,
  1681,  1684,  1688,  1690,  1691,  1694,  1698,  1702,  1706,  1710,
  1715,  1716,  1725,  1726,  1727,  1731,  1739,  1747,  1751,  1758,
  1760,  1762,  1764,  1766,  1767,  1771,  1774,  1799,  1802,  1803,
  1818,  1827,  1848,  1878,  1917,  1919,  1922,  1925,  1950,  1953,
  1954,  1969,  1978,  1999,  2029,  2068,  2081,  2082,  2085,  2089,
  2094,  2099,  2103,  2106,  2110,  2114,  2118,  2122,  2126,  2130,
  2134,  2138,  2142,  2146,  2150,  2154,  2158,  2164,  2165,  2168,
  2169,  2173,  2175,  2179,  2180,  2182,  2186,  2188,  2190,  2194,
  2198,  2202,  2209,  2214,  2219,  2226,  2236,  2242,  2243,  2247,
  2253,  2259,  2261,  2263,  2265,  2267,  2269,  2271,  2273,  2275,
  2277,  2279,  2281,  2283,  2285,  2287,  2289,  2291,  2293,  2295,
  2297,  2299,  2301,  2303,  2307,  2310,  2313,  2317,  2321,  2325,
  2329,  2333,  2337,  2341,  2345,  2349,  2353,  2357,  2361,  2365,
  2369,  2374,  2379,  2384,  2389,  2394,  2399,  2404,  2409,  2414,
  2419,  2426,  2431,  2436,  2441,  2446,  2451,  2456,  2463,  2470,
  2477,  2483,  2486,  2488,  2490,  2492,  2494,  2496,  2498,  2500,
  2502,  2504
};

static const short yyrhs[] = {    -1,
   207,   208,     0,     0,     0,   208,   209,   210,     0,    41,
   198,   213,   199,     0,    77,   198,   233,   199,     0,    48,
   198,   264,   199,     0,    61,   198,   249,   199,     0,    63,
   198,   255,   199,     0,    73,   198,   271,   199,     0,    86,
   198,   292,   199,     0,   103,   198,   318,   199,     0,   136,
   198,   348,   199,     0,   138,   198,   360,   199,     0,   364,
     0,   384,     0,     9,   389,     0,   211,     0,   170,     7,
     0,   172,     7,     0,   172,     5,     7,     0,   173,     7,
     0,     0,   212,   368,     0,     0,     0,   213,   214,   215,
     0,     5,   174,   217,     7,     0,     5,   232,   174,   217,
     7,     0,     0,     5,   230,   174,   216,   217,     7,     0,
    42,   200,   228,   201,     7,     0,   384,     0,     0,     0,
   221,   200,   218,   222,   219,   223,   201,     0,   196,   225,
     0,   217,     0,     5,   231,     0,    49,     0,     5,     0,
   225,     0,    43,     0,     0,   229,   224,   225,     0,   229,
    44,     5,   231,     0,     5,     0,   227,     0,   198,   226,
   199,     0,     0,   226,   229,   227,     0,   226,   229,   188,
   227,     0,     3,     0,     3,     8,     3,     0,     3,     8,
   200,   387,   201,     3,     0,     5,     0,     5,   198,   387,
   199,     0,     5,   198,   199,     0,     0,   228,   229,     5,
     0,   228,   229,     5,   198,   387,   199,     0,     0,   202,
     0,   198,   196,   387,   199,     0,     0,   198,   199,     0,
   198,   387,   199,     0,     0,   233,   234,     0,    45,   200,
   235,   201,     7,     0,     5,   200,   201,   174,   236,     7,
     0,     5,   200,   220,   201,   174,   236,     7,     0,   384,
     0,     0,   235,   229,     5,     0,    10,   200,   387,   201,
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
   388,     0,   386,   246,   248,     0,     5,   317,     0,   317,
     0,   317,   246,     0,     0,    96,   244,   200,   238,   201,
     0,    37,   200,   317,   201,     0,    39,   200,   317,   201,
     0,     0,    38,   245,   200,   238,   202,   220,   201,     0,
   181,     5,   182,   200,   238,   201,     0,   197,     5,     0,
   197,   159,     0,   197,   114,     0,   197,     3,     0,   243,
   196,     3,     0,   196,     3,     0,   200,   205,   201,     0,
   200,   201,     0,   200,   247,   201,     0,   240,     0,   247,
   202,   240,     0,     0,   198,   382,   199,     0,   198,    49,
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
    67,     5,     7,     0,    68,   387,     7,     0,    69,   387,
     7,     0,    70,   387,     7,     0,    71,   387,     7,     0,
    72,   387,     7,     0,     0,   264,   265,     0,   198,   266,
   199,     0,   384,     0,     0,   266,   267,     0,    74,     5,
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
   272,     0,   198,   273,   199,     0,   384,     0,     0,   273,
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
     0,   198,   294,   199,     0,   384,     0,     0,   294,   295,
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
     0,   318,   319,     0,   198,   320,   199,     0,   384,     0,
     0,   320,   321,     0,    74,     5,     7,     0,    74,     5,
   230,     7,     0,   104,   198,   323,   199,     0,     0,   111,
   322,   198,   330,   199,     0,     0,   323,   198,   324,   199,
     0,     0,   324,   325,     0,    74,     5,     7,     0,    64,
     5,     7,     0,   105,   326,     7,     0,   106,   389,     7,
     0,   109,   328,     7,     0,   110,     5,     7,     0,   107,
   381,     7,     0,   108,   389,     7,     0,     5,   231,     0,
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
   201,     7,     0,   116,   200,     5,   202,     5,   202,   381,
   201,     7,     0,   119,   200,     5,   202,   387,   202,   381,
   202,   387,   201,     7,     0,   121,   200,   387,   202,   387,
   202,   236,   202,   236,   201,   198,   330,   199,     0,   125,
   200,   387,   202,   387,   202,   236,   202,   387,   202,   387,
   201,   198,   330,   199,     0,     0,   143,   332,   200,   334,
   335,   201,     7,     0,     0,   144,   333,   200,   334,   335,
   201,     7,     0,   134,   200,   220,   202,   236,   201,     7,
     0,   135,     6,     7,     0,   379,     0,     5,     0,     0,
   335,   336,     0,   202,   156,   389,     0,   202,   159,   381,
     0,   202,   381,     0,     0,   337,   338,     0,   122,   387,
     7,     0,   123,   387,     7,     0,   114,   236,     7,     0,
   124,   236,     7,     0,   111,   198,   330,   199,     0,     0,
   339,   340,     0,   122,   387,     7,     0,   123,   387,     7,
     0,   114,   236,     7,     0,   126,   387,     7,     0,   127,
   387,     7,     0,   111,   198,   330,   199,     0,     0,   341,
   342,     0,   129,   387,     7,     0,   130,   236,     7,     0,
    66,   387,     7,     0,   169,   387,     7,     0,   111,   198,
   330,   199,     0,     0,   343,   344,     0,   129,   387,     7,
     0,   132,   387,     7,     0,    66,   387,     7,     0,   169,
   387,     7,     0,   104,     5,     7,     0,   133,   198,   345,
   199,     0,   111,   198,   330,   199,     0,   112,   198,   330,
   199,     0,     0,   345,   198,   346,   199,     0,     0,   346,
   347,     0,    64,     5,     7,     0,    87,     5,     7,     0,
   102,   220,     7,     0,    66,   387,     7,     0,    77,   236,
     7,     0,   169,     5,     7,     0,     0,   348,   349,     0,
   198,   350,   199,     0,   384,     0,     0,   350,   351,     0,
    74,     5,     7,     0,    74,     5,   230,     7,     0,   105,
     5,   231,     7,     0,   137,     5,     7,     0,    87,   198,
   352,   199,     0,     0,   352,   198,   353,   199,     0,     0,
   353,   354,     0,    74,     5,     7,     0,    64,     5,     7,
     0,    55,   198,   355,   199,     0,     0,   355,    92,   198,
   356,   199,     0,   355,     5,   198,   356,   199,     0,     0,
   356,   357,     0,     0,   316,   200,   358,   238,   201,     7,
     0,    64,     5,     7,     0,     0,   102,   359,   220,     7,
     0,    61,     5,     7,     0,    63,     5,     7,     0,     0,
   360,   361,     0,   198,   362,   199,     0,   384,     0,     0,
   362,   363,     0,    74,     5,     7,     0,   139,     5,     7,
     0,   161,     5,     7,     0,   141,   389,     7,     0,   111,
   198,   366,   199,     0,     0,   138,     5,   140,     5,   365,
   198,   366,   199,     0,     0,     0,   366,   367,   368,     0,
   142,   200,   369,   372,   376,   201,     7,     0,   143,   200,
   369,   374,   376,   201,     7,     0,     5,   371,   202,     0,
     5,   371,   370,     5,   371,   202,     0,   189,     0,   190,
     0,   187,     0,   188,     0,     0,   200,   220,   201,     0,
   147,   220,     0,   150,   198,   198,   387,   202,   387,   202,
   387,   199,   198,   387,   202,   387,   202,   387,   199,   198,
   387,   202,   387,   202,   387,   199,   199,     0,   149,   220,
     0,     0,   149,   198,   236,   202,   236,   202,   236,   199,
   198,   381,   373,   202,   381,   199,     0,   151,   198,   387,
   202,   387,   202,   387,   199,     0,   152,   198,   198,   387,
   202,   387,   202,   387,   199,   198,   387,   202,   387,   202,
   387,   199,   199,   198,   387,   199,     0,   153,   198,   198,
   387,   202,   387,   202,   387,   199,   198,   387,   202,   387,
   202,   387,   199,   198,   387,   202,   387,   202,   387,   199,
   199,   198,   387,   202,   387,   199,     0,   154,   198,   198,
   387,   202,   387,   202,   387,   199,   198,   387,   202,   387,
   202,   387,   199,   198,   387,   202,   387,   202,   387,   199,
   198,   387,   202,   387,   202,   387,   199,   199,   198,   387,
   202,   387,   202,   387,   199,     0,   146,     0,   147,   220,
     0,   148,   220,     0,   150,   198,   198,   387,   202,   387,
   202,   387,   199,   198,   387,   202,   387,   202,   387,   199,
   198,   387,   202,   387,   202,   387,   199,   199,     0,   149,
   220,     0,     0,   149,   198,   236,   202,   236,   202,   236,
   199,   198,   381,   375,   202,   381,   199,     0,   151,   198,
   387,   202,   387,   202,   387,   199,     0,   152,   198,   198,
   387,   202,   387,   202,   387,   199,   198,   387,   202,   387,
   202,   387,   199,   199,   198,   387,   199,     0,   153,   198,
   198,   387,   202,   387,   202,   387,   199,   198,   387,   202,
   387,   202,   387,   199,   198,   387,   202,   387,   202,   387,
   199,   199,   198,   387,   202,   387,   199,     0,   154,   198,
   198,   387,   202,   387,   202,   387,   199,   198,   387,   202,
   387,   202,   387,   199,   198,   387,   202,   387,   202,   387,
   199,   198,   387,   202,   387,   202,   387,   199,   199,   198,
   387,   202,   387,   202,   387,   199,     0,   147,   220,   155,
     5,   198,   387,   202,   387,   199,   198,   387,   199,     0,
     0,   376,   377,     0,   202,   156,   389,     0,   202,   156,
   182,   389,     0,   202,   156,   186,   389,     0,   202,   157,
   387,     0,   202,   164,     0,   202,   165,   387,     0,   202,
   160,   387,     0,   202,   161,     5,     0,   202,   162,   378,
     0,   202,   163,   378,     0,   202,   161,   378,     0,   202,
   158,   387,     0,   202,   159,   381,     0,   202,   145,     5,
     0,   202,   167,     5,     0,   202,   166,   387,     0,   202,
    55,   381,     0,   202,   168,   387,     0,   202,   168,   198,
   382,   199,     0,     0,   378,     6,     0,     0,   198,   380,
   199,     0,   236,     0,   380,   202,   236,     0,     0,   387,
     0,   198,   382,   199,     0,   387,     0,   383,     0,   382,
   202,   387,     0,   382,   202,   383,     0,   387,     8,   387,
     0,   387,     8,   200,   387,   201,   387,     0,     5,   174,
   387,     7,     0,     5,   174,     6,     7,     0,     5,   174,
   198,   382,   199,     7,     0,     5,   174,    47,   200,     5,
   202,     5,   201,     7,     0,    11,   200,   385,   201,     7,
     0,     0,   385,   229,     5,     0,   385,   229,     5,   174,
   387,     0,   385,   229,     5,   174,     6,     0,    17,     0,
    18,     0,    19,     0,    20,     0,    21,     0,    22,     0,
    23,     0,    24,     0,    25,     0,    26,     0,    27,     0,
    28,     0,    29,     0,    30,     0,    31,     0,    32,     0,
    33,     0,    34,     0,    35,     0,    36,     0,     5,     0,
   388,     0,   203,   387,   204,     0,   188,   387,     0,   194,
   387,     0,   387,   188,   387,     0,   387,   187,   387,     0,
   387,   189,   387,     0,   387,   190,   387,     0,   387,   191,
   387,     0,   387,   195,   387,     0,   387,   181,   387,     0,
   387,   182,   387,     0,   387,   183,   387,     0,   387,   184,
   387,     0,   387,   179,   387,     0,   387,   178,   387,     0,
   387,   176,   387,     0,   387,   177,   387,     0,    17,   200,
   387,   201,     0,    18,   200,   387,   201,     0,    19,   200,
   387,   201,     0,    20,   200,   387,   201,     0,    21,   200,
   387,   201,     0,    22,   200,   387,   201,     0,    23,   200,
   387,   201,     0,    24,   200,   387,   201,     0,    25,   200,
   387,   201,     0,    26,   200,   387,   201,     0,    27,   200,
   387,   202,   387,   201,     0,    28,   200,   387,   201,     0,
    29,   200,   387,   201,     0,    30,   200,   387,   201,     0,
    31,   200,   387,   201,     0,    32,   200,   387,   201,     0,
    33,   200,   387,   201,     0,    34,   200,   387,   202,   387,
   201,     0,    35,   200,   387,   202,   387,   201,     0,    36,
   200,   387,   202,   387,   201,     0,   387,   175,   387,     8,
   387,     0,   387,   196,     0,     4,     0,     3,     0,    12,
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
  4730,  4734,  4738,  4746,  4750,  4754,  4763,  4768,  4774,  4780,
  4792,  4803,  4806,  4814,  4842,  4852,  4852,  4858,  4867,  4883,
  4891,  4894,  4899,  4902,  4911,  4914,  4922,  4934,  4944,  4949,
  4954,  4972,  4981,  4985,  4990,  4998,  5005,  5012,  5026,  5050,
  5053,  5054,  5055,  5058,  5062,  5066,  5075,  5091,  5098,  5112,
  5122,  5130,  5143,  5161,  5186,  5194,  5201,  5208,  5224,  5231,
  5245,  5255,  5263,  5276,  5294,  5318,  5338,  5355,  5358,  5366,
  5373,  5380,  5384,  5388,  5392,  5396,  5405,  5410,  5415,  5435,
  5442,  5449,  5457,  5465,  5472,  5479,  5483,  5495,  5502,  5548,
  5554,  5558,  5563,  5568,  5571,  5572,  5576,  5581,  5590,  5593,
  5602,  5610,  5627,  5635,  5641,  5653,  5697,  5701,  5704,  5710,
  5716,  5727,  5729,  5730,  5731,  5732,  5733,  5734,  5735,  5736,
  5737,  5738,  5739,  5740,  5741,  5742,  5743,  5744,  5745,  5746,
  5747,  5748,  5750,  5752,  5753,  5754,  5755,  5756,  5757,  5758,
  5759,  5760,  5761,  5762,  5763,  5764,  5765,  5766,  5767,  5768,
  5769,  5770,  5771,  5772,  5773,  5774,  5775,  5776,  5777,  5778,
  5779,  5780,  5781,  5782,  5783,  5784,  5785,  5786,  5787,  5788,
  5789,  5790,  5793,  5796,  5797,  5798,  5799,  5800,  5801,  5802,
  5819,  5824
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
"PostSubOperation","PostQuantitiesToPlot","Combination","PostQuantitySupport",
"PlotSubType","@29","PrintSubType","@30","PlotOptions","PlotOption","ParsedStrings",
"ListOfExpression","RecursiveListOfExpression","ListOfDouble","RecursiveListOfDouble",
"DottedFExpr","Affectation","DefineConstants","NameForFunction","FExpr","OneFExpr",
"CharExpr", NULL
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
   352,   352,   353,   353,   354,   354,   354,   355,   355,   355,
   356,   356,   358,   357,   357,   359,   357,   357,   357,   360,
   360,   361,   361,   362,   362,   363,   363,   363,   363,   363,
   365,   364,   366,   367,   366,   368,   368,   369,   369,   370,
   370,   370,   370,   371,   371,   372,   372,   372,   373,   372,
   372,   372,   372,   372,   374,   374,   374,   374,   374,   375,
   374,   374,   374,   374,   374,   374,   376,   376,   377,   377,
   377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
   377,   377,   377,   377,   377,   377,   377,   378,   378,   379,
   379,   380,   380,   381,   381,   381,   382,   382,   382,   382,
   383,   383,   384,   384,   384,   384,   384,   385,   385,   385,
   385,   386,   386,   386,   386,   386,   386,   386,   386,   386,
   386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
   386,   386,   387,   387,   387,   387,   387,   387,   387,   387,
   387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
   387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
   387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
   387,   387,   388,   388,   388,   388,   388,   388,   388,   388,
   389,   389
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
     0,     4,     0,     2,     3,     3,     4,     0,     5,     5,
     0,     2,     0,     6,     3,     0,     4,     3,     3,     0,
     2,     3,     1,     0,     2,     3,     3,     3,     3,     4,
     0,     8,     0,     0,     3,     7,     7,     3,     6,     1,
     1,     1,     1,     0,     3,     2,    24,     2,     0,    14,
     8,    20,    29,    38,     1,     2,     2,    24,     2,     0,
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
    19,     0,    16,    17,     0,   622,   621,    18,   548,    26,
   172,   135,   148,   202,    69,   255,   325,   430,     0,   460,
    20,     0,    21,    23,     0,     0,    25,   614,   613,   620,
     0,   615,   616,   617,   618,   619,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   573,    63,    27,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    22,     0,     0,   544,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   575,   576,     0,   538,   537,     0,   543,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   612,     0,    64,     0,     6,     0,   176,     8,
   173,   175,   137,     9,   150,    10,   206,    11,   203,   205,
     0,     0,     7,    70,    74,   259,    12,   256,   258,   329,
    13,   326,   328,   434,    14,   431,   433,   471,   464,    15,
   461,   463,   484,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   574,
     0,   589,   590,   588,   587,   583,   584,   585,   586,   578,
   577,   579,   580,   581,   582,   547,   549,     0,     0,    28,
    34,     0,     0,     0,     0,     0,    75,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   507,   495,     0,     0,     0,     0,     0,     0,     0,
     0,   507,   591,   592,   593,   594,   595,   596,   597,   598,
   599,   600,     0,   602,   603,   604,   605,   606,   607,     0,
     0,     0,     0,   545,   540,   539,     0,   541,     0,     0,
     0,     0,     0,     0,    60,     0,     0,     0,   174,   177,
     0,     0,   136,   138,     0,    79,     0,   149,   151,     0,
     0,     0,     0,     0,     0,   204,   207,    66,    41,     0,
     0,    39,     0,     0,    63,     0,     0,     0,     0,   257,
   260,     0,     0,   334,   327,   330,     0,     0,     0,     0,
   432,   435,   473,     0,     0,     0,     0,     0,   462,   465,
     0,   482,   483,   480,   481,   478,     0,   486,    79,   488,
     0,     0,     0,     0,     0,     0,   496,   497,    79,   499,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   611,   551,   550,   620,     0,     0,     0,    31,
     0,    63,     0,   183,     0,     0,   141,     0,   155,     0,
     0,     0,    81,     0,   246,     0,     0,   215,   229,   239,
     0,    40,    54,    57,    51,    38,    49,    79,     0,    35,
     0,     0,     0,     0,   266,   285,     0,   336,     0,     0,
   441,    66,     0,   474,     0,   473,     0,     0,     0,   485,
   484,     0,     0,     0,     0,     0,     0,     0,     0,   508,
     0,     0,     0,     0,     0,     0,     0,     0,   601,   608,
   609,   610,     0,     0,    29,     0,    68,     0,    42,     0,
     0,     0,   183,     0,   180,   178,     0,     0,     0,   139,
     0,     0,     0,   153,    80,     0,   152,     0,   210,   208,
     0,     0,     0,     0,    67,     0,     0,    63,     0,    79,
     0,    71,    76,   263,   261,     0,     0,     0,   331,     0,
     0,   356,   436,     0,     0,     0,   439,   472,     0,   466,
   474,   467,   469,   468,     0,    79,     0,     0,     0,     0,
     0,   476,   534,     0,     0,     0,     0,   534,     0,   528,
   528,   528,   513,     0,     0,     0,     0,     0,    79,     0,
     0,     0,     0,     0,   477,   546,   542,    65,     0,    30,
    33,    61,     0,   185,   181,   179,   143,   140,   157,   154,
     0,     0,   620,   552,   553,   554,   555,   556,   557,   558,
   559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
   569,   570,   571,     0,   117,     0,     0,   113,     0,     0,
     0,     0,     0,     0,     0,     0,    82,    83,   111,     0,
   108,   248,   214,   209,   217,   211,   231,   212,   241,   213,
    55,     0,    59,     0,    50,     0,    72,     0,    44,    36,
    43,   262,   268,   264,     0,     0,     0,     0,   265,   286,
   332,   338,   333,     0,   437,   443,   440,   438,   475,   470,
   479,     0,     0,     0,     0,     0,     0,     0,   525,   535,
   522,     0,     0,   509,   512,   520,   521,   515,   516,   519,
   517,   518,   514,   524,   523,     0,   526,     0,     0,     0,
     0,     0,     0,     0,    32,     0,   182,     0,     0,     0,
    77,    78,   110,     0,     0,     0,     0,     0,     0,   105,
   104,   106,   125,   123,   120,   122,   121,     0,     0,    84,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   112,   131,
     0,     0,     0,     0,     0,    58,     0,    52,    73,    63,
     0,   302,   302,   310,   291,     0,     0,    79,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   375,
   377,     0,   335,   357,     0,    79,     0,     0,     0,     0,
     0,     0,   510,   511,   529,     0,     0,    79,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    79,    79,
    79,    79,     0,     0,     0,    79,   184,   186,     0,     0,
   142,   144,     0,     0,     0,   156,   158,     0,    81,     0,
     0,    81,     0,     0,   324,   107,     0,   102,   103,   100,
    99,   101,    95,    96,    97,    98,    91,    92,    87,    90,
    93,    88,    94,   124,   127,     0,   129,     0,     0,   109,
     0,     0,     0,     0,     0,   247,   249,     0,     0,     0,
     0,     0,   216,   218,     0,     0,   230,   232,     0,     0,
     0,   240,   242,     0,    53,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   267,   277,   269,   316,   316,
   316,     0,     0,     0,     0,     0,   534,     0,     0,     0,
   337,   339,     0,     0,    79,     0,     0,     0,    79,     0,
     0,   388,     0,   395,     0,   403,   410,     0,     0,     0,
     0,   366,     0,     0,     0,   442,   444,     0,     0,     0,
     0,     0,     0,   536,   527,     0,     0,     0,     0,     0,
     0,     0,    62,     0,     0,     0,     0,    79,     0,    79,
     0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
   131,   162,     0,     0,   115,     0,   116,     0,     0,    81,
   323,     0,   126,   128,     0,     0,     0,     0,     0,     0,
     0,    48,     0,    66,     0,     0,   225,     0,     0,     0,
   235,   237,     0,     0,     0,     0,    56,    37,     0,     0,
     0,     0,     0,     0,     0,     0,    66,     0,     0,     0,
    81,     0,     0,   317,   318,   319,   320,   321,   322,     0,
   287,   303,     0,   288,     0,   289,   311,     0,     0,     0,
   296,   290,   292,     0,     0,    66,   350,     0,     0,     0,
     0,   352,   354,     0,     0,   358,     0,     0,   359,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   380,   530,   530,   448,     0,     0,     0,     0,   491,
     0,     0,     0,     0,     0,     0,   502,     0,     0,     0,
   188,   189,   194,   195,     0,   198,     0,   197,   191,   190,
    63,   192,   187,     0,   196,   146,   145,     0,     0,   159,
   160,     0,     0,   114,     0,    85,   130,     0,     0,   132,
   250,     0,   252,   253,     0,   219,   220,     0,     0,     0,
   223,   224,   233,    63,   234,   244,   243,   245,    66,    46,
   281,   280,   273,   271,   272,   270,   274,   276,   282,   279,
     0,     0,     0,     0,   304,     0,   313,     0,     0,     0,
   341,   340,   348,    63,   342,   343,   346,   347,    63,   344,
   345,     0,     0,    79,     0,     0,     0,    79,     0,    79,
     0,     0,    79,   360,   389,     0,     0,    79,     0,     0,
     0,     0,   361,   396,     0,     0,     0,     0,    79,     0,
   362,   404,     0,     0,     0,     0,     0,     0,     0,     0,
   363,   411,    79,   382,    79,   383,   381,   383,     0,   446,
   445,   534,     0,     0,     0,     0,     0,   534,     0,     0,
     0,     0,    79,    79,     0,    79,   147,   164,   161,     0,
    89,   119,     0,     0,     0,     0,   254,   221,     0,   222,
   236,     0,    47,   283,     0,   308,   309,   307,    81,   312,
    81,   293,   294,     0,     0,     0,     0,   295,   297,   349,
     0,   353,     0,   364,   365,     0,     0,   356,     0,     0,
   356,     0,     0,     0,     0,     0,   356,     0,     0,     0,
     0,     0,     0,     0,   356,     0,     0,     0,     0,     0,
   356,   356,     0,     0,   420,     0,     0,   532,     0,     0,
     0,     0,     0,   447,   489,     0,     0,     0,     0,     0,
   500,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   118,    86,     0,     0,   251,     0,   238,     0,     0,   278,
   305,   314,     0,     0,     0,     0,   351,   355,     0,   534,
     0,   534,     0,     0,   392,   390,   391,   393,    79,     0,
   399,   397,   398,   400,   401,    79,   407,     0,   405,   406,
   408,   414,   416,     0,     0,   412,   413,     0,   415,     0,
   531,    79,     0,   534,   384,     0,   451,   451,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
   165,   134,   133,     0,     0,   275,     0,     0,   298,   299,
   300,   301,   369,     0,   367,     0,   370,   394,     0,   402,
     0,   409,   418,   419,   422,   417,   379,   533,   376,     0,
   534,   387,   378,   316,   316,   534,     0,     0,     0,     0,
   506,   534,     0,     0,     0,     0,   201,   200,   193,   199,
     0,     0,     0,     0,     0,     0,     0,   284,    81,     0,
     0,     0,     0,    79,     0,     0,   385,   386,     0,     0,
     0,   456,   450,     0,   452,   449,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   166,   167,   168,   169,
   170,   171,     0,     0,     0,   371,   356,     0,     0,     0,
     0,     0,    79,     0,     0,     0,   421,   423,     0,     0,
     0,     0,   453,   490,     0,     0,     0,     0,   501,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   458,   459,   455,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,   226,
   306,   315,   368,   372,   356,     0,   424,   427,   428,   425,
   426,   429,   457,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   373,   356,   454,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   227,   374,     0,   492,
     0,     0,     0,   503,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    66,     0,     0,     0,     0,     0,     0,     0,   487,     0,
     0,   498,     0,     0,     0,     0,     0,     0,     0,   228,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   493,     0,   504,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   494,   505,     0,     0,     0
};

static const short yydefgoto[] = {  1675,
     1,     2,     3,    20,    21,    22,    85,   148,   230,   468,
   322,   501,   740,   323,   324,   630,   866,   973,   416,   498,
   417,   392,   146,   293,   412,   294,    90,   164,   325,   402,
   403,   485,   486,   607,   817,  1223,   608,   698,   695,   729,
   838,   840,    87,   233,   304,   479,   689,   802,    88,   234,
   309,   481,   690,   807,  1089,  1310,  1391,    86,   151,   232,
   300,   474,   688,   798,    89,   159,   235,   317,   492,   732,
   854,  1110,  1563,  1607,   493,   733,   858,   983,  1114,   494,
   734,   863,   488,   731,   847,    91,   168,   238,   331,   507,
   741,   878,  1234,  1001,  1319,   508,   640,   882,  1023,  1140,
  1249,   879,  1012,  1239,  1397,   881,  1017,  1241,  1398,  1013,
   609,    92,   172,   239,   336,   429,   511,   746,   892,  1028,
  1144,  1034,  1149,   644,   764,   910,   911,  1196,  1290,  1365,
  1045,  1165,  1047,  1174,  1049,  1182,  1050,  1192,  1358,  1456,
  1498,    93,   176,   240,   342,   515,   765,   917,  1199,  1424,
  1465,  1531,  1502,    95,   181,   242,   350,    23,   241,   434,
   519,    47,   184,   357,   244,   252,  1369,   262,  1375,   366,
   450,   670,  1197,  1289,   659,   123,   124,    24,    84,   610,
   660,    83,    28
};

static const short yypact[] = {-32768,
-32768,    43,  2591,   -74,   349,   -68,   -53,   -47,   -36,   -28,
   -22,    -6,    25,    61,   106,    26,   180,   381,   201,-32768,
-32768,    88,-32768,-32768,   379,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   175,-32768,
-32768,   312,-32768,-32768,   164,   178,-32768,-32768,-32768,-32768,
   422,-32768,-32768,-32768,-32768,-32768,   234,   246,   259,   275,
   302,   318,   324,   327,   329,   336,   360,   365,   369,   374,
   385,   398,   423,   425,   447,   450,   452,  1782,  1782,  1782,
  1782,   777,-32768,   168,   290,    30,   340,   394,    53,    28,
    55,   113,   115,   537,   123,-32768,   544,   544,-32768,  1782,
  1782,  1782,  1782,  1782,  1782,  1782,  1782,  1782,  1782,  1782,
  1782,  1782,  1782,  1782,  1782,  1782,  1782,  1782,  1782,   589,
   418,   418,  -140,-32768,  2381,  2429,-32768,  1782,  1782,  1782,
  1782,  1782,  1782,  1782,  1782,  1782,  1782,  1782,  1782,  1782,
  1782,  1782,-32768,   593,-32768,   649,-32768,   348,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -103,   460,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   468,   934,  1244,  4091,  4118,  4145,  4172,  4199,
  4226,  4253,  4280,  4307,  4334,  2530,  4361,  4388,  4415,  4442,
  4469,  4496,  2558,  2590,  2612,   469,   672,  1782,  1353,-32768,
  2403,  1744,  1744,  1708,  1708,   431,   431,   431,   431,   474,
   474,   418,   418,   418,   418,-32768,   511,  -126,   487,-32768,
-32768,   243,   -11,   305,   286,    18,-32768,   -17,    70,    73,
   493,   376,   130,   187,   130,    94,   547,   549,   558,   562,
   584,-32768,-32768,   130,   130,    97,   605,   609,   611,   613,
   614,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1782,-32768,-32768,-32768,-32768,-32768,-32768,  1782,
  1782,  1782,   786,-32768,-32768,  2381,  1782,  5716,  1782,  1420,
  1281,  1486,   639,   641,-32768,    27,   811,   812,-32768,-32768,
   621,   815,-32768,-32768,   624,   127,   818,-32768,-32768,   627,
   822,   825,   635,   636,   638,-32768,-32768,   219,-32768,    23,
   664,-32768,   640,   643,   434,   834,   839,   654,   656,-32768,
-32768,   842,   657,-32768,-32768,-32768,   852,   668,   862,   863,
-32768,-32768,-32768,   864,   673,   868,   349,   869,-32768,-32768,
   674,-32768,-32768,-32768,-32768,-32768,   871,-32768,   127,-32768,
   681,  1782,   683,   684,   686,   488,   730,-32768,   127,-32768,
   690,  1782,   691,   702,   704,   494,  4523,  4550,  4577,  4604,
   707,  4631,  5716,-32768,  5716,   709,   907,  1782,  4766,-32768,
   131,   496,   719,-32768,   912,    13,-32768,   942,-32768,   715,
   718,   943,-32768,   944,-32768,   950,   112,-32768,-32768,-32768,
   764,-32768,   967,   776,-32768,-32768,-32768,   127,   802,-32768,
   970,   998,  1007,   132,-32768,-32768,   133,-32768,   807,   134,
-32768,   819,  1018,   827,  1020,-32768,  1021,  1022,  1023,-32768,
   468,   832,  1782,  2634,  1782,  1782,  1782,  1029,  1437,-32768,
  1030,   835,  1782,  2656,  1782,  1782,  1782,  1031,-32768,-32768,
-32768,-32768,  1063,  1782,-32768,  4791,-32768,   131,-32768,  1065,
  1066,  1069,-32768,   501,-32768,-32768,   875,  1068,   528,-32768,
   530,  1782,  1071,-32768,-32768,  1028,-32768,   533,-32768,-32768,
  1072,   535,   538,   541,-32768,    15,  1680,    10,  1073,   127,
    22,-32768,-32768,-32768,-32768,  1083,   543,   249,-32768,  1084,
   564,-32768,-32768,  1085,   567,  1087,-32768,-32768,    88,-32768,
   879,-32768,-32768,-32768,   895,   127,  2678,  1782,  2700,  2722,
  2744,-32768,  1714,  1093,   166,  1782,  1782,  1714,  1782,  1094,
-32768,-32768,-32768,  1782,  1782,  1095,  1748,   903,   127,  2766,
  1782,  2788,  2810,  2832,-32768,-32768,  5716,-32768,  1096,-32768,
-32768,   909,   572,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  4658,   913,   235,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   915,-32768,   916,   917,-32768,  1103,  1028,
  1028,  1028,  1109,    47,  1113,  1028,  5738,   923,   920,   920,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1782,-32768,  4816,-32768,   147,-32768,  1114,-32768,-32768,
-32768,-32768,-32768,-32768,   925,   930,   931,   932,-32768,-32768,
-32768,-32768,-32768,   633,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   933,  1782,  2854,  1782,  1782,  1782,  1782,-32768,  5716,
-32768,   349,   349,-32768,  5716,  5716,-32768,  5716,-32768,  1127,
  1127,  1127,  5716,  5716,-32768,  1782,  5716,  1782,   936,  1782,
  2876,  1782,  1782,  1782,-32768,  1782,-32768,   552,     0,   237,
-32768,-32768,-32768,   941,   927,   941,  1028,   940,   952,   947,
   947,   947,-32768,-32768,-32768,-32768,-32768,    14,  1348,-32768,
  1028,  1028,  1028,  1028,  1028,  1028,  1028,  1028,  1028,  1028,
  1028,  1028,  1028,  1028,  1028,  1028,  1140,   908,-32768,   951,
   110,   485,   342,   282,  4685,-32768,   442,-32768,-32768,   571,
   388,-32768,-32768,-32768,-32768,   400,    17,   128,   948,   956,
   957,   959,   961,   265,   325,   954,   968,   971,  1161,-32768,
-32768,  1165,-32768,-32768,   242,   127,  2898,  1782,  2920,  2942,
  2964,    69,-32768,-32768,-32768,    71,  2986,   127,  3008,  1782,
  3030,  3052,  3074,  4841,   130,   130,   130,   130,   139,   145,
   127,   127,   975,  1169,  1170,   181,-32768,-32768,   124,  1171,
-32768,-32768,   980,  1177,  1181,-32768,-32768,   986,-32768,   987,
  2508,-32768,   991,   994,-32768,-32768,  1028,  5756,  5756,  2453,
  2453,  2453,   454,   454,   454,   454,   362,   362,   108,   108,
   108,   947,   947,-32768,-32768,   993,  5738,   577,   689,-32768,
  1191,   149,   149,  1192,  1195,-32768,-32768,  1196,  1197,  1198,
   130,   130,-32768,-32768,  1199,    63,-32768,-32768,  1200,  1201,
  1205,-32768,-32768,  1208,-32768,  1011,   163,  1209,  1212,    93,
  1213,  1214,  1210,  1217,   130,-32768,-32768,-32768,   696,   763,
   911,   272,  1216,  1218,    96,   349,  1714,   349,   120,  1222,
-32768,-32768,  1221,  1224,   127,  1223,  1227,  1228,   127,  1234,
  1238,-32768,  1782,-32768,  1782,-32768,-32768,   130,  1237,  1045,
  1047,-32768,  1050,  1245,  1246,-32768,-32768,  1054,  1782,  4866,
  1782,  1782,  1782,-32768,-32768,  1782,  1058,  1782,  4891,  1782,
  1782,  1782,-32768,  1251,  1252,  1253,  1255,   127,  1259,   127,
  1260,  1261,  1262,  1267,  1269,  1274,   127,  1275,  1276,  1282,
   951,-32768,  1283,  1284,-32768,  1086,-32768,  1028,  1117,-32768,
-32768,  1160,-32768,-32768,  1028,  1119,  1122,   225,  1314,  1239,
  1316,-32768,  1318,   819,  1319,   135,  1129,  1322,  1324,  1325,
-32768,-32768,  1326,  1338,  1339,  1346,-32768,-32768,  1349,    23,
  1352,  1392,  1393,  1394,  1399,  1400,   819,  1405,  1406,  1407,
-32768,  1410,  1411,-32768,-32768,-32768,-32768,-32768,-32768,   130,
-32768,-32768,  1219,-32768,   130,-32768,-32768,  1220,  1412,  1413,
-32768,-32768,-32768,  1414,  1415,   819,-32768,  1422,  1424,  1450,
  1451,-32768,-32768,  1452,  1453,-32768,  1226,  1263,-32768,  1264,
  1266,  1270,  1268,  1271,   467,  3096,   457,  3118,   371,   717,
  1272,-32768,   125,   125,-32768,  1454,  1455,  1265,  4916,-32768,
  4941,  4966,  4991,  5016,  1278,  5041,-32768,  5066,  5091,  5116,
-32768,-32768,-32768,-32768,  1291,-32768,  1292,-32768,-32768,-32768,
  1294,-32768,-32768,  1295,-32768,-32768,-32768,  1458,   582,-32768,
-32768,   130,  4070,-32768,  1332,-32768,  5738,  1467,   130,-32768,
-32768,  1529,-32768,-32768,  1543,-32768,-32768,  1544,  1470,  1547,
-32768,-32768,-32768,   254,-32768,-32768,-32768,-32768,   819,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1357,  1553,  1554,  1555,-32768,  1556,-32768,  1558,  1562,    99,
-32768,-32768,-32768,   281,-32768,-32768,-32768,-32768,   289,-32768,
-32768,  1565,  1566,   127,  1569,  1377,  1782,   127,  1378,   127,
  1782,  1782,   127,-32768,-32768,  1782,  1379,   127,  1782,  1782,
  1782,  1782,-32768,-32768,  1782,  1782,  1380,  1782,   127,  1782,
-32768,-32768,  1782,  1574,  1382,  1383,  1782,  1782,  1391,  1782,
-32768,-32768,   127,-32768,   127,-32768,-32768,-32768,    64,-32768,
-32768,  1714,  1409,  1417,  1418,  1423,  1426,  1714,  1428,  1430,
  1431,  1432,   127,   127,  1587,   127,-32768,-32768,-32768,  1390,
-32768,-32768,  1028,  1433,  1434,  1585,-32768,-32768,  1605,-32768,
-32768,  1607,-32768,  1438,  1611,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   941,   941,   941,   130,-32768,-32768,-32768,
  1626,-32768,  1627,-32768,-32768,  1441,  1449,-32768,  3140,  1442,
-32768,  1632,  1471,  1940,  1649,  3162,-32768,  1650,  1967,  1996,
  2019,  2042,  3184,  2064,-32768,  2086,  1656,  2113,  2140,  1657,
-32768,-32768,  2163,  2186,-32768,  2209,  1464,-32768,   314,   586,
   588,  1435,  1472,-32768,-32768,  1782,  1782,  1782,  1782,  1782,
-32768,  1782,  1782,  1782,  1782,  1468,  1474,  1469,  1475,   463,
-32768,  5738,  1473,  1478,-32768,  1664,-32768,  1668,  1671,-32768,
-32768,-32768,  1672,  1674,  1679,  1681,-32768,-32768,  1683,  1714,
  1064,  1714,  1684,  1121,-32768,-32768,-32768,-32768,   127,  1715,
-32768,-32768,-32768,-32768,-32768,   127,-32768,  1750,-32768,-32768,
-32768,-32768,-32768,  1837,  1871,-32768,-32768,   601,-32768,  1716,
-32768,   127,  1717,   966,-32768,  1718,-32768,-32768,  1485,  3206,
  3228,  3250,  3272,  5141,  1519,  3294,  3316,  3338,  3360,  1747,
  1749,  1751,  1752,  1783,  1782,  1782,  1782,  1782,  1782,-32768,
-32768,-32768,-32768,  1636,  1588,-32768,  1589,  1590,-32768,-32768,
-32768,-32768,-32768,  1592,  1639,  1617,-32768,-32768,  1618,-32768,
  1619,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   349,
  1714,-32768,-32768,   397,   576,  1714,  1782,  1782,  1782,  1782,
-32768,  1714,  1782,  1782,  1782,  1782,-32768,-32768,-32768,-32768,
  1815,  2237,  2259,  2286,  2313,  2336,  1785,-32768,-32768,   941,
  1816,  1628,  1782,   127,  1782,   285,-32768,-32768,  1819,  1820,
  1822,-32768,-32768,  1629,-32768,-32768,  1634,  3382,  3404,  3426,
  3448,  1638,  3470,  3492,  3514,  3536,-32768,-32768,-32768,-32768,
-32768,-32768,  1640,  1643,  1644,-32768,-32768,  4712,  1646,  3558,
  1834,  1782,   127,  1836,   130,  1843,-32768,-32768,  1844,  1845,
  1846,   130,-32768,-32768,  1782,  1782,  1782,  1782,-32768,  1782,
  1782,  1782,  1782,  1847,  1848,  1849,  1904,  1850,  1662,  1782,
  1854,  2359,  1855,  1857,  1865,  1866,-32768,-32768,-32768,  1870,
-32768,  5166,  5191,  5216,  5241,  5266,  5291,  5316,  5341,-32768,
-32768,-32768,-32768,-32768,-32768,  4739,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1686,  1682,  1689,  1702,  1703,  1707,  1711,
  1709,  1713,  1841,  1938,  1720,  1899,  1782,  1721,  1782,  1782,
  1782,  1722,  1782,  1782,   130,-32768,-32768,-32768,  3580,  1782,
  3602,  3624,  3646,  1782,  3668,  3690,  1906,  1970,  1782,  5366,
  1782,  1782,  1782,  5391,  1782,  1782,-32768,-32768,  3712,-32768,
  3734,  3756,  3778,-32768,  3800,  3822,  1812,  1782,  1782,  1782,
  1782,  1782,  1782,  1911,  5416,  5441,  5466,  5491,  5516,  5541,
   819,  1725,  1730,  1732,  1738,  1739,  1743,  1937,-32768,  1757,
  1782,-32768,  1761,  1782,  1746,  1782,  3844,  1782,  3866,-32768,
  3888,  1782,  3910,  1782,  1782,  3932,  1782,  3954,  5566,  1782,
  5591,  1782,-32768,  5616,-32768,  5641,  1762,  1764,  1766,  1768,
  1782,  1782,  3976,  3998,  1782,  1782,  4020,  4042,  1782,  1782,
  5666,  5691,-32768,-32768,  1948,  1960,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   -95,-32768,-32768,  -241,   -41,-32768,-32768,  1100,  -498,-32768,
  -584,-32768,  -296,  -390,  -431,-32768,-32768,-32768,-32768,  -323,
-32768,  -801,-32768,  -437,-32768,-32768,-32768,-32768,-32768,  1359,
-32768,  1026,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1500,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1235,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -869,
  -563,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1237,-32768,-32768,-32768,   928,   781,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   615,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1557,
-32768,  1476,  1891,-32768,  1559,-32768,-32768,-32768,-32768,  1735,
-32768,   264,-32768,-32768,  -522,  -510,  1786,   929,-32768,-32768,
   -25,  -479,  -338
};


#define	YYLAST		5951


static const short yytable[] = {    82,
   516,   351,   631,   358,   360,   478,   611,   956,   438,   693,
   959,  1018,   367,   368,   370,   667,   491,   621,   814,   476,
  1331,   893,   318,  1334,   413,   413,   414,   414,   422,  1340,
    39,   393,   161,   506,     4,   442,   510,  1348,     6,   514,
     6,   738,    -2,  1354,  1355,   452,   326,   291,   799,   704,
   301,   705,   121,   122,   125,   126,   327,     4,   207,     4,
   800,   208,   302,     6,   629,     6,   319,   981,  1292,   328,
    25,   292,   162,   329,   186,   187,   188,   189,   190,   191,
   192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
   202,   203,   204,   205,   499,   472,   236,   993,   318,    25,
  1026,   318,   211,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,   222,   223,   224,   225,     4,   490,     4,
   611,   611,   611,     6,  1032,     6,   611,     4,   318,  1194,
   808,    29,   810,     6,   318,   469,   400,   400,   505,   509,
   513,  1107,   319,   332,    30,   319,   337,   772,   400,   413,
    31,   414,   865,   469,   400,  1293,  1244,  1245,  1095,   338,
   706,    32,   700,   701,   702,   776,   949,   972,   709,    33,
    26,    27,   319,   333,   994,    34,   628,   339,   319,   319,
   334,   330,   286,   288,   995,   841,    41,   303,   842,  1246,
   400,    35,   843,   844,   845,   387,   664,   319,   801,  1131,
  1247,   626,   652,   401,   401,   707,   989,    44,   625,   340,
   477,   145,   815,   320,   622,   401,   894,   611,   321,   415,
   415,   401,    36,    40,   394,   679,   163,   149,   150,    45,
    46,   611,   611,   611,   611,   611,   611,   611,   611,   611,
   611,   611,   611,   611,   611,   611,   611,   377,   611,  1517,
   157,   158,   166,   167,   378,   379,   380,   401,    37,   811,
   982,   382,  1294,   383,   385,    82,   389,   924,   335,   925,
   208,   341,   208,   818,   819,   820,   821,   822,   823,   824,
   825,   826,   827,   828,   829,   830,   831,   832,   833,   320,
   837,   359,   320,  1027,   369,   470,   913,  1248,   803,   725,
   804,   805,   726,    38,   296,   914,   297,  1564,   846,   477,
   170,   171,   174,   175,    94,   915,   298,  1033,    96,   320,
   179,   180,  1195,   773,   774,   320,   320,   895,   968,   477,
   477,   477,   477,   310,   737,  1019,   444,   611,   938,  1588,
   635,   636,   637,   638,   940,   859,   454,   662,  1491,   311,
  1492,   663,   228,    26,    27,   860,  1020,   861,     6,   312,
   313,  1493,   466,    97,  1030,   314,   305,   315,   144,   145,
   306,  1494,   559,   352,   353,   354,   355,    98,   307,   962,
   947,    48,    49,    50,    51,    42,  1495,    43,   356,   229,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,   855,   411,   527,   -42,   529,
   530,   531,   856,  1100,   896,    77,   208,   550,    99,   552,
   553,   554,   605,   100,  -572,   806,  1176,  1321,   557,  1322,
   916,   299,   918,   867,   413,   101,   414,   639,   868,   344,
   869,   870,  1231,  1496,   927,   145,   571,  1459,   102,  1460,
  1461,   871,   902,   883,   903,   939,   941,   942,   943,  1021,
  1022,   624,   948,   884,   103,   872,   873,   874,   611,  1250,
   862,  1177,   145,  1497,   316,   611,   345,  1252,   147,   875,
   145,  1120,  1004,  1005,  1006,  1007,  1008,  1009,  1462,  1178,
  1179,   104,   654,   308,   885,   886,   887,   888,   889,   890,
   665,   666,  1361,   668,   346,  1362,   347,   105,   673,   674,
  1093,   677,   904,   106,   905,   681,   107,  1097,   108,  1384,
  1385,  1386,  1387,  1388,  1389,   109,   348,   153,   154,  1180,
   857,   178,  1105,   934,   935,   936,   937,  1029,   183,  1031,
   722,   723,   724,   725,  1464,  1464,   726,   950,   848,   110,
   849,   850,   851,   852,   111,  1127,    78,  1167,   112,  1181,
  1168,  1038,    79,   113,   349,  1042,    80,  1159,  1169,  1170,
  1160,    81,  1171,  1172,   114,  1108,   876,   877,  1161,  1162,
  1163,   155,   156,   206,  1143,  1463,   735,   115,   891,   226,
   785,   786,   787,   788,   789,   790,   791,   792,   793,   978,
   979,   794,   142,   143,  1075,   795,  1077,   137,   138,   139,
   140,   141,   116,  1084,   117,   142,   143,   767,   796,   769,
   770,   771,   125,  1000,   421,   145,  1459,   747,  1460,  1461,
   720,   721,   722,   723,   724,   725,   118,  1484,   726,   119,
   125,   120,   777,   227,   779,  1173,   781,   782,   783,   237,
   784,  1390,   139,   140,   141,  1164,  1051,   243,   142,   143,
   283,  1004,  1005,  1006,  1007,  1008,  1009,  1462,   284,  1295,
  1323,  1324,  1325,   853,   290,  1301,   295,  1233,   448,   449,
   343,    48,    49,    50,   458,   449,   471,   145,   564,   565,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,   567,   568,   569,   570,  1554,
   612,   613,   615,   616,   966,   617,   618,   967,   619,   620,
   633,   634,   920,   611,   361,   748,   362,   749,   750,   751,
   797,   752,   753,   754,   929,   363,  1002,   755,  1003,   364,
   756,   642,   643,   757,   646,   647,   758,   759,  1134,   564,
   687,   -45,   145,  1136,  1466,   760,   761,   964,   965,  1218,
  1219,   365,  1183,   127,  1215,  1312,  1363,  1364,  1366,  1364,
   381,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1415,  1416,
   970,   971,   371,   762,   671,   672,   372,  1404,   373,  1406,
   374,   375,   390,   125,   391,   395,   396,  1232,   397,   398,
  1184,   399,   404,  1002,   405,  1003,   406,  1185,  1186,   407,
  1256,   763,   408,   409,  1260,   410,  1262,   418,   423,  1265,
   419,  1422,   420,   424,  1268,  1187,   427,  1251,  1188,  1189,
  1220,   425,  1253,   426,   428,  1277,   430,  1225,  1004,  1005,
  1006,  1007,  1008,  1009,  1010,   431,   432,   433,   435,  1287,
   436,  1288,   437,   439,   440,   441,    78,  1046,   443,  1048,
   445,   446,    79,   447,   451,  1190,  1485,   453,   455,  1306,
  1307,    81,  1309,  1059,  1011,  1061,  1062,  1063,  1458,   456,
  1064,   457,  1066,  1467,  1068,  1069,  1070,   463,   -42,  1472,
    48,    49,   573,   465,   482,  1191,   473,   483,   475,    52,
    53,    54,    55,    56,   574,   575,   576,   577,   578,   579,
   580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
   590,   591,   592,   593,   594,   595,   596,   597,   480,   484,
   487,   128,   129,   130,   131,   132,   489,   133,   134,   135,
   136,  1014,   495,   137,   138,   139,   140,   141,    48,    49,
    50,   142,   143,   497,   496,   500,   502,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,   503,   598,   512,  1326,  1004,  1005,  1006,  1007,
  1008,  1009,  1015,   504,   152,  1409,   411,   160,   165,   169,
   173,   177,  1411,   182,   517,   518,   520,   522,   523,   524,
    48,    49,   573,   526,   548,   532,   549,   555,  1418,    52,
    53,    54,    55,    56,   574,   575,   576,   577,   578,   579,
   580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
   590,   591,   592,   593,   594,   595,   596,   597,   747,   556,
   388,   560,   561,   562,   566,   572,   231,   650,   614,   627,
   245,  1457,   246,   247,   248,   249,   250,   251,   599,   632,
   641,   645,  1514,   648,   600,   601,   651,   661,   669,   675,
   678,   602,   685,   603,   604,   605,   686,   699,   835,  1016,
   606,   703,   836,   692,   694,   696,   697,   708,   727,   728,
   739,  1420,   742,   598,  1421,   747,   809,   743,   744,   745,
  1489,  1259,   775,   813,   766,  1263,  1264,   778,   605,   812,
  1266,   726,   834,  1269,  1270,  1271,  1272,   897,   839,  1273,
  1274,   906,  1276,    78,  1278,   898,   899,  1279,   900,    79,
   901,  1283,  1284,   658,  1286,   907,   909,  1096,    81,  1523,
   908,   912,   944,   945,   946,   951,   748,   952,   749,   750,
   751,   953,   752,   753,   754,   954,   955,   957,   755,  1628,
   960,   756,   961,   963,   757,   969,   972,   758,   759,   974,
   975,   976,   977,   980,   984,   985,   760,   761,   599,   986,
   987,   988,   998,   991,   600,   601,   992,   996,   997,   999,
  1024,   602,  1025,   603,   604,   605,  1035,  1036,  1037,  1039,
   606,  1040,  1041,   748,   762,   749,   750,   751,  1043,   752,
   753,   754,  1044,  1052,  1053,   755,  1054,  1055,   756,  1056,
  1057,   757,  1058,  1525,   758,   759,  1065,  1071,  1072,  1073,
  1530,  1074,  1405,   760,   761,  1076,  1078,  1079,  1080,  1081,
  1370,  1371,  1372,  1373,  1374,  1082,  1376,  1377,  1378,  1379,
  1083,  1085,  1086,    48,    49,   386,    51,  1092,  1087,  1090,
  1091,   762,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,  1094,  1098,  1408,
  1101,  1099,  1103,  1102,  1104,  1106,  1109,    77,  1111,   319,
  1112,  1113,  1115,  1587,   710,   711,   712,   713,   714,   715,
   716,   717,   718,   719,  1116,  1117,   720,   721,   722,   723,
   724,   725,  1118,  1119,   726,    48,    49,    50,  1121,  1442,
  1443,  1444,  1445,  1446,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,   253,
   254,   255,   256,   257,   258,   259,   260,   261,  1122,  1123,
  1124,  1468,  1469,  1470,  1471,  1125,  1126,  1473,  1474,  1475,
  1476,  1128,  1129,  1130,  1132,  1133,  1138,  1139,  1135,  1137,
  1141,  1142,    48,    49,    50,   384,  1152,  1488,  1145,  1490,
  1146,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,  1147,  1148,  1150,  1151,
  1200,  1201,  1202,  1153,  1217,  1154,  1522,  1155,    78,  1157,
  1156,  1224,  1158,  1193,    79,  1208,   320,  1336,    80,  1532,
  1533,  1534,  1535,    81,  1536,  1537,  1538,  1539,    48,    49,
    50,   533,  1213,  1214,  1546,   145,  1216,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,   710,   711,   712,   713,   714,   715,   716,   717,
   718,   719,  1222,  1226,   720,   721,   722,   723,   724,   725,
    78,  1579,   726,  1581,  1582,  1583,    79,  1585,  1586,  1227,
  1228,   816,   287,  1230,  1590,    81,  1229,  1235,  1594,  1236,
  1237,  1238,  1240,  1599,  1242,  1601,  1602,  1603,  1243,  1605,
  1606,  1254,  1255,  1257,  1258,  1261,  1267,  1275,  1280,  1281,
  1282,   534,  1615,  1616,  1617,  1618,  1619,  1620,  1285,  1308,
  1311,  1315,   535,   536,   537,   538,   539,   540,   541,   542,
   543,   544,   545,   546,   547,  1637,  1296,    78,  1639,  1316,
  1641,  1317,  1643,    79,  1297,  1298,  1646,  1320,  1648,  1649,
  1299,  1651,    81,  1300,  1654,  1302,  1656,  1303,  1304,  1305,
  1327,  1328,  1367,  1313,  1314,  1663,  1664,  1318,  1335,  1667,
  1668,  1329,  1333,  1671,  1672,   128,   129,   130,   131,   132,
  1330,   133,   134,   135,   136,  1338,  1341,   137,   138,   139,
   140,   141,  1350,  1353,  1360,   142,   143,  1382,  1380,  1368,
  1394,  1392,  1395,    78,  1381,  1383,  1393,  1396,  1399,    79,
  1400,   388,    48,    49,    50,  1401,  1426,  1402,    81,  1403,
  1407,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    48,    49,    50,   747,
  1432,  1447,  1417,  1419,  1423,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    48,    49,    50,  1437,   747,  1438,  1452,  1439,  1440,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,    48,    49,    50,  1441,  1448,  1483,
  1449,  1450,  1451,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,  1453,  1454,
  1455,  1477,  1486,  1499,  1500,  1487,  1501,   748,  1503,   749,
   750,   751,  1504,   752,   753,   754,  1509,   477,  1521,   755,
  1524,   747,   756,  1515,  1516,   757,  1519,  1526,   758,   759,
  1527,  1528,  1529,  1540,  1541,  1542,  1544,   760,   761,  1545,
  1547,  1549,   748,  1550,   749,   750,   751,    78,   752,   753,
   754,  1551,  1552,    79,   755,   747,  1553,   756,   623,  1567,
   757,  1575,    81,   758,   759,   762,  1566,  1568,   133,   134,
   135,   136,   760,   761,   137,   138,   139,   140,   141,  1569,
  1570,    78,   142,   143,  1571,  1578,  1573,    79,   747,  1572,
  1574,   658,  1597,  1410,  1614,  1621,    81,  1577,  1580,  1584,
   762,   131,   132,  1629,   133,   134,   135,   136,  1630,  1631,
   137,   138,   139,   140,   141,    78,  1632,  1633,   142,   143,
  1634,    79,   747,  1635,  1640,   676,  1337,  1676,  1412,   748,
    81,   749,   750,   751,  1636,   752,   753,   754,  1638,  1677,
  1659,   755,  1660,  1661,   756,  1662,   990,   757,   730,    78,
   758,   759,   563,  1342,   747,    79,  1088,   880,  1291,   760,
   761,  1198,  1425,   748,    81,   749,   750,   751,   185,   752,
   753,   754,   521,   285,   649,   755,   376,     0,   756,   525,
     0,   757,  1343,     0,   758,   759,     0,   762,     0,     0,
     0,     0,     0,   760,   761,     0,   748,     0,   749,   750,
   751,     0,   752,   753,   754,  1344,     0,     0,   755,     0,
     0,   756,     0,     0,   757,  1413,     0,   758,   759,     0,
     0,   762,     0,     0,     0,     0,   760,   761,  1345,     0,
   748,     0,   749,   750,   751,     0,   752,   753,   754,     0,
     0,     0,   755,     0,     0,   756,     0,     0,   757,  1414,
  1347,   758,   759,     0,   762,     0,     0,     0,     0,     0,
   760,   761,   748,     0,   749,   750,   751,     0,   752,   753,
   754,     0,  1349,     0,   755,     0,     0,   756,     0,     0,
   757,     0,  1543,   758,   759,     0,     0,     0,   762,     0,
     0,     0,   760,   761,   128,   129,   130,   131,   132,  1351,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,  1576,     0,     0,     0,
   762,   128,   129,   130,   131,   132,  1352,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,     0,     0,     0,     0,     0,  1598,  1356,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,  1357,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,  1359,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1478,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1479,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,     0,   128,   129,   130,
   131,   132,  1480,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,     0,     0,     0,   128,   129,   130,   131,   132,  1481,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,   128,   129,   130,
   131,   132,  1482,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
   128,   129,   130,   131,   132,  1548,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,   128,   129,   130,   131,   132,   209,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,     0,
   289,   128,   129,   130,   131,   132,     0,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,     0,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,     0,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     4,     0,   142,   143,     5,
     0,     6,     0,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,     0,
     0,     7,   210,   716,   717,   718,   719,     0,     8,   720,
   721,   722,   723,   724,   725,     0,     0,   726,     0,     0,
     0,     9,     0,    10,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    11,     0,     0,     0,    12,     0,     0,
     0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
     0,     0,   710,   711,   712,   713,   714,   715,   716,   717,
   718,   719,     0,    14,   720,   721,   722,   723,   724,   725,
     0,     0,   726,     0,   128,   129,   130,   131,   132,   958,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,    15,     0,    16,     0,
     0,   273,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,     0,     0,     0,   280,
    17,     0,    18,    19,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,   281,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,   282,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,   528,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,   551,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,   653,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,   655,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,   656,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,   657,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,   680,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,   682,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,   683,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,   684,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,   768,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,   780,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,   919,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,   921,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,   922,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,   923,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,   926,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,   928,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,   930,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,   931,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,   932,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1166,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1175,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1332,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1339,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1346,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1427,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1428,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1429,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1430,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1433,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1434,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1435,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1436,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1505,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1506,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1507,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1508,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1510,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1511,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1512,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1513,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1520,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1589,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1591,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1592,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1593,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1595,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1596,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1608,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1609,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1610,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1611,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1612,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1613,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1642,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1644,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1645,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1647,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,  1650,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
   128,   129,   130,   131,   132,  1652,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   128,   129,   130,   131,   132,  1665,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,   128,   129,   130,   131,   132,  1666,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   128,   129,   130,   131,
   132,  1669,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,     0,     0,  1670,   710,   711,   712,   713,   714,   715,
   716,   717,   718,   719,     0,     0,   720,   721,   722,   723,
   724,   725,     0,     0,   726,   128,   129,   130,   131,   132,
  1221,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,     0,
     0,   263,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,     0,     0,   264,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,     0,     0,   265,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,     0,   266,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,   267,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,   268,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,     0,     0,   269,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,     0,     0,
   270,   128,   129,   130,   131,   132,     0,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,     0,     0,     0,     0,   271,   128,   129,
   130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
     0,     0,     0,     0,   272,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,     0,
     0,   274,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,     0,     0,   275,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,     0,     0,   276,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,     0,   277,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,   278,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,   279,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,     0,     0,   459,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,     0,     0,
   460,   128,   129,   130,   131,   132,     0,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,     0,     0,     0,     0,   461,   128,   129,
   130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
     0,     0,     0,     0,   462,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,     0,
     0,   464,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,     0,     0,   691,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,     0,     0,   864,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,     0,  1518,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,  1565,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,   467,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,   558,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,   736,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,   933,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1060,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1067,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1203,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1204,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1205,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1206,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1207,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1209,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1210,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1211,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1212,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1431,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1555,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1556,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1557,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1558,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1559,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1560,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1561,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1562,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1600,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1604,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1622,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1623,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1624,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1625,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1626,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1627,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1653,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1655,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1657,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1658,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,  1673,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,  1674,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,   710,   711,   712,   713,   714,   715,   716,   717,
   718,   719,     0,     0,   720,   721,   722,   723,   724,   725,
     0,     0,   726,   713,   714,   715,   716,   717,   718,   719,
     0,     0,   720,   721,   722,   723,   724,   725,     0,     0,
   726
};

static const short yycheck[] = {    25,
   432,   243,   501,   245,   246,   396,   486,   809,   347,   573,
   812,   881,   254,   255,   256,   538,   407,     3,     5,     7,
  1258,     5,     5,  1261,     3,     3,     5,     5,   325,  1267,
     5,     5,     5,   424,     5,   359,   427,  1275,    11,   430,
    11,   626,     0,  1281,  1282,   369,    64,   174,    49,     3,
    62,     5,    78,    79,    80,    81,    74,     5,   199,     5,
    61,   202,    74,    11,    43,    11,    49,     5,     5,    87,
   174,   198,    45,    91,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,   418,   392,   200,     5,     5,   174,
     5,     5,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,   141,   142,     5,     7,     5,
   600,   601,   602,    11,     5,    11,   606,     5,     5,     5,
   694,   200,   696,    11,     5,     5,    10,    10,     7,     7,
     7,     7,    49,    74,   198,    49,    74,   658,    10,     3,
   198,     5,   737,     5,    10,    92,    58,    59,   960,    87,
   114,   198,   600,   601,   602,   676,    43,     5,   606,   198,
     5,     6,    49,   104,    82,   198,   500,   105,    49,    49,
   111,   199,   208,   209,    92,    76,     7,   199,    79,    91,
    10,   198,    83,    84,    85,   291,   535,    49,   199,  1001,
   102,   498,   526,    77,    77,   159,    44,     7,   199,   137,
   198,   202,   199,   196,   200,    77,   200,   697,   201,   198,
   198,    77,   198,   198,   198,   549,   199,   198,   199,   142,
   143,   711,   712,   713,   714,   715,   716,   717,   718,   719,
   720,   721,   722,   723,   724,   725,   726,   273,   728,  1487,
   198,   199,   198,   199,   280,   281,   282,    77,   198,   697,
   198,   287,   199,   289,   290,   291,   292,   199,   199,   199,
   202,   199,   202,   711,   712,   713,   714,   715,   716,   717,
   718,   719,   720,   721,   722,   723,   724,   725,   726,   196,
   728,   198,   196,   198,   198,   391,    55,   199,    62,   192,
    64,    65,   195,   198,    62,    64,    64,  1545,   199,   198,
   198,   199,   198,   199,   140,    74,    74,   198,     7,   196,
   198,   199,   198,   662,   663,   196,   196,   200,   839,   198,
   198,   198,   198,    48,   188,    64,   362,   817,   200,  1577,
    92,    93,    94,    95,   200,    64,   372,   182,    64,    64,
    66,   186,     5,     5,     6,    74,    85,    76,    11,    74,
    75,    77,   388,   200,   887,    80,    62,    82,   201,   202,
    66,    87,   468,   187,   188,   189,   190,   200,    74,   817,
   200,     3,     4,     5,     6,     5,   102,     7,   202,    42,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    74,   198,   443,   200,   445,
   446,   447,    81,   199,   748,    47,   202,   453,     7,   455,
   456,   457,   198,   200,   200,   199,    66,  1239,   464,  1241,
   199,   199,   766,   740,     3,   200,     5,   199,    61,    74,
    63,    64,   199,   169,   778,   202,   482,    61,   200,    63,
    64,    74,   198,    64,   200,   789,   790,   791,   792,   198,
   199,   497,   796,    74,   200,    88,    89,    90,   958,   199,
   199,   111,   202,   199,   199,   965,   111,   199,   199,   102,
   202,   990,    96,    97,    98,    99,   100,   101,   102,   129,
   130,   200,   528,   199,   105,   106,   107,   108,   109,   110,
   536,   537,   199,   539,   139,   202,   141,   200,   544,   545,
   958,   547,   198,   200,   200,   551,   200,   965,   200,    67,
    68,    69,    70,    71,    72,   200,   161,   198,   199,   169,
   199,     5,   974,   785,   786,   787,   788,   886,     5,   888,
   189,   190,   191,   192,  1424,  1425,   195,   799,    74,   200,
    76,    77,    78,    79,   200,   997,   188,   111,   200,   199,
   114,   895,   194,   200,   199,   899,   198,   111,   122,   123,
   114,   203,   126,   127,   200,   976,   199,   200,   122,   123,
   124,   198,   199,     5,  1026,   199,   622,   200,   199,     7,
    49,    50,    51,    52,    53,    54,    55,    56,    57,   851,
   852,    60,   195,   196,   938,    64,   940,   187,   188,   189,
   190,   191,   200,   947,   200,   195,   196,   653,    77,   655,
   656,   657,   658,   875,   201,   202,    61,     5,    63,    64,
   187,   188,   189,   190,   191,   192,   200,  1449,   195,   200,
   676,   200,   678,     5,   680,   199,   682,   683,   684,   200,
   686,   199,   189,   190,   191,   199,   908,   200,   195,   196,
   202,    96,    97,    98,    99,   100,   101,   102,     7,  1202,
  1244,  1245,  1246,   199,   174,  1208,   200,  1119,   201,   202,
   198,     3,     4,     5,   201,   202,   201,   202,   198,   199,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,   198,   199,   198,   199,  1531,
   198,   199,   198,   199,    46,   198,   199,    49,   198,   199,
   198,   199,   768,  1223,   198,   113,   198,   115,   116,   117,
   199,   119,   120,   121,   780,   198,    61,   125,    63,   198,
   128,   198,   199,   131,   198,   199,   134,   135,  1010,   198,
   199,   201,   202,  1015,   199,   143,   144,   201,   202,   198,
   199,   198,    66,     7,  1081,  1223,   201,   202,   201,   202,
     5,    96,    97,    98,    99,   100,   101,   102,   198,   199,
   842,   843,   198,   171,   541,   542,   198,  1330,   198,  1332,
   198,   198,   174,   839,   174,     5,     5,  1114,   198,     5,
   104,   198,     5,    61,   198,    63,     5,   111,   112,     5,
  1154,   199,   198,   198,  1158,   198,  1160,   174,     5,  1163,
   201,  1364,   200,     5,  1168,   129,     5,  1144,   132,   133,
  1092,   198,  1149,   198,   198,  1179,     5,  1099,    96,    97,
    98,    99,   100,   101,   102,   198,     5,     5,     5,  1193,
   198,  1195,     5,     5,   201,     5,   188,   903,   198,   905,
   198,   198,   194,   198,   155,   169,  1450,   198,   198,  1213,
  1214,   203,  1216,   919,   199,   921,   922,   923,  1421,   198,
   926,   198,   928,  1426,   930,   931,   932,   201,   200,  1432,
     3,     4,     5,     7,   200,   199,   198,   200,     7,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,     7,     7,
     7,   175,   176,   177,   178,   179,     7,   181,   182,   183,
   184,   199,   199,   187,   188,   189,   190,   191,     3,     4,
     5,   195,   196,   198,     8,   174,     7,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,     5,    96,   198,  1247,    96,    97,    98,    99,
   100,   101,   102,     7,    86,  1339,   198,    89,    90,    91,
    92,    93,  1346,    95,     7,   199,     7,     7,     7,     7,
     3,     4,     5,   202,     5,     7,   202,     7,  1362,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,     5,     7,
   196,     7,     7,     5,     7,     5,   148,   199,     7,     7,
   147,  1420,   149,   150,   151,   152,   153,   154,   181,     7,
     7,     7,  1483,     7,   187,   188,   202,     5,     5,     5,
   198,   194,     7,   196,   197,   198,   198,     5,   201,   199,
   203,     3,   205,   201,   200,   200,   200,     5,   196,   200,
     7,   156,   198,    96,   159,     5,   200,   198,   198,   198,
  1454,  1157,     6,   182,   202,  1161,  1162,   202,   198,   200,
  1166,   195,     3,  1169,  1170,  1171,  1172,   200,   198,  1175,
  1176,   198,  1178,   188,  1180,   200,   200,  1183,   200,   194,
   200,  1187,  1188,   198,  1190,   198,     6,     8,   203,  1493,
   200,     7,   198,     5,     5,     5,   113,   198,   115,   116,
   117,     5,   119,   120,   121,     5,   201,   201,   125,  1621,
   200,   128,   199,   201,   131,     5,     5,   134,   135,     5,
     5,     5,     5,     5,     5,     5,   143,   144,   181,     5,
     3,   201,     3,     5,   187,   188,     5,     5,     5,     3,
     5,   194,     5,   196,   197,   198,     5,     7,     5,     7,
   203,     5,     5,   113,   171,   115,   116,   117,     5,   119,
   120,   121,     5,     7,   200,   125,   200,   198,   128,     5,
     5,   131,   199,  1495,   134,   135,   199,     7,     7,     7,
  1502,     7,   199,   143,   144,     7,     7,     7,     7,     3,
  1296,  1297,  1298,  1299,  1300,     7,  1302,  1303,  1304,  1305,
     7,     7,     7,     3,     4,     5,     6,   202,     7,     7,
     7,   171,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,   201,   200,   199,
     7,   200,     7,    85,     7,     7,   198,    47,     7,    49,
     7,     7,     7,  1575,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,     7,     7,   187,   188,   189,   190,
   191,   192,     7,     5,   195,     3,     4,     5,     7,  1385,
  1386,  1387,  1388,  1389,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,   146,
   147,   148,   149,   150,   151,   152,   153,   154,     7,     7,
     7,  1427,  1428,  1429,  1430,     7,     7,  1433,  1434,  1435,
  1436,     7,     7,     7,     5,     5,     5,     5,   200,   200,
     7,     7,     3,     4,     5,     6,   201,  1453,     7,  1455,
     7,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,     7,     7,     7,     7,
     7,     7,   198,   201,     7,   202,  1492,   202,   188,   202,
   201,     5,   202,   202,   194,   198,   196,     7,   198,  1505,
  1506,  1507,  1508,   203,  1510,  1511,  1512,  1513,     3,     4,
     5,    55,   202,   202,  1520,   202,   202,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   201,     5,   187,   188,   189,   190,   191,   192,
   188,  1567,   195,  1569,  1570,  1571,   194,  1573,  1574,     7,
     7,   204,   200,     7,  1580,   203,    87,   201,  1584,     7,
     7,     7,     7,  1589,     7,  1591,  1592,  1593,     7,  1595,
  1596,     7,     7,     5,   198,   198,   198,   198,     5,   198,
   198,   145,  1608,  1609,  1610,  1611,  1612,  1613,   198,     3,
   201,     7,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,  1631,   198,   188,  1634,     5,
  1636,     5,  1638,   194,   198,   198,  1642,     7,  1644,  1645,
   198,  1647,   203,   198,  1650,   198,  1652,   198,   198,   198,
     5,     5,   198,   201,   201,  1661,  1662,   200,     7,  1665,
  1666,   201,   201,  1669,  1670,   175,   176,   177,   178,   179,
   202,   181,   182,   183,   184,     7,     7,   187,   188,   189,
   190,   191,     7,     7,   201,   195,   196,   199,   201,   198,
     7,   199,     5,   188,   201,   201,   199,     7,     7,   194,
     7,   196,     3,     4,     5,     7,   202,     7,   203,     7,
     7,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,     3,     4,     5,     5,
   202,    86,     7,     7,     7,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     3,     4,     5,     7,     5,     7,   118,     7,     7,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,     3,     4,     5,     5,   201,     5,
   202,   202,   201,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,   202,   202,
   202,     7,     7,     5,     5,   198,     5,   113,   200,   115,
   116,   117,   199,   119,   120,   121,   199,   198,     5,   125,
     5,     5,   128,   201,   201,   131,   201,     5,   134,   135,
     7,     7,     7,     7,     7,     7,     7,   143,   144,   198,
     7,     7,   113,     7,   115,   116,   117,   188,   119,   120,
   121,     7,     7,   194,   125,     5,     7,   128,   199,   198,
   131,    41,   203,   134,   135,   171,   201,   199,   181,   182,
   183,   184,   143,   144,   187,   188,   189,   190,   191,   198,
   198,   188,   195,   196,   198,     7,   198,   194,     5,   199,
   198,   198,     7,   199,   103,     5,   203,   198,   198,   198,
   171,   178,   179,   199,   181,   182,   183,   184,   199,   198,
   187,   188,   189,   190,   191,   188,   199,   199,   195,   196,
   198,   194,     5,     7,   199,   198,     7,     0,   199,   113,
   203,   115,   116,   117,   198,   119,   120,   121,   198,     0,
   199,   125,   199,   198,   128,   198,   867,   131,   610,   188,
   134,   135,   473,     7,     5,   194,   951,   743,  1198,   143,
   144,  1054,  1368,   113,   203,   115,   116,   117,    98,   119,
   120,   121,   436,   208,   519,   125,   262,    -1,   128,   441,
    -1,   131,     7,    -1,   134,   135,    -1,   171,    -1,    -1,
    -1,    -1,    -1,   143,   144,    -1,   113,    -1,   115,   116,
   117,    -1,   119,   120,   121,     7,    -1,    -1,   125,    -1,
    -1,   128,    -1,    -1,   131,   199,    -1,   134,   135,    -1,
    -1,   171,    -1,    -1,    -1,    -1,   143,   144,     7,    -1,
   113,    -1,   115,   116,   117,    -1,   119,   120,   121,    -1,
    -1,    -1,   125,    -1,    -1,   128,    -1,    -1,   131,   199,
     7,   134,   135,    -1,   171,    -1,    -1,    -1,    -1,    -1,
   143,   144,   113,    -1,   115,   116,   117,    -1,   119,   120,
   121,    -1,     7,    -1,   125,    -1,    -1,   128,    -1,    -1,
   131,    -1,   199,   134,   135,    -1,    -1,    -1,   171,    -1,
    -1,    -1,   143,   144,   175,   176,   177,   178,   179,     7,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   199,    -1,    -1,    -1,
   171,   175,   176,   177,   178,   179,     7,   181,   182,   183,
   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,
    -1,   195,   196,    -1,    -1,    -1,    -1,    -1,   199,     7,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,     7,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,     7,   175,   176,   177,   178,
   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,     7,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,     7,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,
   178,   179,     7,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,
    -1,    -1,    -1,    -1,   175,   176,   177,   178,   179,     7,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,   175,   176,   177,
   178,   179,     7,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,
   175,   176,   177,   178,   179,     7,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,   175,   176,   177,   178,   179,     8,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,    -1,
     8,   175,   176,   177,   178,   179,    -1,   181,   182,   183,
   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,
    -1,   195,   196,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,    -1,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,     5,    -1,   195,   196,     9,
    -1,    11,    -1,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,    -1,
    -1,    41,   204,   181,   182,   183,   184,    -1,    48,   187,
   188,   189,   190,   191,   192,    -1,    -1,   195,    -1,    -1,
    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
    -1,    -1,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,    -1,   103,   187,   188,   189,   190,   191,   192,
    -1,    -1,   195,    -1,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   136,    -1,   138,    -1,
    -1,   202,   175,   176,   177,   178,   179,    -1,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,    -1,   202,
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
   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,
    -1,    -1,    -1,   202,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,   192,    -1,    -1,   195,   175,   176,   177,   178,   179,
   201,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
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
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,   199,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,   192,
    -1,    -1,   195,   178,   179,   180,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,   192,    -1,    -1,
   195
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
	  yyerror("Dof Definition out of Context") ;
	else
	  yyerror("More than one Dof Definition in Expression") ;
	break ;
      case QUANTITY_NODOF :
	if (Current_DofIndexInWholeQuantity == -2)
	  yyerror("NoDof Definition out of Context") ;
	else if (Current_NoDofIndexInWholeQuantity == -1)
	  Current_NoDofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else
	  yyerror("More than one NoDof Definition in Expression") ;
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
	yyerror("Dof definition out of context") ;
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
	  yyerror("Incompatible Type of Integration Method") ;
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
	  yyerror("Incompatible Type of Integration Method") ;
	  break ;
	}
	break ;

      default :
	yyerror("Incompatible Type of Integration Method") ;
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
	  yyerror("Missing DefineQuantity in Equation");
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
	yyerror("Unrecognized Quantity Structure in Equation");
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
      PostQuantity_S.Type = NONCUMULATIVE ;
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 445:
#line 4752 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 446:
#line 4755 "yacc.y"
{ PostQuantity_S.Type =
	Get_DefineForString(PostQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of PostQuantity: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(PostQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 447:
#line 4764 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 448:
#line 4770 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 449:
#line 4775 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 450:
#line 4781 "yacc.y"
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
#line 4794 "yacc.y"
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
#line 4808 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 454:
#line 4815 "yacc.y"
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
#line 4843 "yacc.y"
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
#line 4852 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 457:
#line 4853 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 458:
#line 4859 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 459:
#line 4868 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 460:
#line 4885 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 462:
#line 4897 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 464:
#line 4904 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 466:
#line 4916 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 467:
#line 4923 "yacc.y"
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
#line 4935 "yacc.y"
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
#line 4945 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 470:
#line 4950 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 471:
#line 4956 "yacc.y"
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
#line 4973 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 473:
#line 4983 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 474:
#line 4986 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 475:
#line 4990 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 476:
#line 5001 "yacc.y"
{
      PostSubOperation_S.Type = POP_PLOT ;  /* Warning: to be removed ! */
    ;
    break;}
case 477:
#line 5006 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 478:
#line 5015 "yacc.y"
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
#line 5027 "yacc.y"
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

      if((k=((struct PostQuantity*)
	     List_Pointer(InteractivePostProcessing_S.PostQuantity, i))->Type) == 
	 ((struct PostQuantity*)List_Pointer(InteractivePostProcessing_S.PostQuantity, j))->Type){
	vyyerror("PostQuantities '%s' and '%s' should not be of same type (%s)", 
		 yyvsp[-5].c, yyvsp[-2].c, Get_StringForDefine(PostQuantity_Type, k)) ;
      }      
      Free(yyvsp[-5].c) ; Free(yyvsp[-2].c) ;
    ;
    break;}
case 480:
#line 5052 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 481:
#line 5053 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 482:
#line 5054 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 483:
#line 5055 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 484:
#line 5061 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 485:
#line 5063 "yacc.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 486:
#line 5069 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 487:
#line 5078 "yacc.y"
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
case 488:
#line 5092 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 489:
#line 5100 "yacc.y"
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
case 490:
#line 5113 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 491:
#line 5123 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 492:
#line 5132 "yacc.y"
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
case 493:
#line 5146 "yacc.y"
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
case 494:
#line 5165 "yacc.y"
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
case 495:
#line 5189 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 496:
#line 5195 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 497:
#line 5202 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 498:
#line 5211 "yacc.y"
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
case 499:
#line 5225 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 500:
#line 5233 "yacc.y"
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
case 501:
#line 5246 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 502:
#line 5256 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 503:
#line 5265 "yacc.y"
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
case 504:
#line 5279 "yacc.y"
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
case 505:
#line 5298 "yacc.y"
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
case 506:
#line 5320 "yacc.y"
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
case 507:
#line 5340 "yacc.y"
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
case 509:
#line 5360 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 510:
#line 5367 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 511:
#line 5374 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 512:
#line 5381 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 513:
#line 5385 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 514:
#line 5389 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 515:
#line 5393 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 516:
#line 5397 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 517:
#line 5406 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 518:
#line 5411 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 519:
#line 5416 "yacc.y"
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
case 520:
#line 5436 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Plot") ;  	
    ;
    break;}
case 521:
#line 5443 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 522:
#line 5450 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 523:
#line 5458 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 524:
#line 5466 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 525:
#line 5473 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 526:
#line 5480 "yacc.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 527:
#line 5484 "yacc.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 528:
#line 5497 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 529:
#line 5503 "yacc.y"
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
case 530:
#line 5550 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 532:
#line 5561 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 533:
#line 5564 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 534:
#line 5570 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 535:
#line 5571 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 537:
#line 5579 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 538:
#line 5582 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 539:
#line 5591 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 540:
#line 5594 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 541:
#line 5605 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 542:
#line 5611 "yacc.y"
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
case 543:
#line 5630 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 544:
#line 5636 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 545:
#line 5642 "yacc.y"
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
case 546:
#line 5654 "yacc.y"
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
case 549:
#line 5705 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 550:
#line 5711 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 551:
#line 5717 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 552:
#line 5728 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 553:
#line 5729 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 554:
#line 5730 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 555:
#line 5731 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 556:
#line 5732 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 557:
#line 5733 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 558:
#line 5734 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 559:
#line 5735 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 560:
#line 5736 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 561:
#line 5737 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 562:
#line 5738 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 563:
#line 5739 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 564:
#line 5740 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 565:
#line 5741 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 566:
#line 5742 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 567:
#line 5743 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 568:
#line 5744 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 569:
#line 5745 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 570:
#line 5746 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 571:
#line 5747 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 572:
#line 5748 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 573:
#line 5751 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 574:
#line 5752 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 575:
#line 5753 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 576:
#line 5754 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 577:
#line 5755 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 578:
#line 5756 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 579:
#line 5757 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 580:
#line 5758 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 581:
#line 5759 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 582:
#line 5760 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 583:
#line 5761 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 584:
#line 5762 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 585:
#line 5763 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 586:
#line 5764 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 587:
#line 5765 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 588:
#line 5766 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 589:
#line 5767 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 590:
#line 5768 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 591:
#line 5769 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 592:
#line 5770 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 593:
#line 5771 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 594:
#line 5772 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 595:
#line 5773 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 596:
#line 5774 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 597:
#line 5775 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 598:
#line 5776 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 599:
#line 5777 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 600:
#line 5778 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 601:
#line 5779 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 602:
#line 5780 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 603:
#line 5781 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 604:
#line 5782 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 605:
#line 5783 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 606:
#line 5784 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 607:
#line 5785 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 608:
#line 5786 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 609:
#line 5787 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 610:
#line 5788 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 611:
#line 5789 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 612:
#line 5790 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 613:
#line 5795 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 614:
#line 5796 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 615:
#line 5797 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 616:
#line 5798 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 617:
#line 5799 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 618:
#line 5800 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 619:
#line 5801 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 620:
#line 5803 "yacc.y"
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
case 621:
#line 5822 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 622:
#line 5825 "yacc.y"
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
#line 5841 "yacc.y"



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


