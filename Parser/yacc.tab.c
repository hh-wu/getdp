
/*  A Bison parser, made from yacc.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	tINT	258
#define	tFLOAT	259
#define	tSTRING	260
#define	tBIGSTR	261
#define	tEND	262
#define	tDOTS	263
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
#define	tGroup	296
#define	tDefineGroup	297
#define	tAll	298
#define	tInSupport	299
#define	tDefineFunction	300
#define	tList	301
#define	tListAlt	302
#define	tConstraint	303
#define	tRegion	304
#define	tSubRegion	305
#define	tRegionRef	306
#define	tSubRegionRef	307
#define	tFilter	308
#define	tCoefficient	309
#define	tValue	310
#define	tTimeFunction	311
#define	tBranch	312
#define	tNode	313
#define	tLoop	314
#define	tNameOfResolution	315
#define	tJacobian	316
#define	tCase	317
#define	tIntegration	318
#define	tType	319
#define	tSubType	320
#define	tCriterion	321
#define	tGeoElement	322
#define	tNumberOfPoints	323
#define	tMaxNumberOfPoints	324
#define	tNumberOfDivisions	325
#define	tMaxNumberOfDivisions	326
#define	tStoppingCriterion	327
#define	tFunctionSpace	328
#define	tName	329
#define	tBasisFunction	330
#define	tNameOfCoef	331
#define	tFunction	332
#define	tSupport	333
#define	tEntity	334
#define	tSubSpace	335
#define	tNameOfBasisFunction	336
#define	tGlobalQuantity	337
#define	tEntityType	338
#define	tEntitySubType	339
#define	tNameOfConstraint	340
#define	tFormulation	341
#define	tQuantity	342
#define	tNameOfSpace	343
#define	tIndexOfSystem	344
#define	tSymmetry	345
#define	tEquation	346
#define	tGalerkin	347
#define	tdeRham	348
#define	tGlobalTerm	349
#define	tGlobalEquation	350
#define	tDt	351
#define	tDtDof	352
#define	tDtDt	353
#define	tDtDtDof	354
#define	tJacNL	355
#define	tNeverDt	356
#define	tIn	357
#define	tResolution	358
#define	tDefineSystem	359
#define	tNameOfFormulation	360
#define	tNameOfMesh	361
#define	tFrequency	362
#define	tSolver	363
#define	tOriginSystem	364
#define	tDestinationSystem	365
#define	tOperation	366
#define	tOperationEnd	367
#define	tSetTime	368
#define	tDTime	369
#define	tSetFrequency	370
#define	tFourierTransform	371
#define	tIf	372
#define	tElse	373
#define	tLanczos	374
#define	tUpdate	375
#define	tTimeLoopTheta	376
#define	tTime0	377
#define	tTimeMax	378
#define	tTheta	379
#define	tTimeLoopNewmark	380
#define	tBeta	381
#define	tGamma	382
#define	tIterativeLoop	383
#define	tNbrMaxIteration	384
#define	tRelaxationFactor	385
#define	tIterativeTimeReduction	386
#define	tDivisionCoefficient	387
#define	tChangeOfState	388
#define	tChangeOfCoordinates	389
#define	tSystemCommand	390
#define	tPostProcessing	391
#define	tNameOfSystem	392
#define	tPostOperation	393
#define	tNameOfPostProcessing	394
#define	tUsingPost	395
#define	tAppend	396
#define	tPlot	397
#define	tPrint	398
#define	tWrite	399
#define	tAdapt	400
#define	tOnRegion	401
#define	tOnGrid	402
#define	tOnCut	403
#define	tOnPoint	404
#define	tOnLine	405
#define	tOnPlane	406
#define	tOnBox	407
#define	tWithArgument	408
#define	tFile	409
#define	tDepth	410
#define	tDimension	411
#define	tTimeStep	412
#define	tHarmonicToTime	413
#define	tFormat	414
#define	tHeader	415
#define	tFooter	416
#define	tSkin	417
#define	tSmoothing	418
#define	tTarget	419
#define	tSort	420
#define	tIso	421
#define	tFlag	422
#define	tExit	423
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

/* $Id: yacc.tab.c,v 1.16 2000-10-18 09:21:02 geuzaine Exp $ */

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



#define	YYFINAL		1537
#define	YYFLAG		-32768
#define	YYNTBASE	204

#define YYTRANSLATE(x) ((unsigned)(x) <= 438 ? yytranslate[x] : 385)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   192,     2,   194,   195,   189,     2,     2,   201,
   202,   187,   185,   200,   186,   203,   188,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   179,
     2,   180,   173,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   198,     2,   199,   193,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   196,     2,   197,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
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
   166,   167,   168,   169,   170,   171,   172,   174,   175,   176,
   177,   178,   181,   182,   183,   184,   190,   191
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
  1715,  1716,  1725,  1726,  1727,  1731,  1739,  1748,  1767,  1770,
  1775,  1777,  1779,  1781,  1783,  1786,  1811,  1814,  1815,  1830,
  1839,  1860,  1890,  1929,  1930,  1933,  1937,  1942,  1947,  1951,
  1954,  1958,  1962,  1966,  1970,  1974,  1978,  1982,  1986,  1990,
  1994,  1998,  2002,  2006,  2012,  2013,  2016,  2017,  2021,  2023,
  2027,  2028,  2030,  2034,  2036,  2038,  2042,  2046,  2050,  2057,
  2062,  2067,  2074,  2084,  2090,  2091,  2095,  2101,  2107,  2109,
  2111,  2113,  2115,  2117,  2119,  2121,  2123,  2125,  2127,  2129,
  2131,  2133,  2135,  2137,  2139,  2141,  2143,  2145,  2147,  2149,
  2151,  2155,  2158,  2161,  2165,  2169,  2173,  2177,  2181,  2185,
  2189,  2193,  2197,  2201,  2205,  2209,  2213,  2217,  2222,  2227,
  2232,  2237,  2242,  2247,  2252,  2257,  2262,  2267,  2274,  2279,
  2284,  2289,  2294,  2299,  2304,  2311,  2318,  2325,  2331,  2334,
  2336,  2338,  2340,  2342,  2344,  2346,  2348,  2350,  2352
};

