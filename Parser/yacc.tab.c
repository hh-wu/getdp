
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
#define	tOnRegion	400
#define	tOnGrid	401
#define	tOnCut	402
#define	tOnPoint	403
#define	tOnLine	404
#define	tOnPlane	405
#define	tOnBox	406
#define	tWithArgument	407
#define	tFile	408
#define	tDepth	409
#define	tDimension	410
#define	tTimeStep	411
#define	tHarmonicToTime	412
#define	tFormat	413
#define	tHeader	414
#define	tFooter	415
#define	tSkin	416
#define	tSmoothing	417
#define	tTarget	418
#define	tSort	419
#define	tIso	420
#define	tFlag	421
#define	tExit	422
#define	tBreak	423
#define	tHelp	424
#define	tCpu	425
#define	tDEF	426
#define	tAND	427
#define	tOR	428
#define	tNOTEQUAL	429
#define	tEQUAL	430
#define	tAPPROXEQUAL	431
#define	tLESSOREQUAL	432
#define	tGREATEROREQUAL	433
#define	tLESSLESS	434
#define	tGREATERGREATER	435
#define	tCROSSPRODUCT	436
#define	UNARYPREC	437

#line 1 "yacc.y"

/* $Id: yacc.tab.c,v 1.13 2000-10-15 14:02:48 geuzaine Exp $ */

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
void Pos_InteractiveHelp(void);

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



#define	YYFINAL		1532
#define	YYFLAG		-32768
#define	YYNTBASE	204

#define YYTRANSLATE(x) ((unsigned)(x) <= 437 ? yytranslate[x] : 385)

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
   167,   168,   169,   170,   171,   172,   174,   175,   176,   177,
   178,   181,   182,   183,   184,   190,   191
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    75,    78,    79,    82,    83,    84,    88,    93,    99,
   100,   107,   113,   115,   116,   117,   125,   128,   130,   133,
   135,   137,   139,   141,   142,   146,   151,   153,   155,   159,
   160,   164,   169,   171,   175,   182,   184,   189,   193,   194,
   198,   205,   206,   208,   213,   214,   217,   221,   222,   225,
   231,   238,   246,   248,   249,   253,   258,   263,   264,   267,
   268,   271,   273,   274,   275,   283,   287,   291,   298,   302,
   306,   310,   314,   318,   322,   326,   330,   334,   338,   342,
   346,   350,   354,   357,   360,   363,   367,   369,   373,   376,
   378,   381,   382,   388,   393,   398,   399,   407,   414,   417,
   420,   423,   426,   430,   433,   437,   440,   444,   446,   450,
   451,   455,   462,   469,   470,   475,   476,   479,   483,   488,
   489,   494,   495,   498,   502,   506,   511,   512,   517,   518,
   521,   525,   529,   534,   535,   540,   541,   544,   548,   552,
   557,   558,   563,   564,   567,   571,   575,   579,   583,   587,
   591,   592,   595,   599,   601,   602,   605,   609,   614,   618,
   623,   629,   630,   635,   636,   639,   643,   647,   651,   655,
   659,   663,   671,   675,   679,   683,   687,   691,   699,   707,
   715,   716,   719,   723,   725,   726,   729,   733,   738,   742,
   747,   752,   757,   762,   763,   768,   769,   772,   776,   780,
   785,   790,   794,   798,   799,   800,   801,   820,   821,   826,
   827,   830,   834,   838,   840,   844,   845,   849,   850,   855,
   856,   859,   863,   867,   871,   872,   877,   878,   881,   885,
   891,   895,   899,   904,   905,   908,   912,   914,   915,   918,
   922,   927,   931,   936,   941,   942,   947,   948,   951,   955,
   959,   963,   967,   968,   975,   979,   980,   986,   990,   994,
   998,  1002,  1003,  1007,  1008,  1011,  1016,  1021,  1026,  1031,
  1032,  1035,  1039,  1043,  1047,  1048,  1051,  1055,  1059,  1063,
  1067,  1068,  1071,  1072,  1073,  1083,  1087,  1091,  1095,  1096,
  1099,  1103,  1104,  1105,  1115,  1116,  1118,  1120,  1122,  1124,
  1126,  1128,  1133,  1137,  1138,  1141,  1145,  1147,  1148,  1151,
  1155,  1160,  1165,  1166,  1172,  1173,  1178,  1179,  1182,  1186,
  1190,  1194,  1198,  1202,  1206,  1210,  1214,  1217,  1221,  1222,
  1226,  1228,  1232,  1233,  1237,  1238,  1241,  1245,  1249,  1254,
  1259,  1264,  1269,  1275,  1281,  1284,  1292,  1304,  1312,  1320,
  1330,  1342,  1356,  1372,  1373,  1381,  1382,  1390,  1398,  1402,
  1404,  1406,  1407,  1410,  1414,  1418,  1421,  1422,  1425,  1429,
  1433,  1437,  1441,  1446,  1447,  1450,  1454,  1458,  1462,  1466,
  1470,  1475,  1476,  1479,  1483,  1487,  1491,  1495,  1500,  1501,
  1504,  1508,  1512,  1516,  1520,  1524,  1529,  1534,  1539,  1540,
  1545,  1546,  1549,  1553,  1557,  1561,  1565,  1569,  1573,  1574,
  1577,  1581,  1583,  1584,  1587,  1591,  1596,  1601,  1605,  1610,
  1611,  1616,  1617,  1620,  1624,  1628,  1633,  1634,  1640,  1646,
  1647,  1650,  1651,  1658,  1662,  1663,  1668,  1672,  1676,  1677,
  1680,  1684,  1686,  1687,  1690,  1694,  1698,  1702,  1706,  1711,
  1712,  1721,  1722,  1723,  1727,  1735,  1744,  1763,  1766,  1771,
  1773,  1775,  1777,  1779,  1782,  1807,  1810,  1811,  1826,  1835,
  1856,  1886,  1925,  1926,  1929,  1933,  1938,  1943,  1947,  1950,
  1954,  1958,  1962,  1966,  1970,  1974,  1978,  1982,  1986,  1990,
  1994,  1998,  2002,  2003,  2006,  2007,  2011,  2013,  2017,  2018,
  2020,  2024,  2026,  2028,  2032,  2036,  2040,  2047,  2052,  2057,
  2064,  2074,  2080,  2081,  2085,  2091,  2097,  2099,  2101,  2103,
  2105,  2107,  2109,  2111,  2113,  2115,  2117,  2119,  2121,  2123,
  2125,  2127,  2129,  2131,  2133,  2135,  2137,  2139,  2141,  2145,
  2148,  2151,  2155,  2159,  2163,  2167,  2171,  2175,  2179,  2183,
  2187,  2191,  2195,  2199,  2203,  2207,  2212,  2217,  2222,  2227,
  2232,  2237,  2242,  2247,  2252,  2257,  2264,  2269,  2274,  2279,
  2284,  2289,  2294,  2301,  2308,  2315,  2321,  2324,  2326,  2328,
  2330,  2332,  2334,  2336,  2338,  2340,  2342
};