static const short yyrhs[] = {    -1,
   205,   206,     0,     0,     0,   206,   207,   208,     0,    41,
   196,   211,   197,     0,    77,   196,   231,   197,     0,    48,
   196,   262,   197,     0,    61,   196,   247,   197,     0,    63,
   196,   253,   197,     0,    73,   196,   269,   197,     0,    86,
   196,   290,   197,     0,   103,   196,   316,   197,     0,   136,
   196,   346,   197,     0,   138,   196,   358,   197,     0,   362,
     0,   379,     0,     9,   384,     0,   209,     0,   168,     7,
     0,   170,     7,     0,   170,     5,     7,     0,   171,     7,
     0,     0,   210,   366,     0,     0,     0,   211,   212,   213,
     0,     5,   172,   215,     7,     0,     5,   230,   172,   215,
     7,     0,     0,     5,   228,   172,   214,   215,     7,     0,
    42,   198,   226,   199,     7,     0,   379,     0,     0,     0,
   219,   198,   216,   220,   217,   221,   199,     0,   194,   223,
     0,   215,     0,     5,   229,     0,    49,     0,     5,     0,
   223,     0,    43,     0,     0,   227,   222,   223,     0,   227,
    44,     5,   229,     0,     5,     0,   225,     0,   196,   224,
   197,     0,     0,   224,   227,   225,     0,   224,   227,   186,
   225,     0,     3,     0,     3,     8,     3,     0,     3,     8,
   198,   382,   199,     3,     0,     5,     0,     5,   196,   382,
   197,     0,     5,   196,   197,     0,     0,   226,   227,     5,
     0,   226,   227,     5,   196,   382,   197,     0,     0,   200,
     0,   196,   194,   382,   197,     0,     0,   196,   197,     0,
   196,   382,   197,     0,     0,   231,   232,     0,    45,   198,
   233,   199,     7,     0,     5,   198,   199,   172,   234,     7,
     0,     5,   198,   218,   199,   172,   234,     7,     0,   379,
     0,     0,   233,   227,     5,     0,    10,   198,   382,   199,
     0,    77,   198,     5,   199,     0,     0,   235,   236,     0,
     0,   237,   238,     0,   241,     0,     0,     0,   238,   173,
   239,   238,     8,   240,   238,     0,   238,   187,   238,     0,
   238,   190,   238,     0,    40,   198,   238,   200,   238,   199,
     0,   238,   188,   238,     0,   238,   185,   238,     0,   238,
   186,   238,     0,   238,   189,   238,     0,   238,   193,   238,
     0,   238,   179,   238,     0,   238,   180,   238,     0,   238,
   181,   238,     0,   238,   182,   238,     0,   238,   177,   238,
     0,   238,   176,   238,     0,   238,   178,   238,     0,   238,
   174,   238,     0,   238,   175,   238,     0,   186,   238,     0,
   185,   238,     0,   192,   238,     0,   201,   238,   202,     0,
   383,     0,   381,   244,   246,     0,     5,   315,     0,   315,
     0,   315,   244,     0,     0,    96,   242,   198,   236,   199,
     0,    37,   198,   315,   199,     0,    39,   198,   315,   199,
     0,     0,    38,   243,   198,   236,   200,   218,   199,     0,
   179,     5,   180,   198,   236,   199,     0,   195,     5,     0,
   195,   157,     0,   195,   114,     0,   195,     3,     0,   241,
   194,     3,     0,   194,     3,     0,   198,   203,   199,     0,
   198,   199,     0,   198,   245,   199,     0,   238,     0,   245,
   200,   238,     0,     0,   196,   377,   197,     0,   196,    49,
   198,   218,   199,   197,     0,   196,    46,   198,     5,   199,
   197,     0,     0,   247,   196,   248,   197,     0,     0,   248,
   249,     0,    74,     5,     7,     0,    62,   196,   250,   197,
     0,     0,   250,   196,   251,   197,     0,     0,   251,   252,
     0,    49,   218,     7,     0,    49,    43,     7,     0,    61,
     5,   246,     7,     0,     0,   253,   196,   254,   197,     0,
     0,   254,   255,     0,    74,     5,     7,     0,    66,   234,
     7,     0,    62,   196,   256,   197,     0,     0,   256,   196,
   257,   197,     0,     0,   257,   258,     0,    64,     5,     7,
     0,    65,     5,     7,     0,    62,   196,   259,   197,     0,
     0,   259,   196,   260,   197,     0,     0,   260,   261,     0,
    67,     5,     7,     0,    68,   382,     7,     0,    69,   382,
     7,     0,    70,   382,     7,     0,    71,   382,     7,     0,
    72,   382,     7,     0,     0,   262,   263,     0,   196,   264,
   197,     0,   379,     0,     0,   264,   265,     0,    74,     5,
     7,     0,    74,     5,   228,     7,     0,    64,     5,     7,
     0,    62,   196,   266,   197,     0,    62,     5,   196,   266,
   197,     0,     0,   266,   196,   267,   197,     0,     0,   267,
   268,     0,    64,     5,     7,     0,    49,   218,     7,     0,
    50,   218,     7,     0,    56,   234,     7,     0,    55,   234,
     7,     0,    60,     5,     7,     0,    57,   196,     3,   227,
     3,   197,     7,     0,    51,   218,     7,     0,    52,   218,
     7,     0,    77,   234,     7,     0,    54,   234,     7,     0,
    53,   234,     7,     0,    77,   198,   234,   200,   234,   199,
     7,     0,    54,   198,   234,   200,   234,   199,     7,     0,
    53,   198,   234,   200,   234,   199,     7,     0,     0,   269,
   270,     0,   196,   271,   197,     0,   379,     0,     0,   271,
   272,     0,    74,     5,     7,     0,    74,     5,   228,     7,
     0,    64,     5,     7,     0,    75,   196,   273,   197,     0,
    80,   196,   279,   197,     0,    82,   196,   284,   197,     0,
    48,   196,   287,   197,     0,     0,   273,   196,   274,   197,
     0,     0,   274,   275,     0,    74,     5,     7,     0,    76,
     5,     7,     0,    76,     5,   228,     7,     0,    77,     5,
   276,     7,     0,    78,   218,     7,     0,    79,   218,     7,
     0,     0,     0,     0,   196,    87,     5,     7,    86,     5,
   228,     7,   277,    41,   218,     7,   278,   103,     5,   229,
     7,   197,     0,     0,   279,   196,   280,   197,     0,     0,
   280,   281,     0,    74,     5,     7,     0,    81,   282,     7,
     0,     5,     0,   196,   283,   197,     0,     0,   283,   227,
     5,     0,     0,   284,   196,   285,   197,     0,     0,   285,
   286,     0,    74,     5,     7,     0,    64,     5,     7,     0,
    76,     5,     7,     0,     0,   287,   196,   288,   197,     0,
     0,   288,   289,     0,    76,     5,     7,     0,    79,   219,
    85,     5,     7,     0,    83,   219,     7,     0,    84,   222,
     7,     0,    85,     5,   229,     7,     0,     0,   290,   291,
     0,   196,   292,   197,     0,   379,     0,     0,   292,   293,
     0,    74,     5,     7,     0,    74,     5,   228,     7,     0,
    64,     5,     7,     0,    87,   196,   294,   197,     0,    91,
   196,   300,   197,     0,     0,   294,   196,   295,   197,     0,
     0,   295,   296,     0,    74,     5,     7,     0,    64,    82,
     7,     0,    64,    92,     7,     0,    64,     5,     7,     0,
     0,    88,     5,   229,   297,   299,     7,     0,    89,     3,
     7,     0,     0,   198,   298,   236,   199,     7,     0,   102,
   218,     7,     0,    63,     5,     7,     0,    61,     5,     7,
     0,    90,     3,     7,     0,     0,   198,     5,   199,     0,
     0,   300,   301,     0,    92,   196,   306,   197,     0,    93,
   196,   306,   197,     0,    94,   196,   310,   197,     0,    95,
   196,   302,   197,     0,     0,   302,   303,     0,    64,     5,
     7,     0,    85,     5,     7,     0,   196,   304,   197,     0,
     0,   304,   305,     0,    58,   315,     7,     0,    59,   315,
     7,     0,    91,   315,     7,     0,   102,   218,     7,     0,
     0,   306,   307,     0,     0,     0,   314,   198,   308,   236,
   309,   200,   236,   199,     7,     0,   102,   218,     7,     0,
    61,     5,     7,     0,    63,     5,     7,     0,     0,   310,
   311,     0,   102,   218,     7,     0,     0,     0,   314,   198,
   312,   236,   313,   200,   315,   199,     7,     0,     0,    96,
     0,    97,     0,    98,     0,    99,     0,   100,     0,   101,
     0,   196,     5,     5,   197,     0,   196,     5,   197,     0,
     0,   316,   317,     0,   196,   318,   197,     0,   379,     0,
     0,   318,   319,     0,    74,     5,     7,     0,    74,     5,
   228,     7,     0,   104,   196,   321,   197,     0,     0,   111,
   320,   196,   328,   197,     0,     0,   321,   196,   322,   197,
     0,     0,   322,   323,     0,    74,     5,     7,     0,    64,
     5,     7,     0,   105,   324,     7,     0,   106,   384,     7,
     0,   109,   326,     7,     0,   110,     5,     7,     0,   107,
   376,     7,     0,   108,   384,     7,     0,     5,   229,     0,
   196,   325,   197,     0,     0,   325,   227,     5,     0,     5,
     0,   196,   327,   197,     0,     0,   327,   227,     5,     0,
     0,   328,   329,     0,     5,     5,     7,     0,   113,   234,
     7,     0,   121,   196,   335,   197,     0,   125,   196,   337,
   197,     0,   128,   196,   339,   197,     0,   131,   196,   341,
   197,     0,     5,   198,     5,   199,     7,     0,   113,   198,
   234,   199,     7,     0,   169,     7,     0,   117,   198,   234,
   199,   196,   328,   197,     0,   117,   198,   234,   199,   196,
   328,   197,   118,   196,   328,   197,     0,   115,   198,     5,
   200,   234,   199,     7,     0,   120,   198,     5,   200,   234,
   199,     7,     0,   116,   198,     5,   200,     5,   200,   376,
   199,     7,     0,   119,   198,     5,   200,   382,   200,   376,
   200,   382,   199,     7,     0,   121,   198,   382,   200,   382,
   200,   234,   200,   234,   199,   196,   328,   197,     0,   125,
   198,   382,   200,   382,   200,   234,   200,   382,   200,   382,
   199,   196,   328,   197,     0,     0,   143,   330,   198,   332,
   333,   199,     7,     0,     0,   144,   331,   198,   332,   333,
   199,     7,     0,   134,   198,   218,   200,   234,   199,     7,
     0,   135,     6,     7,     0,   374,     0,     5,     0,     0,
   333,   334,     0,   200,   154,   384,     0,   200,   157,   376,
     0,   200,   376,     0,     0,   335,   336,     0,   122,   382,
     7,     0,   123,   382,     7,     0,   114,   234,     7,     0,
   124,   234,     7,     0,   111,   196,   328,   197,     0,     0,
   337,   338,     0,   122,   382,     7,     0,   123,   382,     7,
     0,   114,   234,     7,     0,   126,   382,     7,     0,   127,
   382,     7,     0,   111,   196,   328,   197,     0,     0,   339,
   340,     0,   129,   382,     7,     0,   130,   234,     7,     0,
    66,   382,     7,     0,   167,   382,     7,     0,   111,   196,
   328,   197,     0,     0,   341,   342,     0,   129,   382,     7,
     0,   132,   382,     7,     0,    66,   382,     7,     0,   167,
   382,     7,     0,   104,     5,     7,     0,   133,   196,   343,
   197,     0,   111,   196,   328,   197,     0,   112,   196,   328,
   197,     0,     0,   343,   196,   344,   197,     0,     0,   344,
   345,     0,    64,     5,     7,     0,    87,     5,     7,     0,
   102,   218,     7,     0,    66,   382,     7,     0,    77,   234,
     7,     0,   167,     5,     7,     0,     0,   346,   347,     0,
   196,   348,   197,     0,   379,     0,     0,   348,   349,     0,
    74,     5,     7,     0,    74,     5,   228,     7,     0,   105,
     5,   229,     7,     0,   137,     5,     7,     0,    87,   196,
   350,   197,     0,     0,   350,   196,   351,   197,     0,     0,
   351,   352,     0,    74,     5,     7,     0,    64,     5,     7,
     0,    55,   196,   353,   197,     0,     0,   353,    92,   196,
   354,   197,     0,   353,     5,   196,   354,   197,     0,     0,
   354,   355,     0,     0,   314,   198,   356,   236,   199,     7,
     0,    64,     5,     7,     0,     0,   102,   357,   218,     7,
     0,    61,     5,     7,     0,    63,     5,     7,     0,     0,
   358,   359,     0,   196,   360,   197,     0,   379,     0,     0,
   360,   361,     0,    74,     5,     7,     0,   139,     5,     7,
     0,   159,     5,     7,     0,   141,   384,     7,     0,   111,
   196,   364,   197,     0,     0,   138,     5,   140,     5,   363,
   196,   364,   197,     0,     0,     0,   364,   365,   366,     0,
   142,   198,   367,   369,   371,   199,     7,     0,   143,   198,
   367,   146,   218,   371,   199,     7,     0,   143,   198,   367,
   146,   218,   153,     5,   196,   382,   200,   382,   197,   196,
   382,   197,   371,   199,     7,     0,     5,   200,     0,     5,
   368,     5,   200,     0,   187,     0,   188,     0,   185,     0,
   186,     0,   146,   218,     0,   148,   196,   196,   382,   200,
   382,   200,   382,   197,   196,   382,   200,   382,   200,   382,
   197,   196,   382,   200,   382,   200,   382,   197,   197,     0,
   147,   218,     0,     0,   147,   196,   234,   200,   234,   200,
   234,   197,   196,   376,   370,   200,   376,   197,     0,   149,
   196,   382,   200,   382,   200,   382,   197,     0,   150,   196,
   196,   382,   200,   382,   200,   382,   197,   196,   382,   200,
   382,   200,   382,   197,   197,   196,   382,   197,     0,   151,
   196,   196,   382,   200,   382,   200,   382,   197,   196,   382,
   200,   382,   200,   382,   197,   196,   382,   200,   382,   200,
   382,   197,   197,   196,   382,   200,   382,   197,     0,   152,
   196,   196,   382,   200,   382,   200,   382,   197,   196,   382,
   200,   382,   200,   382,   197,   196,   382,   200,   382,   200,
   382,   197,   196,   382,   200,   382,   200,   382,   197,   197,
   196,   382,   200,   382,   200,   382,   197,     0,     0,   371,
   372,     0,   200,   154,   384,     0,   200,   154,   180,   384,
     0,   200,   154,   184,   384,     0,   200,   155,   382,     0,
   200,   162,     0,   200,   163,   382,     0,   200,   158,   382,
     0,   200,   159,     5,     0,   200,   160,   373,     0,   200,
   161,   373,     0,   200,   159,   373,     0,   200,   156,   382,
     0,   200,   157,   376,     0,   200,   145,     5,     0,   200,
   165,     5,     0,   200,   164,   382,     0,   200,    55,   376,
     0,   200,   166,   382,     0,   200,   166,   196,   377,   197,
     0,     0,   373,     6,     0,     0,   196,   375,   197,     0,
   234,     0,   375,   200,   234,     0,     0,   382,     0,   196,
   377,   197,     0,   382,     0,   378,     0,   377,   200,   382,
     0,   377,   200,   378,     0,   382,     8,   382,     0,   382,
     8,   198,   382,   199,   382,     0,     5,   172,   382,     7,
     0,     5,   172,     6,     7,     0,     5,   172,   196,   377,
   197,     7,     0,     5,   172,    47,   198,     5,   200,     5,
   199,     7,     0,    11,   198,   380,   199,     7,     0,     0,
   380,   227,     5,     0,   380,   227,     5,   172,   382,     0,
   380,   227,     5,   172,     6,     0,    17,     0,    18,     0,
    19,     0,    20,     0,    21,     0,    22,     0,    23,     0,
    24,     0,    25,     0,    26,     0,    27,     0,    28,     0,
    29,     0,    30,     0,    31,     0,    32,     0,    33,     0,
    34,     0,    35,     0,    36,     0,     5,     0,   383,     0,
   201,   382,   202,     0,   186,   382,     0,   192,   382,     0,
   382,   186,   382,     0,   382,   185,   382,     0,   382,   187,
   382,     0,   382,   188,   382,     0,   382,   189,   382,     0,
   382,   193,   382,     0,   382,   179,   382,     0,   382,   180,
   382,     0,   382,   181,   382,     0,   382,   182,   382,     0,
   382,   177,   382,     0,   382,   176,   382,     0,   382,   174,
   382,     0,   382,   175,   382,     0,    17,   198,   382,   199,
     0,    18,   198,   382,   199,     0,    19,   198,   382,   199,
     0,    20,   198,   382,   199,     0,    21,   198,   382,   199,
     0,    22,   198,   382,   199,     0,    23,   198,   382,   199,
     0,    24,   198,   382,   199,     0,    25,   198,   382,   199,
     0,    26,   198,   382,   199,     0,    27,   198,   382,   200,
   382,   199,     0,    28,   198,   382,   199,     0,    29,   198,
   382,   199,     0,    30,   198,   382,   199,     0,    31,   198,
   382,   199,     0,    32,   198,   382,   199,     0,    33,   198,
   382,   199,     0,    34,   198,   382,   200,   382,   199,     0,
    35,   198,   382,   200,   382,   199,     0,    36,   198,   382,
   200,   382,   199,     0,   382,   173,   382,     8,   382,     0,
   382,   194,     0,     4,     0,     3,     0,    12,     0,    13,
     0,    14,     0,    15,     0,    16,     0,     5,     0,     6,
     0,     5,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   313,   350,   388,   391,   394,   397,   400,   401,   402,   403,
   404,   405,   406,   407,   408,   410,   412,   414,   419,   428,
   432,   436,   439,   441,   449,   463,   466,   467,   470,   475,
   478,   480,   483,   485,   489,   497,   508,   517,   526,   533,
   568,   573,   583,   586,   600,   605,   608,   657,   669,   695,
   700,   715,   733,   754,   760,   769,   783,   817,   830,   850,
   854,   864,   881,   881,   884,   890,   893,   896,   906,   909,
   912,   916,   936,   980,   984,   987,  1004,  1013,  1020,  1023,
  1029,  1035,  1042,  1046,  1059,  1074,  1088,  1094,  1100,  1106,
  1112,  1118,  1124,  1130,  1136,  1142,  1148,  1154,  1160,  1166,
  1172,  1178,  1184,  1191,  1197,  1199,  1208,  1212,  1218,  1296,
  1330,  1340,  1353,  1355,  1366,  1372,  1378,  1380,  1409,  1433,
  1444,  1450,  1457,  1463,  1474,  1488,  1491,  1492,  1495,  1498,
  1501,  1506,  1508,  1515,  1540,  1547,  1552,  1557,  1561,  1568,
  1573,  1578,  1583,  1589,  1593,  1598,  1601,  1630,  1638,  1643,
  1652,  1656,  1665,  1668,  1673,  1678,  1683,  1691,  1695,  1706,
  1715,  1720,  1725,  1730,  1742,  1746,  1801,  1804,  1807,  1810,
  1813,  1822,  1829,  1832,  1854,  1857,  1867,  1871,  1879,  1886,
  1894,  1897,  1917,  1934,  1956,  1966,  1970,  1981,  2005,  2030,
  2035,  2043,  2051,  2061,  2077,  2084,  2090,  2096,  2104,  2112,
  2120,  2138,  2146,  2149,  2172,  2176,  2185,  2189,  2197,  2204,
  2212,  2215,  2218,  2221,  2226,  2244,  2279,  2294,  2298,  2303,
  2308,  2313,  2325,  2349,  2404,  2408,  2412,  2421,  2484,  2490,
  2495,  2500,  2504,  2511,  2516,  2534,  2539,  2543,  2560,  2566,
  2573,  2580,  2584,  2591,  2600,  2611,  2628,  2700,  2712,  2716,
  2736,  2750,  2753,  2756,  2800,  2807,  2810,  2832,  2836,  2844,
  2848,  2856,  2863,  2872,  2874,  2879,  2894,  2910,  2927,  2931,
  2936,  2940,  2943,  2952,  2991,  3015,  3020,  3026,  3176,  3181,
  3190,  3199,  3204,  3207,  3245,  3262,  3288,  3293,  3296,  3299,
  3304,  3312,  3315,  3326,  3336,  3348,  3357,  3360,  3364,  3366,
  3368,  3374,  3392,  3396,  3407,  3468,  3514,  3538,  3547,  3559,
  3576,  3580,  3614,  3623,  3677,  3693,  3696,  3697,  3698,  3699,
  3700,  3701,  3705,  3721,  3737,  3744,  3747,  3768,  3772,  3780,
  3784,  3793,  3800,  3803,  3805,  3810,  3826,  3843,  3858,  3862,
  3867,  3875,  3878,  3883,  3888,  3893,  3903,  3910,  3949,  3954,
  3959,  3969,  3981,  3985,  3990,  4001,  4010,  4017,  4037,  4044,
  4050,  4056,  4062,  4070,  4086,  4093,  4099,  4110,  4121,  4137,
  4149,  4171,  4192,  4205,  4219,  4226,  4228,  4235,  4237,  4247,
  4257,  4267,  4277,  4283,  4286,  4290,  4299,  4310,  4322,  4326,
  4332,  4336,  4340,  4345,  4354,  4367,  4371,  4377,  4381,  4385,
  4389,  4394,  4403,  4415,  4418,  4424,  4428,  4432,  4437,  4446,
  4461,  4464,  4470,  4474,  4478,  4483,  4493,  4499,  4505,  4514,
  4518,  4522,  4536,  4539,  4550,  4579,  4582,  4585,  4593,  4607,
  4615,  4618,  4639,  4642,  4653,  4656,  4664,  4672,  4718,  4723,
  4728,  4732,  4736,  4744,  4748,  4752,  4761,  4766,  4772,  4778,
  4790,  4801,  4804,  4812,  4840,  4850,  4850,  4856,  4865,  4881,
  4889,  4892,  4897,  4900,  4909,  4912,  4920,  4932,  4942,  4947,
  4952,  4970,  4979,  4983,  4988,  4996,  5003,  5012,  5035,  5047,
  5069,  5072,  5073,  5074,  5077,  5086,  5102,  5109,  5123,  5133,
  5141,  5154,  5172,  5197,  5214,  5217,  5225,  5232,  5239,  5243,
  5247,  5251,  5255,  5264,  5269,  5274,  5294,  5301,  5308,  5316,
  5324,  5331,  5338,  5342,  5354,  5361,  5407,  5413,  5417,  5422,
  5427,  5430,  5431,  5435,  5440,  5449,  5452,  5461,  5469,  5486,
  5494,  5500,  5512,  5556,  5560,  5563,  5569,  5575,  5586,  5588,
  5589,  5590,  5591,  5592,  5593,  5594,  5595,  5596,  5597,  5598,
  5599,  5600,  5601,  5602,  5603,  5604,  5605,  5606,  5607,  5609,
  5611,  5612,  5613,  5614,  5615,  5616,  5617,  5618,  5619,  5620,
  5621,  5622,  5623,  5624,  5625,  5626,  5627,  5628,  5629,  5630,
  5631,  5632,  5633,  5634,  5635,  5636,  5637,  5638,  5639,  5640,
  5641,  5642,  5643,  5644,  5645,  5646,  5647,  5648,  5649,  5652,
  5655,  5656,  5657,  5658,  5659,  5660,  5661,  5678,  5683
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
"tAppend","tPlot","tPrint","tWrite","tAdapt","tOnRegion","tOnGrid","tOnCut",
"tOnPoint","tOnLine","tOnPlane","tOnBox","tWithArgument","tFile","tDepth","tDimension",
"tTimeStep","tHarmonicToTime","tFormat","tHeader","tFooter","tSkin","tSmoothing",
"tTarget","tSort","tIso","tFlag","tExit","tBreak","tHelp","tCpu","tDEF","'?'",
"tAND","tOR","tNOTEQUAL","tEQUAL","tAPPROXEQUAL","'<'","'>'","tLESSOREQUAL",
"tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'","'*'","'/'","'%'",
"tCROSSPRODUCT","UNARYPREC","'!'","'^'","'#'","'$'","'{'","'}'","'['","']'",
"','","'('","')'","'.'","Stats","@1","ProblemDefinitions","@2","ProblemDefinition",
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
"PostSubOperation","PostQuantitiesToPlot","Combination","PlotSubType","@29",
"PlotOptions","PlotOption","ParsedStrings","ListOfExpression","RecursiveListOfExpression",
"ListOfDouble","RecursiveListOfDouble","DottedFExpr","Affectation","DefineConstants",
"NameForFunction","FExpr","OneFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   205,   204,   206,   207,   206,   208,   208,   208,   208,   208,
   208,   208,   208,   208,   208,   208,   208,   208,   208,   209,
   209,   209,   209,   210,   209,   211,   212,   211,   213,   213,
   214,   213,   213,   213,   216,   217,   215,   215,   218,   218,
   219,   219,   220,   220,   221,   221,   221,   222,   223,   223,
   224,   224,   224,   225,   225,   225,   225,   225,   225,   226,
   226,   226,   227,   227,   228,   229,   229,   230,   231,   231,
   232,   232,   232,   232,   233,   233,   234,   234,   235,   234,
   237,   236,   238,   239,   240,   238,   238,   238,   238,   238,
   238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
   238,   238,   238,   238,   238,   238,   241,   241,   241,   241,
   241,   241,   242,   241,   241,   241,   243,   241,   241,   241,
   241,   241,   241,   241,   241,   244,   244,   244,   245,   245,
   246,   246,   246,   246,   247,   247,   248,   248,   249,   249,
   250,   250,   251,   251,   252,   252,   252,   253,   253,   254,
   254,   255,   255,   255,   256,   256,   257,   257,   258,   258,
   258,   259,   259,   260,   260,   261,   261,   261,   261,   261,
   261,   262,   262,   263,   263,   264,   264,   265,   265,   265,
   265,   265,   266,   266,   267,   267,   268,   268,   268,   268,
   268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
   268,   269,   269,   270,   270,   271,   271,   272,   272,   272,
   272,   272,   272,   272,   273,   273,   274,   274,   275,   275,
   275,   275,   275,   275,   276,   277,   278,   276,   279,   279,
   280,   280,   281,   281,   282,   282,   283,   283,   284,   284,
   285,   285,   286,   286,   286,   287,   287,   288,   288,   289,
   289,   289,   289,   289,   290,   290,   291,   291,   292,   292,
   293,   293,   293,   293,   293,   294,   294,   295,   295,   296,
   296,   296,   296,   297,   296,   296,   298,   296,   296,   296,
   296,   296,   299,   299,   300,   300,   301,   301,   301,   301,
   302,   302,   303,   303,   303,   304,   304,   305,   305,   305,
   305,   306,   306,   308,   309,   307,   307,   307,   307,   310,
   310,   311,   312,   313,   311,   314,   314,   314,   314,   314,
   314,   314,   315,   315,   316,   316,   317,   317,   318,   318,
   319,   319,   319,   320,   319,   321,   321,   322,   322,   323,
   323,   323,   323,   323,   323,   323,   323,   324,   324,   325,
   325,   326,   326,   327,   327,   328,   328,   329,   329,   329,
   329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
   329,   329,   329,   329,   330,   329,   331,   329,   329,   329,
   332,   332,   333,   333,   334,   334,   334,   335,   335,   336,
   336,   336,   336,   336,   337,   337,   338,   338,   338,   338,
   338,   338,   339,   339,   340,   340,   340,   340,   340,   341,
   341,   342,   342,   342,   342,   342,   342,   342,   342,   343,
   343,   344,   344,   345,   345,   345,   345,   345,   345,   346,
   346,   347,   347,   348,   348,   349,   349,   349,   349,   349,
   350,   350,   351,   351,   352,   352,   352,   353,   353,   353,
   354,   354,   356,   355,   355,   357,   355,   355,   355,   358,
   358,   359,   359,   360,   360,   361,   361,   361,   361,   361,
   363,   362,   364,   365,   364,   366,   366,   366,   367,   367,
   368,   368,   368,   368,   369,   369,   369,   370,   369,   369,
   369,   369,   369,   371,   371,   372,   372,   372,   372,   372,
   372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
   372,   372,   372,   372,   373,   373,   374,   374,   375,   375,
   376,   376,   376,   377,   377,   377,   377,   378,   378,   379,
   379,   379,   379,   379,   380,   380,   380,   380,   381,   381,
   381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
   381,   381,   381,   381,   381,   381,   381,   381,   381,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   383,
   383,   383,   383,   383,   383,   383,   383,   384,   384
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
     0,     8,     0,     0,     3,     7,     8,    18,     2,     4,
     1,     1,     1,     1,     2,    24,     2,     0,    14,     8,
    20,    29,    38,     0,     2,     3,     4,     4,     3,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     5,     0,     2,     0,     3,     1,     3,
     0,     1,     3,     1,     1,     3,     3,     3,     6,     4,
     4,     6,     9,     5,     0,     3,     5,     5,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     4,     4,     4,
     4,     4,     4,     4,     4,     4,     4,     6,     4,     4,
     4,     4,     4,     4,     6,     6,     6,     5,     2,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     1,
     3,     4,    24,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,     0,   609,   608,    18,   535,    26,
   172,   135,   148,   202,    69,   255,   325,   430,     0,   460,
    20,     0,    21,    23,     0,     0,    25,   601,   600,   607,
     0,   602,   603,   604,   605,   606,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   560,    63,    27,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    22,     0,     0,   531,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   562,   563,     0,   525,   524,     0,   530,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   599,     0,    64,     0,     6,     0,   176,     8,
   173,   175,   137,     9,   150,    10,   206,    11,   203,   205,
     0,     0,     7,    70,    74,   259,    12,   256,   258,   329,
    13,   326,   328,   434,    14,   431,   433,   471,   464,    15,
   461,   463,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   561,
     0,   576,   577,   575,   574,   570,   571,   572,   573,   565,
   564,   566,   567,   568,   569,   534,   536,     0,     0,    28,
    34,     0,     0,     0,     0,     0,    75,     0,     0,     0,
     0,     0,   483,   484,   481,   482,   479,     0,     0,     0,
     0,     0,     0,     0,     0,   494,     0,   578,   579,   580,
   581,   582,   583,   584,   585,   586,   587,     0,   589,   590,
   591,   592,   593,   594,     0,     0,     0,     0,   532,   527,
   526,     0,   528,     0,     0,     0,     0,     0,     0,    60,
     0,     0,     0,   174,   177,     0,     0,   136,   138,     0,
    79,     0,   149,   151,     0,     0,     0,     0,     0,     0,
   204,   207,    66,    41,     0,     0,    39,     0,     0,    63,
     0,     0,     0,     0,   257,   260,     0,     0,   334,   327,
   330,     0,     0,     0,     0,   432,   435,   473,     0,     0,
     0,     0,     0,   462,   465,     0,   485,    79,   487,     0,
     0,     0,     0,     0,     0,   494,     0,     0,     0,     0,
     0,     0,   598,   538,   537,   607,     0,     0,     0,    31,
     0,    63,     0,   183,     0,     0,   141,     0,   155,     0,
     0,     0,    81,     0,   246,     0,     0,   215,   229,   239,
     0,    40,    54,    57,    51,    38,    49,    79,     0,    35,
     0,     0,     0,     0,   266,   285,     0,   336,     0,     0,
   441,    66,     0,   474,     0,   473,     0,     0,     0,   480,
     0,     0,     0,     0,     0,     0,     0,     0,   495,     0,
     0,   588,   595,   596,   597,     0,     0,    29,     0,    68,
     0,    42,     0,     0,     0,   183,     0,   180,   178,     0,
     0,     0,   139,     0,     0,     0,   153,    80,     0,   152,
     0,   210,   208,     0,     0,     0,     0,    67,     0,     0,
    63,     0,    79,     0,    71,    76,   263,   261,     0,     0,
     0,   331,     0,     0,   356,   436,     0,     0,     0,   439,
   472,     0,   466,   474,   467,   469,   468,    79,     0,     0,
     0,     0,     0,   476,   521,     0,     0,     0,     0,   521,
     0,   515,   515,   515,   500,     0,     0,     0,     0,     0,
     0,   533,   529,    65,     0,    30,    33,    61,     0,   185,
   181,   179,   143,   140,   157,   154,     0,     0,   607,   539,
   540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,   554,   555,   556,   557,   558,     0,
   117,     0,     0,   113,     0,     0,     0,     0,     0,     0,
     0,     0,    82,    83,   111,     0,   108,   248,   214,   209,
   217,   211,   231,   212,   241,   213,    55,     0,    59,     0,
    50,     0,    72,     0,    44,    36,    43,   262,   268,   264,
     0,     0,     0,     0,   265,   286,   332,   338,   333,     0,
   437,   443,   440,   438,   475,   470,     0,     0,     0,     0,
     0,     0,     0,   512,   522,   509,     0,     0,   496,   499,
   507,   508,   502,   503,   506,   504,   505,   501,   511,   510,
     0,   513,     0,   477,    32,     0,   182,     0,     0,     0,
    77,    78,   110,     0,     0,     0,     0,     0,     0,   105,
   104,   106,   125,   123,   120,   122,   121,     0,     0,    84,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   112,   131,
     0,     0,     0,     0,     0,    58,     0,    52,    73,    63,
     0,   302,   302,   310,   291,     0,     0,    79,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   375,
   377,     0,   335,   357,     0,    79,     0,     0,     0,     0,
     0,     0,   497,   498,   516,     0,     0,     0,     0,     0,
     0,     0,    79,    79,    79,    79,     0,     0,     0,    79,
   184,   186,     0,     0,   142,   144,     0,     0,     0,   156,
   158,     0,    81,     0,     0,    81,     0,     0,   324,   107,
     0,   102,   103,   100,    99,   101,    95,    96,    97,    98,
    91,    92,    87,    90,    93,    88,    94,   124,   127,     0,
   129,     0,     0,   109,     0,     0,     0,     0,     0,   247,
   249,     0,     0,     0,     0,     0,   216,   218,     0,     0,
   230,   232,     0,     0,     0,   240,   242,     0,    53,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
   277,   269,   316,   316,   316,     0,     0,     0,     0,     0,
   521,     0,     0,     0,   337,   339,     0,     0,    79,     0,
     0,     0,    79,     0,     0,   388,     0,   395,     0,   403,
   410,     0,     0,     0,     0,   366,     0,     0,     0,   442,
   444,     0,     0,     0,     0,     0,     0,   523,   514,     0,
    62,     0,     0,     0,     0,    79,     0,    79,     0,     0,
     0,     0,     0,     0,    79,     0,     0,     0,   131,   162,
     0,     0,   115,     0,   116,     0,     0,    81,   323,     0,
   126,   128,     0,     0,     0,     0,     0,     0,     0,    48,
     0,    66,     0,     0,   225,     0,     0,     0,   235,   237,
     0,     0,     0,     0,    56,    37,     0,     0,     0,     0,
     0,     0,     0,     0,    66,     0,     0,     0,    81,     0,
     0,   317,   318,   319,   320,   321,   322,     0,   287,   303,
     0,   288,     0,   289,   311,     0,     0,     0,   296,   290,
   292,     0,     0,    66,   350,     0,     0,     0,     0,   352,
   354,     0,     0,   358,     0,     0,   359,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   380,
   517,   517,   448,     0,     0,     0,     0,   490,     0,     0,
     0,     0,   188,   189,   194,   195,     0,   198,     0,   197,
   191,   190,    63,   192,   187,     0,   196,   146,   145,     0,
     0,   159,   160,     0,     0,   114,     0,    85,   130,     0,
     0,   132,   250,     0,   252,   253,     0,   219,   220,     0,
     0,     0,   223,   224,   233,    63,   234,   244,   243,   245,
    66,    46,   281,   280,   273,   271,   272,   270,   274,   276,
   282,   279,     0,     0,     0,     0,   304,     0,   313,     0,
     0,     0,   341,   340,   348,    63,   342,   343,   346,   347,
    63,   344,   345,     0,     0,    79,     0,     0,     0,    79,
     0,    79,     0,     0,    79,   360,   389,     0,     0,    79,
     0,     0,     0,     0,   361,   396,     0,     0,     0,     0,
    79,     0,   362,   404,     0,     0,     0,     0,     0,     0,
     0,     0,   363,   411,    79,   382,    79,   383,   381,   383,
     0,   446,   445,   521,     0,     0,     0,     0,     0,    79,
    79,     0,    79,   147,   164,   161,     0,    89,   119,     0,
     0,     0,     0,   254,   221,     0,   222,   236,     0,    47,
   283,     0,   308,   309,   307,    81,   312,    81,   293,   294,
     0,     0,     0,     0,   295,   297,   349,     0,   353,     0,
   364,   365,     0,     0,   356,     0,     0,   356,     0,     0,
     0,     0,     0,   356,     0,     0,     0,     0,     0,     0,
     0,   356,     0,     0,     0,     0,     0,   356,   356,     0,
     0,   420,     0,     0,   519,     0,     0,     0,     0,     0,
   447,   488,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   118,    86,     0,     0,   251,     0,   238,     0,
     0,   278,   305,   314,     0,     0,     0,     0,   351,   355,
     0,   521,     0,   521,     0,     0,   392,   390,   391,   393,
    79,     0,   399,   397,   398,   400,   401,    79,   407,     0,
   405,   406,   408,   414,   416,     0,     0,   412,   413,     0,
   415,     0,   518,    79,     0,   521,   384,     0,   451,   451,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   163,   165,   134,   133,
     0,     0,   275,     0,     0,   298,   299,   300,   301,   369,
     0,   367,     0,   370,   394,     0,   402,     0,   409,   418,
   419,   422,   417,   379,   520,   376,     0,   521,   387,   378,
   316,   316,   521,     0,     0,     0,     0,   494,   201,   200,
   193,   199,     0,     0,     0,     0,     0,     0,     0,   284,
    81,     0,     0,     0,     0,    79,     0,     0,   385,   386,
     0,     0,     0,   456,   450,     0,   452,   449,     0,     0,
     0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     0,     0,     0,   371,   356,     0,     0,     0,     0,     0,
    79,     0,     0,     0,   421,   423,     0,     0,     0,     0,
   453,   489,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   458,   459,   455,     0,    81,     0,     0,     0,     0,   478,
   226,   306,   315,   368,   372,   356,     0,   424,   427,   428,
   425,   426,   429,   457,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   373,   356,
   454,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   227,   374,     0,   491,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    66,     0,     0,     0,     0,
   486,     0,     0,     0,     0,     0,   228,     0,     0,     0,
     0,     0,     0,   492,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   493,     0,     0,     0
};

static const short yydefgoto[] = {  1535,
     1,     2,     3,    20,    21,    22,    85,   148,   230,   441,
   317,   474,   700,   318,   319,   596,   820,   921,   396,   471,
   397,   372,   146,   288,   392,   289,    90,   164,   320,   382,
   383,   458,   459,   573,   771,  1160,   574,   658,   655,   689,
   792,   794,    87,   233,   299,   452,   649,   756,    88,   234,
   304,   454,   650,   761,  1031,  1242,  1318,    86,   151,   232,
   295,   447,   648,   752,    89,   159,   235,   312,   465,   692,
   808,  1052,  1470,  1498,   466,   693,   812,   931,  1056,   467,
   694,   817,   461,   691,   801,    91,   168,   238,   326,   480,
   701,   832,  1171,   949,  1251,   481,   606,   836,   971,  1082,
  1186,   833,   960,  1176,  1324,   835,   965,  1178,  1325,   961,
   575,    92,   172,   239,   331,   409,   484,   706,   846,   976,
  1086,   982,  1091,   610,   724,   864,   865,  1138,  1227,  1297,
   993,  1107,   995,  1116,   997,  1124,   998,  1134,  1290,  1378,
  1416,    93,   176,   240,   337,   488,   725,   871,  1141,  1351,
  1387,  1445,  1420,    95,   181,   242,   345,    23,   241,   414,
   492,    47,   184,   248,   256,  1301,   355,   429,   635,  1139,
  1226,   624,   123,   124,    24,    84,   576,   625,    83,    28
};