static const short yyrhs[] = {    -1,
   205,   206,     0,     0,     0,   206,   207,   208,     0,    41,
   196,   211,   197,     0,    77,   196,   231,   197,     0,    48,
   196,   262,   197,     0,    61,   196,   247,   197,     0,    63,
   196,   253,   197,     0,    73,   196,   269,   197,     0,    86,
   196,   290,   197,     0,   103,   196,   316,   197,     0,   136,
   196,   346,   197,     0,   138,   196,   358,   197,     0,   362,
     0,   379,     0,     9,   384,     0,   209,     0,   168,     7,
     0,   170,     7,     0,   171,     7,     0,     0,   210,   366,
     0,     0,     0,   211,   212,   213,     0,     5,   172,   215,
     7,     0,     5,   230,   172,   215,     7,     0,     0,     5,
   228,   172,   214,   215,     7,     0,    42,   198,   226,   199,
     7,     0,   379,     0,     0,     0,   219,   198,   216,   220,
   217,   221,   199,     0,   194,   223,     0,   215,     0,     5,
   229,     0,    49,     0,     5,     0,   223,     0,    43,     0,
     0,   227,   222,   223,     0,   227,    44,     5,   229,     0,
     5,     0,   225,     0,   196,   224,   197,     0,     0,   224,
   227,   225,     0,   224,   227,   186,   225,     0,     3,     0,
     3,     8,     3,     0,     3,     8,   198,   382,   199,     3,
     0,     5,     0,     5,   196,   382,   197,     0,     5,   196,
   197,     0,     0,   226,   227,     5,     0,   226,   227,     5,
   196,   382,   197,     0,     0,   200,     0,   196,   194,   382,
   197,     0,     0,   196,   197,     0,   196,   382,   197,     0,
     0,   231,   232,     0,    45,   198,   233,   199,     7,     0,
     5,   198,   199,   172,   234,     7,     0,     5,   198,   218,
   199,   172,   234,     7,     0,   379,     0,     0,   233,   227,
     5,     0,    10,   198,   382,   199,     0,    77,   198,     5,
   199,     0,     0,   235,   236,     0,     0,   237,   238,     0,
   241,     0,     0,     0,   238,   173,   239,   238,     8,   240,
   238,     0,   238,   187,   238,     0,   238,   190,   238,     0,
    40,   198,   238,   200,   238,   199,     0,   238,   188,   238,
     0,   238,   185,   238,     0,   238,   186,   238,     0,   238,
   189,   238,     0,   238,   193,   238,     0,   238,   179,   238,
     0,   238,   180,   238,     0,   238,   181,   238,     0,   238,
   182,   238,     0,   238,   177,   238,     0,   238,   176,   238,
     0,   238,   178,   238,     0,   238,   174,   238,     0,   238,
   175,   238,     0,   186,   238,     0,   185,   238,     0,   192,
   238,     0,   201,   238,   202,     0,   383,     0,   381,   244,
   246,     0,     5,   315,     0,   315,     0,   315,   244,     0,
     0,    96,   242,   198,   236,   199,     0,    37,   198,   315,
   199,     0,    39,   198,   315,   199,     0,     0,    38,   243,
   198,   236,   200,   218,   199,     0,   179,     5,   180,   198,
   236,   199,     0,   195,     5,     0,   195,   157,     0,   195,
   114,     0,   195,     3,     0,   241,   194,     3,     0,   194,
     3,     0,   198,   203,   199,     0,   198,   199,     0,   198,
   245,   199,     0,   238,     0,   245,   200,   238,     0,     0,
   196,   377,   197,     0,   196,    49,   198,   218,   199,   197,
     0,   196,    46,   198,     5,   199,   197,     0,     0,   247,
   196,   248,   197,     0,     0,   248,   249,     0,    74,     5,
     7,     0,    62,   196,   250,   197,     0,     0,   250,   196,
   251,   197,     0,     0,   251,   252,     0,    49,   218,     7,
     0,    49,    43,     7,     0,    61,     5,   246,     7,     0,
     0,   253,   196,   254,   197,     0,     0,   254,   255,     0,
    74,     5,     7,     0,    66,   234,     7,     0,    62,   196,
   256,   197,     0,     0,   256,   196,   257,   197,     0,     0,
   257,   258,     0,    64,     5,     7,     0,    65,     5,     7,
     0,    62,   196,   259,   197,     0,     0,   259,   196,   260,
   197,     0,     0,   260,   261,     0,    67,     5,     7,     0,
    68,   382,     7,     0,    69,   382,     7,     0,    70,   382,
     7,     0,    71,   382,     7,     0,    72,   382,     7,     0,
     0,   262,   263,     0,   196,   264,   197,     0,   379,     0,
     0,   264,   265,     0,    74,     5,     7,     0,    74,     5,
   228,     7,     0,    64,     5,     7,     0,    62,   196,   266,
   197,     0,    62,     5,   196,   266,   197,     0,     0,   266,
   196,   267,   197,     0,     0,   267,   268,     0,    64,     5,
     7,     0,    49,   218,     7,     0,    50,   218,     7,     0,
    56,   234,     7,     0,    55,   234,     7,     0,    60,     5,
     7,     0,    57,   196,     3,   227,     3,   197,     7,     0,
    51,   218,     7,     0,    52,   218,     7,     0,    77,   234,
     7,     0,    54,   234,     7,     0,    53,   234,     7,     0,
    77,   198,   234,   200,   234,   199,     7,     0,    54,   198,
   234,   200,   234,   199,     7,     0,    53,   198,   234,   200,
   234,   199,     7,     0,     0,   269,   270,     0,   196,   271,
   197,     0,   379,     0,     0,   271,   272,     0,    74,     5,
     7,     0,    74,     5,   228,     7,     0,    64,     5,     7,
     0,    75,   196,   273,   197,     0,    80,   196,   279,   197,
     0,    82,   196,   284,   197,     0,    48,   196,   287,   197,
     0,     0,   273,   196,   274,   197,     0,     0,   274,   275,
     0,    74,     5,     7,     0,    76,     5,     7,     0,    76,
     5,   228,     7,     0,    77,     5,   276,     7,     0,    78,
   218,     7,     0,    79,   218,     7,     0,     0,     0,     0,
   196,    87,     5,     7,    86,     5,   228,     7,   277,    41,
   218,     7,   278,   103,     5,   229,     7,   197,     0,     0,
   279,   196,   280,   197,     0,     0,   280,   281,     0,    74,
     5,     7,     0,    81,   282,     7,     0,     5,     0,   196,
   283,   197,     0,     0,   283,   227,     5,     0,     0,   284,
   196,   285,   197,     0,     0,   285,   286,     0,    74,     5,
     7,     0,    64,     5,     7,     0,    76,     5,     7,     0,
     0,   287,   196,   288,   197,     0,     0,   288,   289,     0,
    76,     5,     7,     0,    79,   219,    85,     5,     7,     0,
    83,   219,     7,     0,    84,   222,     7,     0,    85,     5,
   229,     7,     0,     0,   290,   291,     0,   196,   292,   197,
     0,   379,     0,     0,   292,   293,     0,    74,     5,     7,
     0,    74,     5,   228,     7,     0,    64,     5,     7,     0,
    87,   196,   294,   197,     0,    91,   196,   300,   197,     0,
     0,   294,   196,   295,   197,     0,     0,   295,   296,     0,
    74,     5,     7,     0,    64,    82,     7,     0,    64,    92,
     7,     0,    64,     5,     7,     0,     0,    88,     5,   229,
   297,   299,     7,     0,    89,     3,     7,     0,     0,   198,
   298,   236,   199,     7,     0,   102,   218,     7,     0,    63,
     5,     7,     0,    61,     5,     7,     0,    90,     3,     7,
     0,     0,   198,     5,   199,     0,     0,   300,   301,     0,
    92,   196,   306,   197,     0,    93,   196,   306,   197,     0,
    94,   196,   310,   197,     0,    95,   196,   302,   197,     0,
     0,   302,   303,     0,    64,     5,     7,     0,    85,     5,
     7,     0,   196,   304,   197,     0,     0,   304,   305,     0,
    58,   315,     7,     0,    59,   315,     7,     0,    91,   315,
     7,     0,   102,   218,     7,     0,     0,   306,   307,     0,
     0,     0,   314,   198,   308,   236,   309,   200,   236,   199,
     7,     0,   102,   218,     7,     0,    61,     5,     7,     0,
    63,     5,     7,     0,     0,   310,   311,     0,   102,   218,
     7,     0,     0,     0,   314,   198,   312,   236,   313,   200,
   315,   199,     7,     0,     0,    96,     0,    97,     0,    98,
     0,    99,     0,   100,     0,   101,     0,   196,     5,     5,
   197,     0,   196,     5,   197,     0,     0,   316,   317,     0,
   196,   318,   197,     0,   379,     0,     0,   318,   319,     0,
    74,     5,     7,     0,    74,     5,   228,     7,     0,   104,
   196,   321,   197,     0,     0,   111,   320,   196,   328,   197,
     0,     0,   321,   196,   322,   197,     0,     0,   322,   323,
     0,    74,     5,     7,     0,    64,     5,     7,     0,   105,
   324,     7,     0,   106,   384,     7,     0,   109,   326,     7,
     0,   110,     5,     7,     0,   107,   376,     7,     0,   108,
   384,     7,     0,     5,   229,     0,   196,   325,   197,     0,
     0,   325,   227,     5,     0,     5,     0,   196,   327,   197,
     0,     0,   327,   227,     5,     0,     0,   328,   329,     0,
     5,     5,     7,     0,   113,   234,     7,     0,   121,   196,
   335,   197,     0,   125,   196,   337,   197,     0,   128,   196,
   339,   197,     0,   131,   196,   341,   197,     0,     5,   198,
     5,   199,     7,     0,   113,   198,   234,   199,     7,     0,
   169,     7,     0,   117,   198,   234,   199,   196,   328,   197,
     0,   117,   198,   234,   199,   196,   328,   197,   118,   196,
   328,   197,     0,   115,   198,     5,   200,   234,   199,     7,
     0,   120,   198,     5,   200,   234,   199,     7,     0,   116,
   198,     5,   200,     5,   200,   376,   199,     7,     0,   119,
   198,     5,   200,   382,   200,   376,   200,   382,   199,     7,
     0,   121,   198,   382,   200,   382,   200,   234,   200,   234,
   199,   196,   328,   197,     0,   125,   198,   382,   200,   382,
   200,   234,   200,   382,   200,   382,   199,   196,   328,   197,
     0,     0,   143,   330,   198,   332,   333,   199,     7,     0,
     0,   144,   331,   198,   332,   333,   199,     7,     0,   134,
   198,   218,   200,   234,   199,     7,     0,   135,     6,     7,
     0,   374,     0,     5,     0,     0,   333,   334,     0,   200,
   154,   384,     0,   200,   157,   376,     0,   200,   376,     0,
     0,   335,   336,     0,   122,   382,     7,     0,   123,   382,
     7,     0,   114,   234,     7,     0,   124,   234,     7,     0,
   111,   196,   328,   197,     0,     0,   337,   338,     0,   122,
   382,     7,     0,   123,   382,     7,     0,   114,   234,     7,
     0,   126,   382,     7,     0,   127,   382,     7,     0,   111,
   196,   328,   197,     0,     0,   339,   340,     0,   129,   382,
     7,     0,   130,   234,     7,     0,    66,   382,     7,     0,
   167,   382,     7,     0,   111,   196,   328,   197,     0,     0,
   341,   342,     0,   129,   382,     7,     0,   132,   382,     7,
     0,    66,   382,     7,     0,   167,   382,     7,     0,   104,
     5,     7,     0,   133,   196,   343,   197,     0,   111,   196,
   328,   197,     0,   112,   196,   328,   197,     0,     0,   343,
   196,   344,   197,     0,     0,   344,   345,     0,    64,     5,
     7,     0,    87,     5,     7,     0,   102,   218,     7,     0,
    66,   382,     7,     0,    77,   234,     7,     0,   167,     5,
     7,     0,     0,   346,   347,     0,   196,   348,   197,     0,
   379,     0,     0,   348,   349,     0,    74,     5,     7,     0,
    74,     5,   228,     7,     0,   105,     5,   229,     7,     0,
   137,     5,     7,     0,    87,   196,   350,   197,     0,     0,
   350,   196,   351,   197,     0,     0,   351,   352,     0,    74,
     5,     7,     0,    64,     5,     7,     0,    55,   196,   353,
   197,     0,     0,   353,    92,   196,   354,   197,     0,   353,
     5,   196,   354,   197,     0,     0,   354,   355,     0,     0,
   314,   198,   356,   236,   199,     7,     0,    64,     5,     7,
     0,     0,   102,   357,   218,     7,     0,    61,     5,     7,
     0,    63,     5,     7,     0,     0,   358,   359,     0,   196,
   360,   197,     0,   379,     0,     0,   360,   361,     0,    74,
     5,     7,     0,   139,     5,     7,     0,   159,     5,     7,
     0,   141,   384,     7,     0,   111,   196,   364,   197,     0,
     0,   138,     5,   140,     5,   363,   196,   364,   197,     0,
     0,     0,   364,   365,   366,     0,   142,   198,   367,   369,
   371,   199,     7,     0,   143,   198,   367,   146,   218,   371,
   199,     7,     0,   143,   198,   367,   146,   218,   153,     5,
   196,   382,   200,   382,   197,   196,   382,   197,   371,   199,
     7,     0,     5,   200,     0,     5,   368,     5,   200,     0,
   187,     0,   188,     0,   185,     0,   186,     0,   146,   218,
     0,   148,   196,   196,   382,   200,   382,   200,   382,   197,
   196,   382,   200,   382,   200,   382,   197,   196,   382,   200,
   382,   200,   382,   197,   197,     0,   147,   218,     0,     0,
   147,   196,   234,   200,   234,   200,   234,   197,   196,   376,
   370,   200,   376,   197,     0,   149,   196,   382,   200,   382,
   200,   382,   197,     0,   150,   196,   196,   382,   200,   382,
   200,   382,   197,   196,   382,   200,   382,   200,   382,   197,
   197,   196,   382,   197,     0,   151,   196,   196,   382,   200,
   382,   200,   382,   197,   196,   382,   200,   382,   200,   382,
   197,   196,   382,   200,   382,   200,   382,   197,   197,   196,
   382,   200,   382,   197,     0,   152,   196,   196,   382,   200,
   382,   200,   382,   197,   196,   382,   200,   382,   200,   382,
   197,   196,   382,   200,   382,   200,   382,   197,   196,   382,
   200,   382,   200,   382,   197,   197,   196,   382,   200,   382,
   200,   382,   197,     0,     0,   371,   372,     0,   200,   154,
   384,     0,   200,   154,   180,   384,     0,   200,   154,   184,
   384,     0,   200,   155,   382,     0,   200,   162,     0,   200,
   163,   382,     0,   200,   158,   382,     0,   200,   159,     5,
     0,   200,   160,   373,     0,   200,   161,   373,     0,   200,
   159,   373,     0,   200,   156,   382,     0,   200,   157,   376,
     0,   200,   145,     5,     0,   200,   165,     5,     0,   200,
   164,   382,     0,   200,    55,   376,     0,   200,   166,   376,
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
   432,   445,   447,   455,   469,   472,   473,   476,   481,   484,
   486,   489,   491,   495,   503,   514,   523,   532,   539,   574,
   579,   589,   592,   606,   611,   614,   663,   675,   701,   706,
   721,   739,   760,   766,   775,   789,   823,   836,   856,   860,
   870,   887,   887,   890,   896,   899,   902,   912,   915,   918,
   922,   942,   986,   990,   993,  1010,  1019,  1026,  1029,  1035,
  1041,  1048,  1052,  1065,  1080,  1094,  1100,  1106,  1112,  1118,
  1124,  1130,  1136,  1142,  1148,  1154,  1160,  1166,  1172,  1178,
  1184,  1190,  1197,  1203,  1205,  1214,  1218,  1224,  1302,  1336,
  1346,  1359,  1361,  1372,  1378,  1384,  1386,  1415,  1439,  1450,
  1456,  1463,  1469,  1480,  1494,  1497,  1498,  1501,  1504,  1507,
  1512,  1514,  1521,  1546,  1553,  1558,  1563,  1567,  1574,  1579,
  1584,  1589,  1595,  1599,  1604,  1607,  1636,  1644,  1649,  1658,
  1662,  1671,  1674,  1679,  1684,  1689,  1697,  1701,  1712,  1721,
  1726,  1731,  1736,  1748,  1752,  1807,  1810,  1813,  1816,  1819,
  1828,  1835,  1838,  1860,  1863,  1873,  1877,  1885,  1892,  1900,
  1903,  1923,  1940,  1962,  1972,  1976,  1987,  2011,  2036,  2041,
  2049,  2057,  2067,  2083,  2090,  2096,  2102,  2110,  2118,  2126,
  2144,  2152,  2155,  2178,  2182,  2191,  2195,  2203,  2210,  2218,
  2221,  2224,  2227,  2232,  2250,  2285,  2300,  2304,  2309,  2314,
  2319,  2331,  2355,  2410,  2414,  2418,  2427,  2490,  2496,  2501,
  2506,  2510,  2517,  2522,  2540,  2545,  2549,  2566,  2572,  2579,
  2586,  2590,  2597,  2606,  2617,  2634,  2706,  2718,  2722,  2742,
  2756,  2759,  2762,  2806,  2813,  2816,  2838,  2842,  2850,  2854,
  2862,  2869,  2878,  2880,  2885,  2900,  2916,  2933,  2937,  2942,
  2946,  2949,  2958,  2997,  3021,  3026,  3032,  3182,  3187,  3196,
  3205,  3210,  3213,  3251,  3268,  3294,  3299,  3302,  3305,  3310,
  3318,  3321,  3332,  3342,  3354,  3363,  3366,  3370,  3372,  3374,
  3380,  3398,  3402,  3413,  3474,  3520,  3544,  3553,  3565,  3582,
  3586,  3620,  3629,  3683,  3699,  3702,  3703,  3704,  3705,  3706,
  3707,  3711,  3727,  3743,  3750,  3753,  3774,  3778,  3786,  3790,
  3799,  3806,  3809,  3811,  3816,  3832,  3849,  3864,  3868,  3873,
  3881,  3884,  3889,  3894,  3899,  3909,  3916,  3955,  3960,  3965,
  3975,  3987,  3991,  3996,  4007,  4016,  4023,  4043,  4050,  4056,
  4062,  4068,  4076,  4092,  4099,  4105,  4116,  4127,  4143,  4155,
  4177,  4198,  4211,  4225,  4232,  4234,  4241,  4243,  4253,  4263,
  4273,  4283,  4289,  4292,  4296,  4305,  4316,  4328,  4332,  4338,
  4342,  4346,  4351,  4360,  4373,  4377,  4383,  4387,  4391,  4395,
  4400,  4409,  4421,  4424,  4430,  4434,  4438,  4443,  4452,  4467,
  4470,  4476,  4480,  4484,  4489,  4499,  4505,  4511,  4520,  4524,
  4528,  4542,  4545,  4556,  4585,  4588,  4591,  4599,  4613,  4621,
  4624,  4645,  4648,  4659,  4662,  4670,  4678,  4724,  4729,  4734,
  4738,  4742,  4750,  4754,  4758,  4767,  4772,  4778,  4784,  4796,
  4807,  4810,  4818,  4846,  4856,  4856,  4862,  4871,  4887,  4895,
  4898,  4903,  4906,  4915,  4918,  4926,  4938,  4948,  4953,  4958,
  4976,  4985,  4989,  4994,  5002,  5009,  5018,  5041,  5053,  5075,
  5078,  5079,  5080,  5083,  5092,  5108,  5115,  5129,  5139,  5147,
  5160,  5178,  5203,  5219,  5222,  5230,  5237,  5244,  5248,  5252,
  5256,  5260,  5269,  5274,  5279,  5299,  5306,  5313,  5321,  5329,
  5336,  5343,  5354,  5361,  5407,  5413,  5417,  5422,  5427,  5430,
  5431,  5435,  5440,  5449,  5452,  5461,  5469,  5486,  5494,  5500,
  5512,  5556,  5560,  5563,  5569,  5575,  5586,  5588,  5589,  5590,
  5591,  5592,  5593,  5594,  5595,  5596,  5597,  5598,  5599,  5600,
  5601,  5602,  5603,  5604,  5605,  5606,  5607,  5609,  5611,  5612,
  5613,  5614,  5615,  5616,  5617,  5618,  5619,  5620,  5621,  5622,
  5623,  5624,  5625,  5626,  5627,  5628,  5629,  5630,  5631,  5632,
  5633,  5634,  5635,  5636,  5637,  5638,  5639,  5640,  5641,  5642,
  5643,  5644,  5645,  5646,  5647,  5648,  5649,  5652,  5655,  5656,
  5657,  5658,  5659,  5660,  5661,  5678,  5683
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
   209,   209,   210,   209,   211,   212,   211,   213,   213,   214,
   213,   213,   213,   216,   217,   215,   215,   218,   218,   219,
   219,   220,   220,   221,   221,   221,   222,   223,   223,   224,
   224,   224,   225,   225,   225,   225,   225,   225,   226,   226,
   226,   227,   227,   228,   229,   229,   230,   231,   231,   232,
   232,   232,   232,   233,   233,   234,   234,   235,   234,   237,
   236,   238,   239,   240,   238,   238,   238,   238,   238,   238,
   238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
   238,   238,   238,   238,   238,   241,   241,   241,   241,   241,
   241,   242,   241,   241,   241,   243,   241,   241,   241,   241,
   241,   241,   241,   241,   244,   244,   244,   245,   245,   246,
   246,   246,   246,   247,   247,   248,   248,   249,   249,   250,
   250,   251,   251,   252,   252,   252,   253,   253,   254,   254,
   255,   255,   255,   256,   256,   257,   257,   258,   258,   258,
   259,   259,   260,   260,   261,   261,   261,   261,   261,   261,
   262,   262,   263,   263,   264,   264,   265,   265,   265,   265,
   265,   266,   266,   267,   267,   268,   268,   268,   268,   268,
   268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
   269,   269,   270,   270,   271,   271,   272,   272,   272,   272,
   272,   272,   272,   273,   273,   274,   274,   275,   275,   275,
   275,   275,   275,   276,   277,   278,   276,   279,   279,   280,
   280,   281,   281,   282,   282,   283,   283,   284,   284,   285,
   285,   286,   286,   286,   287,   287,   288,   288,   289,   289,
   289,   289,   289,   290,   290,   291,   291,   292,   292,   293,
   293,   293,   293,   293,   294,   294,   295,   295,   296,   296,
   296,   296,   297,   296,   296,   298,   296,   296,   296,   296,
   296,   299,   299,   300,   300,   301,   301,   301,   301,   302,
   302,   303,   303,   303,   304,   304,   305,   305,   305,   305,
   306,   306,   308,   309,   307,   307,   307,   307,   310,   310,
   311,   312,   313,   311,   314,   314,   314,   314,   314,   314,
   314,   315,   315,   316,   316,   317,   317,   318,   318,   319,
   319,   319,   320,   319,   321,   321,   322,   322,   323,   323,
   323,   323,   323,   323,   323,   323,   324,   324,   325,   325,
   326,   326,   327,   327,   328,   328,   329,   329,   329,   329,
   329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
   329,   329,   329,   330,   329,   331,   329,   329,   329,   332,
   332,   333,   333,   334,   334,   334,   335,   335,   336,   336,
   336,   336,   336,   337,   337,   338,   338,   338,   338,   338,
   338,   339,   339,   340,   340,   340,   340,   340,   341,   341,
   342,   342,   342,   342,   342,   342,   342,   342,   343,   343,
   344,   344,   345,   345,   345,   345,   345,   345,   346,   346,
   347,   347,   348,   348,   349,   349,   349,   349,   349,   350,
   350,   351,   351,   352,   352,   352,   353,   353,   353,   354,
   354,   356,   355,   355,   357,   355,   355,   355,   358,   358,
   359,   359,   360,   360,   361,   361,   361,   361,   361,   363,
   362,   364,   365,   364,   366,   366,   366,   367,   367,   368,
   368,   368,   368,   369,   369,   369,   370,   369,   369,   369,
   369,   369,   371,   371,   372,   372,   372,   372,   372,   372,
   372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
   372,   372,   373,   373,   374,   374,   375,   375,   376,   376,
   376,   377,   377,   377,   377,   378,   378,   379,   379,   379,
   379,   379,   380,   380,   380,   380,   381,   381,   381,   381,
   381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
   381,   381,   381,   381,   381,   381,   381,   382,   382,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
   382,   382,   382,   382,   382,   382,   382,   383,   383,   383,
   383,   383,   383,   383,   383,   384,   384
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     2,     2,     0,     2,     0,     0,     3,     4,     5,     0,
     6,     5,     1,     0,     0,     7,     2,     1,     2,     1,
     1,     1,     1,     0,     3,     4,     1,     1,     3,     0,
     3,     4,     1,     3,     6,     1,     4,     3,     0,     3,
     6,     0,     1,     4,     0,     2,     3,     0,     2,     5,
     6,     7,     1,     0,     3,     4,     4,     0,     2,     0,
     2,     1,     0,     0,     7,     3,     3,     6,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     2,     2,     2,     3,     1,     3,     2,     1,
     2,     0,     5,     4,     4,     0,     7,     6,     2,     2,
     2,     2,     3,     2,     3,     2,     3,     1,     3,     0,
     3,     6,     6,     0,     4,     0,     2,     3,     4,     0,
     4,     0,     2,     3,     3,     4,     0,     4,     0,     2,
     3,     3,     4,     0,     4,     0,     2,     3,     3,     4,
     0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
     0,     2,     3,     1,     0,     2,     3,     4,     3,     4,
     5,     0,     4,     0,     2,     3,     3,     3,     3,     3,
     3,     7,     3,     3,     3,     3,     3,     7,     7,     7,
     0,     2,     3,     1,     0,     2,     3,     4,     3,     4,
     4,     4,     4,     0,     4,     0,     2,     3,     3,     4,
     4,     3,     3,     0,     0,     0,    18,     0,     4,     0,
     2,     3,     3,     1,     3,     0,     3,     0,     4,     0,
     2,     3,     3,     3,     0,     4,     0,     2,     3,     5,
     3,     3,     4,     0,     2,     3,     1,     0,     2,     3,
     4,     3,     4,     4,     0,     4,     0,     2,     3,     3,
     3,     3,     0,     6,     3,     0,     5,     3,     3,     3,
     3,     0,     3,     0,     2,     4,     4,     4,     4,     0,
     2,     3,     3,     3,     0,     2,     3,     3,     3,     3,
     0,     2,     0,     0,     9,     3,     3,     3,     0,     2,
     3,     0,     0,     9,     0,     1,     1,     1,     1,     1,
     1,     4,     3,     0,     2,     3,     1,     0,     2,     3,
     4,     4,     0,     5,     0,     4,     0,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     2,     3,     0,     3,
     1,     3,     0,     3,     0,     2,     3,     3,     4,     4,
     4,     4,     5,     5,     2,     7,    11,     7,     7,     9,
    11,    13,    15,     0,     7,     0,     7,     7,     3,     1,
     1,     0,     2,     3,     3,     2,     0,     2,     3,     3,
     3,     3,     4,     0,     2,     3,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     4,     0,     2,
     3,     3,     3,     3,     3,     4,     4,     4,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     4,     4,     3,     4,     0,
     4,     0,     2,     3,     3,     4,     0,     5,     5,     0,
     2,     0,     6,     3,     0,     4,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     3,     3,     3,     4,     0,
     8,     0,     0,     3,     7,     8,    18,     2,     4,     1,
     1,     1,     1,     2,    24,     2,     0,    14,     8,    20,
    29,    38,     0,     2,     3,     4,     4,     3,     2,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     0,     2,     0,     3,     1,     3,     0,     1,
     3,     1,     1,     3,     3,     3,     6,     4,     4,     6,
     9,     5,     0,     3,     5,     5,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     6,     4,     4,     4,     4,
     4,     4,     6,     6,     6,     5,     2,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     1,
     3,     4,    23,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,     0,   607,   606,    18,   533,    25,
   171,   134,   147,   201,    68,   254,   324,   429,     0,   459,
    20,    21,    22,     0,     0,    24,   599,   598,   605,     0,
   600,   601,   602,   603,   604,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   558,    62,    26,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   529,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   560,   561,
     0,   523,   522,     0,   528,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   597,     0,    63,     0,     6,     0,   175,     8,   172,   174,
   136,     9,   149,    10,   205,    11,   202,   204,     0,     0,
     7,    69,    73,   258,    12,   255,   257,   328,    13,   325,
   327,   433,    14,   430,   432,   470,   463,    15,   460,   462,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   559,     0,   574,
   575,   573,   572,   568,   569,   570,   571,   563,   562,   564,
   565,   566,   567,   532,   534,     0,     0,    27,    33,     0,
     0,     0,     0,     0,    74,     0,     0,     0,     0,     0,
   482,   483,   480,   481,   478,     0,     0,     0,     0,     0,
     0,     0,     0,   493,     0,   576,   577,   578,   579,   580,
   581,   582,   583,   584,   585,     0,   587,   588,   589,   590,
   591,   592,     0,     0,     0,     0,   530,   525,   524,     0,
   526,     0,     0,     0,     0,     0,     0,    59,     0,     0,
     0,   173,   176,     0,     0,   135,   137,     0,    78,     0,
   148,   150,     0,     0,     0,     0,     0,     0,   203,   206,
    65,    40,     0,     0,    38,     0,     0,    62,     0,     0,
     0,     0,   256,   259,     0,     0,   333,   326,   329,     0,
     0,     0,     0,   431,   434,   472,     0,     0,     0,     0,
     0,   461,   464,     0,   484,    78,   486,     0,     0,     0,
     0,     0,     0,   493,     0,     0,     0,     0,     0,     0,
   596,   536,   535,   605,     0,     0,     0,    30,     0,    62,
     0,   182,     0,     0,   140,     0,   154,     0,     0,     0,
    80,     0,   245,     0,     0,   214,   228,   238,     0,    39,
    53,    56,    50,    37,    48,    78,     0,    34,     0,     0,
     0,     0,   265,   284,     0,   335,     0,     0,   440,    65,
     0,   473,     0,   472,     0,     0,     0,   479,     0,     0,
     0,     0,     0,     0,     0,     0,   494,     0,     0,   586,
   593,   594,   595,     0,     0,    28,     0,    67,     0,    41,
     0,     0,     0,   182,     0,   179,   177,     0,     0,     0,
   138,     0,     0,     0,   152,    79,     0,   151,     0,   209,
   207,     0,     0,     0,     0,    66,     0,     0,    62,     0,
    78,     0,    70,    75,   262,   260,     0,     0,     0,   330,
     0,     0,   355,   435,     0,     0,     0,   438,   471,     0,
   465,   473,   466,   468,   467,    78,     0,     0,     0,     0,
     0,   475,   519,     0,     0,     0,     0,   519,     0,   513,
   513,   513,   499,     0,     0,     0,   519,     0,     0,   531,
   527,    64,     0,    29,    32,    60,     0,   184,   180,   178,
   142,   139,   156,   153,     0,     0,   605,   537,   538,   539,
   540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,   554,   555,   556,     0,   116,     0,
     0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
    81,    82,   110,     0,   107,   247,   213,   208,   216,   210,
   230,   211,   240,   212,    54,     0,    58,     0,    49,     0,
    71,     0,    43,    35,    42,   261,   267,   263,     0,     0,
     0,     0,   264,   285,   331,   337,   332,     0,   436,   442,
   439,   437,   474,   469,     0,     0,     0,     0,     0,     0,
     0,   511,   520,   508,     0,     0,   495,   498,   506,   507,
   501,   502,   505,   503,   504,   500,   510,   509,   512,     0,
   476,    31,     0,   181,     0,     0,     0,    76,    77,   109,
     0,     0,     0,     0,     0,     0,   104,   103,   105,   124,
   122,   119,   121,   120,     0,     0,    83,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   111,   130,     0,     0,     0,
     0,     0,    57,     0,    51,    72,    62,     0,   301,   301,
   309,   290,     0,     0,    78,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   374,   376,     0,   334,
   356,     0,    78,     0,     0,     0,     0,     0,     0,   496,
   497,   514,     0,     0,     0,     0,     0,     0,    78,    78,
    78,    78,     0,     0,     0,    78,   183,   185,     0,     0,
   141,   143,     0,     0,     0,   155,   157,     0,    80,     0,
     0,    80,     0,     0,   323,   106,     0,   101,   102,    99,
    98,   100,    94,    95,    96,    97,    90,    91,    86,    89,
    92,    87,    93,   123,   126,     0,   128,     0,     0,   108,
     0,     0,     0,     0,     0,   246,   248,     0,     0,     0,
     0,     0,   215,   217,     0,     0,   229,   231,     0,     0,
     0,   239,   241,     0,    52,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   266,   276,   268,   315,   315,
   315,     0,     0,     0,     0,     0,   519,     0,     0,     0,
   336,   338,     0,     0,    78,     0,     0,     0,    78,     0,
     0,   387,     0,   394,     0,   402,   409,     0,     0,     0,
     0,   365,     0,     0,     0,   441,   443,     0,     0,     0,
     0,     0,     0,   521,     0,    61,     0,     0,     0,     0,
    78,     0,    78,     0,     0,     0,     0,     0,     0,    78,
     0,     0,     0,   130,   161,     0,     0,   114,     0,   115,
     0,     0,    80,   322,     0,   125,   127,     0,     0,     0,
     0,     0,     0,     0,    47,     0,    65,     0,     0,   224,
     0,     0,     0,   234,   236,     0,     0,     0,     0,    55,
    36,     0,     0,     0,     0,     0,     0,     0,     0,    65,
     0,     0,     0,    80,     0,     0,   316,   317,   318,   319,
   320,   321,     0,   286,   302,     0,   287,     0,   288,   310,
     0,     0,     0,   295,   289,   291,     0,     0,    65,   349,
     0,     0,     0,     0,   351,   353,     0,     0,   357,     0,
     0,   358,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   379,   515,   515,   447,     0,     0,
     0,     0,   489,     0,     0,     0,     0,   187,   188,   193,
   194,     0,   197,     0,   196,   190,   189,    62,   191,   186,
     0,   195,   145,   144,     0,     0,   158,   159,     0,     0,
   113,     0,    84,   129,     0,     0,   131,   249,     0,   251,
   252,     0,   218,   219,     0,     0,     0,   222,   223,   232,
    62,   233,   243,   242,   244,    65,    45,   280,   279,   272,
   270,   271,   269,   273,   275,   281,   278,     0,     0,     0,
     0,   303,     0,   312,     0,     0,     0,   340,   339,   347,
    62,   341,   342,   345,   346,    62,   343,   344,     0,     0,
    78,     0,     0,     0,    78,     0,    78,     0,     0,    78,
   359,   388,     0,     0,    78,     0,     0,     0,     0,   360,
   395,     0,     0,     0,     0,    78,     0,   361,   403,     0,
     0,     0,     0,     0,     0,     0,     0,   362,   410,    78,
   381,    78,   382,   380,   382,     0,   445,   444,   519,     0,
     0,     0,     0,     0,    78,    78,     0,    78,   146,   163,
   160,     0,    88,   118,     0,     0,     0,     0,   253,   220,
     0,   221,   235,     0,    46,   282,     0,   307,   308,   306,
    80,   311,    80,   292,   293,     0,     0,     0,     0,   294,
   296,   348,     0,   352,     0,   363,   364,     0,     0,   355,
     0,     0,   355,     0,     0,     0,     0,     0,   355,     0,
     0,     0,     0,     0,     0,     0,   355,     0,     0,     0,
     0,     0,   355,   355,     0,     0,   419,     0,     0,   517,
     0,     0,     0,     0,     0,   446,   487,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   117,    85,     0,
     0,   250,     0,   237,     0,     0,   277,   304,   313,     0,
     0,     0,     0,   350,   354,     0,   519,     0,   519,     0,
     0,   391,   389,   390,   392,    78,     0,   398,   396,   397,
   399,   400,    78,   406,     0,   404,   405,   407,   413,   415,
     0,     0,   411,   412,     0,   414,     0,   516,    78,     0,
   519,   383,     0,   450,   450,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   162,   164,   133,   132,     0,     0,   274,     0,     0,
   297,   298,   299,   300,   368,     0,   366,     0,   369,   393,
     0,   401,     0,   408,   417,   418,   421,   416,   378,   518,
   375,     0,   519,   386,   377,   315,   315,   519,     0,     0,
     0,     0,   493,   200,   199,   192,   198,     0,     0,     0,
     0,     0,     0,     0,   283,    80,     0,     0,     0,     0,
    78,     0,     0,   384,   385,     0,     0,     0,   455,   449,
     0,   451,   448,     0,     0,     0,     0,     0,     0,   165,
   166,   167,   168,   169,   170,     0,     0,     0,   370,   355,
     0,     0,     0,     0,     0,    78,     0,     0,     0,   420,
   422,     0,     0,     0,     0,   452,   488,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   457,   458,   454,     0,    80,
     0,     0,     0,     0,   477,   225,   305,   314,   367,   371,
   355,     0,   423,   426,   427,   424,   425,   428,   456,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   372,   355,   453,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   226,   373,     0,   490,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    65,     0,     0,     0,     0,   485,     0,     0,     0,     0,
     0,   227,     0,     0,     0,     0,     0,     0,   491,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   492,     0,
     0,     0
};