static const short yypact[] = {-32768,
-32768,    31,  2346,  -131,   175,  -152,  -146,  -127,  -100,   -96,
   -64,     7,    50,    57,   114,    20,   315,   299,   330,-32768,
-32768,   260,-32768,-32768,   898,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    49,-32768,
-32768,   340,-32768,-32768,    97,   116,-32768,-32768,-32768,-32768,
   388,-32768,-32768,-32768,-32768,-32768,   192,   215,   246,   250,
   257,   265,   272,   276,   291,   295,   312,   322,   331,   335,
   354,   361,   370,   372,   376,   382,   387,  1598,  1598,  1598,
  1598,   520,-32768,   234,   263,    22,   285,   319,    25,    23,
   120,   122,   124,   583,   182,-32768,   589,   589,-32768,  1598,
  1598,  1598,  1598,  1598,  1598,  1598,  1598,  1598,  1598,  1598,
  1598,  1598,  1598,  1598,  1598,  1598,  1598,  1598,  1598,   596,
   385,   385,   -32,-32768,  2109,  2254,-32768,  1598,  1598,  1598,
  1598,  1598,  1598,  1598,  1598,  1598,  1598,  1598,  1598,  1598,
  1598,  1598,-32768,   491,-32768,   598,-32768,   377,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   126,   394,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   619,  1490,   464,  3230,  3257,  3284,  3311,  3338,
  3365,  3392,  3419,  3446,  3473,  2315,  3500,  3527,  3554,  3581,
  3608,  3635,  2345,  2367,  2389,   406,   623,  1598,  1227,-32768,
  2136,  4492,  4492,  1034,  1034,   642,   642,   642,   642,   368,
   368,   385,   385,   385,   385,-32768,   461,     1,   421,-32768,
-32768,   137,    -1,   270,   405,    13,-32768,   447,   343,   449,
   441,   493,-32768,-32768,-32768,-32768,-32768,   636,   136,    53,
   451,   458,   508,   515,   533,-32768,   136,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1598,-32768,-32768,
-32768,-32768,-32768,-32768,  1598,  1598,  1598,   638,-32768,-32768,
  2109,  1598,  4455,  1598,   652,   336,  1496,   473,   576,-32768,
    92,   750,   752,-32768,-32768,   568,   761,-32768,-32768,   578,
    89,   771,-32768,-32768,   585,   774,   780,   591,   595,   599,
-32768,-32768,   198,-32768,    18,   627,-32768,   604,   628,   383,
   828,   832,   645,   647,-32768,-32768,   855,   668,-32768,-32768,
-32768,   902,   739,   936,   991,-32768,-32768,-32768,  1001,   818,
  1015,   175,  1020,-32768,-32768,   833,-32768,    89,-32768,   838,
  1598,   841,   844,   850,   415,   904,  3662,  3689,  3716,  3743,
   856,  3770,  4455,-32768,  4455,   860,  1052,  1598,  3905,-32768,
   195,   440,   864,-32768,  1058,   119,-32768,  1059,-32768,   874,
   877,  1070,-32768,  1073,-32768,  1075,   132,-32768,-32768,-32768,
   888,-32768,  1083,   905,-32768,-32768,-32768,    89,   930,-32768,
  1096,  1101,  1106,   133,-32768,-32768,   179,-32768,   922,   184,
-32768,   923,  1123,   934,  1125,-32768,  1128,  1130,  1131,-32768,
   945,  1598,  2411,  1598,  1598,  1598,  1132,   996,-32768,  1141,
   460,-32768,-32768,-32768,-32768,  1140,  1598,-32768,  3930,-32768,
   195,-32768,  1156,  1157,  1143,-32768,   466,-32768,-32768,   971,
  1159,   495,-32768,   519,  1598,  1163,-32768,-32768,   948,-32768,
   538,-32768,-32768,  1162,   545,   550,   557,-32768,    12,  1281,
   -22,  1164,    89,    17,-32768,-32768,-32768,-32768,  1165,   563,
   657,-32768,  1170,   566,-32768,-32768,  1174,   587,  1175,-32768,
-32768,   260,-32768,   973,-32768,-32768,-32768,    89,  2433,  1598,
  2455,  2477,  2499,-32768,  1530,  1173,   288,  1598,  1598,  1530,
  1598,  1212,-32768,-32768,-32768,  1598,  1598,  1213,  1564,   983,
  1217,-32768,  4455,-32768,  1218,-32768,-32768,  1030,   612,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  3797,  1035,   268,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1031,
-32768,  1038,  1039,-32768,  1259,   948,   948,   948,  1263,   300,
  1260,   948,  4477,  1087,  1084,  1084,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1598,-32768,  3955,
-32768,   159,-32768,  1285,-32768,-32768,-32768,-32768,-32768,-32768,
  1122,  1124,  1126,  1127,-32768,-32768,-32768,-32768,-32768,   307,
-32768,-32768,-32768,-32768,-32768,-32768,  1119,  1598,  2521,  1598,
  1598,  1598,  1598,-32768,  4455,-32768,   175,   175,-32768,  4455,
  4455,-32768,  4455,-32768,  1315,  1315,  1315,  4455,  4455,-32768,
  1598,  4455,  1598,-32768,-32768,  1598,-32768,  2309,    -9,   -20,
-32768,-32768,-32768,  1142,  1129,  1142,   948,  1145,  1144,  1133,
  1133,  1133,-32768,-32768,-32768,-32768,-32768,    44,  2203,-32768,
   948,   948,   948,   948,   948,   948,   948,   948,   948,   948,
   948,   948,   948,   948,   948,   948,  1348,   853,-32768,  1148,
   928,   643,    -7,   342,  3824,-32768,   468,-32768,-32768,   646,
   708,-32768,-32768,-32768,-32768,   884,    19,   127,  1158,  1161,
  1166,  1167,  1168,   292,   352,  1177,  1178,  1182,  1349,-32768,
-32768,  1351,-32768,-32768,   105,    89,  2543,  1598,  2565,  2587,
  2609,    -2,-32768,-32768,-32768,     8,  2631,  3980,   136,   136,
   136,   136,   297,   321,    89,    89,  1180,  1355,  1356,   328,
-32768,-32768,    21,  1357,-32768,-32768,  1188,  1363,  1365,-32768,
-32768,  1187,-32768,  1189,  2285,-32768,  1191,  1194,-32768,-32768,
   948,  4511,  4511,  4526,  4526,  4526,  1090,  1090,  1090,  1090,
   624,   624,    55,    55,    55,  1133,  1133,-32768,-32768,  1193,
  4477,   709,   251,-32768,  1366,   125,   125,  1389,  1390,-32768,
-32768,  1398,  1402,  1403,   136,   136,-32768,-32768,  1405,    93,
-32768,-32768,  1406,  1407,  1409,-32768,-32768,  1412,-32768,  1219,
   162,  1411,  1415,    90,  1416,  1417,  1414,  1420,   136,-32768,
-32768,-32768,  1172,  1341,   901,   432,  1419,  1421,    96,   175,
  1530,   175,   117,  1422,-32768,-32768,  1423,  1424,    89,  1425,
  1428,  1429,    89,  1430,  1431,-32768,  1598,-32768,  1598,-32768,
-32768,   136,  1437,  1247,  1248,-32768,  1251,  1443,  1445,-32768,
-32768,  1256,  1598,  4005,  1598,  1598,  1598,-32768,-32768,  1598,
-32768,  1447,  1448,  1449,  1450,    89,  1453,    89,  1454,  1455,
  1457,  1465,  1462,  1463,    89,  1464,  1470,  1472,  1148,-32768,
  1473,  1474,-32768,  1272,-32768,   948,  1284,-32768,-32768,  2160,
-32768,-32768,   948,  1286,  1287,    99,  1479,  1404,  1480,-32768,
  1484,   923,  1485,   185,  1297,  1489,  1495,  1497,-32768,-32768,
  1499,  1532,  1533,  1534,-32768,-32768,  1492,    18,  1563,  1565,
  1566,  1567,  1568,  1597,   923,  1599,  1600,  1601,-32768,  1638,
  1640,-32768,-32768,-32768,-32768,-32768,-32768,   136,-32768,-32768,
  1339,-32768,   136,-32768,-32768,  1373,  1644,  1648,-32768,-32768,
-32768,  1647,  1650,   923,-32768,  1651,  1653,  1654,  1656,-32768,
-32768,  1657,  1660,-32768,  1456,  1469,-32768,  1471,  1483,  1486,
  1487,  1491,   939,  2653,   666,  2675,   310,  1569,  1493,-32768,
   131,   131,-32768,  1662,  1663,  1476,  4030,-32768,  4055,  4080,
  4105,  4130,-32768,-32768,-32768,-32768,  1494,-32768,  1503,-32768,
-32768,-32768,  1504,-32768,-32768,  1505,-32768,-32768,-32768,  1677,
   741,-32768,-32768,   136,  3209,-32768,  1507,-32768,  4477,  1674,
   136,-32768,-32768,  1681,-32768,-32768,  1685,-32768,-32768,  1688,
  1518,  1689,-32768,-32768,-32768,   111,-32768,-32768,-32768,-32768,
   923,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1508,  1701,  1703,  1705,-32768,  1706,-32768,  1708,
  1711,   334,-32768,-32768,-32768,   207,-32768,-32768,-32768,-32768,
   249,-32768,-32768,  1720,  1723,    89,  1728,  1515,  1598,    89,
  1538,    89,  1598,  1598,    89,-32768,-32768,  1598,  1541,    89,
  1598,  1598,  1598,  1598,-32768,-32768,  1598,  1598,  1544,  1598,
    89,  1598,-32768,-32768,  1598,  1737,  1547,  1548,  1598,  1598,
  1549,  1598,-32768,-32768,    89,-32768,    89,-32768,-32768,-32768,
    42,-32768,-32768,  1530,  1550,  1555,  1556,  1557,  1558,    89,
    89,  1752,    89,-32768,-32768,-32768,  1559,-32768,-32768,   948,
  1560,  1562,  1750,-32768,-32768,  1757,-32768,-32768,  1758,-32768,
  1570,  1760,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1142,  1142,  1142,   136,-32768,-32768,-32768,  1759,-32768,  1764,
-32768,-32768,  1571,  1572,-32768,  2697,  1577,-32768,  1770,   551,
   842,  1771,  2719,-32768,  1773,   935,  1160,  1742,  1768,  2741,
  1795,-32768,  1819,  1774,  1843,  1865,  1775,-32768,-32768,  1888,
  1913,-32768,  1939,  1584,-32768,   262,   740,   747,  1575,  1590,
-32768,-32768,  1598,  1598,  1598,  1598,  1598,  1595,  1596,  1607,
  1606,   753,-32768,  4477,  1611,  1613,-32768,  1789,-32768,  1793,
  1804,-32768,-32768,-32768,  1805,  1806,  1807,  1811,-32768,-32768,
  1815,  1530,   456,  1530,  1820,   492,-32768,-32768,-32768,-32768,
    89,  1262,-32768,-32768,-32768,-32768,-32768,    89,-32768,  1531,
-32768,-32768,-32768,-32768,-32768,  1604,  1672,-32768,-32768,   758,
-32768,  1821,-32768,    89,  1823,  1171,-32768,  1824,-32768,-32768,
  1633,  2763,  2785,  2807,  2829,  4155,  1827,  1829,  1830,  1833,
  1837,  1598,  1598,  1598,  1598,  1598,-32768,-32768,-32768,-32768,
  1772,  1645,-32768,  1643,  1646,-32768,-32768,-32768,-32768,-32768,
  1655,  1727,  1659,-32768,-32768,  1665,-32768,  1666,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   175,  1530,-32768,-32768,
   445,   798,  1530,  1598,  1598,  1598,  1598,-32768,-32768,-32768,
-32768,-32768,  1853,  1966,  1990,  2014,  2036,  2059,  1857,-32768,
-32768,  1142,  1856,  1678,  1598,    89,  1598,  1612,-32768,-32768,
  1863,  1870,  1871,-32768,-32768,  1679,-32768,-32768,  1684,  2851,
  2873,  2895,  2917,   757,-32768,-32768,-32768,-32768,-32768,-32768,
  1682,  1692,  1693,-32768,-32768,  3851,  1694,  2939,  1878,  1598,
    89,  1882,   136,  1891,-32768,-32768,  1892,  1895,  1899,   136,
-32768,-32768,  1598,  1598,  1598,  1598,  1900,  1901,  1902,  1903,
  1704,  1904,  1702,  1598,  1907,  2084,  1918,  1919,  1925,  1927,
-32768,-32768,-32768,  1930,-32768,  4180,  4205,  4230,  4255,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  3878,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1740,  1744,  1754,  1756,  1762,  1922,
  1736,  1763,  1953,  1598,  1782,  1598,  1598,   136,-32768,-32768,
-32768,  2961,  1598,  2983,  3005,  1957,  1769,  1598,  4280,  1598,
  1598,-32768,-32768,  3027,-32768,  3049,  3071,  1862,  1598,  1598,
  1598,  1962,  4305,  4330,  4355,   923,  1788,  1790,  1783,  1979,
-32768,  1794,  1598,  1812,  1598,  3093,-32768,  3115,  1598,  1598,
  3137,  4380,  1598,-32768,  4405,  1813,  1818,  1598,  3159,  1598,
  3181,  1598,  4430,-32768,  1991,  2002,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    15,-32768,-32768,  -240,   212,-32768,-32768,  1190,  -460,-32768,
  -526,-32768,  -313,  -375,  -410,-32768,-32768,-32768,-32768,  -335,
-32768,  -747,-32768,  -529,-32768,-32768,-32768,-32768,-32768,  1427,
-32768,  1116,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1580,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1324,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -827,
  -533,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1147,-32768,-32768,-32768,  1032,   893,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   735,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1632,
-32768,  1579,  1951,-32768,-32768,-32768,  -353,-32768,   529,-32768,
-32768,  -506,  -447,  1847,   978,-32768,-32768,   -25,  -448,  -337
};


#define	YYLAST		4719


static const short yytable[] = {    82,
   451,   489,   431,   632,   418,   653,   402,   966,   347,   349,
   577,   464,   421,   597,   587,   904,   356,   313,   907,   393,
   393,   394,   394,   847,    39,   313,     4,   161,   479,     4,
    -2,   483,     6,     6,   487,     6,   660,   661,   662,   753,
    25,   757,   669,   758,   759,    29,  1229,  1263,   768,    30,
  1266,   754,   121,   122,   125,   126,  1272,   313,   445,   595,
   296,   314,   472,   897,  1280,   698,   809,   162,    31,   314,
  1286,  1287,   297,   810,   186,   187,   188,   189,   190,   191,
   192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
   202,   203,   204,   205,   941,    32,   373,   929,   380,    33,
   974,   314,   211,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,   222,   223,   224,   225,   577,   577,   577,
   762,   980,   764,   577,     4,   449,     4,   765,     4,   442,
     6,    34,     6,  1230,     6,  1136,   380,   594,   463,   478,
   313,   772,   773,   774,   775,   776,   777,   778,   779,   780,
   781,   782,   783,   784,   785,   786,   787,   592,   791,   867,
  1037,   393,   617,   394,   207,   381,   920,   208,   868,   629,
   819,   942,   286,   314,   591,   732,   760,   145,   869,    26,
    27,   943,   281,   283,   314,   482,     4,   755,    94,   811,
   486,  1049,     6,   736,   878,   298,   287,   208,   291,   442,
   292,  1073,    35,   381,   879,   937,   315,   208,   577,   588,
   293,   316,   395,   395,   315,    40,   848,   149,   150,   163,
   157,   158,   577,   577,   577,   577,   577,   577,   577,   577,
   577,   577,   577,   577,   577,   577,   577,   577,  1231,   577,
   769,   910,   357,   314,   685,    36,   315,   686,   348,   358,
   359,   360,    37,    48,    49,    50,   362,  1431,   363,   365,
    82,   369,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,   374,   930,   733,
   734,   975,    26,    27,    97,  1042,   914,    25,   208,   915,
   367,   870,   664,    42,   665,    43,   380,  1168,  1471,    38,
   145,   707,   981,    98,   450,   166,   167,   170,   171,   174,
   175,    41,   577,   236,   849,   423,  1137,   450,   450,   315,
   380,   300,  1487,   294,   978,   301,    44,   380,    48,    49,
   366,    51,   439,   302,   697,   916,    96,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,   850,   381,   450,  1118,  1035,   179,   180,   450,
   450,   228,    77,  1039,   314,   443,   821,     6,   315,   100,
   872,  1181,  1182,   391,    99,   -42,   499,   381,   501,   502,
   503,    45,    46,  1187,   381,   813,   145,   887,   889,   890,
   891,   523,   101,   666,   896,   814,   327,   815,   229,   708,
  1119,   709,   710,   711,  1183,   712,   713,   714,  1253,   537,
  1254,   715,   144,   145,   716,  1184,    78,   717,  1120,  1121,
   718,   719,    79,   102,   590,  1189,   328,   103,   145,   720,
   721,    81,   305,   329,   104,   525,   667,   577,  1293,   147,
   707,  1294,   105,   571,   577,  -559,   303,   627,   306,   106,
   393,   628,   394,   107,   619,   722,  1122,  1062,   307,   308,
   153,   154,   630,   631,   309,   633,   310,   856,   108,   857,
   638,   639,   109,   642,   886,   967,   707,   226,   882,   883,
   884,   885,   977,   723,   979,  1381,  1123,  1382,  1383,   110,
   321,  1047,   898,   986,   155,   156,   968,   990,   888,   111,
   322,    78,   332,  1386,  1386,   895,   127,    79,   112,   315,
  1185,    80,   113,   323,  1069,   333,    81,   324,   816,   330,
   952,   953,   954,   955,   956,   957,  1384,   858,  1050,   859,
  1017,   114,  1019,   334,   139,   140,   141,  1268,   115,  1026,
   142,   143,   695,  1085,   926,   927,   339,   116,   708,   117,
   709,   710,   711,   118,   712,   713,   714,   142,   143,   119,
   715,   401,   145,   716,   120,   335,   717,   178,   948,   718,
   719,   237,   727,   183,   729,   730,   731,   125,   720,   721,
   206,   311,   227,   340,   708,   278,   709,   710,   711,   257,
   712,   713,   714,   427,   428,   125,   715,   737,   290,   716,
   738,   999,   717,  1402,   722,   718,   719,   969,   970,   279,
  1244,   341,   285,   342,   720,   721,   338,  1232,   444,   145,
   346,  1385,   361,   325,   370,   336,   350,  1255,  1256,  1257,
  1170,   343,  1332,   351,    48,    49,    50,   364,   521,   428,
   722,   530,   531,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,  1335,   344,
   533,   534,   128,   129,   130,   131,   132,  1465,   133,   134,
   135,   136,   874,   352,   137,   138,   139,   140,   141,  1152,
   353,   577,   142,   143,   535,   536,   802,  1076,   803,   804,
   805,   806,  1078,   128,   129,   130,   131,   132,   354,   133,
   134,   135,   136,   578,   579,   137,   138,   139,   140,   141,
   581,   582,  1169,   142,   143,   583,   584,   371,   601,   602,
   603,   604,   585,   586,   375,  1331,   376,  1333,   599,   600,
  1193,   608,   609,   377,  1197,   378,  1199,   125,   822,  1202,
   823,   824,  1188,   379,  1205,   384,  1109,  1190,   386,  1110,
   385,   825,   612,   613,   387,  1214,   388,  1111,  1112,  1349,
   389,  1113,  1114,  1157,   390,   826,   827,   828,   398,  1224,
  1162,  1225,   399,   243,   244,   245,   246,   530,   647,   829,
   682,   683,   684,   685,  1238,  1239,   686,  1241,   247,  1311,
  1312,  1313,  1314,  1315,  1316,   400,   137,   138,   139,   140,
   141,   994,   403,   996,   142,   143,   404,    78,  1403,   807,
   405,  1380,   406,    79,   -45,   145,  1389,  1007,  1269,  1009,
  1010,  1011,    81,   605,  1012,    48,    49,   539,  1381,   407,
  1382,  1383,  1115,   408,    52,    53,    54,    55,    56,   540,
   541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
   551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
   561,   562,   563,   952,   953,   954,   955,   956,   957,  1384,
    48,    49,    50,    51,   830,   831,   410,   912,   913,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,   411,  1336,  1155,  1156,  1295,  1296,
   412,  1274,  1338,  1258,    77,  1298,  1296,   837,   564,  1317,
    48,    49,   539,  1342,  1343,  1427,   428,   838,  1345,    52,
    53,    54,    55,    56,   540,   541,   542,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
   556,   557,   558,   559,   560,   561,   562,   563,   839,   840,
   841,   842,   843,   844,  1388,   413,   952,   953,   954,   955,
   956,   957,   963,   795,  1394,   415,   796,   918,   919,  1379,
   797,   798,   799,   416,   128,   129,   130,   131,   132,   417,
   133,   134,   135,   136,   419,  1428,   137,   138,   139,   140,
   141,   565,   420,   422,   142,   143,   424,   566,   567,   425,
  1407,   636,   637,   564,   568,   426,   569,   570,   571,  1101,
   505,   789,  1102,   572,   436,   790,   430,   -42,   438,   446,
  1103,  1104,  1105,   152,   448,   453,   160,   165,   169,   173,
   177,   455,   182,  1196,   456,  1437,   457,  1200,  1201,   460,
   845,   462,  1203,    78,   468,  1206,  1207,  1208,  1209,    79,
   469,  1210,  1211,    80,  1213,  1510,  1215,   964,    81,  1216,
   470,   473,   475,  1220,  1221,   476,  1223,   128,   129,   130,
   131,   132,   477,   133,   134,   135,   136,   485,   391,   137,
   138,   139,   140,   141,   800,   231,   565,   142,   143,   490,
   491,   493,   566,   567,   495,  1106,   496,   497,   504,   568,
   506,   569,   570,   571,   498,   520,   522,   528,   572,   507,
   508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
   518,   519,   526,   527,   368,   532,  1275,   538,   580,   616,
   593,   598,  1439,    48,    49,    50,   607,   626,   643,  1444,
   611,   614,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,  1302,  1303,  1304,
  1305,  1306,   133,   134,   135,   136,   634,   640,   137,   138,
   139,   140,   141,   644,   645,   646,   142,   143,   654,    48,
    49,    50,   950,   652,   951,   656,   657,  1486,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    76,   659,   668,   663,   707,   952,   953,   954,
   955,   956,   957,   958,   680,   681,   682,   683,   684,   685,
   687,   688,   686,    48,    49,    50,  1364,  1365,  1366,  1367,
  1368,   699,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,   702,   726,   703,
   735,   704,   705,   767,  1347,   686,   763,  1348,  1390,  1391,
  1392,  1393,   128,   129,   130,   131,   132,   571,   133,   134,
   135,   136,   766,   793,   137,   138,   139,   140,   141,  1406,
   788,  1408,   142,   143,   863,   851,    78,   866,   852,   893,
   894,   899,    79,   853,   854,   855,   623,   901,   959,   902,
   917,    81,   860,   861,   708,   892,   709,   710,   711,   862,
   712,   713,   714,   900,  1436,   903,   715,   905,   908,   716,
   909,   911,   717,   920,   922,   718,   719,  1446,  1447,  1448,
  1449,   950,   923,   951,   720,   721,   924,   925,  1457,   928,
   932,   933,    78,   934,   935,   939,   946,   936,    79,   940,
   944,   945,   947,   972,   282,   973,   983,    81,   985,   984,
   722,   987,   988,   989,   991,   992,   952,   953,   954,   955,
   956,   957,   958,  1000,  1001,  1002,  1003,  1004,  1482,  1005,
  1484,  1485,  1006,  1013,  1014,  1015,  1016,  1489,  1337,  1018,
  1020,  1021,  1494,  1022,  1496,  1497,    78,  1023,  1024,  1025,
  1027,  1034,    79,  1503,  1504,  1505,  1028,   589,  1029,  1032,
  1033,    81,  1036,  1040,  1041,  1043,  1045,  1516,  1044,  1518,
  1046,  1048,  1051,  1521,  1522,  1053,  1061,  1525,    48,    49,
    50,  1054,  1529,  1055,  1531,  1057,  1533,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,    48,    49,    50,   707,  1077,   962,  1058,  1059,
  1060,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    48,    49,    50,  1063,
  1079,  1064,  1065,  1066,  1067,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    48,    49,    50,  1068,  1166,  1070,  1071,  1072,   707,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,  1125,   249,   250,   251,   252,   253,
   254,   255,  1074,   708,  1075,   709,   710,   711,  1080,   712,
   713,   714,  1081,  1083,  1094,   715,  1084,  1087,   716,  1088,
  1089,   717,  1090,  1092,   718,   719,  1093,  1095,  1142,  1143,
  1096,  1144,  1126,   720,   721,  1409,   707,  1410,  1161,  1127,
  1128,    78,  1097,  1154,  1098,  1163,  1099,    79,  1411,   368,
  1100,  1164,  1135,  1150,  1165,  1167,    81,  1129,  1412,   722,
  1130,  1131,  1151,   145,  1153,  1159,  1172,  1173,   707,  1174,
  1195,  1175,  1177,  1413,  1179,    78,   708,  1180,   709,   710,
   711,    79,   712,   713,   714,   623,  1191,  1339,   715,  1192,
    81,   716,  1194,  1198,   717,  1132,  1204,   718,   719,  1212,
   707,  1217,  1218,  1219,  1222,  1233,   720,   721,  1276,    78,
  1234,  1235,  1236,  1237,  1240,    79,  1247,  1243,  1245,   641,
  1246,  1248,  1249,  1259,    81,  1133,  1252,  1250,  1260,  1261,
  1299,  1262,   722,   707,  1277,  1265,  1267,  1270,  1414,  1273,
  1282,  1285,  1292,    78,   708,  1300,   709,   710,   711,    79,
   712,   713,   714,  1307,  1308,  1321,   715,  1322,    81,   716,
  1340,  1279,   717,  1309,  1310,   718,   719,  1319,  1415,  1320,
  1323,  1326,  1327,  1328,   720,   721,   708,  1329,   709,   710,
   711,  1330,   712,   713,   714,  1281,  1334,  1344,   715,  1346,
  1350,   716,  1353,  1359,   717,  1360,  1361,   718,   719,  1362,
   722,  1363,  1371,  1370,  1374,  1372,   720,   721,   708,  1283,
   709,   710,   711,  1373,   712,   713,   714,  1369,  1375,  1395,
   715,  1401,  1404,   716,  1376,  1377,   717,  1417,  1341,   718,
   719,  1284,   722,  1405,  1418,  1419,  1421,   450,   720,   721,
  1422,   708,  1435,   709,   710,   711,  1438,   712,   713,   714,
  1429,  1430,  1433,   715,  1288,  1440,   716,  1456,  1441,   717,
  1454,  1442,   718,   719,   722,  1443,  1450,  1451,  1452,  1453,
  1455,   720,   721,  1458,   128,   129,   130,   131,   132,  1289,
   133,   134,   135,   136,  1460,  1461,   137,   138,   139,   140,
   141,  1462,  1479,  1463,   142,   143,  1464,   722,  1473,  1474,
   128,   129,   130,   131,   132,  1291,   133,   134,   135,   136,
  1475,  1476,   137,   138,   139,   140,   141,  1477,  1480,  1481,
   142,   143,  1478,  1492,  1502,  1493,  1506,   128,   129,   130,
   131,   132,  1396,   133,   134,   135,   136,  1483,  1513,   137,
   138,   139,   140,   141,  1511,  1514,  1512,   142,   143,  1515,
  1536,   128,   129,   130,   131,   132,  1397,   133,   134,   135,
   136,  1537,   690,   137,   138,   139,   140,   141,  1517,  1527,
   938,   142,   143,  1528,  1030,   128,   129,   130,   131,   132,
  1398,   133,   134,   135,   136,   529,   834,   137,   138,   139,
   140,   141,  1228,  1140,  1352,   142,   143,   128,   129,   130,
   131,   132,  1399,   133,   134,   135,   136,   494,   185,   137,
   138,   139,   140,   141,   280,     0,     0,   142,   143,     0,
   128,   129,   130,   131,   132,  1400,   133,   134,   135,   136,
   615,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,   128,   129,   130,   131,   132,
  1459,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,     0,
     0,   128,   129,   130,   131,   132,   209,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,     0,     0,     0,     0,     0,   128,   129,
   130,   131,   132,   284,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
     0,     0,   128,   129,   130,   131,   132,  1038,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,   128,   129,
   130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
     0,   128,   129,   130,   131,   132,     0,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,     0,     0,     0,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,   128,   129,   130,   131,   132,     0,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,     0,     0,     0,     0,     0,   128,   129,
   130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
     0,     0,   670,   671,   672,   673,   674,   675,   676,   677,
   678,   679,     0,     0,   680,   681,   682,   683,   684,   685,
     4,     0,   686,     0,     5,     0,     6,   739,   740,   741,
   742,   743,   744,   745,   746,   747,     0,     0,   748,     0,
     0,     0,   749,     0,     0,   670,   671,   672,   673,   674,
   675,   676,   677,   678,   679,   750,     7,   680,   681,   682,
   683,   684,   685,     8,     0,   686,     0,     0,     0,     0,
     0,     0,     0,     0,   770,     0,     9,     0,    10,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
     0,     0,    12,     0,     0,     0,   128,   129,   130,   131,
   132,    13,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,    14,     0,
     0,     0,     0,     0,     0,   210,     0,   670,   671,   672,
   673,   674,   675,   676,   677,   678,   679,     0,     0,   680,
   681,   682,   683,   684,   685,     0,     0,   686,     0,     0,
     0,    15,     0,    16,   906,     0,     0,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,   751,     0,   142,   143,     0,
     0,     0,     0,    17,   268,    18,    19,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,   128,
   129,   130,   131,   132,   275,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,   128,   129,   130,   131,   132,   276,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,   128,   129,   130,   131,   132,   277,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,   128,   129,   130,   131,   132,
   500,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,   128,   129,   130,
   131,   132,   618,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,   128,
   129,   130,   131,   132,   620,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,   128,   129,   130,   131,   132,   621,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,   128,   129,   130,   131,   132,   622,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,   128,   129,   130,   131,   132,
   728,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,   128,   129,   130,
   131,   132,   873,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,   128,
   129,   130,   131,   132,   875,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,   128,   129,   130,   131,   132,   876,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,   128,   129,   130,   131,   132,   877,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,   128,   129,   130,   131,   132,
   880,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,   128,   129,   130,
   131,   132,  1108,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,   128,
   129,   130,   131,   132,  1117,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,   128,   129,   130,   131,   132,  1264,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,   128,   129,   130,   131,   132,  1271,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,   128,   129,   130,   131,   132,
  1278,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,   128,   129,   130,
   131,   132,  1354,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,   128,
   129,   130,   131,   132,  1355,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,   128,   129,   130,   131,   132,  1356,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,   128,   129,   130,   131,   132,  1357,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,   128,   129,   130,   131,   132,
  1423,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,   128,   129,   130,
   131,   132,  1424,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,   128,
   129,   130,   131,   132,  1425,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,   128,   129,   130,   131,   132,  1426,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,   128,   129,   130,   131,   132,  1434,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,   128,   129,   130,   131,   132,
  1488,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,   128,   129,   130,
   131,   132,  1490,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,   128,
   129,   130,   131,   132,  1491,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,   128,   129,   130,   131,   132,  1499,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,   128,   129,   130,   131,   132,  1500,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,   128,   129,   130,   131,   132,
  1501,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,   128,   129,   130,
   131,   132,  1519,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,   128,
   129,   130,   131,   132,  1520,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,   128,   129,   130,   131,   132,  1523,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,   128,   129,   130,   131,   132,  1530,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,     0,
  1532,   670,   671,   672,   673,   674,   675,   676,   677,   678,
   679,     0,     0,   680,   681,   682,   683,   684,   685,     0,
     0,   686,   128,   129,   130,   131,   132,  1158,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,     0,     0,   258,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,     0,     0,   259,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,     0,   260,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,   261,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,   262,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,     0,     0,   263,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,     0,     0,
   264,   128,   129,   130,   131,   132,     0,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,     0,     0,     0,     0,   265,   128,   129,
   130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
     0,     0,     0,     0,   266,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,     0,
     0,   267,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,     0,     0,   269,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,     0,     0,   270,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,     0,   271,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,   272,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,   273,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,     0,     0,   274,   128,   129,   130,   131,   132,     0,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,     0,     0,     0,     0,
   432,   128,   129,   130,   131,   132,     0,   133,   134,   135,
   136,     0,     0,   137,   138,   139,   140,   141,     0,     0,
     0,   142,   143,     0,     0,     0,     0,   433,   128,   129,
   130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
   137,   138,   139,   140,   141,     0,     0,     0,   142,   143,
     0,     0,     0,     0,   434,   128,   129,   130,   131,   132,
     0,   133,   134,   135,   136,     0,     0,   137,   138,   139,
   140,   141,     0,     0,     0,   142,   143,     0,     0,     0,
     0,   435,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,     0,     0,   437,   128,
   129,   130,   131,   132,     0,   133,   134,   135,   136,     0,
     0,   137,   138,   139,   140,   141,     0,     0,     0,   142,
   143,     0,     0,     0,     0,   651,   128,   129,   130,   131,
   132,     0,   133,   134,   135,   136,     0,     0,   137,   138,
   139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     0,     0,   818,   128,   129,   130,   131,   132,     0,   133,
   134,   135,   136,     0,     0,   137,   138,   139,   140,   141,
     0,     0,     0,   142,   143,     0,     0,     0,     0,  1432,
   128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
   142,   143,     0,     0,     0,     0,  1472,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,   440,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,   524,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,   696,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,   881,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,  1008,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,  1145,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,  1146,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,  1147,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,  1148,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,  1149,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,  1358,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,  1466,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,  1467,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,  1468,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,  1469,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,  1495,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,  1507,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,  1508,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,  1509,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,  1524,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,     0,
     0,  1526,   128,   129,   130,   131,   132,     0,   133,   134,
   135,   136,     0,     0,   137,   138,   139,   140,   141,     0,
     0,     0,   142,   143,     0,     0,  1534,   128,   129,   130,
   131,   132,     0,   133,   134,   135,   136,     0,     0,   137,
   138,   139,   140,   141,     0,     0,     0,   142,   143,   670,
   671,   672,   673,   674,   675,   676,   677,   678,   679,     0,
     0,   680,   681,   682,   683,   684,   685,   131,   132,   686,
   133,   134,   135,   136,     0,     0,   137,   138,   139,   140,
   141,     0,     0,     0,   142,   143,   673,   674,   675,   676,
   677,   678,   679,     0,     0,   680,   681,   682,   683,   684,
   685,     0,     0,   686,   676,   677,   678,   679,     0,     0,
   680,   681,   682,   683,   684,   685,     0,     0,   686
};