static const short yydefgoto[] = {  1530,
     1,     2,     3,    20,    21,    22,    84,   146,   228,   439,
   315,   472,   697,   316,   317,   594,   816,   916,   394,   469,
   395,   370,   144,   286,   390,   287,    89,   162,   318,   380,
   381,   456,   457,   571,   767,  1155,   572,   655,   652,   686,
   788,   790,    86,   231,   297,   450,   646,   752,    87,   232,
   302,   452,   647,   757,  1026,  1237,  1313,    85,   149,   230,
   293,   445,   645,   748,    88,   157,   233,   310,   463,   689,
   804,  1047,  1465,  1493,   464,   690,   808,   926,  1051,   465,
   691,   813,   459,   688,   797,    90,   166,   236,   324,   478,
   698,   828,  1166,   944,  1246,   479,   604,   832,   966,  1077,
  1181,   829,   955,  1171,  1319,   831,   960,  1173,  1320,   956,
   573,    91,   170,   237,   329,   407,   482,   703,   842,   971,
  1081,   977,  1086,   608,   721,   860,   861,  1133,  1222,  1292,
   988,  1102,   990,  1111,   992,  1119,   993,  1129,  1285,  1373,
  1411,    92,   174,   238,   335,   486,   722,   867,  1136,  1346,
  1382,  1440,  1415,    94,   179,   240,   343,    23,   239,   412,
   490,    46,   182,   246,   254,  1296,   353,   427,   633,  1134,
  1221,   622,   121,   122,    24,    83,   574,   623,    82,    28
};