static const short yycheck[] = {    25,
   376,   412,   356,   510,   342,   539,   320,   835,   249,   250,
   459,   387,   348,   474,     3,   763,   257,     5,   766,     3,
     3,     5,     5,     5,     5,     5,     5,     5,   404,     5,
     0,   407,    11,    11,   410,    11,   566,   567,   568,    49,
   172,    62,   572,    64,    65,   198,     5,  1195,     5,   196,
  1198,    61,    78,    79,    80,    81,  1204,     5,   372,    43,
    62,    49,   398,    43,  1212,   592,    74,    45,   196,    49,
  1218,  1219,    74,    81,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,     5,   196,     5,     5,    10,   196,
     5,    49,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,   141,   142,   566,   567,   568,
   654,     5,   656,   572,     5,     7,     5,   657,     5,     5,
    11,   196,    11,    92,    11,     5,    10,   473,     7,     7,
     5,   671,   672,   673,   674,   675,   676,   677,   678,   679,
   680,   681,   682,   683,   684,   685,   686,   471,   688,    55,
   908,     3,   498,     5,   197,    77,     5,   200,    64,   507,
   697,    82,   172,    49,   197,   623,   197,   200,    74,     5,
     6,    92,   208,   209,    49,     7,     5,   197,   140,   197,
     7,     7,    11,   641,   197,   197,   196,   200,    62,     5,
    64,   949,   196,    77,   197,    44,   194,   200,   657,   198,
    74,   199,   196,   196,   194,   196,   198,   196,   197,   197,
   196,   197,   671,   672,   673,   674,   675,   676,   677,   678,
   679,   680,   681,   682,   683,   684,   685,   686,   197,   688,
   197,   771,   268,    49,   190,   196,   194,   193,   196,   275,
   276,   277,   196,     3,     4,     5,   282,  1405,   284,   285,
   286,   287,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,   196,   196,   627,
   628,   196,     5,     6,   198,   197,    46,   172,   200,    49,
   286,   197,     3,     5,     5,     7,    10,   197,  1456,   196,
   200,     5,   196,   198,   196,   196,   197,   196,   197,   196,
   197,     7,   771,   198,   198,   351,   196,   196,   196,   194,
    10,    62,  1480,   197,   841,    66,     7,    10,     3,     4,
     5,     6,   368,    74,   186,   793,     7,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,   708,    77,   196,    66,   906,   196,   197,   196,
   196,     5,    47,   913,    49,   371,   700,    11,   194,   198,
   726,    58,    59,   196,     7,   198,   422,    77,   424,   425,
   426,   142,   143,   197,    77,    64,   200,   743,   744,   745,
   746,   437,   198,   114,   750,    74,    74,    76,    42,   113,
   111,   115,   116,   117,    91,   119,   120,   121,  1176,   455,
  1178,   125,   199,   200,   128,   102,   186,   131,   129,   130,
   134,   135,   192,   198,   470,   197,   104,   198,   200,   143,
   144,   201,    48,   111,   198,   441,   157,   906,   197,   197,
     5,   200,   198,   196,   913,   198,   197,   180,    64,   198,
     3,   184,     5,   198,   500,   169,   167,   938,    74,    75,
   196,   197,   508,   509,    80,   511,    82,   196,   198,   198,
   516,   517,   198,   519,   198,    64,     5,     7,   739,   740,
   741,   742,   840,   197,   842,    61,   197,    63,    64,   198,
    64,   922,   753,   849,   196,   197,    85,   853,   198,   198,
    74,   186,    74,  1351,  1352,   198,     7,   192,   198,   194,
   197,   196,   198,    87,   945,    87,   201,    91,   197,   197,
    96,    97,    98,    99,   100,   101,   102,   196,   924,   198,
   886,   198,   888,   105,   187,   188,   189,     7,   198,   895,
   193,   194,   588,   974,   805,   806,    74,   198,   113,   198,
   115,   116,   117,   198,   119,   120,   121,   193,   194,   198,
   125,   199,   200,   128,   198,   137,   131,     5,   829,   134,
   135,   198,   618,     5,   620,   621,   622,   623,   143,   144,
     5,   197,     5,   111,   113,   200,   115,   116,   117,   146,
   119,   120,   121,   199,   200,   641,   125,   643,   198,   128,
   646,   862,   131,  1371,   169,   134,   135,   196,   197,     7,
  1160,   139,   172,   141,   143,   144,   196,  1144,   199,   200,
     5,   197,     5,   197,   172,   197,   196,  1181,  1182,  1183,
  1061,   159,   197,   196,     3,     4,     5,     6,   199,   200,
   169,   196,   197,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,   197,   197,
   196,   197,   173,   174,   175,   176,   177,  1445,   179,   180,
   181,   182,   728,   196,   185,   186,   187,   188,   189,  1023,
   196,  1160,   193,   194,   196,   197,    74,   958,    76,    77,
    78,    79,   963,   173,   174,   175,   176,   177,   196,   179,
   180,   181,   182,   196,   197,   185,   186,   187,   188,   189,
   196,   197,  1056,   193,   194,   196,   197,   172,    92,    93,
    94,    95,   196,   197,     5,  1262,     5,  1264,   196,   197,
  1096,   196,   197,   196,  1100,     5,  1102,   793,    61,  1105,
    63,    64,  1086,   196,  1110,     5,   111,  1091,     5,   114,
   196,    74,   196,   197,     5,  1121,   196,   122,   123,  1296,
   196,   126,   127,  1034,   196,    88,    89,    90,   172,  1135,
  1041,  1137,   199,   185,   186,   187,   188,   196,   197,   102,
   187,   188,   189,   190,  1150,  1151,   193,  1153,   200,    67,
    68,    69,    70,    71,    72,   198,   185,   186,   187,   188,
   189,   857,     5,   859,   193,   194,     5,   186,  1372,   197,
   196,  1348,   196,   192,   199,   200,  1353,   873,     7,   875,
   876,   877,   201,   197,   880,     3,     4,     5,    61,     5,
    63,    64,   197,   196,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    96,    97,    98,    99,   100,   101,   102,
     3,     4,     5,     6,   197,   198,     5,   199,   200,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,   196,  1271,   196,   197,   199,   200,
     5,     7,  1278,  1184,    47,   199,   200,    64,    96,   197,
     3,     4,     5,   196,   197,   199,   200,    74,  1294,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,   105,   106,
   107,   108,   109,   110,   197,     5,    96,    97,    98,    99,
   100,   101,   102,    76,  1358,     5,    79,   796,   797,  1347,
    83,    84,    85,   196,   173,   174,   175,   176,   177,     5,
   179,   180,   181,   182,     5,  1401,   185,   186,   187,   188,
   189,   179,   200,   196,   193,   194,   196,   185,   186,   196,
  1376,   513,   514,    96,   192,   196,   194,   195,   196,   111,
    55,   199,   114,   201,   199,   203,   153,   198,     7,   196,
   122,   123,   124,    86,     7,     7,    89,    90,    91,    92,
    93,   198,    95,  1099,   198,  1411,     7,  1103,  1104,     7,
   197,     7,  1108,   186,   197,  1111,  1112,  1113,  1114,   192,
     8,  1117,  1118,   196,  1120,  1506,  1122,   197,   201,  1125,
   196,   172,     7,  1129,  1130,     5,  1132,   173,   174,   175,
   176,   177,     7,   179,   180,   181,   182,   196,   196,   185,
   186,   187,   188,   189,   197,   148,   179,   193,   194,     7,
   197,     7,   185,   186,     7,   197,     7,     7,     7,   192,
   145,   194,   195,   196,   200,     5,     7,     5,   201,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,     7,     7,   194,     7,     7,     5,     7,   197,
     7,     7,  1413,     3,     4,     5,     7,     5,   196,  1420,
     7,     7,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,  1233,  1234,  1235,
  1236,  1237,   179,   180,   181,   182,     5,     5,   185,   186,
   187,   188,   189,     7,     7,   196,   193,   194,   198,     3,
     4,     5,    61,   199,    63,   198,   198,  1478,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,     5,     5,     3,     5,    96,    97,    98,
    99,   100,   101,   102,   185,   186,   187,   188,   189,   190,
   194,   198,   193,     3,     4,     5,  1312,  1313,  1314,  1315,
  1316,     7,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,   196,   200,   196,
     6,   196,   196,   180,   154,   193,   198,   157,  1354,  1355,
  1356,  1357,   173,   174,   175,   176,   177,   196,   179,   180,
   181,   182,   198,   196,   185,   186,   187,   188,   189,  1375,
     3,  1377,   193,   194,     6,   198,   186,     7,   198,     5,
     5,     5,   192,   198,   198,   198,   196,     5,   197,     5,
     5,   201,   196,   196,   113,   196,   115,   116,   117,   198,
   119,   120,   121,   196,  1410,   199,   125,   199,   198,   128,
   197,   199,   131,     5,     5,   134,   135,  1423,  1424,  1425,
  1426,    61,     5,    63,   143,   144,     5,     5,  1434,     5,
     5,     5,   186,     5,     3,     5,     3,   199,   192,     5,
     5,     5,     3,     5,   198,     5,     5,   201,     5,     7,
   169,     7,     5,     5,     5,     5,    96,    97,    98,    99,
   100,   101,   102,     7,   198,   198,   196,     5,  1474,     5,
  1476,  1477,   197,     7,     7,     7,     7,  1483,   197,     7,
     7,     7,  1488,     7,  1490,  1491,   186,     3,     7,     7,
     7,   200,   192,  1499,  1500,  1501,     7,   197,     7,     7,
     7,   201,   199,   198,   198,     7,     7,  1513,    85,  1515,
     7,     7,   196,  1519,  1520,     7,     5,  1523,     3,     4,
     5,     7,  1528,     7,  1530,     7,  1532,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,     3,     4,     5,     5,   198,   197,     7,     7,
     7,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,     3,     4,     5,     7,
   198,     7,     7,     7,     7,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     3,     4,     5,     7,    87,     7,     7,     7,     5,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    66,   146,   147,   148,   149,   150,
   151,   152,     5,   113,     5,   115,   116,   117,     5,   119,
   120,   121,     5,     7,   199,   125,     7,     7,   128,     7,
     7,   131,     7,     7,   134,   135,     7,   199,     7,     7,
   200,   196,   104,   143,   144,    64,     5,    66,     5,   111,
   112,   186,   200,     7,   199,     5,   200,   192,    77,   194,
   200,     7,   200,   200,     7,     7,   201,   129,    87,   169,
   132,   133,   200,   200,   200,   199,   199,     7,     5,     7,
   196,     7,     7,   102,     7,   186,   113,     7,   115,   116,
   117,   192,   119,   120,   121,   196,     7,   197,   125,     7,
   201,   128,     5,   196,   131,   167,   196,   134,   135,   196,
     5,     5,   196,   196,   196,   196,   143,   144,     7,   186,
   196,   196,   196,   196,     3,   192,     7,   199,   199,   196,
   199,     5,     5,     5,   201,   197,     7,   198,     5,   199,
   196,   200,   169,     5,     7,   199,     7,     7,   167,     7,
     7,     7,   199,   186,   113,   196,   115,   116,   117,   192,
   119,   120,   121,   199,   199,     7,   125,     5,   201,   128,
   197,     7,   131,   197,   199,   134,   135,   197,   197,   197,
     7,     7,     7,     7,   143,   144,   113,     7,   115,   116,
   117,     7,   119,   120,   121,     7,     7,     7,   125,     7,
     7,   128,   200,     7,   131,     7,     7,   134,   135,     7,
   169,     5,   200,   199,   118,   200,   143,   144,   113,     7,
   115,   116,   117,   199,   119,   120,   121,    86,   200,     7,
   125,     5,     7,   128,   200,   200,   131,     5,   197,   134,
   135,     7,   169,   196,     5,     5,   198,   196,   143,   144,
   197,   113,     5,   115,   116,   117,     5,   119,   120,   121,
   199,   199,   199,   125,     7,     5,   128,   196,     7,   131,
   197,     7,   134,   135,   169,     7,     7,     7,     7,     7,
     7,   143,   144,     7,   173,   174,   175,   176,   177,     7,
   179,   180,   181,   182,     7,     7,   185,   186,   187,   188,
   189,     7,   197,     7,   193,   194,     7,   169,   199,   196,
   173,   174,   175,   176,   177,     7,   179,   180,   181,   182,
   197,   196,   185,   186,   187,   188,   189,   196,   196,     7,
   193,   194,    41,     7,   103,   197,     5,   173,   174,   175,
   176,   177,     7,   179,   180,   181,   182,   196,   196,   185,
   186,   187,   188,   189,   197,     7,   197,   193,   194,   196,
     0,   173,   174,   175,   176,   177,     7,   179,   180,   181,
   182,     0,   576,   185,   186,   187,   188,   189,   197,   197,
   821,   193,   194,   196,   899,   173,   174,   175,   176,   177,
     7,   179,   180,   181,   182,   446,   703,   185,   186,   187,
   188,   189,  1140,  1002,  1300,   193,   194,   173,   174,   175,
   176,   177,     7,   179,   180,   181,   182,   416,    98,   185,
   186,   187,   188,   189,   208,    -1,    -1,   193,   194,    -1,
   173,   174,   175,   176,   177,     7,   179,   180,   181,   182,
   492,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,    -1,    -1,    -1,   173,   174,   175,   176,   177,
     7,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,
    -1,   173,   174,   175,   176,   177,     8,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,    -1,    -1,    -1,    -1,    -1,   173,   174,
   175,   176,   177,     8,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   173,   174,   175,   176,   177,     8,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   173,   174,   175,   176,
   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,   173,   174,   175,   176,   177,    -1,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,    -1,    -1,    -1,   173,   174,   175,   176,
   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,    -1,
    -1,   173,   174,   175,   176,   177,    -1,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,    -1,    -1,    -1,    -1,    -1,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,   190,
     5,    -1,   193,    -1,     9,    -1,    11,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    -1,    -1,    60,    -1,
    -1,    -1,    64,    -1,    -1,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,    77,    41,   185,   186,   187,
   188,   189,   190,    48,    -1,   193,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   202,    -1,    61,    -1,    63,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
    -1,    -1,    77,    -1,    -1,    -1,   173,   174,   175,   176,
   177,    86,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   103,    -1,
    -1,    -1,    -1,    -1,    -1,   202,    -1,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,   190,    -1,    -1,   193,    -1,    -1,
    -1,   136,    -1,   138,   200,    -1,    -1,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,   197,    -1,   193,   194,    -1,
    -1,    -1,    -1,   168,   200,   170,   171,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,
   174,   175,   176,   177,   200,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,   173,   174,   175,   176,   177,   200,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,   173,   174,   175,   176,   177,   200,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,   177,
   200,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,
   176,   177,   200,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,
   174,   175,   176,   177,   200,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,   173,   174,   175,   176,   177,   200,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,   173,   174,   175,   176,   177,   200,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,   177,
   200,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,
   176,   177,   200,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,
   174,   175,   176,   177,   200,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,   173,   174,   175,   176,   177,   200,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,   173,   174,   175,   176,   177,   200,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,   177,
   200,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,
   176,   177,   200,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,
   174,   175,   176,   177,   200,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,   173,   174,   175,   176,   177,   200,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,   173,   174,   175,   176,   177,   200,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,   177,
   200,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,
   176,   177,   200,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,
   174,   175,   176,   177,   200,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,   173,   174,   175,   176,   177,   200,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,   173,   174,   175,   176,   177,   200,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,   177,
   200,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,
   176,   177,   200,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,
   174,   175,   176,   177,   200,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,   173,   174,   175,   176,   177,   200,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,   173,   174,   175,   176,   177,   200,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,   177,
   200,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,
   176,   177,   200,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,
   174,   175,   176,   177,   200,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,   173,   174,   175,   176,   177,   200,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,   173,   174,   175,   176,   177,   200,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,   177,
   200,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,
   176,   177,   200,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,
   174,   175,   176,   177,   200,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,   173,   174,   175,   176,   177,   200,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,   173,   174,   175,   176,   177,   200,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,    -1,
   200,   173,   174,   175,   176,   177,   178,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,   190,    -1,
    -1,   193,   173,   174,   175,   176,   177,   199,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,   199,   173,
   174,   175,   176,   177,    -1,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,    -1,    -1,    -1,    -1,   199,   173,   174,   175,   176,
   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,    -1,
    -1,    -1,   199,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,   199,
   173,   174,   175,   176,   177,    -1,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,    -1,    -1,    -1,    -1,   199,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,    -1,    -1,   199,   173,   174,   175,   176,   177,    -1,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,
   199,   173,   174,   175,   176,   177,    -1,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,    -1,    -1,    -1,    -1,   199,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,    -1,    -1,   199,   173,   174,   175,   176,   177,
    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,
    -1,   199,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,   199,   173,
   174,   175,   176,   177,    -1,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,    -1,    -1,    -1,    -1,   199,   173,   174,   175,   176,
   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,    -1,
    -1,    -1,   199,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,   199,
   173,   174,   175,   176,   177,    -1,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,    -1,    -1,    -1,    -1,   199,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,    -1,    -1,   199,   173,   174,   175,   176,   177,    -1,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,
   199,   173,   174,   175,   176,   177,    -1,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,    -1,    -1,    -1,    -1,   199,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,    -1,    -1,   199,   173,   174,   175,   176,   177,
    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,
    -1,   199,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,   199,   173,
   174,   175,   176,   177,    -1,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,
   194,    -1,    -1,    -1,    -1,   199,   173,   174,   175,   176,
   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,    -1,
    -1,    -1,   199,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,   199,
   173,   174,   175,   176,   177,    -1,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,    -1,    -1,    -1,    -1,   199,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,    -1,
    -1,   197,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,   190,   176,   177,   193,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,   176,   177,   178,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
   190,    -1,    -1,   193,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,   190,    -1,    -1,   193
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison.simple"

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
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

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

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
     int count;
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
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "/usr/local/share/bison.simple"

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
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
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
#line 314 "yacc.y"
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
#line 350 "yacc.y"
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
#line 392 "yacc.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 415 "yacc.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 430 "yacc.y"
{ InteractiveExit = 1; ;
    break;}
case 21:
#line 433 "yacc.y"
{ Help(NULL); ;
    break;}
case 22:
#line 437 "yacc.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 24:
#line 441 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 25:
#line 449 "yacc.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 27:
#line 466 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 29:
#line 473 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 30:
#line 476 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 31:
#line 479 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 32:
#line 481 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 35:
#line 492 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 36:
#line 497 "yacc.y"
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
#line 509 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 38:
#line 518 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 39:
#line 529 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 40:
#line 534 "yacc.y"
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
#line 571 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 42:
#line 574 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 43:
#line 585 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 44:
#line 587 "yacc.y"
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
#line 603 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 46:
#line 606 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 47:
#line 609 "yacc.y"
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
#line 660 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 49:
#line 672 "yacc.y"
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
#line 696 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 51:
#line 703 "yacc.y"
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
#line 716 "yacc.y"
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
#line 734 "yacc.y"
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
#line 757 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 55:
#line 761 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 56:
#line 770 "yacc.y"
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
#line 784 "yacc.y"
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
#line 818 "yacc.y"
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
#line 831 "yacc.y"
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
#line 855 "yacc.y"
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
#line 865 "yacc.y"
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
#line 887 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 66:
#line 892 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 67:
#line 893 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 68:
#line 898 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 72:
#line 917 "yacc.y"
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
#line 937 "yacc.y"
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
#line 988 "yacc.y"
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
#line 1008 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 78:
#line 1014 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 79:
#line 1020 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 80:
#line 1023 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 81:
#line 1031 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 82:
#line 1035 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 84:
#line 1047 "yacc.y"
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
#line 1060 "yacc.y"
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
#line 1074 "yacc.y"
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
#line 1089 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 88:
#line 1095 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1101 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1107 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1113 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1119 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1125 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1131 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1137 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1143 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1149 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1155 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1161 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1167 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1173 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1179 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1185 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1192 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 106:
#line 1200 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 108:
#line 1213 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 109:
#line 1219 "yacc.y"
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
#line 1297 "yacc.y"
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
#line 1331 "yacc.y"
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
#line 1341 "yacc.y"
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
#line 1354 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 114:
#line 1356 "yacc.y"
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
#line 1367 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 116:
#line 1373 "yacc.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 117:
#line 1379 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 118:
#line 1381 "yacc.y"
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
#line 1410 "yacc.y"
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
#line 1434 "yacc.y"
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
#line 1445 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 122:
#line 1451 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 123:
#line 1458 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 124:
#line 1464 "yacc.y"
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
#line 1475 "yacc.y"
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
#line 1490 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 127:
#line 1491 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 128:
#line 1492 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 129:
#line 1497 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 130:
#line 1498 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 131:
#line 1504 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 133:
#line 1509 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 134:
#line 1516 "yacc.y"
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
#line 1543 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 136:
#line 1548 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 137:
#line 1555 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianPerRegion = NULL ; ;
    break;}
case 139:
#line 1564 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 140:
#line 1569 "yacc.y"
{ JacobianMethod_S.JacobianPerRegion = yyvsp[-1].l ; ;
    break;}
case 141:
#line 1576 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 142:
#line 1579 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 143:
#line 1586 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 145:
#line 1596 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 146:
#line 1599 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 147:
#line 1602 "yacc.y"
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
#line 1633 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 149:
#line 1639 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 150:
#line 1646 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.Method = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 152:
#line 1659 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 153:
#line 1666 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 154:
#line 1669 "yacc.y"
{ IntegrationMethod_S.Method = yyvsp[-1].l ; ;
    break;}
case 155:
#line 1676 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 156:
#line 1679 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 157:
#line 1686 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 159:
#line 1698 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 160:
#line 1707 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 161:
#line 1716 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 162:
#line 1723 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 163:
#line 1726 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 164:
#line 1733 "yacc.y"
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
#line 1749 "yacc.y"
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
#line 1802 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 168:
#line 1805 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 169:
#line 1808 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 170:
#line 1811 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 171:
#line 1814 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 172:
#line 1825 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 174:
#line 1835 "yacc.y"
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
#line 1860 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 178:
#line 1874 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 179:
#line 1880 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 180:
#line 1887 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 181:
#line 1895 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 182:
#line 1898 "yacc.y"
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
#line 1920 "yacc.y"
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
#line 1935 "yacc.y"
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
#line 1959 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 187:
#line 1973 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 188:
#line 1982 "yacc.y"
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
#line 2006 "yacc.y"
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
#line 2031 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 191:
#line 2036 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 192:
#line 2044 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 193:
#line 2052 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 194:
#line 2062 "yacc.y"
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
#line 2078 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 196:
#line 2085 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 197:
#line 2091 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 198:
#line 2097 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 199:
#line 2105 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 200:
#line 2113 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 201:
#line 2121 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 202:
#line 2141 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 204:
#line 2152 "yacc.y"
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
#line 2179 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 208:
#line 2192 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 209:
#line 2198 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 210:
#line 2205 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 211:
#line 2213 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 212:
#line 2216 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 213:
#line 2219 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 214:
#line 2222 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2229 "yacc.y"
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
#line 2245 "yacc.y"
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
#line 2282 "yacc.y"
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
#line 2301 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 220:
#line 2304 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 221:
#line 2309 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 222:
#line 2314 "yacc.y"
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
#line 2326 "yacc.y"
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
#line 2350 "yacc.y"
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
#line 2410 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 227:
#line 2413 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 228:
#line 2422 "yacc.y"
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
#line 2487 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 230:
#line 2491 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 231:
#line 2498 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 233:
#line 2507 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 234:
#line 2512 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 235:
#line 2519 "yacc.y"
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
#line 2535 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 237:
#line 2541 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 238:
#line 2544 "yacc.y"
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
#line 2563 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 240:
#line 2567 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 241:
#line 2576 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 243:
#line 2587 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 244:
#line 2592 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 245:
#line 2601 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 246:
#line 2614 "yacc.y"
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
#line 2629 "yacc.y"
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
#line 2703 "yacc.y"
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
#line 2719 "yacc.y"
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
#line 2737 "yacc.y"
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
#line 2751 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 253:
#line 2754 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 254:
#line 2757 "yacc.y"
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
#line 2803 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 257:
#line 2813 "yacc.y"
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
#line 2839 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 261:
#line 2851 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 262:
#line 2857 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 263:
#line 2864 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 265:
#line 2875 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 266:
#line 2881 "yacc.y"
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
#line 2895 "yacc.y"
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
#line 2913 "yacc.y"
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
#line 2934 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 271:
#line 2937 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 272:
#line 2941 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 273:
#line 2944 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 274:
#line 2953 "yacc.y"
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
#line 2992 "yacc.y"
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
#line 3016 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 277:
#line 3021 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 278:
#line 3027 "yacc.y"
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
#line 3177 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 280:
#line 3182 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 281:
#line 3191 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 282:
#line 3200 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 284:
#line 3208 "yacc.y"
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
#line 3248 "yacc.y"
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
#line 3263 "yacc.y"
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
#line 3291 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 288:
#line 3294 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 289:
#line 3297 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 290:
#line 3300 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 291:
#line 3307 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 293:
#line 3318 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 294:
#line 3327 "yacc.y"
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
#line 3337 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 296:
#line 3351 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 298:
#line 3363 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 299:
#line 3365 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 300:
#line 3367 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 301:
#line 3369 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 302:
#line 3377 "yacc.y"
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
#line 3399 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 305:
#line 3407 "yacc.y"
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
#line 3469 "yacc.y"
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
#line 3515 "yacc.y"
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
#line 3539 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3548 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 310:
#line 3562 "yacc.y"
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
#line 3591 "yacc.y"
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
#line 3615 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 314:
#line 3623 "yacc.y"
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
#line 3678 "yacc.y"
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
#line 3695 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 317:
#line 3696 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 318:
#line 3697 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 319:
#line 3698 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 320:
#line 3699 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 321:
#line 3700 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 322:
#line 3701 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 323:
#line 3708 "yacc.y"
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
#line 3722 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 325:
#line 3740 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 327:
#line 3750 "yacc.y"
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
#line 3775 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 331:
#line 3787 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 332:
#line 3794 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 333:
#line 3801 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 334:
#line 3804 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 335:
#line 3806 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 336:
#line 3812 "yacc.y"
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
#line 3827 "yacc.y"
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
#line 3846 "yacc.y"
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
#line 3865 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 341:
#line 3868 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 342:
#line 3876 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 343:
#line 3879 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 344:
#line 3884 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 345:
#line 3889 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 346:
#line 3894 "yacc.y"
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
#line 3904 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 348:
#line 3913 "yacc.y"
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
#line 3950 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 350:
#line 3957 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 351:
#line 3960 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 352:
#line 3972 "yacc.y"
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
#line 3982 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 354:
#line 3988 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 355:
#line 3991 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 356:
#line 4003 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 357:
#line 4011 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 358:
#line 4022 "yacc.y"
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
#line 4038 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 360:
#line 4045 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 361:
#line 4051 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 362:
#line 4057 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 363:
#line 4063 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 364:
#line 4071 "yacc.y"
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
#line 4087 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 366:
#line 4094 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 367:
#line 4100 "yacc.y"
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
#line 4111 "yacc.y"
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
#line 4122 "yacc.y"
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
#line 4138 "yacc.y"
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
#line 4150 "yacc.y"
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
#line 4172 "yacc.y"
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
#line 4194 "yacc.y"
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
#line 4207 "yacc.y"
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
#line 4220 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 377:
#line 4229 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 379:
#line 4238 "yacc.y"
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
#line 4248 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 381:
#line 4259 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 382:
#line 4268 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 383:
#line 4278 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 385:
#line 4288 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 386:
#line 4291 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 387:
#line 4300 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 388:
#line 4313 "yacc.y"
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
#line 4329 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 391:
#line 4333 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 392:
#line 4337 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 393:
#line 4341 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 394:
#line 4346 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 395:
#line 4357 "yacc.y"
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
#line 4374 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 398:
#line 4378 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 399:
#line 4382 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 400:
#line 4386 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 401:
#line 4390 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 402:
#line 4395 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 403:
#line 4406 "yacc.y"
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
#line 4421 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 406:
#line 4425 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 407:
#line 4429 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 408:
#line 4433 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 409:
#line 4438 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 410:
#line 4449 "yacc.y"
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
#line 4467 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 413:
#line 4471 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 414:
#line 4475 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 415:
#line 4479 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 416:
#line 4484 "yacc.y"
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
#line 4494 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 418:
#line 4500 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 419:
#line 4506 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 420:
#line 4516 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 421:
#line 4519 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 422:
#line 4524 "yacc.y"
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
#line 4542 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 425:
#line 4551 "yacc.y"
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
#line 4580 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 427:
#line 4583 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 428:
#line 4586 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 429:
#line 4594 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 430:
#line 4609 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 432:
#line 4621 "yacc.y"
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
#line 4644 "yacc.y"
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
#line 4658 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 437:
#line 4665 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 438:
#line 4673 "yacc.y"
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
#line 4719 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 440:
#line 4724 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 441:
#line 4730 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 442:
#line 4733 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 443:
#line 4738 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.Type = NONCUMULATIVE ;
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 445:
#line 4750 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 446:
#line 4753 "yacc.y"
{ PostQuantity_S.Type =
	Get_DefineForString(PostQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of PostQuantity: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(PostQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 447:
#line 4762 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 448:
#line 4768 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 449:
#line 4773 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 450:
#line 4779 "yacc.y"
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
#line 4792 "yacc.y"
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
#line 4806 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 454:
#line 4813 "yacc.y"
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
#line 4841 "yacc.y"
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
#line 4850 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 457:
#line 4851 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 458:
#line 4857 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 459:
#line 4866 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 460:
#line 4883 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 462:
#line 4895 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 464:
#line 4902 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 466:
#line 4914 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 467:
#line 4921 "yacc.y"
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
#line 4933 "yacc.y"
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
#line 4943 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 470:
#line 4948 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 471:
#line 4954 "yacc.y"
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
#line 4971 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 473:
#line 4981 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 474:
#line 4984 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 475:
#line 4988 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 476:
#line 4999 "yacc.y"
{
      PostSubOperation_S.Type = POP_PLOT ;
    ;
    break;}
case 477:
#line 5004 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.SubType = PLOT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[-3].i) ;
    ;
    break;}
case 478:
#line 5016 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.SubType = PLOT_WITHARGUMENT ;

      PostSubOperation_S.Case.WithArgument.RegionIndex = 
	Num_Group(&Group_S, "PO_On", yyvsp[-13].i) ;

      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-11].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;

      PostSubOperation_S.Case.WithArgument.ArgumentIndex = i ;
      PostSubOperation_S.Case.WithArgument.x[0] = yyvsp[-9].d ;
      PostSubOperation_S.Case.WithArgument.x[1] = yyvsp[-7].d ;
      PostSubOperation_S.Case.WithArgument.n = (int)yyvsp[-4].d ;
    ;
    break;}