static const short yypact[] = {-32768,
-32768,    25,   331,  -113,   285,   -99,   -78,    -5,     3,    36,
    78,   100,   108,   121,   129,    40,   323,   361,   366,-32768,
-32768,   215,-32768,-32768,   190,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   243,-32768,
-32768,-32768,-32768,   220,   227,-32768,-32768,-32768,-32768,   406,
-32768,-32768,-32768,-32768,-32768,   235,   240,   250,   267,   270,
   277,   287,   297,   299,   309,   338,   340,   343,   347,   352,
   354,   373,   392,   394,   415,   428,  1627,  1627,  1627,  1627,
   735,-32768,   139,   283,    56,   275,   291,   114,   115,   118,
   123,   125,   606,   157,   635,   635,-32768,  1627,  1627,  1627,
  1627,  1627,  1627,  1627,  1627,  1627,  1627,  1627,  1627,  1627,
  1627,  1627,  1627,  1627,  1627,  1627,  1627,   641,   310,   310,
  -170,-32768,  2166,  2252,-32768,  1627,  1627,  1627,  1627,  1627,
  1627,  1627,  1627,  1627,  1627,  1627,  1627,  1627,  1627,  1627,
-32768,   651,-32768,   657,-32768,   404,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,     0,   483,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   450,  1066,   528,  3211,  3238,  3265,  3292,  3319,  3346,  3373,
  3400,  3427,  3454,  2304,  3481,  3508,  3535,  3562,  3589,  3616,
  2326,  2348,  2370,   477,   690,  1627,   703,-32768,  2189,   969,
   969,  4491,  4491,   705,   705,   705,   705,   560,   560,   310,
   310,   310,   310,-32768,   572,   234,   557,-32768,-32768,   286,
   103,   350,   357,    45,-32768,   422,   223,   282,   550,   629,
-32768,-32768,-32768,-32768,-32768,   746,   134,    51,   561,   566,
   571,   573,   576,-32768,   134,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1627,-32768,-32768,-32768,-32768,
-32768,-32768,  1627,  1627,  1627,   776,-32768,-32768,  2166,  1627,
  4436,  1627,  1491,  1162,  1525,   617,   618,-32768,    58,   779,
   789,-32768,-32768,   599,   791,-32768,-32768,   602,   260,   798,
-32768,-32768,   614,   803,   806,   623,   626,   627,-32768,-32768,
  -150,-32768,    39,   653,-32768,   628,   631,   333,   826,   830,
   659,   662,-32768,-32768,   832,   663,-32768,-32768,-32768,   851,
   700,   895,   897,-32768,-32768,-32768,   898,   709,   901,   285,
   913,-32768,-32768,   719,-32768,   260,-32768,   729,  1627,   730,
   734,   736,   356,   778,  3643,  3670,  3697,  3724,   739,  3751,
  4436,-32768,  4436,   741,   926,  1627,  3886,-32768,   135,   360,
   744,-32768,   934,   109,-32768,   935,-32768,   745,   750,   944,
-32768,   945,-32768,   946,   110,-32768,-32768,-32768,   752,-32768,
   975,   788,-32768,-32768,-32768,   260,   819,-32768,   978,   991,
   990,   156,-32768,-32768,   159,-32768,   807,   163,-32768,   818,
  1008,   821,  1014,-32768,  1015,  1018,  1021,-32768,   829,  1627,
  2392,  1627,  1627,  1627,  1023,  2234,-32768,  1026,   363,-32768,
-32768,-32768,-32768,  1028,  1627,-32768,  3911,-32768,   135,-32768,
  1029,  1030,  1034,-32768,   383,-32768,-32768,   847,  1038,   386,
-32768,   410,  1627,  1041,-32768,-32768,   942,-32768,   413,-32768,
-32768,  1043,   420,   424,   427,-32768,    30,  1559,   -26,  1059,
   260,    55,-32768,-32768,-32768,-32768,  1061,   437,   174,-32768,
  1063,   447,-32768,-32768,  1064,   457,  1065,-32768,-32768,   215,
-32768,   878,-32768,-32768,-32768,   260,  2414,  1627,  2436,  2458,
  2480,-32768,  1593,  1071,    91,  1627,  1627,  1593,  1627,  1072,
-32768,-32768,-32768,  1627,  1627,  1074,  1593,   852,  1073,-32768,
  4436,-32768,  1078,-32768,-32768,   890,   459,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  3778,   894,    -6,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   891,-32768,   896,
   899,-32768,  1093,   942,   942,   942,  1098,    19,  1103,   942,
  4458,   919,   916,   916,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1627,-32768,  3936,-32768,    44,
-32768,  1113,-32768,-32768,-32768,-32768,-32768,-32768,   929,   933,
   936,   937,-32768,-32768,-32768,-32768,-32768,   164,-32768,-32768,
-32768,-32768,-32768,-32768,   922,  1627,  2502,  1627,  1627,  1627,
  1627,-32768,  4436,-32768,   285,   285,-32768,  4436,  4436,-32768,
  4436,-32768,  1120,  1120,  1120,  4436,  4436,-32768,-32768,  1627,
-32768,-32768,  1627,-32768,   548,   -33,     4,-32768,-32768,-32768,
   939,   932,   939,   942,   941,   951,   947,   947,   947,-32768,
-32768,-32768,-32768,-32768,    59,  2228,-32768,   942,   942,   942,
   942,   942,   942,   942,   942,   942,   942,   942,   942,   942,
   942,   942,   942,  1138,   848,-32768,   948,   607,   553,   104,
   314,  3805,-32768,   313,-32768,-32768,   471,   578,-32768,-32768,
-32768,-32768,   479,    31,   111,   949,   954,   961,   971,   972,
   246,   249,   965,   976,  1001,  1136,-32768,-32768,  1166,-32768,
-32768,   239,   260,  2524,  1627,  2546,  2568,  2590,   -11,-32768,
-32768,-32768,  2612,  3961,   134,   134,   134,   134,   165,   169,
   260,   260,  1004,  1196,  1197,   187,-32768,-32768,    88,  1203,
-32768,-32768,  1024,  1205,  1214,-32768,-32768,  1022,-32768,  1027,
  2282,-32768,  1032,  1031,-32768,-32768,   942,  4476,  4476,  1486,
  1486,  1486,   823,   823,   823,   823,   612,   612,    41,    41,
    41,   947,   947,-32768,-32768,  1068,  4458,   485,  1286,-32768,
  1220,    16,    16,  1222,  1257,-32768,-32768,  1263,  1269,  1270,
   134,   134,-32768,-32768,  1271,    65,-32768,-32768,  1274,  1275,
  1276,-32768,-32768,  1284,-32768,  1089,   228,  1287,  1288,   288,
  1289,  1290,  1293,  1294,   134,-32768,-32768,-32768,   963,  1268,
   716,   280,  1318,  1323,    66,   285,  1593,   285,    67,  1325,
-32768,-32768,  1326,  1329,   260,  1330,  1331,  1333,   260,  1334,
  1335,-32768,  1627,-32768,  1627,-32768,-32768,   134,  1336,  1143,
  1144,-32768,  1148,  1341,  1345,-32768,-32768,  1155,  1627,  3986,
  1627,  1627,  1627,-32768,  1627,-32768,  1346,  1348,  1350,  1352,
   260,  1353,   260,  1354,  1364,  1367,  1372,  1370,  1371,   260,
  1374,  1375,  1376,   948,-32768,  1377,  1378,-32768,  1179,-32768,
   942,  1187,-32768,-32768,   341,-32768,-32768,   942,  1190,  1191,
    76,  1383,  1306,  1385,-32768,  1390,   818,  1391,   166,  1204,
  1392,  1394,  1395,-32768,-32768,  1396,  1399,  1400,  1401,-32768,
-32768,  1404,    39,  1403,  1405,  1406,  1407,  1409,  1410,   818,
  1411,  1412,  1414,-32768,  1422,  1427,-32768,-32768,-32768,-32768,
-32768,-32768,   134,-32768,-32768,  1235,-32768,   134,-32768,-32768,
  1241,  1435,  1436,-32768,-32768,-32768,  1438,  1441,   818,-32768,
  1442,  1443,  1444,  1447,-32768,-32768,  1448,  1449,-32768,  1258,
  1260,-32768,  1262,  1264,  1267,  1273,  1277,   710,  2634,   660,
  2656,   311,  1603,  1279,-32768,    90,    90,-32768,  1456,  1460,
  1272,  4011,-32768,  4036,  4061,  4086,  4111,-32768,-32768,-32768,
-32768,  1280,-32768,  1281,-32768,-32768,-32768,  1291,-32768,-32768,
  1292,-32768,-32768,-32768,  1467,   497,-32768,-32768,   134,  3190,
-32768,  1300,-32768,  4458,  1470,   134,-32768,-32768,  1471,-32768,
-32768,  1477,-32768,-32768,  1479,  1445,  1481,-32768,-32768,-32768,
   126,-32768,-32768,-32768,-32768,   818,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1302,  1524,  1526,
  1527,-32768,  1528,-32768,  1529,  1558,   273,-32768,-32768,-32768,
   196,-32768,-32768,-32768,-32768,   214,-32768,-32768,  1560,  1561,
   260,  1564,  1408,  1627,   260,  1437,   260,  1627,  1627,   260,
-32768,-32768,  1627,  1439,   260,  1627,  1627,  1627,  1627,-32768,
-32768,  1627,  1627,  1440,  1627,   260,  1627,-32768,-32768,  1627,
  1594,  1468,  1474,  1627,  1627,  1492,  1627,-32768,-32768,   260,
-32768,   260,-32768,-32768,-32768,    46,-32768,-32768,  1593,  1493,
  1495,  1498,  1501,  1502,   260,   260,  1563,   260,-32768,-32768,
-32768,  1402,-32768,-32768,   942,  1488,  1503,  1595,-32768,-32768,
  1598,-32768,-32768,  1629,-32768,  1505,  1630,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   939,   939,   939,   134,-32768,
-32768,-32768,  1696,-32768,  1699,-32768,-32768,  1506,  1510,-32768,
  2678,  1507,-32768,  1705,   813,   930,  1706,  2700,-32768,  1709,
  1084,  1249,  1824,  1847,  2722,  1869,-32768,  1893,  1711,  1915,
  1937,  1713,-32768,-32768,  1961,  1983,-32768,  2007,  1522,-32768,
   226,   499,   502,  1532,  1533,-32768,-32768,  1627,  1627,  1627,
  1627,  1627,  1523,  1531,  1534,  1538,   498,-32768,  4458,  1536,
  1541,-32768,  1716,-32768,  1719,  1718,-32768,-32768,-32768,  1732,
  1733,  1734,  1735,-32768,-32768,  1736,  1593,   544,  1593,  1737,
  1565,-32768,-32768,-32768,-32768,   260,  1633,-32768,-32768,-32768,
-32768,-32768,   260,-32768,  1690,-32768,-32768,-32768,-32768,-32768,
  1722,  1754,-32768,-32768,   508,-32768,  1740,-32768,   260,  1748,
  1219,-32768,  1750,-32768,-32768,  1566,  2744,  2766,  2788,  2810,
  4136,  1756,  1758,  1762,  1764,  1767,  1627,  1627,  1627,  1627,
  1627,-32768,-32768,-32768,-32768,  1514,  1574,-32768,  1575,  1578,
-32768,-32768,-32768,-32768,-32768,  1581,  1656,  1582,-32768,-32768,
  1583,-32768,  1584,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   285,  1593,-32768,-32768,   476,   956,  1593,  1627,  1627,
  1627,  1627,-32768,-32768,-32768,-32768,-32768,  1774,  2030,  2052,
  2076,  2098,  2120,  1781,-32768,-32768,   939,  1780,  1592,  1627,
   260,  1627,  1285,-32768,-32768,  1785,  1787,  1788,-32768,-32768,
  1597,-32768,-32768,  1599,  2832,  2854,  2876,  2898,   512,-32768,
-32768,-32768,-32768,-32768,-32768,  1601,  1600,  1602,-32768,-32768,
  3832,  1605,  2920,  1793,  1627,   260,  1803,   134,  1807,-32768,
-32768,  1809,  1810,  1813,   134,-32768,-32768,  1627,  1627,  1627,
  1627,  1815,  1819,  1820,  1822,  1786,  1825,  1618,  1627,  1829,
  2144,  1833,  1837,  1838,  1839,-32768,-32768,-32768,  1841,-32768,
  4161,  4186,  4211,  4236,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  3859,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1650,
  1655,  1661,  1664,  1665,  1811,  1818,  1666,  1856,  1627,  1668,
  1627,  1627,   134,-32768,-32768,-32768,  2942,  1627,  2964,  2986,
  1861,  1850,  1627,  4261,  1627,  1627,-32768,-32768,  3008,-32768,
  3030,  3052,  1769,  1627,  1627,  1627,  1872,  4286,  4311,  4336,
   818,  1681,  1683,  1685,  1876,-32768,  1688,  1627,  1689,  1627,
  3074,-32768,  3096,  1627,  1627,  3118,  4361,  1627,-32768,  4386,
  1693,  1697,  1627,  3140,  1627,  3162,  1627,  4411,-32768,  1892,
  1894,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -104,-32768,-32768,  -244,   -13,-32768,-32768,  1079,  -459,-32768,
  -559,-32768,  -308,  -373,  -405,-32768,-32768,-32768,-32768,  -339,
-32768,  -744,-32768,  -527,-32768,-32768,-32768,-32768,-32768,  1321,
-32768,  1010,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1464,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1209,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -822,
  -529,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1173,-32768,-32768,-32768,   915,   775,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   620,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1499,
-32768,  1426,  1828,-32768,-32768,-32768,  -348,-32768,   248,-32768,
-32768,  -494,  -602,  1712,   751,-32768,-32768,   -25,  -219,  -338
};


#define	YYLAST		4685


static const short yytable[] = {    81,
   449,   416,   345,   347,   487,   429,   419,   650,   961,   400,
   354,   462,   595,   630,   899,   749,  1258,   902,   729,  1261,
   440,   661,   639,   662,    -2,  1267,   205,   750,   477,   206,
   695,   481,   585,  1275,   485,   843,   657,   658,   659,  1281,
  1282,   391,   666,   392,    39,   389,   391,   -41,   392,   311,
  1224,   119,   120,   123,   124,   311,   470,   391,    25,   392,
     4,   443,   371,   764,   312,   753,     6,   754,   755,   924,
   969,   975,   184,   185,   186,   187,   188,   189,   190,   191,
   192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
   202,   203,   311,   312,  1131,    26,    27,   593,    29,   312,
   209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,   222,   223,   447,   461,    30,     4,   159,
   378,   758,     4,   760,     6,     6,   761,     4,     6,     4,
   892,   592,   663,     6,   815,     6,   312,  1225,   311,   440,
   768,   769,   770,   771,   772,   773,   774,   775,   776,   777,
   778,   779,   780,   781,   782,   783,   615,   787,  1032,   160,
   590,     4,   476,   751,   294,   480,   627,     6,   704,   484,
   589,    25,  1044,   143,   378,   664,   295,   805,   378,   365,
   279,   281,   312,   312,   806,   874,   911,   379,   206,   569,
    31,  -557,    47,    48,    49,    50,   378,   234,    32,  1068,
   756,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,  1426,   586,   844,   694,
   682,    33,   915,   683,   393,    40,    76,   575,   313,   905,
   355,   379,  1226,   314,   313,   379,   346,   356,   357,   358,
   393,   147,   148,   372,   360,   765,   361,   363,    81,   367,
   925,   970,   976,   379,   441,   599,   600,   601,   602,   378,
   625,   932,  1037,    34,   626,   206,   705,  1466,   706,   707,
   708,   313,   709,   710,   711,  1132,   730,   731,   712,    26,
    27,   713,   936,   863,   714,    35,   325,   715,   716,   296,
   807,  1482,   864,    36,   448,   448,   717,   718,   845,   155,
   156,   161,   865,   164,   165,   391,    37,   392,   168,   169,
   172,   173,  1163,   421,    38,   143,   326,   313,   313,    41,
  1176,  1177,   719,   327,   523,     4,   379,   142,   143,     5,
   437,     6,   973,   962,   575,   575,   575,   289,  1033,   290,
   575,   448,   177,   178,   448,   330,    44,    45,   448,   291,
   720,   448,   881,  1178,   963,   846,   883,    42,   331,   937,
   603,     7,    43,  1030,  1179,    77,  1113,   809,     8,   938,
  1034,    78,    93,   868,   890,    79,   332,   810,   817,   811,
    80,     9,  1182,    10,   497,   143,   499,   500,   501,   882,
   884,   885,   886,    11,   303,   284,   891,    12,   226,   521,
  1184,   298,    97,   143,     6,   299,    13,    95,   333,   328,
   304,  1114,  1288,   300,    96,  1289,  1248,   535,  1249,   285,
   305,   306,    98,    14,   575,   866,   307,    99,   308,  1115,
  1116,   852,   588,   853,   854,   227,   855,   100,   575,   575,
   575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
   575,   575,   575,   575,   101,   575,    15,   102,    16,  1180,
   151,   152,   617,  1057,   103,   964,   965,  1117,   334,   145,
   628,   629,   292,   631,   104,   319,   153,   154,   636,   637,
   877,   878,   879,   880,   105,   320,   106,   972,    17,   974,
    18,    19,   140,   141,   893,   981,   107,  1118,   321,   985,
   812,  1042,   322,   667,   668,   669,   670,   671,   672,   673,
   674,   675,   676,  1381,  1381,   677,   678,   679,   680,   681,
   682,   399,   143,   683,  1064,   108,  1376,   109,  1377,  1378,
   110,  1012,   833,  1014,   111,  1045,   301,   575,   704,   112,
  1021,   113,   834,   309,   425,   426,   921,   922,   442,   143,
   692,   519,   426,  1080,  1306,  1307,  1308,  1309,  1310,  1311,
   114,   947,   948,   949,   950,   951,   952,  1379,   528,   529,
   943,   531,   532,   835,   836,   837,   838,   839,   840,   115,
   724,   116,   726,   727,   728,   123,   735,   736,   737,   738,
   739,   740,   741,   742,   743,   533,   534,   744,   576,   577,
   176,   745,   117,   994,   733,   579,   580,   734,   323,   581,
   582,  1397,   583,   584,   746,   118,   798,  1239,   799,   800,
   801,   802,   597,   598,   241,   242,   243,   244,   818,   181,
   819,   820,   606,   607,  1227,   204,  1250,  1251,  1252,   245,
  1165,   821,   610,   611,   528,   644,   705,   224,   706,   707,
   708,   225,   709,   710,   711,   822,   823,   824,   712,   -44,
   143,   713,  1380,   255,   714,   841,   276,   715,   716,   825,
   235,   575,   791,   907,   908,   792,   717,   718,   575,   793,
   794,   795,  1150,  1151,  1312,  1460,   277,  1290,  1291,   870,
  1293,  1291,   337,  1337,  1338,    47,    48,    49,  1071,  1147,
  1422,   426,   719,  1073,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   338,
  1327,   125,  1164,   283,   747,   336,   137,   138,   139,   803,
   344,  1188,   140,   141,   288,  1192,   348,  1194,   634,   635,
  1197,   349,  1326,   123,  1328,  1200,   350,   339,   351,   340,
  1104,   352,  1183,  1105,   826,   827,  1209,  1185,   913,   914,
   359,  1106,  1107,   373,  1152,  1108,  1109,   341,   368,   369,
  1219,  1157,  1220,   374,   375,   376,  1344,   377,   679,   680,
   681,   682,   382,   796,   683,  1233,  1234,   384,  1236,   383,
   385,   947,   948,   949,   950,   951,   952,   958,   386,  1263,
  1096,   387,   388,  1097,   396,   342,   397,   989,   398,   991,
   401,  1098,  1099,  1100,   402,   150,   405,  1398,   158,   163,
   167,   171,   175,  1002,   180,  1004,  1005,  1006,  1375,  1007,
    47,    48,   537,  1384,   403,   408,  1110,   404,   406,    51,
    52,    53,    54,    55,   538,   539,   540,   541,   542,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
   554,   555,   556,   557,   558,   559,   560,   561,    77,   135,
   136,   137,   138,   139,    78,   409,   229,   140,   141,   410,
   280,   411,   413,    80,   414,   415,  1101,   126,   127,   128,
   129,   130,   959,   131,   132,   133,   134,   417,   418,   135,
   136,   137,   138,   139,   420,   422,  1331,   140,   141,   423,
   428,   424,   436,  1333,  1253,   575,  1264,   434,   -41,   444,
   446,   451,   453,   562,    47,    48,   537,   454,   466,  1340,
   455,   458,   460,    51,    52,    53,    54,    55,   538,   539,
   540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
   560,   561,   467,   468,   473,   126,   127,   128,   129,   130,
   471,   131,   132,   133,   134,   474,   475,   135,   136,   137,
   138,   139,   483,  1374,  1389,   140,   141,   677,   678,   679,
   680,   681,   682,   389,   488,   683,  1376,   489,  1377,  1378,
   491,   493,  1423,   945,   494,   946,   563,   495,   496,   502,
   518,  1402,   564,   565,   520,   524,   525,   562,   526,   566,
   366,   567,   568,   569,   530,   536,   785,   640,   570,   578,
   786,   947,   948,   949,   950,   951,   952,  1379,   947,   948,
   949,   950,   951,   952,   953,   591,  1432,   596,  1191,   605,
   609,   612,  1195,  1196,   614,   624,   632,  1198,   638,   641,
  1201,  1202,  1203,  1204,   642,   643,  1205,  1206,   651,  1208,
  1269,  1210,   649,   653,  1211,  1505,   654,   656,  1215,  1216,
   660,  1218,   126,   127,   128,   129,   130,   665,   131,   132,
   133,   134,   684,   685,   135,   136,   137,   138,   139,   696,
   563,   723,   140,   141,   699,   732,   564,   565,   700,   759,
   763,   701,   702,   566,   569,   567,   568,   569,   762,   683,
   784,   859,   570,   789,   129,   130,   847,   131,   132,   133,
   134,   848,  1383,   135,   136,   137,   138,   139,   849,   954,
   856,   140,   141,  1434,    47,    48,   364,    50,   850,   851,
  1439,   857,   862,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,   858,   887,
   888,   889,  1297,  1298,  1299,  1300,  1301,   894,    76,   896,
   312,   247,   248,   249,   250,   251,   252,   253,   897,   895,
   898,    47,    48,    49,   912,   900,   915,   904,  1481,   903,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,  1270,   126,   127,   128,   129,
   130,   917,   131,   132,   133,   134,   906,   918,   135,   136,
   137,   138,   139,   919,   920,   923,   140,   141,   927,   928,
   929,  1359,  1360,  1361,  1362,  1363,   930,   931,    47,    48,
    49,   934,   935,   939,   940,   941,   942,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,   967,  1385,  1386,  1387,  1388,   968,   945,   978,
   946,   909,   979,   980,   910,   983,   982,   984,   986,   987,
   996,   997,   995,   998,  1401,   999,  1403,    77,  1404,  1000,
  1405,  1001,  1008,    78,  1009,   313,  1010,    79,  1011,  1013,
  1015,  1406,    80,   947,   948,   949,   950,   951,   952,   953,
  1016,  1407,  1342,  1017,  1018,  1343,  1019,  1020,  1029,  1431,
  1022,  1023,  1024,  1027,  1028,  1031,  1408,  1035,  1036,  1038,
  1039,  1040,  1441,  1442,  1443,  1444,  1041,  1043,  1048,  1046,
  1049,  1050,  1052,  1452,    77,  1053,  1054,  1055,  1056,  1058,
    78,  1059,  1060,  1061,   621,  1062,  1063,  1065,  1066,    80,
  1067,   126,   127,   128,   129,   130,  1069,   131,   132,   133,
   134,  1070,  1072,   135,   136,   137,   138,   139,  1074,  1075,
  1076,   140,   141,  1477,  1078,  1479,  1480,  1079,  1082,  1083,
  1084,  1409,  1484,  1085,  1087,  1088,  1089,  1489,  1090,  1491,
  1492,  1091,  1137,  1092,   957,  1093,  1138,  1139,  1498,  1499,
  1500,    77,  1094,  1149,  1156,  1158,  1095,    78,  1130,  1145,
  1146,  1410,  1511,  1159,  1513,  1160,    80,  1162,  1516,  1517,
   143,  1148,  1520,    47,    48,    49,   362,  1524,  1154,  1526,
  1167,  1528,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    47,    48,    49,
  1168,  1161,  1169,  1170,  1172,  1174,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    47,    48,    49,  1175,  1235,  1186,  1187,  1189,   704,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    47,    48,    49,  1212,  1364,
  1238,  1242,  1243,  1190,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    47,
    48,    49,  1193,  1244,  1199,  1207,  1247,   704,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,  1213,   673,   674,   675,   676,  1120,  1214,
   677,   678,   679,   680,   681,   682,    77,   705,   683,   706,
   707,   708,    78,   709,   710,   711,  1240,  1217,  1228,   712,
  1229,    80,   713,  1230,   704,   714,  1231,  1232,   715,   716,
  1254,  1241,  1245,  1255,  1256,  1260,  1121,   717,   718,  1257,
    77,  1262,  1265,  1122,  1123,  1268,    78,  1277,   366,  1280,
  1287,  1302,  1316,  1317,  1318,    80,   704,  1294,  1295,  1303,
  1304,  1124,  1314,   719,  1125,  1126,  1305,  1315,  1321,  1322,
  1323,  1324,  1325,  1329,    77,   705,  1339,   706,   707,   708,
    78,   709,   710,   711,  1341,   587,  1345,   712,   704,    80,
   713,  1330,  1354,   714,  1355,  1348,   715,   716,  1356,  1127,
  1357,  1358,  1365,  1369,  1366,   717,   718,  1367,    77,  1368,
  1390,  1370,  1371,  1372,    78,  1396,  1399,  1400,   621,  1412,
   704,  1413,  1414,    80,  1416,  1417,   448,  1430,  1424,  1128,
  1425,   719,   705,  1428,   706,   707,   708,  1433,   709,   710,
   711,  1435,    77,  1451,   712,  1436,  1437,   713,    78,  1438,
   714,  1445,   704,   715,   716,  1446,  1447,    80,  1448,  1332,
  1271,  1450,   717,   718,   705,  1453,   706,   707,   708,  1455,
   709,   710,   711,  1456,  1457,  1458,   712,  1459,  1468,   713,
  1469,  1473,   714,  1272,   704,   715,   716,  1470,   719,  1471,
  1472,  1475,  1476,  1478,   717,   718,   705,  1487,   706,   707,
   708,  1497,   709,   710,   711,  1274,  1501,  1506,   712,  1507,
  1508,   713,  1509,  1510,   714,  1512,  1334,   715,   716,  1522,
   719,  1531,  1523,  1532,   687,   933,   717,   718,   705,  1276,
   706,   707,   708,  1025,   709,   710,   711,   527,   830,  1223,
   712,  1135,   492,   713,  1347,   613,   714,   278,  1335,   715,
   716,  1278,   719,   183,     0,     0,     0,     0,   717,   718,
   705,     0,   706,   707,   708,     0,   709,   710,   711,     0,
     0,     0,   712,  1279,     0,   713,     0,     0,   714,     0,
  1336,   715,   716,     0,   719,     0,     0,     0,     0,     0,
   717,   718,   705,     0,   706,   707,   708,  1283,   709,   710,
   711,     0,     0,     0,   712,     0,     0,   713,     0,     0,
   714,     0,  1449,   715,   716,     0,   719,     0,     0,  1284,
     0,     0,   717,   718,     0,     0,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,  1286,  1474,     0,   140,   141,   719,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,  1391,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1488,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,  1392,     0,
     0,   140,   141,     0,     0,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,  1393,     0,     0,   140,   141,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,  1394,     0,     0,   140,   141,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,  1395,     0,     0,   140,
   141,     0,     0,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
  1454,     0,     0,   140,   141,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,   207,     0,   140,   141,     0,     0,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,   282,     0,     0,   140,
   141,     0,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,   503,     0,
   140,   141,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,   504,     0,
     0,   140,   141,     0,     0,     0,     0,   505,   506,   507,
   508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
   667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     0,     0,   677,   678,   679,   680,   681,   682,     0,     0,
   683,     0,     0,     0,   126,   127,   128,   129,   130,   766,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
     0,     0,     0,   208,   667,   668,   669,   670,   671,   672,
   673,   674,   675,   676,     0,     0,   677,   678,   679,   680,
   681,   682,     0,     0,   683,     0,   126,   127,   128,   129,
   130,   901,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,   266,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,   273,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,   274,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,   275,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,   498,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,   616,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,   618,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,   619,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,   620,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,   725,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,   869,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,   871,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,   872,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,   873,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,   875,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1103,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,  1112,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,  1259,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,  1266,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,  1273,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1349,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,  1350,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,  1351,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,  1352,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,  1418,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1419,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,  1420,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,  1421,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,  1429,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,  1483,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1485,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,  1486,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,  1494,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,  1495,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,  1496,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1514,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,  1515,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,  1518,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,  1525,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
     0,  1527,   667,   668,   669,   670,   671,   672,   673,   674,
   675,   676,     0,     0,   677,   678,   679,   680,   681,   682,
     0,     0,   683,   126,   127,   128,   129,   130,  1153,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,   256,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,     0,     0,     0,   257,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,     0,     0,   258,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
   259,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,   260,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,     0,     0,   261,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,   262,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,   263,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,   264,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,   265,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,   267,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,     0,     0,     0,   268,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,     0,     0,   269,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
   270,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,   271,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,     0,     0,   272,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,   430,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,   431,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,   432,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,   433,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,   435,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,     0,     0,     0,   648,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,     0,     0,   814,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
  1427,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,  1467,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,   438,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,   522,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,   693,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,   876,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,  1003,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,  1140,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,  1141,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,  1142,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,  1143,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,  1144,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,  1353,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,  1461,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,  1462,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,  1463,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,  1464,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,  1490,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,  1502,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,  1503,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,  1504,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,  1519,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,  1521,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,  1529,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     0,     0,   677,   678,   679,   680,   681,   682,     0,     0,
   683,   670,   671,   672,   673,   674,   675,   676,     0,     0,
   677,   678,   679,   680,   681,   682,     0,     0,   683,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141
};