case 479:
#line 5038 "yacc.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-1].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-1].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 480:
#line 5048 "yacc.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-3].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-3].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;

      if ((j = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-1].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-1].c) ;
      PostSubOperation_S.PostQuantityIndex[1] = j ;

      if((k=((struct PostQuantity*)
	     List_Pointer(InteractivePostProcessing_S.PostQuantity, i))->Type) == 
	 ((struct PostQuantity*)List_Pointer(InteractivePostProcessing_S.PostQuantity, j))->Type){
	vyyerror("PostQuantities '%s' and '%s' should not be of same type (%s)", 
		 yyvsp[-3].c, yyvsp[-1].c, Get_StringForDefine(PostQuantity_Type, k)) ;
      }      
      Free(yyvsp[-3].c) ; Free(yyvsp[-1].c) ;
    ;
    break;}
case 481:
#line 5071 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 482:
#line 5072 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 483:
#line 5073 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 484:
#line 5074 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 485:
#line 5080 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 486:
#line 5089 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONCUT_2D ;
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
case 487:
#line 5103 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 488:
#line 5111 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_PARAM ;
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
case 489:
#line 5124 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 490:
#line 5134 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 491:
#line 5143 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_1D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-14].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-12].d ;
      PostSubOperation_S.Case.OnGrid.x[1] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnGrid.y[1] = yyvsp[-7].d ;
      PostSubOperation_S.Case.OnGrid.z[1] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-1].d ;
    ;
    break;}
case 492:
#line 5157 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_2D ;
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
case 493:
#line 5176 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_3D ;
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
case 494:
#line 5199 "yacc.y"
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
case 496:
#line 5219 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 497:
#line 5226 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 498:
#line 5233 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 499:
#line 5240 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 500:
#line 5244 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 501:
#line 5248 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 502:
#line 5252 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 503:
#line 5256 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 504:
#line 5265 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 505:
#line 5270 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 506:
#line 5275 "yacc.y"
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
case 507:
#line 5295 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Plot") ;  	
    ;
    break;}
case 508:
#line 5302 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 509:
#line 5309 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 510:
#line 5317 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 511:
#line 5325 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 512:
#line 5332 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 513:
#line 5339 "yacc.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 514:
#line 5343 "yacc.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 515:
#line 5356 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 516:
#line 5362 "yacc.y"
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
case 517:
#line 5409 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 519:
#line 5420 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 520:
#line 5423 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 521:
#line 5429 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 522:
#line 5430 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 524:
#line 5438 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 525:
#line 5441 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 526:
#line 5450 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 527:
#line 5453 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 528:
#line 5464 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 529:
#line 5470 "yacc.y"
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
case 530:
#line 5489 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 531:
#line 5495 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 532:
#line 5501 "yacc.y"
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
case 533:
#line 5513 "yacc.y"
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
case 536:
#line 5564 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 537:
#line 5570 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 538:
#line 5576 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 539:
#line 5587 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 540:
#line 5588 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 541:
#line 5589 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 542:
#line 5590 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 543:
#line 5591 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 544:
#line 5592 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 545:
#line 5593 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 546:
#line 5594 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 547:
#line 5595 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 548:
#line 5596 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 549:
#line 5597 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 550:
#line 5598 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 551:
#line 5599 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 552:
#line 5600 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 553:
#line 5601 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 554:
#line 5602 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 555:
#line 5603 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 556:
#line 5604 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 557:
#line 5605 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 558:
#line 5606 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 559:
#line 5607 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 560:
#line 5610 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 561:
#line 5611 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 562:
#line 5612 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 563:
#line 5613 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 564:
#line 5614 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 565:
#line 5615 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 566:
#line 5616 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 567:
#line 5617 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 568:
#line 5618 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 569:
#line 5619 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 570:
#line 5620 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 571:
#line 5621 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 572:
#line 5622 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 573:
#line 5623 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 574:
#line 5624 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 575:
#line 5625 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 576:
#line 5626 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 577:
#line 5627 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 578:
#line 5628 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 579:
#line 5629 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 580:
#line 5630 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 581:
#line 5631 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 582:
#line 5632 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 583:
#line 5633 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 584:
#line 5634 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 585:
#line 5635 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 586:
#line 5636 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 587:
#line 5637 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 588:
#line 5638 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 589:
#line 5639 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 590:
#line 5640 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 591:
#line 5641 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 592:
#line 5642 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 593:
#line 5643 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 594:
#line 5644 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 595:
#line 5645 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 596:
#line 5646 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 597:
#line 5647 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 598:
#line 5648 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 599:
#line 5649 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 600:
#line 5654 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 601:
#line 5655 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 602:
#line 5656 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 603:
#line 5657 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 604:
#line 5658 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 605:
#line 5659 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 606:
#line 5660 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 607:
#line 5662 "yacc.y"
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
case 608:
#line 5681 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 609:
#line 5684 "yacc.y"
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
#line 498 "/usr/local/share/bison.simple"

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
}
#line 5700 "yacc.y"



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