static const short yycheck[] = {    25,
   374,   340,   247,   248,   410,   354,   346,   537,   831,   318,
   255,   385,   472,   508,   759,    49,  1190,   762,   621,  1193,
     5,     3,   517,     5,     0,  1199,   197,    61,   402,   200,
   590,   405,     3,  1207,   408,     5,   564,   565,   566,  1213,
  1214,     3,   570,     5,     5,   196,     3,   198,     5,     5,
     5,    77,    78,    79,    80,     5,   396,     3,   172,     5,
     5,   370,     5,     5,    49,    62,    11,    64,    65,     5,
     5,     5,    98,    99,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,     5,    49,     5,     5,     6,    43,   198,    49,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,     7,     7,   196,     5,     5,
    10,   651,     5,   653,    11,    11,   654,     5,    11,     5,
    43,   471,   114,    11,   694,    11,    49,    92,     5,     5,
   668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
   678,   679,   680,   681,   682,   683,   496,   685,   903,    45,
   469,     5,     7,   197,    62,     7,   505,    11,     5,     7,
   197,   172,     7,   200,    10,   157,    74,    74,    10,   284,
   206,   207,    49,    49,    81,   197,   789,    77,   200,   196,
   196,   198,     3,     4,     5,     6,    10,   198,   196,   944,
   197,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,  1400,   198,   198,   186,
   190,   196,     5,   193,   196,   196,    47,   457,   194,   767,
   266,    77,   197,   199,   194,    77,   196,   273,   274,   275,
   196,   196,   197,   196,   280,   197,   282,   283,   284,   285,
   196,   196,   196,    77,   369,    92,    93,    94,    95,    10,
   180,    44,   197,   196,   184,   200,   113,  1451,   115,   116,
   117,   194,   119,   120,   121,   196,   625,   626,   125,     5,
     6,   128,     5,    55,   131,   196,    74,   134,   135,   197,
   197,  1475,    64,   196,   196,   196,   143,   144,   198,   196,
   197,   197,    74,   196,   197,     3,   196,     5,   196,   197,
   196,   197,   197,   349,   196,   200,   104,   194,   194,     7,
    58,    59,   169,   111,   439,     5,    77,   199,   200,     9,
   366,    11,   837,    64,   564,   565,   566,    62,     8,    64,
   570,   196,   196,   197,   196,    74,   142,   143,   196,    74,
   197,   196,   198,    91,    85,   705,   198,     7,    87,    82,
   197,    41,     7,   901,   102,   186,    66,    64,    48,    92,
   908,   192,   140,   723,   198,   196,   105,    74,   697,    76,
   201,    61,   197,    63,   420,   200,   422,   423,   424,   739,
   740,   741,   742,    73,    48,   172,   746,    77,     5,   435,
   197,    62,     7,   200,    11,    66,    86,   198,   137,   197,
    64,   111,   197,    74,   198,   200,  1171,   453,  1173,   196,
    74,    75,   198,   103,   654,   197,    80,   198,    82,   129,
   130,   196,   468,   198,   196,    42,   198,   198,   668,   669,
   670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
   680,   681,   682,   683,   198,   685,   136,   198,   138,   197,
   196,   197,   498,   933,   198,   196,   197,   167,   197,   197,
   506,   507,   197,   509,   198,    64,   196,   197,   514,   515,
   735,   736,   737,   738,   198,    74,   198,   836,   168,   838,
   170,   171,   193,   194,   749,   845,   198,   197,    87,   849,
   197,   917,    91,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,  1346,  1347,   185,   186,   187,   188,   189,
   190,   199,   200,   193,   940,   198,    61,   198,    63,    64,
   198,   881,    64,   883,   198,   919,   197,   767,     5,   198,
   890,   198,    74,   197,   199,   200,   801,   802,   199,   200,
   586,   199,   200,   969,    67,    68,    69,    70,    71,    72,
   198,    96,    97,    98,    99,   100,   101,   102,   196,   197,
   825,   196,   197,   105,   106,   107,   108,   109,   110,   198,
   616,   198,   618,   619,   620,   621,    49,    50,    51,    52,
    53,    54,    55,    56,    57,   196,   197,    60,   196,   197,
     5,    64,   198,   858,   640,   196,   197,   643,   197,   196,
   197,  1366,   196,   197,    77,   198,    74,  1155,    76,    77,
    78,    79,   196,   197,   185,   186,   187,   188,    61,     5,
    63,    64,   196,   197,  1139,     5,  1176,  1177,  1178,   200,
  1056,    74,   196,   197,   196,   197,   113,     7,   115,   116,
   117,     5,   119,   120,   121,    88,    89,    90,   125,   199,
   200,   128,   197,   146,   131,   197,   200,   134,   135,   102,
   198,   901,    76,   199,   200,    79,   143,   144,   908,    83,
    84,    85,   196,   197,   197,  1440,     7,   199,   200,   725,
   199,   200,    74,   196,   197,     3,     4,     5,   953,  1018,
   199,   200,   169,   958,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,   111,
   197,     7,  1051,   172,   197,   196,   187,   188,   189,   197,
     5,  1091,   193,   194,   198,  1095,   196,  1097,   511,   512,
  1100,   196,  1257,   789,  1259,  1105,   196,   139,   196,   141,
   111,   196,  1081,   114,   197,   198,  1116,  1086,   792,   793,
     5,   122,   123,     5,  1029,   126,   127,   159,   172,   172,
  1130,  1036,  1132,     5,   196,     5,  1291,   196,   187,   188,
   189,   190,     5,   197,   193,  1145,  1146,     5,  1148,   196,
     5,    96,    97,    98,    99,   100,   101,   102,   196,     7,
   111,   196,   196,   114,   172,   197,   199,   853,   198,   855,
     5,   122,   123,   124,     5,    85,     5,  1367,    88,    89,
    90,    91,    92,   869,    94,   871,   872,   873,  1343,   875,
     3,     4,     5,  1348,   196,     5,   197,   196,   196,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,   186,   185,
   186,   187,   188,   189,   192,   196,   146,   193,   194,     5,
   198,     5,     5,   201,   196,     5,   197,   173,   174,   175,
   176,   177,   197,   179,   180,   181,   182,     5,   200,   185,
   186,   187,   188,   189,   196,   196,  1266,   193,   194,   196,
   153,   196,     7,  1273,  1179,  1155,     7,   199,   198,   196,
     7,     7,   198,    96,     3,     4,     5,   198,   197,  1289,
     7,     7,     7,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,     8,   196,     7,   173,   174,   175,   176,   177,
   172,   179,   180,   181,   182,     5,     7,   185,   186,   187,
   188,   189,   196,  1342,  1353,   193,   194,   185,   186,   187,
   188,   189,   190,   196,     7,   193,    61,   197,    63,    64,
     7,     7,  1396,    61,     7,    63,   179,     7,   200,     7,
     5,  1371,   185,   186,     7,     7,     7,    96,     5,   192,
   194,   194,   195,   196,     7,     5,   199,   196,   201,     7,
   203,    96,    97,    98,    99,   100,   101,   102,    96,    97,
    98,    99,   100,   101,   102,     7,  1406,     7,  1094,     7,
     7,     7,  1098,  1099,   197,     5,     5,  1103,     5,     7,
  1106,  1107,  1108,  1109,     7,   196,  1112,  1113,   198,  1115,
     7,  1117,   199,   198,  1120,  1501,   198,     5,  1124,  1125,
     3,  1127,   173,   174,   175,   176,   177,     5,   179,   180,
   181,   182,   194,   198,   185,   186,   187,   188,   189,     7,
   179,   200,   193,   194,   196,     6,   185,   186,   196,   198,
   180,   196,   196,   192,   196,   194,   195,   196,   198,   193,
     3,     6,   201,   196,   176,   177,   198,   179,   180,   181,
   182,   198,   197,   185,   186,   187,   188,   189,   198,   197,
   196,   193,   194,  1408,     3,     4,     5,     6,   198,   198,
  1415,   196,     7,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,   198,   196,
     5,     5,  1228,  1229,  1230,  1231,  1232,     5,    47,     5,
    49,   146,   147,   148,   149,   150,   151,   152,     5,   196,
   199,     3,     4,     5,     5,   199,     5,   197,  1473,   198,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,     7,   173,   174,   175,   176,
   177,     5,   179,   180,   181,   182,   199,     5,   185,   186,
   187,   188,   189,     5,     5,     5,   193,   194,     5,     5,
     5,  1307,  1308,  1309,  1310,  1311,     3,   199,     3,     4,
     5,     5,     5,     5,     5,     3,     3,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,     5,  1349,  1350,  1351,  1352,     5,    61,     5,
    63,    46,     7,     5,    49,     5,     7,     5,     5,     5,
   198,   198,     7,   196,  1370,     5,  1372,   186,    64,     5,
    66,   197,     7,   192,     7,   194,     7,   196,     7,     7,
     7,    77,   201,    96,    97,    98,    99,   100,   101,   102,
     7,    87,   154,     7,     3,   157,     7,     7,   200,  1405,
     7,     7,     7,     7,     7,   199,   102,   198,   198,     7,
    85,     7,  1418,  1419,  1420,  1421,     7,     7,     7,   196,
     7,     7,     7,  1429,   186,     7,     7,     7,     5,     7,
   192,     7,     7,     7,   196,     7,     7,     7,     7,   201,
     7,   173,   174,   175,   176,   177,     5,   179,   180,   181,
   182,     5,   198,   185,   186,   187,   188,   189,   198,     5,
     5,   193,   194,  1469,     7,  1471,  1472,     7,     7,     7,
     7,   167,  1478,     7,     7,     7,   199,  1483,   199,  1485,
  1486,   200,     7,   200,   197,   199,     7,   196,  1494,  1495,
  1496,   186,   200,     7,     5,     5,   200,   192,   200,   200,
   200,   197,  1508,     7,  1510,     7,   201,     7,  1514,  1515,
   200,   200,  1518,     3,     4,     5,     6,  1523,   199,  1525,
   199,  1527,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,     3,     4,     5,
     7,    87,     7,     7,     7,     7,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,     3,     4,     5,     7,     3,     7,     7,     5,     5,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,     3,     4,     5,     5,    86,
   199,     7,     5,   196,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,     3,
     4,     5,   196,     5,   196,   196,     7,     5,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,   196,   179,   180,   181,   182,    66,   196,
   185,   186,   187,   188,   189,   190,   186,   113,   193,   115,
   116,   117,   192,   119,   120,   121,   199,   196,   196,   125,
   196,   201,   128,   196,     5,   131,   196,   196,   134,   135,
     5,   199,   198,     5,   199,   199,   104,   143,   144,   200,
   186,     7,     7,   111,   112,     7,   192,     7,   194,     7,
   199,   199,     7,     5,     7,   201,     5,   196,   196,   199,
   197,   129,   197,   169,   132,   133,   199,   197,     7,     7,
     7,     7,     7,     7,   186,   113,     7,   115,   116,   117,
   192,   119,   120,   121,     7,   197,     7,   125,     5,   201,
   128,   197,     7,   131,     7,   200,   134,   135,     7,   167,
     7,     5,   199,   118,   200,   143,   144,   200,   186,   199,
     7,   200,   200,   200,   192,     5,     7,   196,   196,     5,
     5,     5,     5,   201,   198,   197,   196,     5,   199,   197,
   199,   169,   113,   199,   115,   116,   117,     5,   119,   120,
   121,     5,   186,   196,   125,     7,     7,   128,   192,     7,
   131,     7,     5,   134,   135,     7,     7,   201,     7,   197,
     7,     7,   143,   144,   113,     7,   115,   116,   117,     7,
   119,   120,   121,     7,     7,     7,   125,     7,   199,   128,
   196,    41,   131,     7,     5,   134,   135,   197,   169,   196,
   196,   196,     7,   196,   143,   144,   113,     7,   115,   116,
   117,   103,   119,   120,   121,     7,     5,   197,   125,   197,
   196,   128,     7,   196,   131,   197,   197,   134,   135,   197,
   169,     0,   196,     0,   574,   817,   143,   144,   113,     7,
   115,   116,   117,   894,   119,   120,   121,   444,   700,  1135,
   125,   997,   414,   128,  1295,   490,   131,   206,   197,   134,
   135,     7,   169,    96,    -1,    -1,    -1,    -1,   143,   144,
   113,    -1,   115,   116,   117,    -1,   119,   120,   121,    -1,
    -1,    -1,   125,     7,    -1,   128,    -1,    -1,   131,    -1,
   197,   134,   135,    -1,   169,    -1,    -1,    -1,    -1,    -1,
   143,   144,   113,    -1,   115,   116,   117,     7,   119,   120,
   121,    -1,    -1,    -1,   125,    -1,    -1,   128,    -1,    -1,
   131,    -1,   197,   134,   135,    -1,   169,    -1,    -1,     7,
    -1,    -1,   143,   144,    -1,    -1,   173,   174,   175,   176,
   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,     7,   197,    -1,   193,   194,   169,   173,
   174,   175,   176,   177,    -1,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,     7,    -1,    -1,   193,
   194,   173,   174,   175,   176,   177,   197,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,     7,    -1,
    -1,   193,   194,    -1,    -1,   173,   174,   175,   176,   177,
    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,     7,    -1,    -1,   193,   194,   173,   174,   175,
   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,
   186,   187,   188,   189,     7,    -1,    -1,   193,   194,   173,
   174,   175,   176,   177,    -1,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,     7,    -1,    -1,   193,
   194,    -1,    -1,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
     7,    -1,    -1,   193,   194,   173,   174,   175,   176,   177,
    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,   187,
   188,   189,    -1,     8,    -1,   193,   194,    -1,    -1,   173,
   174,   175,   176,   177,    -1,   179,   180,   181,   182,    -1,
    -1,   185,   186,   187,   188,   189,     8,    -1,    -1,   193,
   194,    -1,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,   173,   174,   175,   176,   177,    -1,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,    -1,    -1,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
   173,   174,   175,   176,   177,    -1,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    55,    -1,
   193,   194,   173,   174,   175,   176,   177,    -1,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,    -1,    -1,   173,   174,   175,   176,
   177,    -1,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,   173,   174,   175,   176,   177,    -1,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,   145,    -1,
    -1,   193,   194,    -1,    -1,    -1,    -1,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,   190,    -1,    -1,
   193,    -1,    -1,    -1,   173,   174,   175,   176,   177,   202,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   202,   173,   174,   175,   176,   177,   178,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,   190,    -1,    -1,   193,    -1,   173,   174,   175,   176,
   177,   200,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,
   175,   176,   177,   200,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
   173,   174,   175,   176,   177,   200,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,   173,   174,   175,   176,   177,   200,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,   173,   174,   175,   176,   177,   200,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,
   177,   200,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,
   175,   176,   177,   200,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
   173,   174,   175,   176,   177,   200,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,   173,   174,   175,   176,   177,   200,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,   173,   174,   175,   176,   177,   200,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,
   177,   200,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,
   175,   176,   177,   200,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
   173,   174,   175,   176,   177,   200,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,   173,   174,   175,   176,   177,   200,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,   173,   174,   175,   176,   177,   200,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,
   177,   200,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,
   175,   176,   177,   200,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
   173,   174,   175,   176,   177,   200,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,   173,   174,   175,   176,   177,   200,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,   173,   174,   175,   176,   177,   200,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,
   177,   200,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,
   175,   176,   177,   200,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
   173,   174,   175,   176,   177,   200,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,   173,   174,   175,   176,   177,   200,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,   173,   174,   175,   176,   177,   200,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,
   177,   200,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,
   175,   176,   177,   200,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
   173,   174,   175,   176,   177,   200,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,   173,   174,   175,   176,   177,   200,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,   173,   174,   175,   176,   177,   200,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,
   177,   200,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,
   175,   176,   177,   200,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
   173,   174,   175,   176,   177,   200,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,   173,   174,   175,   176,   177,   200,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,   173,   174,   175,   176,   177,   200,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,   173,   174,   175,   176,
   177,   200,   179,   180,   181,   182,    -1,    -1,   185,   186,
   187,   188,   189,    -1,    -1,    -1,   193,   194,   173,   174,
   175,   176,   177,   200,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
   173,   174,   175,   176,   177,   200,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,    -1,
   193,   194,   173,   174,   175,   176,   177,   200,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
    -1,    -1,   193,   194,   173,   174,   175,   176,   177,   200,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,
    -1,   200,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,    -1,    -1,   185,   186,   187,   188,   189,   190,
    -1,    -1,   193,   173,   174,   175,   176,   177,   199,   179,
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
    -1,    -1,    -1,   199,   173,   174,   175,   176,   177,    -1,
   179,   180,   181,   182,    -1,    -1,   185,   186,   187,   188,
   189,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,
   199,   173,   174,   175,   176,   177,    -1,   179,   180,   181,
   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,    -1,
    -1,   193,   194,    -1,    -1,    -1,    -1,   199,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
    -1,    -1,   197,   173,   174,   175,   176,   177,    -1,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194,    -1,    -1,   197,   173,   174,
   175,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,    -1,    -1,    -1,   193,   194,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
    -1,    -1,   185,   186,   187,   188,   189,   190,    -1,    -1,
   193,   176,   177,   178,   179,   180,   181,   182,    -1,    -1,
   185,   186,   187,   188,   189,   190,    -1,    -1,   193,   179,
   180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
    -1,    -1,    -1,   193,   194
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
{ Pos_InteractiveHelp(); ;
    break;}
case 23:
#line 447 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 24:
#line 455 "yacc.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 26:
#line 472 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 28:
#line 479 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 29:
#line 482 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 30:
#line 485 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 31:
#line 487 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 34:
#line 498 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 35:
#line 503 "yacc.y"
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
case 36:
#line 515 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 37:
#line 524 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 38:
#line 535 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 39:
#line 540 "yacc.y"
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
case 40:
#line 577 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 41:
#line 580 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 42:
#line 591 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 43:
#line 593 "yacc.y"
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
case 44:
#line 609 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 45:
#line 612 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 46:
#line 615 "yacc.y"
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
case 47:
#line 666 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 48:
#line 678 "yacc.y"
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
case 49:
#line 702 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 50:
#line 709 "yacc.y"
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
case 51:
#line 722 "yacc.y"
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
case 52:
#line 740 "yacc.y"
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
case 53:
#line 763 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 54:
#line 767 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 55:
#line 776 "yacc.y"
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
case 56:
#line 790 "yacc.y"
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
case 57:
#line 824 "yacc.y"
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
case 58:
#line 837 "yacc.y"
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
case 60:
#line 861 "yacc.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 61:
#line 871 "yacc.y"
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
case 64:
#line 893 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 65:
#line 898 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 66:
#line 899 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 67:
#line 904 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 71:
#line 923 "yacc.y"
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
case 72:
#line 943 "yacc.y"
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
case 75:
#line 994 "yacc.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 76:
#line 1014 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 77:
#line 1020 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 78:
#line 1026 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 79:
#line 1029 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 80:
#line 1037 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 81:
#line 1041 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 83:
#line 1053 "yacc.y"
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
case 84:
#line 1066 "yacc.y"
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
case 85:
#line 1080 "yacc.y"
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
case 86:
#line 1095 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 87:
#line 1101 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 88:
#line 1107 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1113 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1119 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1125 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1131 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1137 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1143 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1149 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1155 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1161 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1167 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1173 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1179 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1185 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1191 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1198 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 105:
#line 1206 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 107:
#line 1219 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 108:
#line 1225 "yacc.y"
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
case 109:
#line 1303 "yacc.y"
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
case 110:
#line 1337 "yacc.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator =
	Quantity_TypeOperator ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 111:
#line 1347 "yacc.y"
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
case 112:
#line 1360 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 113:
#line 1362 "yacc.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	yyerror("Dof definition out of context") ;
    ;
    break;}
case 114:
#line 1373 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 115:
#line 1379 "yacc.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 116:
#line 1385 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 117:
#line 1387 "yacc.y"
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
case 118:
#line 1416 "yacc.y"
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
case 119:
#line 1440 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError) 
	vyyerror("Unknown Current Value: $%s %s", yyvsp[0].c, Get_Valid_SXP(Current_Value)) ;
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 120:
#line 1451 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 121:
#line 1457 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 122:
#line 1464 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 123:
#line 1470 "yacc.y"
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
case 124:
#line 1481 "yacc.y"
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
case 125:
#line 1496 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 126:
#line 1497 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 127:
#line 1498 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 128:
#line 1503 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 129:
#line 1504 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 130:
#line 1510 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 132:
#line 1515 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 133:
#line 1522 "yacc.y"
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
case 134:
#line 1549 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 135:
#line 1554 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 136:
#line 1561 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianPerRegion = NULL ; ;
    break;}
case 138:
#line 1570 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 139:
#line 1575 "yacc.y"
{ JacobianMethod_S.JacobianPerRegion = yyvsp[-1].l ; ;
    break;}
case 140:
#line 1582 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 141:
#line 1585 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 142:
#line 1592 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 144:
#line 1602 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 145:
#line 1605 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 146:
#line 1608 "yacc.y"
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
case 147:
#line 1639 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 148:
#line 1645 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 149:
#line 1652 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.Method = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 151:
#line 1665 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 152:
#line 1672 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 153:
#line 1675 "yacc.y"
{ IntegrationMethod_S.Method = yyvsp[-1].l ; ;
    break;}
case 154:
#line 1682 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 155:
#line 1685 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 156:
#line 1692 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 158:
#line 1704 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 159:
#line 1713 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 160:
#line 1722 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 161:
#line 1729 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 162:
#line 1732 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 163:
#line 1739 "yacc.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 165:
#line 1755 "yacc.y"
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
case 166:
#line 1808 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 167:
#line 1811 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 168:
#line 1814 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 169:
#line 1817 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 170:
#line 1820 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 171:
#line 1831 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 173:
#line 1841 "yacc.y"
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
case 175:
#line 1866 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 177:
#line 1880 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 178:
#line 1886 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 179:
#line 1893 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 180:
#line 1901 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 181:
#line 1904 "yacc.y"
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
case 182:
#line 1926 "yacc.y"
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
case 183:
#line 1941 "yacc.y"
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
case 184:
#line 1965 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 186:
#line 1979 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 187:
#line 1988 "yacc.y"
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
case 188:
#line 2012 "yacc.y"
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
case 189:
#line 2037 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 190:
#line 2042 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 191:
#line 2050 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 192:
#line 2058 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 193:
#line 2068 "yacc.y"
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
case 194:
#line 2084 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 195:
#line 2091 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 196:
#line 2097 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 197:
#line 2103 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 198:
#line 2111 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 199:
#line 2119 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 200:
#line 2127 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 201:
#line 2147 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 203:
#line 2158 "yacc.y"
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
case 205:
#line 2185 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 207:
#line 2198 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 208:
#line 2204 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 209:
#line 2211 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 210:
#line 2219 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 211:
#line 2222 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 212:
#line 2225 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 213:
#line 2228 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 214:
#line 2235 "yacc.y"
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
case 215:
#line 2251 "yacc.y"
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
case 216:
#line 2288 "yacc.y"
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
case 218:
#line 2307 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 219:
#line 2310 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 220:
#line 2315 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 221:
#line 2320 "yacc.y"
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
case 222:
#line 2332 "yacc.y"
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
case 223:
#line 2356 "yacc.y"
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
case 225:
#line 2416 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 226:
#line 2419 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 227:
#line 2428 "yacc.y"
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
case 228:
#line 2493 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 229:
#line 2497 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 230:
#line 2504 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 232:
#line 2513 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 233:
#line 2518 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 234:
#line 2525 "yacc.y"
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
case 235:
#line 2541 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 236:
#line 2547 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 237:
#line 2550 "yacc.y"
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
case 238:
#line 2569 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 239:
#line 2573 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 240:
#line 2582 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 242:
#line 2593 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 243:
#line 2598 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 244:
#line 2607 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 245:
#line 2620 "yacc.y"
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
case 246:
#line 2635 "yacc.y"
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
case 247:
#line 2709 "yacc.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 249:
#line 2725 "yacc.y"
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
case 250:
#line 2743 "yacc.y"
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
case 251:
#line 2757 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 252:
#line 2760 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 253:
#line 2763 "yacc.y"
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
case 254:
#line 2809 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 256:
#line 2819 "yacc.y"
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
case 258:
#line 2845 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 260:
#line 2857 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 261:
#line 2863 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 262:
#line 2870 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 264:
#line 2881 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 265:
#line 2887 "yacc.y"
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
case 266:
#line 2901 "yacc.y"
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
case 267:
#line 2919 "yacc.y"
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
case 269:
#line 2940 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 270:
#line 2943 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 271:
#line 2947 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 272:
#line 2950 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 273:
#line 2959 "yacc.y"
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
case 274:
#line 2998 "yacc.y"
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
case 275:
#line 3022 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 276:
#line 3027 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 277:
#line 3033 "yacc.y"
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
case 278:
#line 3183 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 279:
#line 3188 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 280:
#line 3197 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 281:
#line 3206 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 283:
#line 3214 "yacc.y"
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
case 284:
#line 3254 "yacc.y"
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
case 285:
#line 3269 "yacc.y"
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
case 286:
#line 3297 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 287:
#line 3300 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 288:
#line 3303 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 289:
#line 3306 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 290:
#line 3313 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 292:
#line 3324 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 293:
#line 3333 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 294:
#line 3343 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 295:
#line 3357 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 297:
#line 3369 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 298:
#line 3371 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 299:
#line 3373 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 300:
#line 3375 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 301:
#line 3383 "yacc.y"
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
case 303:
#line 3405 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 304:
#line 3413 "yacc.y"
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
case 305:
#line 3475 "yacc.y"
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
case 306:
#line 3521 "yacc.y"
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
case 307:
#line 3545 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 308:
#line 3554 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3568 "yacc.y"
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
case 311:
#line 3597 "yacc.y"
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
case 312:
#line 3621 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 313:
#line 3629 "yacc.y"
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
case 314:
#line 3684 "yacc.y"
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
case 315:
#line 3701 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 316:
#line 3702 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 317:
#line 3703 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 318:
#line 3704 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 319:
#line 3705 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 320:
#line 3706 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 321:
#line 3707 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 322:
#line 3714 "yacc.y"
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
case 323:
#line 3728 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 324:
#line 3746 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 326:
#line 3756 "yacc.y"
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
case 328:
#line 3781 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 330:
#line 3793 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 331:
#line 3800 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 332:
#line 3807 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 333:
#line 3810 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 334:
#line 3812 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 335:
#line 3818 "yacc.y"
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
case 336:
#line 3833 "yacc.y"
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
case 337:
#line 3852 "yacc.y"
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
case 339:
#line 3871 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 340:
#line 3874 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 341:
#line 3882 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 342:
#line 3885 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 343:
#line 3890 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 344:
#line 3895 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 345:
#line 3900 "yacc.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 346:
#line 3910 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 347:
#line 3919 "yacc.y"
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
case 348:
#line 3956 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 349:
#line 3963 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 350:
#line 3966 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 351:
#line 3978 "yacc.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 352:
#line 3988 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 353:
#line 3994 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 354:
#line 3997 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 355:
#line 4009 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 356:
#line 4017 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 357:
#line 4028 "yacc.y"
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
case 358:
#line 4044 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 359:
#line 4051 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 360:
#line 4057 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 361:
#line 4063 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 362:
#line 4069 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 363:
#line 4077 "yacc.y"
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
case 364:
#line 4093 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 365:
#line 4100 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 366:
#line 4106 "yacc.y"
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
case 367:
#line 4117 "yacc.y"
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
case 368:
#line 4128 "yacc.y"
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
case 369:
#line 4144 "yacc.y"
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
case 370:
#line 4156 "yacc.y"
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
case 371:
#line 4178 "yacc.y"
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
case 372:
#line 4200 "yacc.y"
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
case 373:
#line 4213 "yacc.y"
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
case 374:
#line 4226 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 376:
#line 4235 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 378:
#line 4244 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 379:
#line 4254 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 380:
#line 4265 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 381:
#line 4274 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 382:
#line 4284 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 384:
#line 4294 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 385:
#line 4297 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 386:
#line 4306 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 387:
#line 4319 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 389:
#line 4335 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 390:
#line 4339 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 391:
#line 4343 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 392:
#line 4347 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 393:
#line 4352 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 394:
#line 4363 "yacc.y"
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
case 396:
#line 4380 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 397:
#line 4384 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 398:
#line 4388 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 399:
#line 4392 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 400:
#line 4396 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 401:
#line 4401 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 402:
#line 4412 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 404:
#line 4427 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 405:
#line 4431 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 406:
#line 4435 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 407:
#line 4439 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 408:
#line 4444 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 409:
#line 4455 "yacc.y"
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
case 411:
#line 4473 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 412:
#line 4477 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 413:
#line 4481 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 414:
#line 4485 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 415:
#line 4490 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 416:
#line 4500 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 417:
#line 4506 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 418:
#line 4512 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 419:
#line 4522 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 420:
#line 4525 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 421:
#line 4530 "yacc.y"
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
case 423:
#line 4548 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 424:
#line 4557 "yacc.y"
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
case 425:
#line 4586 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 426:
#line 4589 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 427:
#line 4592 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 428:
#line 4600 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 429:
#line 4615 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 431:
#line 4627 "yacc.y"
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
case 433:
#line 4650 "yacc.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 435:
#line 4664 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 436:
#line 4671 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 437:
#line 4679 "yacc.y"
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
case 438:
#line 4725 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 439:
#line 4730 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 440:
#line 4736 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 441:
#line 4739 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 442:
#line 4744 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.Type = NONCUMULATIVE ;
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 444:
#line 4756 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 445:
#line 4759 "yacc.y"
{ PostQuantity_S.Type =
	Get_DefineForString(PostQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of PostQuantity: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(PostQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 446:
#line 4768 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 447:
#line 4774 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 448:
#line 4779 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 449:
#line 4785 "yacc.y"
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
#line 4798 "yacc.y"
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
#line 4812 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 453:
#line 4819 "yacc.y"
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
#line 4847 "yacc.y"
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
#line 4856 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 456:
#line 4857 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 457:
#line 4863 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 458:
#line 4872 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 459:
#line 4889 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 461:
#line 4901 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 463:
#line 4908 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 465:
#line 4920 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 466:
#line 4927 "yacc.y"
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
#line 4939 "yacc.y"
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
#line 4949 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 469:
#line 4954 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 470:
#line 4960 "yacc.y"
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
#line 4977 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 472:
#line 4987 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 473:
#line 4990 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 474:
#line 4994 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 475:
#line 5005 "yacc.y"
{
      PostSubOperation_S.Type = POP_PLOT ;
    ;
    break;}
case 476:
#line 5010 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.SubType = PLOT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[-3].i) ;
    ;
    break;}
case 477:
#line 5022 "yacc.y"
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
case 478:
#line 5044 "yacc.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-1].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-1].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 479:
#line 5054 "yacc.y"
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
case 480:
#line 5077 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 481:
#line 5078 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 482:
#line 5079 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 483:
#line 5080 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 484:
#line 5086 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 485:
#line 5095 "yacc.y"
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
case 486:
#line 5109 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 487:
#line 5117 "yacc.y"
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
case 488:
#line 5130 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 489:
#line 5140 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 490:
#line 5149 "yacc.y"
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
case 491:
#line 5163 "yacc.y"
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
case 492:
#line 5182 "yacc.y"
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
case 493:
#line 5205 "yacc.y"
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
      PostSubOperation_S.Iso_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Sort = 0 ;
    ;
    break;}
case 495:
#line 5224 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 496:
#line 5231 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 497:
#line 5238 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 498:
#line 5245 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 499:
#line 5249 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 500:
#line 5253 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 501:
#line 5257 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 502:
#line 5261 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 503:
#line 5270 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 504:
#line 5275 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 505:
#line 5280 "yacc.y"
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
case 506:
#line 5300 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Plot") ;  	
    ;
    break;}
case 507:
#line 5307 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 508:
#line 5314 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 509:
#line 5322 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 510:
#line 5330 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 511:
#line 5337 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 512:
#line 5344 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 513:
#line 5356 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 514:
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
case 515:
#line 5409 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 517:
#line 5420 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 518:
#line 5423 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 519:
#line 5429 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 520:
#line 5430 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 522:
#line 5438 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 523:
#line 5441 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 524:
#line 5450 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 525:
#line 5453 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 526:
#line 5464 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 527:
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
case 528:
#line 5489 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 529:
#line 5495 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 530:
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
case 531:
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
case 534:
#line 5564 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 535:
#line 5570 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 536:
#line 5576 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 537:
#line 5587 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 538:
#line 5588 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 539:
#line 5589 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 540:
#line 5590 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 541:
#line 5591 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 542:
#line 5592 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 543:
#line 5593 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 544:
#line 5594 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 545:
#line 5595 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 546:
#line 5596 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 547:
#line 5597 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 548:
#line 5598 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 549:
#line 5599 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 550:
#line 5600 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 551:
#line 5601 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 552:
#line 5602 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 553:
#line 5603 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 554:
#line 5604 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 555:
#line 5605 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 556:
#line 5606 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 557:
#line 5607 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 558:
#line 5610 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 559:
#line 5611 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 560:
#line 5612 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 561:
#line 5613 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 562:
#line 5614 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 563:
#line 5615 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 564:
#line 5616 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 565:
#line 5617 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 566:
#line 5618 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 567:
#line 5619 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 568:
#line 5620 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 569:
#line 5621 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 570:
#line 5622 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 571:
#line 5623 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 572:
#line 5624 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 573:
#line 5625 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 574:
#line 5626 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 575:
#line 5627 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 576:
#line 5628 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 577:
#line 5629 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 578:
#line 5630 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 579:
#line 5631 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 580:
#line 5632 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 581:
#line 5633 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 582:
#line 5634 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 583:
#line 5635 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 584:
#line 5636 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 585:
#line 5637 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 586:
#line 5638 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 587:
#line 5639 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 588:
#line 5640 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 589:
#line 5641 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 590:
#line 5642 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 591:
#line 5643 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 592:
#line 5644 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 593:
#line 5645 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 594:
#line 5646 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 595:
#line 5647 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 596:
#line 5648 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 597:
#line 5649 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 598:
#line 5654 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 599:
#line 5655 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 600:
#line 5656 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 601:
#line 5657 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 602:
#line 5658 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 603:
#line 5659 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 604:
#line 5660 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 605:
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
case 606:
#line 5681 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 607:
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


