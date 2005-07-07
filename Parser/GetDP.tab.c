
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
#define	tSprintf	264
#define	tPrintf	265
#define	tRead	266
#define	tFor	267
#define	tEndFor	268
#define	tIf	269
#define	tElse	270
#define	tEndIf	271
#define	tFlag	272
#define	tHelp	273
#define	tCpu	274
#define	tCheck	275
#define	tInclude	276
#define	tConstant	277
#define	tList	278
#define	tListAlt	279
#define	tLinSpace	280
#define	tLogSpace	281
#define	tListFromFile	282
#define	tDefineConstant	283
#define	tPi	284
#define	t0D	285
#define	t1D	286
#define	t2D	287
#define	t3D	288
#define	tExp	289
#define	tLog	290
#define	tLog10	291
#define	tSqrt	292
#define	tSin	293
#define	tAsin	294
#define	tCos	295
#define	tAcos	296
#define	tTan	297
#define	tAtan	298
#define	tAtan2	299
#define	tSinh	300
#define	tCosh	301
#define	tTanh	302
#define	tFabs	303
#define	tFloor	304
#define	tCeil	305
#define	tFmod	306
#define	tModulo	307
#define	tHypot	308
#define	tSolidAngle	309
#define	tTrace	310
#define	tOrder	311
#define	tCrossProduct	312
#define	tDofValue	313
#define	tMHTransform	314
#define	tMHJacNL	315
#define	tGroup	316
#define	tDefineGroup	317
#define	tAll	318
#define	tInSupport	319
#define	tMovingBand2D	320
#define	tDefineFunction	321
#define	tConstraint	322
#define	tRegion	323
#define	tSubRegion	324
#define	tRegionRef	325
#define	tSubRegionRef	326
#define	tFilter	327
#define	tCoefficient	328
#define	tValue	329
#define	tTimeFunction	330
#define	tBranch	331
#define	tNode	332
#define	tLoop	333
#define	tNameOfResolution	334
#define	tJacobian	335
#define	tCase	336
#define	tIntegration	337
#define	tFMMIntegration	338
#define	tMatrix	339
#define	tType	340
#define	tSubType	341
#define	tCriterion	342
#define	tGeoElement	343
#define	tNumberOfPoints	344
#define	tMaxNumberOfPoints	345
#define	tNumberOfDivisions	346
#define	tMaxNumberOfDivisions	347
#define	tStoppingCriterion	348
#define	tFunctionSpace	349
#define	tName	350
#define	tBasisFunction	351
#define	tNameOfCoef	352
#define	tFunction	353
#define	tdFunction	354
#define	tSubFunction	355
#define	tSubdFunction	356
#define	tSupport	357
#define	tEntity	358
#define	tSubSpace	359
#define	tNameOfBasisFunction	360
#define	tGlobalQuantity	361
#define	tEntityType	362
#define	tEntitySubType	363
#define	tNameOfConstraint	364
#define	tFormulation	365
#define	tQuantity	366
#define	tNameOfSpace	367
#define	tIndexOfSystem	368
#define	tSymmetry	369
#define	tEquation	370
#define	tGalerkin	371
#define	tdeRham	372
#define	tGlobalTerm	373
#define	tGlobalEquation	374
#define	tDiscreteGeometry	375
#define	tDt	376
#define	tDtDof	377
#define	tDtDt	378
#define	tDtDtDof	379
#define	tJacNL	380
#define	tNeverDt	381
#define	tDtNL	382
#define	tAtAnteriorTimeStep	383
#define	tIn	384
#define	tFull_Matrix	385
#define	tResolution	386
#define	tDefineSystem	387
#define	tNameOfFormulation	388
#define	tNameOfMesh	389
#define	tFrequency	390
#define	tSolver	391
#define	tOriginSystem	392
#define	tDestinationSystem	393
#define	tOperation	394
#define	tOperationEnd	395
#define	tSetTime	396
#define	tDTime	397
#define	tSetFrequency	398
#define	tFourierTransform	399
#define	tFourierTransformJ	400
#define	tLanczos	401
#define	tEigenSolve	402
#define	tPerturbation	403
#define	tUpdate	404
#define	tUpdateConstraint	405
#define	tBreak	406
#define	tTimeLoopTheta	407
#define	tTime0	408
#define	tTimeMax	409
#define	tTheta	410
#define	tTimeLoopNewmark	411
#define	tBeta	412
#define	tGamma	413
#define	tIterativeLoop	414
#define	tNbrMaxIteration	415
#define	tRelaxationFactor	416
#define	tIterativeTimeReduction	417
#define	tDivisionCoefficient	418
#define	tChangeOfState	419
#define	tChangeOfCoordinates	420
#define	tChangeOfCoordinates2	421
#define	tSystemCommand	422
#define	tGenerateFMMGroups	423
#define	tGenerateOnly	424
#define	tGenerateOnlyJac	425
#define	tSolveJac_AdaptRelax	426
#define	tSaveSolutionExtendedMH	427
#define	tSaveSolutionMHtoTime	428
#define	tInit_MovingBand2D	429
#define	tMesh_MovingBand2D	430
#define	tGenerate_MH_Moving	431
#define	tGenerate_MH_Moving_Separate	432
#define	tAdd_MH_Moving	433
#define	tGenerateGroup	434
#define	tGenerateJacGroup	435
#define	tSaveMesh	436
#define	tDeformeMesh	437
#define	tDummyFrequency	438
#define	tPostProcessing	439
#define	tNameOfSystem	440
#define	tPostOperation	441
#define	tNameOfPostProcessing	442
#define	tUsingPost	443
#define	tAppend	444
#define	tPlot	445
#define	tPrint	446
#define	tPrintGroup	447
#define	tEcho	448
#define	tWrite	449
#define	tAdapt	450
#define	tOnGlobal	451
#define	tOnRegion	452
#define	tOnElementsOf	453
#define	tOnGrid	454
#define	tOnSection	455
#define	tOnPoint	456
#define	tOnLine	457
#define	tOnPlane	458
#define	tOnBox	459
#define	tWithArgument	460
#define	tFile	461
#define	tDepth	462
#define	tDimension	463
#define	tTimeStep	464
#define	tHarmonicToTime	465
#define	tFormat	466
#define	tHeader	467
#define	tFooter	468
#define	tSkin	469
#define	tSmoothing	470
#define	tTarget	471
#define	tSort	472
#define	tIso	473
#define	tNoNewLine	474
#define	tDecomposeInSimplex	475
#define	tChangeOfValues	476
#define	tFrequencyLegend	477
#define	tEvaluationPoints	478
#define	tStore	479
#define	tStr	480
#define	tDate	481
#define	tDEF	482
#define	tOR	483
#define	tAND	484
#define	tEQUAL	485
#define	tNOTEQUAL	486
#define	tAPPROXEQUAL	487
#define	tLESSOREQUAL	488
#define	tGREATEROREQUAL	489
#define	tLESSLESS	490
#define	tGREATERGREATER	491
#define	tCROSSPRODUCT	492
#define	UNARYPREC	493
#define	tSHOW	494

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.77 2005-07-07 21:44:08 geuzaine Exp $ */
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 *   Ruth Sabariego
 *   Johan Gyselinck
 */

/* Modifs a faire:

   Patrick: definir des structures avec valeurs par defaut,
   e.g. BasisFunction_D = ...  (dans un fichier a part).

   Christophe: introduire les listes au sein des expressions (comme
   c'est fait dans les expression-cst), afin de gerer les vecteurs,
   tenseurs, etc., directement, et pas par l'intermediaire d'une
   fonction de creation. */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <time.h>

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

#define MAX_OPEN_FILES  256 

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
int  fcmp_PostSave_Name            (const void *a, const void *b) ;

struct Value *  Add_PostSave(char * Name) ;

int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) ;
int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) ;
int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) ;
int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) ;
int  Add_Expression(struct Expression * Expression_P, char * Name, int Flag_Plus) ;
void Pro_DefineQuantityIndex(List_T * WholeQuantity_L,int DefineQuantityIndexEqu,
			     int * NbrQuantityIndex, int ** QuantityIndexTable,
			     int ** QuantityTraceGroupIndexTable) ;
void Pro_DefineQuantityIndex_1(List_T * WholeQuantity_L, int TraceGroupIndex) ;
void Help(char *topic) ;
int  Print_ListOfDouble(char *format, List_T *list, char *buffer) ;

char  *strsave(char *string) ;
void  yyerror(char *s) ;
void  vyyerror(char *fmt, ...) ;
int   yylex();
void  skip_until (char *skip, char *until);

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
static char  tmpstring[1024] ;

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


static int ImbricatedLoop = 0;
static fpos_t yyposImbricatedLoopsTab[10];
static int yylinenoImbricatedLoopsTab[10];
static double LoopControlVariablesTab[10][3];
static char *LoopControlVariablesNameTab[10];

time_t date_info;

char   buff[128];

FILE* File;
double _value;


#line 220 "GetDP.y"
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



#define	YYFINAL		2021
#define	YYFLAG		-32768
#define	YYNTBASE	263

#define YYTRANSLATE(x) ((unsigned)(x) <= 494 ? yytranslate[x] : 457)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   247,     2,   255,   256,   245,     2,     2,   250,
   251,   243,   241,   260,   242,   254,   244,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   235,
     2,   237,   229,   261,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   252,     2,   253,   249,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   258,     2,   259,   262,     2,     2,     2,     2,
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
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
   197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
   207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
   217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
   227,   228,   230,   231,   232,   233,   234,   236,   238,   239,
   240,   246,   248,   257
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    80,    84,    88,    92,    96,    99,   102,   106,
   110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
   147,   150,   151,   152,   156,   161,   167,   168,   175,   181,
   183,   189,   191,   193,   194,   195,   214,   215,   216,   224,
   227,   229,   232,   234,   236,   238,   240,   241,   245,   250,
   252,   254,   258,   259,   263,   268,   270,   274,   278,   284,
   286,   290,   291,   295,   302,   303,   305,   310,   311,   314,
   318,   319,   322,   328,   335,   343,   345,   347,   348,   352,
   357,   362,   363,   366,   367,   371,   373,   377,   378,   381,
   383,   384,   385,   393,   397,   401,   408,   412,   416,   420,
   424,   428,   432,   436,   440,   444,   448,   452,   456,   460,
   464,   467,   470,   473,   477,   479,   483,   486,   488,   491,
   492,   498,   499,   507,   508,   520,   530,   535,   540,   541,
   549,   556,   559,   562,   565,   568,   572,   575,   579,   583,
   590,   594,   597,   601,   603,   607,   608,   612,   619,   620,
   625,   626,   629,   633,   638,   639,   644,   645,   648,   652,
   656,   661,   662,   667,   668,   671,   675,   679,   684,   685,
   690,   691,   694,   698,   702,   707,   708,   713,   714,   717,
   721,   725,   729,   733,   737,   741,   742,   744,   747,   751,
   753,   754,   757,   761,   766,   770,   775,   781,   782,   787,
   790,   791,   794,   798,   802,   806,   810,   814,   818,   826,
   830,   834,   838,   842,   846,   854,   862,   870,   871,   874,
   878,   880,   882,   883,   886,   890,   895,   899,   904,   909,
   914,   919,   920,   925,   926,   929,   933,   937,   942,   947,
   955,   959,   963,   967,   971,   972,   973,   974,   993,   994,
   999,  1000,  1003,  1007,  1011,  1015,  1017,  1021,  1022,  1026,
  1028,  1032,  1033,  1037,  1038,  1043,  1044,  1047,  1051,  1055,
  1059,  1060,  1065,  1066,  1069,  1073,  1077,  1081,  1086,  1087,
  1090,  1094,  1096,  1098,  1099,  1102,  1106,  1111,  1115,  1120,
  1125,  1126,  1131,  1134,  1135,  1138,  1142,  1146,  1150,  1154,
  1158,  1159,  1165,  1166,  1174,  1178,  1179,  1185,  1189,  1193,
  1197,  1201,  1205,  1206,  1210,  1211,  1214,  1217,  1220,  1225,
  1230,  1235,  1240,  1241,  1244,  1248,  1252,  1256,  1257,  1260,
  1264,  1268,  1272,  1276,  1277,  1280,  1281,  1282,  1292,  1296,
  1300,  1304,  1307,  1311,  1317,  1318,  1321,  1325,  1326,  1327,
  1337,  1338,  1340,  1342,  1344,  1346,  1348,  1350,  1352,  1357,
  1361,  1362,  1365,  1369,  1371,  1373,  1374,  1377,  1381,  1386,
  1391,  1392,  1398,  1400,  1401,  1406,  1409,  1410,  1413,  1417,
  1421,  1425,  1429,  1433,  1437,  1441,  1445,  1447,  1450,  1454,
  1455,  1459,  1461,  1465,  1466,  1470,  1471,  1474,  1478,  1482,
  1487,  1492,  1497,  1502,  1508,  1514,  1517,  1525,  1537,  1545,
  1559,  1571,  1581,  1589,  1597,  1605,  1615,  1625,  1635,  1647,
  1659,  1677,  1691,  1707,  1719,  1733,  1734,  1742,  1743,  1751,
  1759,  1771,  1777,  1783,  1793,  1803,  1813,  1819,  1825,  1837,
  1847,  1862,  1877,  1885,  1898,  1909,  1917,  1925,  1933,  1935,
  1937,  1939,  1940,  1943,  1947,  1951,  1954,  1955,  1958,  1962,
  1966,  1970,  1974,  1979,  1980,  1983,  1987,  1991,  1995,  1999,
  2003,  2008,  2009,  2012,  2016,  2020,  2024,  2028,  2033,  2034,
  2037,  2041,  2045,  2049,  2053,  2057,  2062,  2067,  2072,  2073,
  2078,  2079,  2082,  2086,  2090,  2094,  2098,  2102,  2106,  2107,
  2110,  2114,  2116,  2117,  2120,  2124,  2129,  2134,  2138,  2143,
  2144,  2149,  2152,  2155,  2156,  2159,  2163,  2168,  2169,  2175,
  2181,  2182,  2185,  2186,  2193,  2197,  2198,  2203,  2207,  2211,
  2212,  2215,  2219,  2221,  2223,  2224,  2227,  2231,  2235,  2239,
  2243,  2248,  2249,  2258,  2259,  2260,  2264,  2272,  2280,  2293,
  2302,  2314,  2315,  2326,  2328,  2335,  2339,  2346,  2348,  2350,
  2352,  2354,  2355,  2359,  2361,  2364,  2367,  2380,  2383,  2399,
  2404,  2417,  2435,  2458,  2471,  2472,  2475,  2479,  2484,  2489,
  2493,  2496,  2499,  2503,  2507,  2511,  2515,  2519,  2523,  2527,
  2531,  2535,  2539,  2543,  2547,  2553,  2556,  2559,  2563,  2573,
  2577,  2587,  2593,  2597,  2598,  2601,  2608,  2617,  2626,  2637,
  2639,  2644,  2646,  2652,  2657,  2662,  2670,  2675,  2683,  2689,
  2697,  2703,  2712,  2713,  2717,  2723,  2729,  2731,  2733,  2735,
  2737,  2739,  2741,  2743,  2745,  2747,  2749,  2751,  2753,  2755,
  2757,  2759,  2761,  2763,  2765,  2767,  2769,  2771,  2773,  2777,
  2780,  2783,  2787,  2791,  2795,  2799,  2803,  2807,  2811,  2815,
  2819,  2823,  2827,  2831,  2835,  2839,  2844,  2849,  2854,  2859,
  2864,  2869,  2874,  2879,  2884,  2889,  2896,  2901,  2906,  2911,
  2916,  2921,  2926,  2933,  2940,  2947,  2953,  2956,  2958,  2960,
  2962,  2964,  2966,  2968,  2970,  2972,  2973,  2975,  2977,  2981,
  2983,  2985,  2989,  2993,  2997,  3003,  3007,  3012,  3017,  3024,
  3033,  3042,  3048,  3054,  3056,  3058,  3060,  3062,  3064,  3069,
  3076,  3078
};

static const short yyrhs[] = {    -1,
   264,   265,     0,     0,     0,   265,   266,   267,     0,    62,
   258,   270,   259,     0,    99,   258,   293,   259,     0,    68,
   258,   328,   259,     0,    81,   258,   313,   259,     0,    83,
   258,   319,   259,     0,    95,   258,   335,   259,     0,   111,
   258,   358,   259,     0,   132,   258,   385,   259,     0,   185,
   258,   415,   259,     0,   187,   258,   427,   259,     0,   431,
     0,   445,     0,    22,   455,     0,   268,     0,    19,     7,
     0,    19,   192,     7,     0,    19,    21,     7,     0,    19,
    36,     7,     0,    19,    20,     7,     0,    19,    19,     7,
     0,    19,     5,     7,     0,    20,     7,     0,    21,     7,
     0,    21,    62,     7,     0,    21,    99,     7,     0,    21,
    68,     7,     0,    21,    81,     7,     0,    21,    83,     7,
     0,    21,    95,     7,     0,    21,   111,     7,     0,    21,
   132,     7,     0,    21,   185,     7,     0,    21,   187,     7,
     0,    21,     3,     7,     0,     0,   269,   435,     0,     0,
     0,   270,   271,   272,     0,   454,   228,   277,     7,     0,
     5,   292,   228,   277,     7,     0,     0,     5,   290,   228,
   273,   277,     7,     0,    63,   252,   288,   253,     7,     0,
   274,     0,   454,   241,   228,   277,     7,     0,   445,     0,
   444,     0,     0,     0,   454,   252,   448,   253,   228,    66,
   275,   252,   255,   285,   276,   260,   255,   285,   260,   448,
   253,     7,     0,     0,     0,   281,   252,   278,   282,   279,
   283,   253,     0,   255,   285,     0,   277,     0,   454,   291,
     0,    69,     0,     5,     0,   285,     0,    64,     0,     0,
   289,   284,   285,     0,   289,    65,   454,   291,     0,     5,
     0,   287,     0,   258,   286,   259,     0,     0,   286,   289,
   287,     0,   286,   289,   242,   287,     0,     3,     0,   261,
   451,   261,     0,     3,     8,   448,     0,     3,     8,     3,
     8,   448,     0,   454,     0,     5,   258,   259,     0,     0,
   288,   289,     5,     0,   288,   289,     5,   258,   448,   259,
     0,     0,   260,     0,   258,   255,   448,   259,     0,     0,
   258,   259,     0,   258,     3,   259,     0,     0,   293,   294,
     0,    67,   252,   295,   253,     7,     0,     5,   252,   253,
   228,   296,     7,     0,     5,   252,   280,   253,   228,   296,
     7,     0,   445,     0,   444,     0,     0,   295,   289,     5,
     0,    23,   252,   448,   253,     0,    99,   252,     5,   253,
     0,     0,   297,   300,     0,     0,   258,   299,   259,     0,
   296,     0,   299,   260,   296,     0,     0,   301,   302,     0,
   305,     0,     0,     0,   302,   229,   303,   302,     8,   304,
   302,     0,   302,   243,   302,     0,   302,   246,   302,     0,
    58,   252,   302,   260,   302,   253,     0,   302,   244,   302,
     0,   302,   241,   302,     0,   302,   242,   302,     0,   302,
   245,   302,     0,   302,   249,   302,     0,   302,   235,   302,
     0,   302,   237,   302,     0,   302,   236,   302,     0,   302,
   238,   302,     0,   302,   232,   302,     0,   302,   233,   302,
     0,   302,   234,   302,     0,   302,   231,   302,     0,   302,
   230,   302,     0,   242,   302,     0,   241,   302,     0,   247,
   302,     0,   250,   302,   251,     0,   449,     0,   447,   310,
   312,     0,     5,   384,     0,   384,     0,   384,   310,     0,
     0,   122,   306,   252,   300,   253,     0,     0,   129,   307,
   252,   300,   260,     3,   253,     0,     0,    60,   252,     5,
   252,   308,   300,   253,   253,   258,   448,   259,     0,    61,
   252,     5,   253,   258,   448,   260,   448,   259,     0,    55,
   252,   384,   253,     0,    57,   252,   384,   253,     0,     0,
    56,   309,   252,   300,   260,   280,   253,     0,   235,     5,
   237,   252,   300,   253,     0,   256,     5,     0,   256,   210,
     0,   256,   143,     0,   256,     3,     0,   305,   255,     3,
     0,   255,     3,     0,   256,   256,   454,     0,   305,   257,
   448,     0,    59,   252,     5,   260,     3,   253,     0,   252,
   254,   253,     0,   252,   253,     0,   252,   311,   253,     0,
   302,     0,   311,   260,   302,     0,     0,   258,   451,   259,
     0,   258,    69,   252,   280,   253,   259,     0,     0,   313,
   258,   314,   259,     0,     0,   314,   315,     0,    96,     5,
     7,     0,    82,   258,   316,   259,     0,     0,   316,   258,
   317,   259,     0,     0,   317,   318,     0,    69,   280,     7,
     0,    69,    64,     7,     0,    81,     5,   312,     7,     0,
     0,   319,   258,   320,   259,     0,     0,   320,   321,     0,
    96,     5,     7,     0,    88,   296,     7,     0,    82,   258,
   322,   259,     0,     0,   322,   258,   323,   259,     0,     0,
   323,   324,     0,    86,     5,     7,     0,    87,     5,     7,
     0,    82,   258,   325,   259,     0,     0,   325,   258,   326,
   259,     0,     0,   326,   327,     0,    89,     5,     7,     0,
    90,   448,     7,     0,    91,   448,     7,     0,    92,   448,
     7,     0,    93,   448,     7,     0,    94,   448,     7,     0,
     0,   444,     0,   328,   329,     0,   258,   330,   259,     0,
   445,     0,     0,   330,   331,     0,    96,   454,     7,     0,
    96,   454,   290,     7,     0,    86,     5,     7,     0,    82,
   258,   332,   259,     0,    82,     5,   258,   332,   259,     0,
     0,   332,   258,   333,   259,     0,   332,   444,     0,     0,
   333,   334,     0,    86,     5,     7,     0,    69,   280,     7,
     0,    70,   280,     7,     0,    76,   296,     7,     0,    75,
   296,     7,     0,    80,     5,     7,     0,    77,   258,   449,
   289,   449,   259,     7,     0,    71,   280,     7,     0,    72,
   280,     7,     0,    99,   296,     7,     0,    74,   296,     7,
     0,    73,   296,     7,     0,    99,   252,   296,   260,   296,
   253,     7,     0,    74,   252,   296,   260,   296,   253,     7,
     0,    73,   252,   296,   260,   296,   253,     7,     0,     0,
   335,   336,     0,   258,   337,   259,     0,   445,     0,   444,
     0,     0,   337,   338,     0,    96,   454,     7,     0,    96,
     5,   290,     7,     0,    86,     5,     7,     0,    97,   258,
   339,   259,     0,   105,   258,   345,   259,     0,   107,   258,
   352,   259,     0,    68,   258,   355,   259,     0,     0,   339,
   258,   340,   259,     0,     0,   340,   341,     0,    96,     5,
     7,     0,    98,     5,     7,     0,    98,     5,   290,     7,
     0,    99,     5,   342,     7,     0,   100,   258,     5,   289,
     5,   259,     7,     0,   101,   298,     7,     0,   102,   298,
     7,     0,   103,   280,     7,     0,   104,   280,     7,     0,
     0,     0,     0,   258,   112,     5,     7,   111,     5,   290,
     7,   343,    62,   280,     7,   344,   132,     5,   291,     7,
   259,     0,     0,   345,   258,   346,   259,     0,     0,   346,
   347,     0,    96,     5,     7,     0,   106,   348,     7,     0,
    98,   350,     7,     0,     5,     0,   258,   349,   259,     0,
     0,   349,   289,     5,     0,     5,     0,   258,   351,   259,
     0,     0,   351,   289,     5,     0,     0,   352,   258,   353,
   259,     0,     0,   353,   354,     0,    96,   454,     7,     0,
    86,     5,     7,     0,    98,     5,     7,     0,     0,   355,
   258,   356,   259,     0,     0,   356,   357,     0,    98,     5,
     7,     0,   108,   281,     7,     0,   109,   284,     7,     0,
   110,   454,   291,     7,     0,     0,   358,   359,     0,   258,
   360,   259,     0,   445,     0,   444,     0,     0,   360,   361,
     0,    96,   454,     7,     0,    96,     5,   290,     7,     0,
    86,     5,     7,     0,   112,   258,   362,   259,     0,   116,
   258,   369,   259,     0,     0,   362,   258,   363,   259,     0,
   362,   444,     0,     0,   363,   364,     0,    96,   454,     7,
     0,    86,   107,     7,     0,    86,   117,     7,     0,    86,
     5,     7,     0,   184,   450,     7,     0,     0,   113,   454,
   365,   368,     7,     0,     0,   113,     5,   258,   259,   366,
   368,     7,     0,   114,     3,     7,     0,     0,   252,   367,
   300,   253,     7,     0,   130,   280,     7,     0,    83,     5,
     7,     0,    84,     5,     7,     0,    81,     5,     7,     0,
   115,     3,     7,     0,     0,   252,   454,   253,     0,     0,
   369,   370,     0,   369,   445,     0,   369,   444,     0,   117,
   258,   375,   259,     0,   118,   258,   375,   259,     0,   119,
   258,   379,   259,     0,   120,   258,   371,   259,     0,     0,
   371,   372,     0,    86,     5,     7,     0,   110,     5,     7,
     0,   258,   373,   259,     0,     0,   373,   374,     0,    78,
   384,     7,     0,    79,   384,     7,     0,   116,   384,     7,
     0,   130,   280,     7,     0,     0,   375,   376,     0,     0,
     0,   383,   252,   377,   300,   378,   260,   300,   253,     7,
     0,   130,   280,     7,     0,    81,     5,     7,     0,    83,
     5,     7,     0,   131,     7,     0,    84,     5,     7,     0,
    85,   252,     3,   253,     7,     0,     0,   379,   380,     0,
   130,   280,     7,     0,     0,     0,   383,   252,   381,   300,
   382,   260,   384,   253,     7,     0,     0,   122,     0,   123,
     0,   124,     0,   125,     0,   126,     0,   127,     0,   128,
     0,   258,     5,   454,   259,     0,   258,   454,   259,     0,
     0,   385,   386,     0,   258,   387,   259,     0,   445,     0,
   444,     0,     0,   387,   388,     0,    96,   454,     7,     0,
    96,     5,   290,     7,     0,   133,   258,   390,   259,     0,
     0,   140,   389,   258,   397,   259,     0,   444,     0,     0,
   390,   258,   391,   259,     0,   390,   444,     0,     0,   391,
   392,     0,    96,   454,     7,     0,    86,     5,     7,     0,
   134,   393,     7,     0,   135,   455,     7,     0,   138,   395,
     7,     0,   139,     5,     7,     0,   136,   450,     7,     0,
   137,   455,     7,     0,   444,     0,   454,   291,     0,   258,
   394,   259,     0,     0,   394,   289,   454,     0,   454,     0,
   258,   396,   259,     0,     0,   396,   289,   454,     0,     0,
   397,   398,     0,     5,   454,     7,     0,   142,   296,     7,
     0,   153,   258,   404,   259,     0,   157,   258,   406,   259,
     0,   160,   258,   408,   259,     0,   163,   258,   410,   259,
     0,     5,   252,   454,   253,     7,     0,   142,   252,   296,
   253,     7,     0,   152,     7,     0,    15,   252,   296,   253,
   258,   397,   259,     0,    15,   252,   296,   253,   258,   397,
   259,    16,   258,   397,   259,     0,   144,   252,     5,   260,
   296,   253,     7,     0,   169,   252,     5,   260,   296,   260,
   296,   260,   296,   260,   296,   253,     7,     0,   169,   252,
     5,   260,   296,   260,   296,   260,   296,   253,     7,     0,
   169,   252,     5,   260,   296,   260,   296,   253,     7,     0,
   170,   252,     5,   260,   450,   253,     7,     0,   171,   252,
     5,   260,   450,   253,     7,     0,   150,   252,     5,   260,
   296,   253,     7,     0,   151,   252,     5,   260,   280,   260,
     5,   253,     7,     0,   145,   252,     5,   260,     5,   260,
   450,   253,     7,     0,   146,   252,     5,   260,     5,   260,
   448,   253,     7,     0,   147,   252,     5,   260,   448,   260,
   450,   260,   448,   253,     7,     0,   148,   252,     5,   260,
   448,   260,   448,   260,   448,   253,     7,     0,   149,   252,
     5,   260,     5,   260,     5,   260,   448,   260,   450,   260,
   448,   260,   448,   253,     7,     0,   153,   252,   448,   260,
   448,   260,   296,   260,   296,   253,   258,   397,   259,     0,
   157,   252,   448,   260,   448,   260,   296,   260,   448,   260,
   448,   253,   258,   397,   259,     0,   160,   252,   448,   260,
   448,   260,   296,   253,   258,   397,   259,     0,   160,   252,
   448,   260,   448,   260,   296,   260,   448,   253,   258,   397,
   259,     0,     0,   192,   399,   252,   401,   402,   253,     7,
     0,     0,   195,   400,   252,   401,   402,   253,     7,     0,
   166,   252,   280,   260,   296,   253,     7,     0,   166,   252,
   280,   260,   296,   260,   448,   260,   296,   253,     7,     0,
   187,   252,   454,   253,     7,     0,   168,   252,   455,   253,
     7,     0,   172,   252,     5,   260,   450,   260,   448,   253,
     7,     0,   173,   252,     5,   260,   448,   260,   455,   253,
     7,     0,   174,   252,     5,   260,   450,   260,   455,   253,
     7,     0,   175,   258,   454,   259,     7,     0,   176,   258,
   454,   259,     7,     0,   182,   258,   454,   260,   280,   260,
   455,   260,   296,   259,     7,     0,   182,   258,   454,   260,
   280,   260,   455,   259,     7,     0,   177,   252,     5,   260,
     5,   260,   448,   260,   448,   253,   258,   397,   259,     7,
     0,   178,   252,     5,   260,     5,   260,   448,   260,   448,
   253,   258,   397,   259,     7,     0,   179,   252,     5,   260,
   448,   253,     7,     0,   183,   258,     5,   260,     5,   260,
   135,   455,   260,     4,   259,     7,     0,   183,   258,     5,
   260,     5,   260,   135,   455,   259,     7,     0,   183,   258,
     5,   260,     5,   259,     7,     0,   180,   252,     5,   260,
     5,   253,     7,     0,   181,   252,     5,   260,     5,   253,
     7,     0,   444,     0,   298,     0,     5,     0,     0,   402,
   403,     0,   260,   207,   455,     0,   260,   210,   450,     0,
   260,   450,     0,     0,   404,   405,     0,   154,   448,     7,
     0,   155,   448,     7,     0,   143,   296,     7,     0,   156,
   296,     7,     0,   140,   258,   397,   259,     0,     0,   406,
   407,     0,   154,   448,     7,     0,   155,   448,     7,     0,
   143,   296,     7,     0,   158,   448,     7,     0,   159,   448,
     7,     0,   140,   258,   397,   259,     0,     0,   408,   409,
     0,   161,   448,     7,     0,    88,   448,     7,     0,   162,
   296,     7,     0,    18,   448,     7,     0,   140,   258,   397,
   259,     0,     0,   410,   411,     0,   161,   448,     7,     0,
   164,   448,     7,     0,    88,   448,     7,     0,    18,   448,
     7,     0,   133,     5,     7,     0,   165,   258,   412,   259,
     0,   140,   258,   397,   259,     0,   141,   258,   397,   259,
     0,     0,   412,   258,   413,   259,     0,     0,   413,   414,
     0,    86,     5,     7,     0,   112,     5,     7,     0,   130,
   280,     7,     0,    88,   448,     7,     0,    99,   296,     7,
     0,    18,     5,     7,     0,     0,   415,   416,     0,   258,
   417,   259,     0,   445,     0,     0,   417,   418,     0,    96,
   454,     7,     0,    96,     5,   290,     7,     0,   134,   454,
   291,     7,     0,   186,     5,     7,     0,   112,   258,   419,
   259,     0,     0,   419,   258,   420,   259,     0,   419,   445,
     0,   419,   444,     0,     0,   420,   421,     0,    96,   454,
     7,     0,    75,   258,   422,   259,     0,     0,   422,   117,
   258,   423,   259,     0,   422,     5,   258,   423,   259,     0,
     0,   423,   424,     0,     0,   383,   252,   425,   300,   253,
     7,     0,    86,     5,     7,     0,     0,   130,   426,   280,
     7,     0,    81,     5,     7,     0,    83,     5,     7,     0,
     0,   427,   428,     0,   258,   429,   259,     0,   445,     0,
   444,     0,     0,   429,   430,     0,    96,   454,     7,     0,
   188,     5,     7,     0,   212,     5,     7,     0,   190,   455,
     7,     0,   140,   258,   433,   259,     0,     0,   187,   454,
   189,   454,   432,   258,   433,   259,     0,     0,     0,   433,
   434,   435,     0,   191,   252,   437,   440,   441,   253,     7,
     0,   192,   252,   437,   440,   441,   253,     7,     0,   192,
   252,   437,   440,   441,   253,   242,   237,   256,   256,   454,
     7,     0,   192,   252,     6,   260,   448,   441,   253,     7,
     0,   192,   252,     6,   260,   226,   252,   455,   253,   441,
   253,     7,     0,     0,   193,   252,   280,   436,   260,   130,
   280,   441,   253,     7,     0,   444,     0,   194,   252,     6,
   441,   253,     7,     0,   454,   439,   260,     0,   454,   439,
   438,     5,   439,   260,     0,   243,     0,   244,     0,   241,
     0,   242,     0,     0,   252,   280,   253,     0,   197,     0,
   198,   280,     0,   199,   280,     0,   201,   258,   258,   451,
   259,   258,   451,   259,   258,   451,   259,   259,     0,   200,
   280,     0,   200,   258,   296,   260,   296,   260,   296,   259,
   258,   450,   260,   450,   260,   450,   259,     0,   202,   258,
   451,   259,     0,   203,   258,   258,   451,   259,   258,   451,
   259,   259,   258,   448,   259,     0,   204,   258,   258,   451,
   259,   258,   451,   259,   258,   451,   259,   259,   258,   448,
   260,   448,   259,     0,   205,   258,   258,   451,   259,   258,
   451,   259,   258,   451,   259,   258,   451,   259,   259,   258,
   448,   260,   448,   260,   448,   259,     0,   198,   280,   206,
     5,   258,   448,   260,   448,   259,   258,   448,   259,     0,
     0,   441,   442,     0,   260,   207,   455,     0,   260,   207,
   237,   455,     0,   260,   207,   240,   455,     0,   260,   208,
   448,     0,   260,   215,     0,   260,   216,     0,   260,   211,
   448,     0,   260,   212,     5,     0,   260,   213,   443,     0,
   260,   214,   443,     0,   260,   212,   443,     0,   260,   209,
   448,     0,   260,   210,   450,     0,   260,   196,     5,     0,
   260,   218,     5,     0,   260,   217,   448,     0,   260,    75,
   450,     0,   260,   219,   448,     0,   260,   219,   258,   451,
   259,     0,   260,   220,     0,   260,   221,     0,   260,   136,
   450,     0,   260,   166,   258,   296,   260,   296,   260,   296,
   259,     0,   260,   222,   298,     0,   260,   223,   258,   448,
   260,   448,   260,   448,   259,     0,   260,   224,   258,   451,
   259,     0,   260,   225,     3,     0,     0,   443,     6,     0,
    13,   250,   448,     8,   448,   251,     0,    13,   250,   448,
     8,   448,     8,   448,   251,     0,    13,     5,   130,   258,
   448,     8,   448,   259,     0,    13,     5,   130,   258,   448,
     8,   448,     8,   448,   259,     0,    14,     0,    15,   250,
   448,   251,     0,    17,     0,    29,   252,   446,   253,     7,
     0,   454,   228,   450,     7,     0,   454,   228,     6,     7,
     0,   454,   228,   226,   252,   455,   253,     7,     0,   454,
   228,   456,     7,     0,   454,   228,    28,   252,   455,   253,
     7,     0,    11,   250,     6,   251,     7,     0,    11,   250,
     6,   260,   451,   251,     7,     0,    12,   250,   454,   251,
     7,     0,    12,   250,   454,   251,   252,   448,   253,     7,
     0,     0,   446,   289,     5,     0,   446,   289,     5,   228,
   448,     0,   446,   289,     5,   228,     6,     0,    35,     0,
    36,     0,    37,     0,    38,     0,    39,     0,    40,     0,
    41,     0,    42,     0,    43,     0,    44,     0,    45,     0,
    46,     0,    47,     0,    48,     0,    49,     0,    50,     0,
    51,     0,    52,     0,    53,     0,    54,     0,   454,     0,
   449,     0,   250,   448,   251,     0,   242,   448,     0,   247,
   448,     0,   448,   242,   448,     0,   448,   241,   448,     0,
   448,   243,   448,     0,   448,   244,   448,     0,   448,   245,
   448,     0,   448,   249,   448,     0,   448,   235,   448,     0,
   448,   237,   448,     0,   448,   236,   448,     0,   448,   238,
   448,     0,   448,   232,   448,     0,   448,   233,   448,     0,
   448,   231,   448,     0,   448,   230,   448,     0,    35,   252,
   448,   253,     0,    36,   252,   448,   253,     0,    37,   252,
   448,   253,     0,    38,   252,   448,   253,     0,    39,   252,
   448,   253,     0,    40,   252,   448,   253,     0,    41,   252,
   448,   253,     0,    42,   252,   448,   253,     0,    43,   252,
   448,   253,     0,    44,   252,   448,   253,     0,    45,   252,
   448,   260,   448,   253,     0,    46,   252,   448,   253,     0,
    47,   252,   448,   253,     0,    48,   252,   448,   253,     0,
    49,   252,   448,   253,     0,    50,   252,   448,   253,     0,
    51,   252,   448,   253,     0,    52,   252,   448,   260,   448,
   253,     0,    53,   252,   448,   260,   448,   253,     0,    54,
   252,   448,   260,   448,   253,     0,   448,   229,   448,     8,
   448,     0,   448,   255,     0,     4,     0,     3,     0,    30,
     0,    31,     0,    32,     0,    33,     0,    34,     0,   454,
     0,     0,   448,     0,   452,     0,   258,   451,   259,     0,
   448,     0,   452,     0,   451,   260,   448,     0,   451,   260,
   452,     0,   448,     8,   448,     0,   448,     8,   448,     8,
   448,     0,     5,   258,   259,     0,     5,   258,   451,   259,
     0,    24,   252,     5,   253,     0,    25,   252,     5,   260,
     5,   253,     0,    26,   252,   448,   260,   448,   260,   448,
   253,     0,    27,   252,   448,   260,   448,   260,   448,   253,
     0,     5,   262,   258,   448,   259,     0,   453,   262,   258,
   448,   259,     0,     5,     0,   453,     0,     6,     0,     5,
     0,   456,     0,    10,   250,   455,   251,     0,    10,   250,
   455,   260,   451,   251,     0,   227,     0,     9,   252,   455,
   260,   455,   253,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   372,   407,   446,   449,   452,   455,   458,   459,   460,   461,
   462,   463,   464,   465,   466,   468,   470,   472,   477,   486,
   489,   491,   493,   495,   497,   499,   501,   503,   505,   507,
   509,   511,   513,   515,   517,   519,   521,   523,   525,   528,
   536,   550,   553,   554,   557,   561,   566,   568,   571,   573,
   575,   578,   580,   583,   595,   602,   610,   618,   629,   638,
   647,   654,   689,   694,   705,   708,   722,   727,   730,   779,
   792,   818,   823,   838,   856,   877,   883,   895,   904,   918,
   952,   972,   976,   986,  1003,  1003,  1006,  1012,  1015,  1018,
  1031,  1034,  1037,  1041,  1061,  1105,  1107,  1111,  1114,  1131,
  1140,  1147,  1150,  1155,  1161,  1165,  1170,  1175,  1181,  1188,
  1192,  1205,  1220,  1234,  1240,  1246,  1252,  1258,  1264,  1270,
  1276,  1282,  1288,  1294,  1300,  1306,  1312,  1318,  1324,  1330,
  1337,  1343,  1345,  1354,  1358,  1364,  1438,  1472,  1481,  1493,
  1495,  1507,  1509,  1521,  1523,  1537,  1549,  1555,  1561,  1563,
  1592,  1618,  1631,  1637,  1644,  1650,  1657,  1664,  1672,  1679,
  1695,  1698,  1699,  1702,  1705,  1708,  1713,  1716,  1730,  1737,
  1742,  1747,  1751,  1758,  1763,  1768,  1773,  1779,  1783,  1788,
  1791,  1827,  1835,  1840,  1849,  1853,  1862,  1865,  1870,  1875,
  1880,  1888,  1892,  1904,  1914,  1919,  1924,  1929,  1941,  1945,
  1995,  1998,  2001,  2004,  2007,  2016,  2023,  2024,  2027,  2049,
  2052,  2062,  2066,  2074,  2081,  2090,  2093,  2115,  2132,  2152,
  2159,  2169,  2173,  2185,  2210,  2235,  2240,  2248,  2256,  2266,
  2283,  2291,  2298,  2305,  2314,  2323,  2332,  2351,  2359,  2362,
  2385,  2387,  2391,  2400,  2404,  2412,  2419,  2428,  2431,  2434,
  2437,  2442,  2460,  2507,  2524,  2528,  2533,  2538,  2543,  2557,
  2577,  2582,  2587,  2611,  2666,  2670,  2674,  2683,  2747,  2753,
  2758,  2763,  2767,  2774,  2777,  2782,  2800,  2805,  2809,  2826,
  2840,  2845,  2849,  2862,  2868,  2875,  2882,  2886,  2893,  2903,
  2914,  2931,  3003,  3015,  3019,  3054,  3057,  3060,  3104,  3111,
  3114,  3136,  3138,  3142,  3150,  3154,  3162,  3169,  3179,  3181,
  3186,  3201,  3215,  3219,  3238,  3242,  3247,  3251,  3254,  3265,
  3271,  3284,  3311,  3352,  3378,  3383,  3389,  3700,  3705,  3714,
  3723,  3732,  3737,  3740,  3778,  3795,  3819,  3824,  3831,  3836,
  3839,  3842,  3851,  3859,  3862,  3874,  3884,  3896,  3905,  3908,
  3912,  3914,  3916,  3922,  3943,  3947,  3958,  4036,  4082,  4106,
  4115,  4124,  4129,  4138,  4147,  4164,  4168,  4202,  4211,  4265,
  4281,  4284,  4285,  4286,  4287,  4288,  4289,  4290,  4294,  4317,
  4339,  4346,  4349,  4370,  4372,  4376,  4384,  4388,  4397,  4404,
  4407,  4409,  4412,  4416,  4432,  4447,  4455,  4471,  4475,  4480,
  4489,  4492,  4497,  4502,  4507,  4512,  4516,  4520,  4559,  4564,
  4569,  4579,  4591,  4595,  4600,  4611,  4620,  4629,  4655,  4662,
  4668,  4674,  4680,  4688,  4710,  4717,  4723,  4734,  4745,  4758,
  4773,  4788,  4803,  4823,  4844,  4856,  4876,  4893,  4912,  4933,
  4947,  4981,  4994,  5008,  5021,  5034,  5041,  5043,  5050,  5052,
  5063,  5075,  5085,  5093,  5106,  5119,  5133,  5143,  5153,  5167,
  5181,  5199,  5218,  5229,  5244,  5259,  5274,  5289,  5304,  5314,
  5320,  5330,  5336,  5339,  5343,  5353,  5366,  5378,  5382,  5388,
  5392,  5396,  5401,  5410,  5423,  5427,  5433,  5437,  5441,  5445,
  5450,  5459,  5471,  5474,  5480,  5484,  5488,  5492,  5501,  5516,
  5519,  5525,  5529,  5533,  5538,  5548,  5554,  5560,  5569,  5573,
  5577,  5591,  5594,  5606,  5635,  5638,  5641,  5649,  5665,  5673,
  5676,  5697,  5700,  5711,  5714,  5722,  5730,  5776,  5781,  5786,
  5790,  5793,  5795,  5800,  5807,  5811,  5815,  5820,  5826,  5832,
  5845,  5856,  5859,  5867,  5895,  5906,  5906,  5912,  5921,  5937,
  5945,  5948,  5953,  5955,  5958,  5967,  5970,  5978,  5990,  6001,
  6006,  6011,  6029,  6038,  6042,  6047,  6057,  6063,  6069,  6075,
  6082,  6090,  6096,  6101,  6106,  6113,  6127,  6149,  6152,  6153,
  6154,  6157,  6161,  6165,  6173,  6180,  6187,  6211,  6218,  6230,
  6243,  6263,  6289,  6322,  6342,  6369,  6372,  6380,  6387,  6394,
  6398,  6402,  6406,  6410,  6420,  6425,  6430,  6450,  6457,  6466,
  6475,  6484,  6491,  6499,  6503,  6512,  6516,  6520,  6528,  6534,
  6539,  6546,  6556,  6565,  6572,  6620,  6632,  6642,  6656,  6670,
  6696,  6700,  6712,  6716,  6731,  6737,  6743,  6749,  6760,  6765,
  6777,  6787,  6803,  6806,  6812,  6818,  6829,  6831,  6832,  6833,
  6834,  6835,  6836,  6837,  6838,  6839,  6840,  6841,  6842,  6843,
  6844,  6845,  6846,  6847,  6848,  6849,  6850,  6853,  6855,  6856,
  6857,  6858,  6859,  6860,  6861,  6862,  6863,  6864,  6865,  6866,
  6867,  6868,  6869,  6870,  6871,  6872,  6873,  6874,  6875,  6876,
  6877,  6878,  6879,  6880,  6881,  6882,  6883,  6884,  6885,  6886,
  6887,  6888,  6889,  6890,  6891,  6892,  6893,  6896,  6899,  6900,
  6901,  6902,  6903,  6904,  6922,  6938,  6943,  6949,  6952,  6957,
  6965,  6968,  6971,  6981,  6989,  7000,  7016,  7038,  7053,  7091,
  7099,  7109,  7119,  7129,  7133,  7138,  7143,  7158,  7163,  7168,
  7187,  7204
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tStrCat","tSprintf","tPrintf","tRead","tFor",
"tEndFor","tIf","tElse","tEndIf","tFlag","tHelp","tCpu","tCheck","tInclude",
"tConstant","tList","tListAlt","tLinSpace","tLogSpace","tListFromFile","tDefineConstant",
"tPi","t0D","t1D","t2D","t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin",
"tCos","tAcos","tTan","tAtan","tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor",
"tCeil","tFmod","tModulo","tHypot","tSolidAngle","tTrace","tOrder","tCrossProduct",
"tDofValue","tMHTransform","tMHJacNL","tGroup","tDefineGroup","tAll","tInSupport",
"tMovingBand2D","tDefineFunction","tConstraint","tRegion","tSubRegion","tRegionRef",
"tSubRegionRef","tFilter","tCoefficient","tValue","tTimeFunction","tBranch",
"tNode","tLoop","tNameOfResolution","tJacobian","tCase","tIntegration","tFMMIntegration",
"tMatrix","tType","tSubType","tCriterion","tGeoElement","tNumberOfPoints","tMaxNumberOfPoints",
"tNumberOfDivisions","tMaxNumberOfDivisions","tStoppingCriterion","tFunctionSpace",
"tName","tBasisFunction","tNameOfCoef","tFunction","tdFunction","tSubFunction",
"tSubdFunction","tSupport","tEntity","tSubSpace","tNameOfBasisFunction","tGlobalQuantity",
"tEntityType","tEntitySubType","tNameOfConstraint","tFormulation","tQuantity",
"tNameOfSpace","tIndexOfSystem","tSymmetry","tEquation","tGalerkin","tdeRham",
"tGlobalTerm","tGlobalEquation","tDiscreteGeometry","tDt","tDtDof","tDtDt","tDtDtDof",
"tJacNL","tNeverDt","tDtNL","tAtAnteriorTimeStep","tIn","tFull_Matrix","tResolution",
"tDefineSystem","tNameOfFormulation","tNameOfMesh","tFrequency","tSolver","tOriginSystem",
"tDestinationSystem","tOperation","tOperationEnd","tSetTime","tDTime","tSetFrequency",
"tFourierTransform","tFourierTransformJ","tLanczos","tEigenSolve","tPerturbation",
"tUpdate","tUpdateConstraint","tBreak","tTimeLoopTheta","tTime0","tTimeMax",
"tTheta","tTimeLoopNewmark","tBeta","tGamma","tIterativeLoop","tNbrMaxIteration",
"tRelaxationFactor","tIterativeTimeReduction","tDivisionCoefficient","tChangeOfState",
"tChangeOfCoordinates","tChangeOfCoordinates2","tSystemCommand","tGenerateFMMGroups",
"tGenerateOnly","tGenerateOnlyJac","tSolveJac_AdaptRelax","tSaveSolutionExtendedMH",
"tSaveSolutionMHtoTime","tInit_MovingBand2D","tMesh_MovingBand2D","tGenerate_MH_Moving",
"tGenerate_MH_Moving_Separate","tAdd_MH_Moving","tGenerateGroup","tGenerateJacGroup",
"tSaveMesh","tDeformeMesh","tDummyFrequency","tPostProcessing","tNameOfSystem",
"tPostOperation","tNameOfPostProcessing","tUsingPost","tAppend","tPlot","tPrint",
"tPrintGroup","tEcho","tWrite","tAdapt","tOnGlobal","tOnRegion","tOnElementsOf",
"tOnGrid","tOnSection","tOnPoint","tOnLine","tOnPlane","tOnBox","tWithArgument",
"tFile","tDepth","tDimension","tTimeStep","tHarmonicToTime","tFormat","tHeader",
"tFooter","tSkin","tSmoothing","tTarget","tSort","tIso","tNoNewLine","tDecomposeInSimplex",
"tChangeOfValues","tFrequencyLegend","tEvaluationPoints","tStore","tStr","tDate",
"tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL","'<'","tLESSOREQUAL",
"'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'","'*'","'/'",
"'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'","'['","']'","'.'",
"'#'","'$'","tSHOW","'{'","'}'","','","'@'","'~'","Stats","@1","ProblemDefinitions",
"@2","ProblemDefinition","Interactive","@3","Groups","@4","Group","@5","MovingBand2DGroup",
"@6","@7","ReducedGroupRHS","@8","@9","GroupRHS","FunctionForGroup","ListOfRegionOrAll",
"SuppListOfRegion","SuppListTypeForGroup","ListOfRegion","RecursiveListOfRegion",
"IRegion","DefineGroups","Comma","DefineDimension","MultipleIndex","Index","Functions",
"Function","DefineFunctions","Expression","@10","ListOfExpression","RecursiveListOfExpression",
"WholeQuantityExpression","@11","WholeQuantity","@12","@13","WholeQuantity_Single",
"@14","@15","@16","@17","ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction",
"JacobianMethods","JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase",
"JacobianCaseTerm","IntegrationMethods","IntegrationMethod","IntegrationMethodTerm",
"IntegrationCases","IntegrationCase","IntegrationCaseTerm","QuadratureCases",
"QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint","Constraint",
"ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm","FunctionSpaces",
"BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction",
"BasisFunctionTerm","OptionalParametersForBasisFunction","@18","@19","SubSpaces",
"SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
"ListOfBasisFunctionCoef","RecursiveListOfBasisFunctionCoef","GlobalQuantities",
"GlobalQuantity","GlobalQuantityTerm","ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm",
"Formulations","BracedFormulation","Formulation","FormulationTerm","DefineQuantities",
"DefineQuantity","DefineQuantityTerm","@20","@21","@22","IndexInFunctionSpace",
"Equations","EquationTerm","GlobalEquation","GlobalEquationTerm","GlobalEquationTermTerm",
"GlobalEquationTermTermTerm","LocalTerm","LocalTermTerm","@23","@24","GlobalTerm",
"GlobalTermTerm","@25","@26","TermOperator","Quantity_Def","Resolutions","BracedResolution",
"Resolution","ResolutionTerm","@27","DefineSystems","DefineSystem","DefineSystemTerm",
"ListOfFormulation","RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem",
"Operation","OperationTerm","@28","@29","PrintOperation","PrintOperationOptions",
"PrintOperationOption","TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark",
"TimeLoopNewmarkTerm","IterativeLoop","IterativeLoopTerm","IterativeTimeReduction",
"IterativeTimeReductionTerm","ChangeOfStates","ChangeOfState","ChangeOfStateTerm",
"PostProcessings","BracedPostProcessing","PostProcessing","PostProcessingTerm",
"PostQuantities","PostQuantity","PostQuantityTerm","SubPostQuantities","SubPostQuantity",
"SubPostQuantityTerm","@30","@31","PostOperations","BracedPostOperation","PostOperation",
"PostOperationTerm","SeparatePostOperation","@32","PostSubOperations","@33",
"PostSubOperation","@34","PostQuantitiesToPrint","Combination","PostQuantitySupport",
"PrintSubType","PrintOptions","PrintOption","ParsedStrings","Loop","Affectation",
"DefineConstants","NameForFunction","FExpr","OneFExpr","ListOfFExpr","RecursiveListOfFExpr",
"MultiFExpr","StringIndex","String__Index","CharExpr","StrCat", NULL
};
#endif

static const short yyr1[] = {     0,
   264,   263,   265,   266,   265,   267,   267,   267,   267,   267,
   267,   267,   267,   267,   267,   267,   267,   267,   267,   268,
   268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
   268,   268,   268,   268,   268,   268,   268,   268,   268,   269,
   268,   270,   271,   270,   272,   272,   273,   272,   272,   272,
   272,   272,   272,   275,   276,   274,   278,   279,   277,   277,
   280,   280,   281,   281,   282,   282,   283,   283,   283,   284,
   285,   285,   286,   286,   286,   287,   287,   287,   287,   287,
   287,   288,   288,   288,   289,   289,   290,   291,   291,   292,
   293,   293,   294,   294,   294,   294,   294,   295,   295,   296,
   296,   297,   296,   298,   298,   299,   299,   301,   300,   302,
   303,   304,   302,   302,   302,   302,   302,   302,   302,   302,
   302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
   302,   302,   302,   305,   305,   305,   305,   305,   305,   306,
   305,   307,   305,   308,   305,   305,   305,   305,   309,   305,
   305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
   310,   310,   310,   311,   311,   312,   312,   312,   313,   313,
   314,   314,   315,   315,   316,   316,   317,   317,   318,   318,
   318,   319,   319,   320,   320,   321,   321,   321,   322,   322,
   323,   323,   324,   324,   324,   325,   325,   326,   326,   327,
   327,   327,   327,   327,   327,   328,   328,   328,   329,   329,
   330,   330,   331,   331,   331,   331,   331,   332,   332,   332,
   333,   333,   334,   334,   334,   334,   334,   334,   334,   334,
   334,   334,   334,   334,   334,   334,   334,   335,   335,   336,
   336,   336,   337,   337,   338,   338,   338,   338,   338,   338,
   338,   339,   339,   340,   340,   341,   341,   341,   341,   341,
   341,   341,   341,   341,   342,   343,   344,   342,   345,   345,
   346,   346,   347,   347,   347,   348,   348,   349,   349,   350,
   350,   351,   351,   352,   352,   353,   353,   354,   354,   354,
   355,   355,   356,   356,   357,   357,   357,   357,   358,   358,
   359,   359,   359,   360,   360,   361,   361,   361,   361,   361,
   362,   362,   362,   363,   363,   364,   364,   364,   364,   364,
   365,   364,   366,   364,   364,   367,   364,   364,   364,   364,
   364,   364,   368,   368,   369,   369,   369,   369,   370,   370,
   370,   370,   371,   371,   372,   372,   372,   373,   373,   374,
   374,   374,   374,   375,   375,   377,   378,   376,   376,   376,
   376,   376,   376,   376,   379,   379,   380,   381,   382,   380,
   383,   383,   383,   383,   383,   383,   383,   383,   384,   384,
   385,   385,   386,   386,   386,   387,   387,   388,   388,   388,
   389,   388,   388,   390,   390,   390,   391,   391,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   393,   393,   394,
   394,   395,   395,   396,   396,   397,   397,   398,   398,   398,
   398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
   398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
   398,   398,   398,   398,   398,   399,   398,   400,   398,   398,
   398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
   398,   398,   398,   398,   398,   398,   398,   398,   398,   401,
   401,   402,   402,   403,   403,   403,   404,   404,   405,   405,
   405,   405,   405,   406,   406,   407,   407,   407,   407,   407,
   407,   408,   408,   409,   409,   409,   409,   409,   410,   410,
   411,   411,   411,   411,   411,   411,   411,   411,   412,   412,
   413,   413,   414,   414,   414,   414,   414,   414,   415,   415,
   416,   416,   417,   417,   418,   418,   418,   418,   418,   419,
   419,   419,   419,   420,   420,   421,   421,   422,   422,   422,
   423,   423,   425,   424,   424,   426,   424,   424,   424,   427,
   427,   428,   428,   428,   429,   429,   430,   430,   430,   430,
   430,   432,   431,   433,   434,   433,   435,   435,   435,   435,
   435,   436,   435,   435,   435,   437,   437,   438,   438,   438,
   438,   439,   439,   440,   440,   440,   440,   440,   440,   440,
   440,   440,   440,   440,   441,   441,   442,   442,   442,   442,
   442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   443,   443,   444,   444,   444,   444,   444,
   444,   444,   445,   445,   445,   445,   445,   445,   445,   445,
   445,   445,   446,   446,   446,   446,   447,   447,   447,   447,
   447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
   447,   447,   447,   447,   447,   447,   447,   448,   448,   448,
   448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
   448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
   448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
   448,   448,   448,   448,   448,   448,   448,   449,   449,   449,
   449,   449,   449,   449,   449,   450,   450,   450,   450,   451,
   451,   451,   451,   452,   452,   452,   452,   452,   452,   452,
   452,   453,   453,   454,   454,   455,   455,   455,   455,   455,
   455,   456
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     0,     3,     4,     5,     0,     6,     5,     1,
     5,     1,     1,     0,     0,    18,     0,     0,     7,     2,
     1,     2,     1,     1,     1,     1,     0,     3,     4,     1,
     1,     3,     0,     3,     4,     1,     3,     3,     5,     1,
     3,     0,     3,     6,     0,     1,     4,     0,     2,     3,
     0,     2,     5,     6,     7,     1,     1,     0,     3,     4,
     4,     0,     2,     0,     3,     1,     3,     0,     2,     1,
     0,     0,     7,     3,     3,     6,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     2,     2,     2,     3,     1,     3,     2,     1,     2,     0,
     5,     0,     7,     0,    11,     9,     4,     4,     0,     7,
     6,     2,     2,     2,     2,     3,     2,     3,     3,     6,
     3,     2,     3,     1,     3,     0,     3,     6,     0,     4,
     0,     2,     3,     4,     0,     4,     0,     2,     3,     3,
     4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
     3,     3,     3,     3,     3,     0,     1,     2,     3,     1,
     0,     2,     3,     4,     3,     4,     5,     0,     4,     2,
     0,     2,     3,     3,     3,     3,     3,     3,     7,     3,
     3,     3,     3,     3,     7,     7,     7,     0,     2,     3,
     1,     1,     0,     2,     3,     4,     3,     4,     4,     4,
     4,     0,     4,     0,     2,     3,     3,     4,     4,     7,
     3,     3,     3,     3,     0,     0,     0,    18,     0,     4,
     0,     2,     3,     3,     3,     1,     3,     0,     3,     1,
     3,     0,     3,     0,     4,     0,     2,     3,     3,     3,
     0,     4,     0,     2,     3,     3,     3,     4,     0,     2,
     3,     1,     1,     0,     2,     3,     4,     3,     4,     4,
     0,     4,     2,     0,     2,     3,     3,     3,     3,     3,
     0,     5,     0,     7,     3,     0,     5,     3,     3,     3,
     3,     3,     0,     3,     0,     2,     2,     2,     4,     4,
     4,     4,     0,     2,     3,     3,     3,     0,     2,     3,
     3,     3,     3,     0,     2,     0,     0,     9,     3,     3,
     3,     2,     3,     5,     0,     2,     3,     0,     0,     9,
     0,     1,     1,     1,     1,     1,     1,     1,     4,     3,
     0,     2,     3,     1,     1,     0,     2,     3,     4,     4,
     0,     5,     1,     0,     4,     2,     0,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     1,     2,     3,     0,
     3,     1,     3,     0,     3,     0,     2,     3,     3,     4,
     4,     4,     4,     5,     5,     2,     7,    11,     7,    13,
    11,     9,     7,     7,     7,     9,     9,     9,    11,    11,
    17,    13,    15,    11,    13,     0,     7,     0,     7,     7,
    11,     5,     5,     9,     9,     9,     5,     5,    11,     9,
    14,    14,     7,    12,    10,     7,     7,     7,     1,     1,
     1,     0,     2,     3,     3,     2,     0,     2,     3,     3,
     3,     3,     4,     0,     2,     3,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     4,     0,     2,
     3,     3,     3,     3,     3,     4,     4,     4,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     4,     4,     3,     4,     0,
     4,     2,     2,     0,     2,     3,     4,     0,     5,     5,
     0,     2,     0,     6,     3,     0,     4,     3,     3,     0,
     2,     3,     1,     1,     0,     2,     3,     3,     3,     3,
     4,     0,     8,     0,     0,     3,     7,     7,    12,     8,
    11,     0,    10,     1,     6,     3,     6,     1,     1,     1,
     1,     0,     3,     1,     2,     2,    12,     2,    15,     4,
    12,    17,    22,    12,     0,     2,     3,     4,     4,     3,
     2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     5,     2,     2,     3,     9,     3,
     9,     5,     3,     0,     2,     6,     8,     8,    10,     1,
     4,     1,     5,     4,     4,     7,     4,     7,     5,     7,
     5,     8,     0,     3,     5,     5,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     6,     4,     4,     4,     4,
     4,     4,     6,     6,     6,     5,     2,     1,     1,     1,
     1,     1,     1,     1,     1,     0,     1,     1,     3,     1,
     1,     3,     3,     3,     5,     3,     4,     4,     6,     8,
     8,     5,     5,     1,     1,     1,     1,     1,     4,     6,
     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   734,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   735,     0,     0,     0,
     0,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   737,   736,     0,     0,   741,    18,   738,   643,    42,
   206,   169,   182,   238,    91,   299,   381,   519,   550,     0,
     0,   630,     0,   632,     0,     0,     0,     0,    41,   574,
     0,   716,     0,     0,     0,    26,    25,    24,    22,    23,
    21,    39,    29,    31,    32,    33,    34,    30,    35,    36,
    37,    38,     0,     0,    85,    43,     0,   207,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   709,   708,   734,     0,     0,
     0,     0,     0,     0,   710,   711,   712,   713,   714,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   717,   668,     0,   718,   715,     0,
     0,     0,     0,     0,     0,     0,     0,    86,     0,     6,
     0,   211,     8,   208,   210,   171,     9,   184,    10,   243,
    11,   239,   242,   241,   734,     0,     7,    92,    97,    96,
   304,    12,   300,   303,   302,   386,    13,   382,   385,   384,
   523,    14,   520,   522,   555,    15,   551,   554,   553,   562,
     0,     0,     0,     0,   582,     0,     0,   734,    63,     0,
    61,   572,     0,    88,   595,     0,     0,   635,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   670,   671,     0,   720,     0,   721,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   707,   634,   637,   732,
   639,     0,   641,     0,     0,   739,     0,   633,   644,   734,
     0,    44,    50,    53,    52,     0,     0,     0,     0,     0,
     0,    98,     0,     0,     0,     0,     0,     0,     0,   631,
   584,     0,     0,     0,     0,     0,     0,     0,     0,   595,
     0,     0,     0,   595,    76,   734,    73,     0,    60,    71,
    80,     0,    57,     0,    62,     0,   733,   726,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   669,   719,     0,   724,     0,
   685,   684,   682,   683,   678,   680,   679,   681,   673,   672,
   674,   675,   676,   677,     0,     0,     0,     0,     0,     0,
     0,     0,    82,   716,     0,     0,     0,     0,     0,   209,
   212,     0,     0,   170,   172,     0,   102,     0,   183,   185,
     0,     0,     0,     0,     0,     0,   240,   244,     0,     0,
    85,     0,     0,     0,     0,   301,   305,     0,     0,   391,
   383,   387,   393,     0,     0,     0,     0,   521,   524,     0,
     0,     0,     0,     0,   552,   556,   564,     0,     0,   585,
   586,   102,   588,     0,     0,     0,     0,     0,     0,     0,
   580,   581,   578,   579,   576,     0,     0,   595,     0,     0,
     0,    85,     0,     0,     0,    89,     0,     0,   596,   727,
   728,     0,     0,     0,     0,   686,   687,   688,   689,   690,
   691,   692,   693,   694,   695,     0,   697,   698,   699,   700,
   701,   702,     0,     0,     0,     0,   722,   723,     0,     0,
   640,     0,   742,   740,   646,   645,     0,     0,    47,     0,
    85,   734,     0,     0,     0,     0,   218,     0,     0,   175,
     0,   189,     0,     0,     0,   108,     0,   291,     0,   734,
     0,   252,   269,   284,   102,     0,     0,     0,     0,   734,
     0,   311,   335,   734,     0,   394,     0,   734,     0,   530,
    88,     0,     0,   564,     0,     0,     0,   565,     0,     0,
   626,     0,     0,     0,     0,     0,     0,     0,     0,   583,
   582,     0,     0,     0,   709,    78,    81,    72,     0,    77,
     0,    66,    58,    65,   575,   716,   716,     0,     0,     0,
     0,     0,   716,     0,   624,   624,   624,   601,   602,     0,
     0,     0,   616,   617,   104,     0,     0,     0,     0,     0,
     0,   638,     0,     0,     0,     0,   636,   725,   706,   642,
    90,     0,     0,    64,     0,     0,     0,    45,     0,     0,
   218,     0,   215,   213,     0,     0,     0,   173,     0,     0,
     0,   187,   103,     0,   186,     0,   247,     0,   245,     0,
     0,     0,     0,   102,    93,    99,   308,     0,   306,     0,
     0,     0,   388,     0,   416,     0,   525,     0,     0,   528,
   557,   565,   558,   560,   559,   563,     0,     0,     0,     0,
   102,     0,   590,     0,     0,     0,   567,     0,     0,     0,
   568,     0,     0,     0,    74,   595,    85,   613,   618,   102,
   610,     0,     0,   597,   600,   608,   609,   603,   604,   607,
   605,   606,   612,   611,     0,   614,   102,   620,     0,     0,
   623,   729,     0,     0,   696,   703,   704,   705,    87,     0,
    46,    49,    83,    51,     0,     0,   221,   216,   220,   214,
   177,   174,   191,   188,     0,     0,   734,   647,   648,   649,
   650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
   660,   661,   662,   663,   664,   665,   666,     0,   149,     0,
     0,     0,     0,     0,   140,   142,     0,     0,     0,     0,
     0,     0,     0,     0,   109,   110,   138,     0,   135,   715,
   293,   251,   246,   254,   248,   271,   249,   286,   250,    94,
     0,   307,   314,   309,   313,     0,     0,     0,     0,   310,
   336,   338,   337,   389,   397,   390,   396,     0,   526,   534,
   529,   533,   532,   527,   561,   566,     0,   628,   627,     0,
     0,     0,     0,     0,     0,   577,   595,   570,     0,    79,
    75,     0,     0,     0,     0,   598,   599,   625,     0,   106,
     0,     0,     0,     0,     0,    48,     0,    54,   217,     0,
     0,     0,   100,   101,   137,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   132,   131,   133,     0,   157,
   155,   152,   154,   153,     0,   734,     0,   111,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   139,   166,     0,
     0,     0,     0,    95,     0,   354,   354,   365,   343,     0,
     0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   446,   448,   392,   417,   469,     0,
     0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
    59,    70,     0,     0,   102,   615,   105,   102,     0,   622,
   730,   731,     0,     0,     0,     0,     0,     0,   102,   102,
   102,   102,     0,     0,     0,   102,   219,   222,     0,     0,
   176,   178,     0,     0,     0,   190,   192,     0,   108,     0,
     0,     0,     0,     0,   108,   108,     0,   134,   158,     0,
   380,     0,   130,   129,   126,   127,   128,   122,   124,   123,
   125,   118,   119,   114,   117,   120,   115,   121,   156,   159,
   162,     0,   164,     0,     0,   136,     0,     0,     0,     0,
   292,   294,     0,     0,     0,     0,   104,   104,     0,     0,
   253,   255,     0,     0,     0,   270,   272,     0,     0,     0,
   285,   287,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   716,   326,   312,   315,   371,   371,   371,     0,     0,
     0,     0,     0,   716,     0,     0,     0,   395,   398,   407,
     0,     0,   102,   102,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   426,     0,   477,     0,   484,     0,   492,
   499,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   531,   535,   629,     0,     0,     0,     0,
     0,     0,     0,     0,   573,    88,    68,     0,   107,     0,
    84,     0,     0,     0,     0,     0,   102,     0,   102,     0,
     0,     0,     0,     0,     0,   102,     0,     0,     0,   166,
   196,     0,     0,   147,     0,   148,     0,     0,   144,     0,
     0,     0,   108,   379,     0,   161,   163,     0,     0,     0,
     0,     0,     0,    88,     0,     0,   265,     0,     0,     0,
     0,     0,     0,   280,   282,     0,   276,   278,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   734,
   321,     0,     0,     0,     0,   108,     0,     0,     0,     0,
   372,   373,   374,   375,   376,   377,   378,     0,     0,   339,
   355,     0,   340,     0,   341,   366,     0,     0,     0,   348,
   342,   344,     0,     0,   410,     0,    88,     0,     0,     0,
   414,     0,   412,     0,     0,   418,     0,     0,   419,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   104,   104,   538,     0,     0,     0,     0,     0,
     0,     0,   571,     0,    69,   102,     0,     0,   224,   225,
   230,   231,     0,   234,     0,   233,   227,   226,    85,   228,
   223,     0,   232,   180,   179,     0,     0,   193,   194,     0,
     0,     0,   108,     0,   141,     0,     0,   112,   165,     0,
   167,   295,   296,   297,     0,   256,   257,     0,     0,     0,
    85,   261,   262,   263,   264,   273,    85,   275,    85,   274,
   289,   288,   290,   331,   329,   330,   319,   317,   318,   316,
     0,   333,   325,   332,   328,   320,     0,     0,     0,     0,
     0,     0,   362,   356,     0,   368,     0,     0,     0,   400,
   399,    85,   401,   408,   402,   405,   406,    85,   403,   404,
     0,     0,     0,   102,     0,     0,     0,     0,     0,   102,
     0,     0,     0,   102,     0,     0,   102,   420,   478,     0,
     0,   102,     0,     0,     0,     0,   421,   485,     0,     0,
     0,     0,     0,   102,   422,   493,     0,     0,     0,     0,
     0,     0,     0,     0,   423,   500,   102,     0,   102,   716,
   716,   716,     0,   716,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   471,   470,   472,   472,     0,   536,
     0,   716,     0,     0,     0,     0,   569,     0,     0,    55,
   102,   102,     0,   102,   181,   198,   195,     0,   116,   160,
     0,     0,     0,   151,     0,     0,   298,   258,     0,   259,
     0,   281,     0,   277,     0,   323,     0,     0,     0,   360,
   361,   363,     0,   359,   108,   367,   108,   345,   346,     0,
     0,     0,     0,   347,   349,   409,     0,   413,     0,   424,
   416,   425,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   416,     0,     0,     0,     0,     0,   416,     0,     0,
     0,     0,     0,     0,     0,     0,   416,     0,     0,     0,
     0,     0,   416,   416,     0,     0,   509,     0,   453,     0,
     0,     0,     0,     0,     0,   457,   458,     0,     0,     0,
     0,     0,     0,     0,   452,     0,     0,     0,     0,   537,
     0,     0,     0,     0,     0,     0,   619,   621,     0,     0,
     0,     0,     0,     0,   150,     0,     0,   143,   113,     0,
     0,     0,   283,   279,   333,     0,   322,   327,     0,   357,
   369,     0,     0,     0,     0,   411,   415,     0,     0,   716,
     0,   716,     0,     0,     0,     0,   102,     0,   481,   479,
   480,   482,   102,     0,   488,   486,   487,   489,   490,   102,
   497,   495,     0,   494,   496,   504,   503,   505,     0,     0,
   501,   502,     0,     0,     0,   102,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   716,   473,     0,   541,   541,     0,   716,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   197,   199,     0,     0,   168,     0,     0,     0,
   334,   364,     0,     0,   350,   351,   352,   353,   427,   429,
     0,     0,     0,     0,     0,   435,     0,     0,   483,     0,
   491,     0,   498,   507,   508,   511,   506,   450,     0,     0,
   433,   434,     0,     0,     0,     0,     0,   463,   467,   468,
     0,   466,     0,   447,     0,   716,   476,   449,   371,   371,
   594,     0,   587,   591,     0,     0,     0,   237,   236,   229,
   235,     0,     0,     0,     0,     0,     0,     0,   146,     0,
   260,   324,   108,     0,     0,     0,     0,     0,     0,     0,
     0,   102,     0,     0,     0,     0,   102,     0,   102,     0,
     0,     0,     0,     0,     0,   102,     0,   474,   475,     0,
     0,     0,   546,   540,     0,   542,   539,   716,     0,     0,
     0,   200,   201,   202,   203,   204,   205,     0,     0,     0,
     0,   416,   437,   438,     0,     0,     0,   436,     0,     0,
   416,     0,     0,     0,     0,   102,     0,     0,   510,   512,
     0,   432,     0,   454,   455,   456,     0,     0,   460,     0,
     0,     0,     0,     0,     0,     0,   543,     0,     0,     0,
     0,   145,     0,     0,     0,     0,     0,     0,   716,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   102,     0,     0,     0,   465,     0,   548,   549,   545,
     0,   108,   589,     0,     0,     0,   266,   358,   370,   428,
   439,   440,     0,   416,     0,   444,   416,   518,   513,   516,
   517,   514,   515,   451,   431,     0,   416,   416,   459,     0,
   547,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   464,     0,   592,     0,    56,     0,     0,
   442,   416,   445,   430,     0,     0,   544,     0,     0,     0,
     0,   461,   462,     0,   267,     0,   443,     0,     0,     0,
     0,     0,   441,   593,    88,     0,     0,   268,     0,     0,
     0
};

static const short yydefgoto[] = {  2019,
     1,     2,     3,    22,    23,    24,   106,   181,   302,   643,
   303,  1004,  1639,   231,   485,   717,   232,   233,   603,   863,
   994,   339,   482,   340,   531,   179,   401,   345,   402,   112,
   198,   431,   545,   546,  1506,   871,   663,   664,   805,  1042,
  1535,   806,   893,   894,  1373,   887,   928,  1064,  1066,   109,
   308,   415,   657,   881,  1022,   110,   309,   420,   659,   882,
  1027,  1367,  1644,  1744,   107,   184,   307,   411,   652,   880,
  1018,   111,   192,   310,   428,   670,   931,  1082,  1390,  1976,
  2009,   671,   932,  1087,  1239,  1399,  1236,  1397,   672,   933,
  1092,   666,   930,  1072,   113,   203,   313,   437,   680,   935,
  1105,  1412,  1655,  1256,  1548,   681,   831,  1109,  1282,  1429,
  1565,  1106,  1271,  1555,  1753,  1108,  1276,  1557,  1754,  1272,
   807,   114,   208,   314,   442,   567,   684,   940,  1119,  1286,
  1432,  1292,  1438,   838,   978,  1160,  1161,  1507,  1626,  1722,
  1309,  1459,  1311,  1468,  1313,  1476,  1314,  1486,  1703,  1836,
  1890,   115,   213,   315,   449,   688,   980,  1165,  1509,  1799,
  1856,  1942,  1906,   116,   217,   316,   456,    25,   317,   578,
   697,    79,   342,   224,   476,   332,   330,   346,   489,   730,
   979,    26,   105,   808,   268,   166,   167,   269,   270,    27,
   169,    57,    58
};

static const short yypact[] = {-32768,
-32768,    44,  2475,  -202,  -153,  -123,   522,   132,  1662,   116,
  -105,  -114,   -88,   -70,   -58,   -27,   -14,    22,    41,    93,
    15,-32768,-32768,   459,-32768,-32768,   -83,   126,   153,   263,
   320,   377,-32768,   425,   432,   526,   532,   578,-32768,   587,
-32768,   597,   613,   618,   631,   641,   647,   683,   705,   708,
   710,-32768,-32768,   175,   195,-32768,-32768,-32768,-32768,-32768,
   794,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   296,
    80,-32768,   262,-32768,   270,   278,   309,   328,-32768,-32768,
   382,  2215,  3987,   -89,   450,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   116,   116,  -120,   461,    47,-32768,   341,   358,
   298,   143,   466,   486,   210,   523,   320,   593,  3987,  3987,
   320,   654,    97,   724,  3987,-32768,-32768,  -166,   727,   494,
   496,   524,   536,   540,-32768,-32768,-32768,-32768,-32768,   553,
   558,   566,   572,   577,   580,   582,   589,   594,   601,   603,
   609,   619,   622,   626,   635,   639,   649,   653,   674,   682,
  3987,  3987,  3987,  3831,  4034,-32768,   850,-32768,-32768,   886,
  3478,   892,  3831,    83,   662,   -49,   930,-32768,   779,-32768,
  1138,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   184,   690,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   688,  4099,  5143,  1349,   706,   733,  1349,   255,-32768,    21,
-32768,-32768,   714,   748,-32768,  4771,  1354,-32768,   963,  1005,
  3987,  3987,   116,  3987,  3987,  3987,  3987,  3987,  3987,  3987,
  3987,  3987,  3987,  3987,  3987,  3987,  3987,  3987,  3987,  3987,
  3987,  3987,  3987,   116,   -73,   -73,  5170,  4034,   420,-32768,
  3987,  3987,  3987,  3987,  3987,  3987,  3987,  3987,  3987,  3987,
  3987,  3987,  3987,  3987,  3987,  3987,-32768,-32768,-32768,-32768,
-32768,   -35,-32768,  3987,   116,-32768,  3831,-32768,   784,   -30,
   770,-32768,-32768,-32768,-32768,   -29,   427,   388,   406,   576,
    81,-32768,   490,   491,   477,   735,   786,  3987,  3987,-32768,
-32768,    97,    97,    90,   792,   804,   821,   825,   827,-32768,
    97,   573,  3883,-32768,  1034,    71,-32768,  3831,-32768,-32768,
-32768,   833,-32768,   842,-32768,  -108,-32768,-32768,   428,   852,
   855,  3976,  4013,   854,  5197,  5224,  5251,  5278,  5305,  5332,
  5359,  5386,  5413,  5440,  4078,  5467,  5494,  5521,  5548,  5575,
  5602,  4183,  4204,  4225,   859,-32768,-32768,  3831,  4120,  4141,
  1387,  1776,  1097,  1097,   965,   965,   965,   965,   829,   829,
   -73,   -73,   -73,   -73,  1110,  5629,   867,    11,  3935,    61,
   899,   908,-32768,  1476,   909,  3987,    17,  1133,   320,-32768,
-32768,   882,  1136,-32768,-32768,   884,   108,  1139,-32768,-32768,
   887,  1141,  1152,   900,   901,   903,-32768,-32768,   934,   911,
   -79,  1160,  1161,   910,   914,-32768,-32768,  1164,   916,-32768,
-32768,-32768,-32768,  1170,   919,   320,  1173,-32768,-32768,   320,
   926,  1184,   116,  1185,-32768,-32768,-32768,  4162,  1686,   990,
-32768,   108,-32768,   940,  3831,   942,   944,   945,   -36,   958,
-32768,-32768,-32768,-32768,-32768,  1207,   964,  6196,    64,  4052,
   959,   440,   478,  1089,     9,-32768,  1214,  3979,-32768,-32768,
-32768,  1217,  3987,  3987,  1216,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  3987,-32768,-32768,-32768,-32768,
-32768,-32768,  3987,  3987,  3987,  1219,  4034,-32768,  3987,  3987,
-32768,  1220,-32768,-32768,-32768,  6196,   972,  3987,-32768,   100,
   150,   -44,  1225,   100,  5656,   966,-32768,  1226,    23,-32768,
  1227,-32768,   983,   984,  1230,-32768,  1231,-32768,  1236,   166,
  1237,-32768,-32768,-32768,   108,  1019,  1242,  1246,  1248,   166,
  1249,-32768,-32768,   166,  1250,-32768,  1000,   166,  1252,-32768,
   748,  1263,  1270,-32768,  1271,  1272,  1274,  1024,  3987,  3987,
-32768,  1279,  1025,  3831,   481,  3831,  3831,  3831,  1280,-32768,
   706,   116,   155,    43,  1281,  6196,-32768,-32768,    46,-32768,
    97,-32768,-32768,-32768,-32768,  2329,  2329,  1030,  1290,   636,
  3987,  3987,  2329,  3987,  1295,-32768,-32768,-32768,-32768,  3987,
  1296,  1828,-32768,-32768,  1050,  1063,  1064,  1325,  1077,  4246,
  4267,-32768,  5683,  5710,  5737,  5764,-32768,  6196,  6196,-32768,
-32768,  4802,   100,-32768,  1336,  1337,  1342,-32768,  1348,  1121,
-32768,   179,-32768,-32768,  1101,  1353,   497,-32768,   505,  3987,
  1365,-32768,-32768,  2153,-32768,   515,-32768,  1364,-32768,   528,
   535,   541,  1366,   108,-32768,-32768,-32768,  1367,-32768,   228,
   172,  1368,-32768,   368,-32768,  1369,-32768,   554,  1375,-32768,
-32768,  1113,-32768,-32768,-32768,-32768,   459,   607,  5791,  1125,
   108,   605,-32768,   630,   670,   673,-32768,  1154,  1159,  1408,
-32768,  1179,  3987,    34,-32768,-32768,   236,-32768,-32768,   108,
-32768,   116,   116,-32768,  6196,  6196,-32768,  6196,-32768,  1412,
  1412,  1412,  6196,-32768,  3831,  6196,   108,-32768,  3987,  3831,
-32768,-32768,  3987,  3987,-32768,-32768,-32768,-32768,-32768,  1413,
-32768,-32768,  1163,-32768,  1356,   399,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  5818,  1171,   182,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1180,-32768,  1187,
  1188,  1190,  1191,  1193,-32768,-32768,  1439,  2153,  2153,  2153,
  2153,  1420,    86,  1442,  3764,   293,  1197,  1197,-32768,  1198,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1444,-32768,-32768,-32768,-32768,  1199,  1205,  1211,  1212,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2446,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  3987,-32768,-32768,  3987,
  1213,  1218,  1228,  1229,  1232,-32768,-32768,-32768,  1215,  6196,
-32768,   258,  1221,    69,  1224,-32768,-32768,-32768,   692,-32768,
   694,  4288,   696,  5845,  5872,-32768,  3987,-32768,-32768,   633,
    25,   -21,-32768,-32768,-32768,  1233,  1241,  1233,  2153,  1470,
  1472,  1478,  1245,  1253,  1251,  1282,  1282,  1282,  3713,-32768,
-32768,-32768,-32768,-32768,   320,    10,  1239,-32768,  2153,  2153,
  2153,  2153,  2153,  2153,  2153,  2153,  2153,  2153,  2153,  2153,
  2153,  2153,  2153,  2153,  1537,  3987,  2094,-32768,  1285,   483,
   781,   568,    67,-32768,   676,-32768,-32768,-32768,-32768,   994,
    66,   322,    92,  1303,  1304,  1305,  1306,  1307,  1309,  1313,
  1316,  1562,   -39,   -22,    16,  1314,  1321,  1322,  1330,  1331,
  1335,  1338,  1343,  1347,  1344,  1345,  1360,  1363,  1374,  1381,
  1383,  1358,  1379,  1386,-32768,-32768,-32768,-32768,-32768,   -50,
  4833,  4309,   108,  3831,  3831,  3831,  3831,   271,  1388,  1587,
-32768,-32768,   320,    21,   108,-32768,-32768,   108,  3987,-32768,
-32768,-32768,  4864,  1391,    97,    97,    97,    97,   106,   326,
   108,   108,  1399,  1595,  1616,   327,-32768,-32768,    82,  1634,
-32768,-32768,  1400,  1640,  1661,-32768,-32768,  1415,-32768,  1419,
  3923,  1416,  1423,  1424,-32768,-32768,  1426,-32768,-32768,  1422,
-32768,  2153,  1932,  3826,  1192,  1192,  1192,  1120,  1120,  1120,
  1120,   534,   534,  1282,  1282,  1282,  1282,  1282,-32768,-32768,
-32768,  1429,  3764,   294,  3649,-32768,  1666,   137,  1674,   320,
-32768,-32768,  1678,  1680,  1681,  1430,  1050,  1050,    97,    97,
-32768,-32768,  1684,    28,    29,-32768,-32768,  1685,   320,  1691,
-32768,-32768,  1692,  1693,  1694,    73,   320,  1695,  1688,  1698,
    97,  2329,-32768,-32768,-32768,   904,  1411,   847,     7,  1700,
   320,    35,   116,  2329,   116,    36,  1701,-32768,-32768,-32768,
   320,  1696,   108,   108,  1702,  1703,  1705,  1706,  1707,  1708,
  1709,  1711,  1715,-32768,  3987,-32768,  3987,-32768,  3987,-32768,
-32768,    97,   116,  1716,  1717,  1720,  1722,  1723,  1724,   320,
   320,  1727,  1728,  1731,  1732,  1733,   320,  1735,   320,  1455,
  1487,  1484,   320,-32768,-32768,-32768,  3987,  1485,   719,   721,
   736,   741,  1740,   320,-32768,   748,-32768,  1488,-32768,  4330,
-32768,  1495,  1746,  1748,  1749,  1751,   108,  1752,   108,  1753,
  1756,  1757,   864,  1758,  1759,   108,  1760,  1762,  1763,  1285,
-32768,  1764,  1765,-32768,  1514,-32768,  2153,  1772,-32768,  1518,
  1525,  1519,-32768,-32768,  3201,-32768,-32768,  2153,  1528,   759,
  1774,  1775,  1777,   748,  1782,    56,  1532,  1778,  1784,  1785,
  1786,  1788,  1789,-32768,-32768,  1790,-32768,-32768,  1791,  1802,
  1803,  1810,  1811,  1814,  1815,  1816,  1819,  1822,  1823,   291,
-32768,  1827,  1830,  1832,  1833,-32768,  1836,  1838,  1839,  1583,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,    97,  1841,-32768,
-32768,  1593,-32768,    97,-32768,-32768,  1594,  1845,  1846,-32768,
-32768,-32768,  1876,  1877,-32768,  1884,   748,  1889,  1890,  1897,
-32768,  1898,-32768,  1901,  1599,-32768,  1656,  1672,-32768,  1650,
  1654,  1679,  1682,  1687,  1689,  1697,  1721,  4351,   843,  4372,
   805,  4393,   457,   472,  1725,  1673,  1741,  1747,  1755,  1767,
  1768,  1769,  1675,  1729,  1770,  1773,  1783,  1795,  1796,  1797,
  1800,  1699,    40,    40,-32768,  1925,  4895,  1704,  1710,  1736,
  1726,  1766,-32768,  1931,-32768,   108,  3987,    21,-32768,-32768,
-32768,-32768,  1801,-32768,  1805,-32768,-32768,-32768,  1806,-32768,
-32768,  1808,-32768,-32768,-32768,  1933,   766,-32768,-32768,    97,
  6223,  1779,-32768,  3987,-32768,  1943,  1818,-32768,  3764,    97,
-32768,-32768,-32768,-32768,  1944,-32768,-32768,  1946,  1842,  1948,
  1806,-32768,-32768,-32768,-32768,-32768,   777,-32768,   796,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1804,  1730,-32768,-32768,-32768,-32768,  1820,  1949,  1953,  1954,
  1977,  1980,-32768,-32768,  2015,-32768,  2016,  2028,    45,-32768,
-32768,   810,-32768,-32768,-32768,-32768,-32768,   822,-32768,-32768,
  2030,  1821,  2041,   108,  2044,  2067,  3987,  3987,  2069,   108,
    97,  3987,  1824,   108,  3987,  3987,   108,-32768,-32768,  3987,
  1825,   108,  3987,  3987,  3987,  3987,-32768,-32768,  3987,  3987,
  3987,  1826,  3987,   108,-32768,-32768,  3987,  3987,  2072,  1829,
  1835,  3987,  3987,  1837,-32768,-32768,   108,  2073,   108,  2329,
  2329,  2329,  3987,  2329,  2074,  2078,  2083,  2085,  3987,  2086,
  2089,    97,  2091,  2093,-32768,-32768,-32768,-32768,    24,-32768,
  1843,  2329,  3831,  1844,  3831,  3831,-32768,  1847,  4926,-32768,
   108,   108,   864,   108,-32768,-32768,-32768,  1850,-32768,-32768,
  1851,  4414,  1852,-32768,  2153,  1854,-32768,-32768,  2103,-32768,
  2104,-32768,  2105,-32768,  2106,-32768,   320,  2107,  2110,-32768,
-32768,-32768,  1859,-32768,-32768,-32768,-32768,-32768,-32768,  1233,
  1233,  1233,    97,-32768,-32768,-32768,   320,-32768,   320,-32768,
-32768,-32768,  1865,  1860,  1861,  4435,  4456,  1862,  1866,  1899,
  4477,-32768,  2154,   816,   950,  2164,  4498,-32768,  2165,  1031,
  1061,  1082,  1223,  4519,  1418,  1570,-32768,  1657,  2172,  1734,
  1761,  2173,-32768,-32768,  1809,  2523,-32768,   324,-32768,  1900,
  1929,  1962,  1957,  4540,  1965,-32768,-32768,  1966,  1967,  5899,
  1969,  1975,  1970,   828,-32768,   350,   416,  1971,  1973,-32768,
  3987,  1972,   832,  3987,   837,   840,-32768,-32768,  1974,  1982,
  1983,  1978,  1985,   677,-32768,  1991,  3987,-32768,  3764,  2014,
  2226,  2017,-32768,-32768,  1730,  2021,-32768,-32768,  2270,-32768,
-32768,  2271,  2272,  2273,  2274,-32768,-32768,  2498,  2276,  2329,
  3987,  2329,  3987,  2279,  2278,  2281,   108,  2550,-32768,-32768,
-32768,-32768,   108,  2733,-32768,-32768,-32768,-32768,-32768,   108,
-32768,-32768,  2785,-32768,-32768,-32768,-32768,-32768,  2837,  3020,
-32768,-32768,   845,  2280,  3987,   108,  2282,  2283,  3987,   116,
   116,  3987,  3987,  2288,  2289,  2315,   116,  2316,  2189,  2318,
  2267,-32768,  2319,-32768,-32768,  4957,  2329,  2029,  4988,  2068,
  2070,  2075,  2324,  2330,  2331,  2332,  2335,  3987,  3987,  3987,
  3987,  3987,-32768,-32768,  2084,  5019,-32768,  2232,  2338,  2339,
-32768,-32768,  2097,  2098,-32768,-32768,-32768,-32768,  2369,-32768,
  2134,  5926,  2130,  4561,  2131,-32768,  2139,  2133,-32768,  2136,
-32768,   417,-32768,-32768,-32768,-32768,-32768,-32768,  4582,   429,
-32768,-32768,  5953,  2144,  2145,  4603,  4624,-32768,-32768,-32768,
   851,-32768,   116,-32768,   116,  2329,-32768,-32768,  2303,  2424,
-32768,  2141,-32768,-32768,  2146,  3831,    21,-32768,-32768,-32768,
-32768,  2344,  2575,  2816,  2862,  3103,  3149,  3987,-32768,  2394,
-32768,-32768,-32768,  1233,  2147,  2395,  2399,  3987,  3987,  3987,
  2400,   108,  3987,  2152,  3987,   502,   108,  2405,   108,  2406,
  2407,  2408,  3987,  3987,  2409,   108,   863,-32768,-32768,  2412,
  2413,  2414,-32768,-32768,  2168,-32768,-32768,  2329,  3987,   865,
  2161,-32768,-32768,-32768,-32768,-32768,-32768,  5050,  2166,  2169,
  2170,-32768,-32768,-32768,  5980,  6007,  4645,-32768,  2179,  4666,
-32768,  6034,  2429,  2430,  3987,   108,  2431,    97,-32768,-32768,
  2184,-32768,   438,-32768,-32768,-32768,  6061,  6088,-32768,  2180,
  2433,  2434,  2435,  2436,  2437,    97,-32768,  2186,  4687,  2187,
  3987,-32768,  2440,  2441,  2442,  3072,  2443,  2445,  2329,  2195,
  3987,  3124,  2196,  2448,  2449,  3390,  2451,  2457,  2459,  2460,
  2461,   108,  2211,  2212,  2464,-32768,  2213,-32768,-32768,-32768,
  2468,-32768,-32768,  3987,  2218,  6115,-32768,-32768,-32768,-32768,
-32768,-32768,  2219,-32768,  6142,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  2225,-32768,-32768,-32768,  2474,
-32768,  2229,  5081,  3987,  2476,  2422,  3987,  3307,  2227,  3359,
  2481,  3411,  3594,-32768,  2482,-32768,  4708,-32768,    97,  4729,
-32768,-32768,-32768,-32768,  2483,  2484,-32768,  3987,  2485,  3987,
  3646,-32768,-32768,  4750,-32768,  6169,-32768,  3987,  2361,  2491,
  5112,  2494,-32768,-32768,   748,  2493,  2242,-32768,  2502,  2506,
-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -297,-32768,-32768,  -254,  1440,-32768,-32768,
  1447,  -478,-32768,  -511,-32768,  -415,  -533,  -569,-32768,-32768,
-32768,-32768,   230,-32768,  -612,-32768,  -993,-32768,  -663,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1712,-32768,  1318,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1868,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   866,-32768,-32768,-32768,-32768,-32768,
-32768,  1585,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1103,
  -758,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1550,-32768,-32768,-32768,  1189,  1016,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   801,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1955,
-32768,  1831,-32768,  2410,-32768,  1936,  2304,  -311,-32768,   518,
   -13,   -32,-32768,-32768,   115,  -460,  -551,  -165,   -81,-32768,
    -3,  -100,   -72
};


#define	YYLAST		6476


static const short yytable[] = {    28,
   168,   689,   175,   176,  1277,   656,   604,   292,   885,   170,
    80,   335,   738,   336,     4,   558,   668,    70,   469,     4,
  1668,   536,   479,   335,  1162,   336,   678,    85,  1628,   654,
   682,  1678,  1234,  1237,   686,  1205,   335,  1684,   336,     4,
     4,  1211,  1212,    -2,  1505,  1163,  1693,   108,   335,   711,
   336,     4,  1699,  1700,   718,   719,   430,     5,     6,    29,
  1023,   727,  1387,   527,  1024,  1025,   599,   460,   461,   463,
     4,   349,   602,   992,   185,    11,   470,  1246,   194,   200,
   205,   210,   214,   219,   118,   228,   228,   715,   901,   293,
   902,   237,  1278,  1019,   228,    29,    30,   193,   199,   204,
   209,   228,   218,    28,   644,  1020,   533,    28,    28,    28,
    28,    28,    28,   220,   543,   647,  1279,   225,   225,   234,
    52,    53,  1560,  1561,    54,    55,    31,  1028,   543,  1030,
   543,   398,   177,   993,   896,   897,   898,   899,    39,   178,
  1629,   644,   354,    60,   487,  1198,    59,   195,   305,   229,
   229,   488,  1088,     5,     6,    71,    72,    73,   229,    74,
  1562,   172,  1089,   375,  1090,   229,   593,   304,   229,    61,
   173,    11,   483,   557,  1563,   286,     4,   306,    81,  1247,
   178,   287,     5,     6,    71,    72,    73,    62,    74,  1248,
   544,    71,    72,    73,   397,    74,   165,   171,   404,    63,
    11,   296,   861,   809,   544,   229,   544,   -64,  1164,   196,
   297,   405,  1135,   237,     4,   395,   589,    29,  1136,  1377,
     5,     6,   406,   488,   378,  1031,   341,   400,   903,  1137,
    64,    29,   645,   222,   223,  1138,   649,  1026,    11,   236,
    71,    72,    73,    65,    74,  1043,  1044,  1045,  1046,  1047,
  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
  1058,   524,  1417,  1063,  1280,  1281,   337,  1139,    84,   338,
   378,    29,    69,  1140,   537,   265,   266,   267,   337,    66,
   655,   338,  1630,  1021,   712,  1235,  1238,   714,   826,   827,
   828,   829,  1285,  1291,   338,   904,   518,   737,    67,   585,
   443,   864,     4,  1564,   182,   183,   338,   234,     5,     6,
    71,    72,    73,   655,    74,   528,   594,  1121,   234,   234,
   234,  1916,   168,   488,     4,  1091,    11,   234,   481,   119,
  1922,   170,    29,   429,   294,   230,   230,   809,   809,   809,
   809,   905,    56,  1124,   230,   750,   716,   462,   543,   543,
    68,   230,   576,    82,   230,   352,   353,  1187,   355,   356,
   357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
   367,   368,   369,   370,   371,   372,   373,   374,  1215,  1531,
    71,    72,    73,    86,    74,   379,   380,   381,   382,   383,
   384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
   394,   197,   646,  1978,   862,   539,  1980,   710,   396,   178,
    83,    71,    72,    73,   488,    74,  1982,  1983,   702,   551,
   704,   705,   706,   655,   544,   544,   103,    29,   809,   561,
   830,    87,   458,   459,   565,   311,   757,   758,    88,   804,
   569,  2001,   571,    29,   104,    29,   573,   478,   809,   809,
   809,   809,   809,   809,   809,   809,   809,   809,   809,   809,
   809,   809,   809,   809,  1229,  1230,   809,   211,   212,   412,
     4,    71,    72,    73,  1470,    74,     5,     6,    71,    72,
    73,   341,    74,   413,   117,   823,   824,   416,   -67,  1477,
     4,   709,   517,   417,    11,   178,     5,     6,    71,    72,
    73,   418,    74,    71,    72,    73,   -64,    74,   407,   724,
   990,   120,   408,   526,    11,  1177,    29,   488,   165,  1883,
   535,   121,   409,  1173,   168,   168,    32,     4,    33,   122,
   488,   168,    89,     5,     6,    71,    72,    73,    90,    74,
    34,    35,    36,  1371,  1471,   988,  1217,   925,  1411,   926,
  1255,    11,    29,  1218,  1379,   190,   191,    37,     4,  1478,
   123,  1660,  1289,  1661,     5,     6,    71,    72,    73,   869,
    74,   120,   444,  1123,   873,   432,  1704,  1189,  1196,   124,
  1067,   809,    11,  1705,    91,   433,   438,  1884,   445,  1885,
  1068,  1069,  1070,    92,   596,   341,  1472,   234,   186,   187,
  1886,   434,  1720,    93,  1479,   435,  1345,   630,   631,  1721,
   446,  1480,  1481,  1887,   847,   188,   189,  1473,  1474,    94,
   633,   866,   867,   439,    95,   835,   836,   634,   635,   636,
   440,  1888,  1482,   638,   639,  1483,  1484,    96,   759,   125,
    52,    53,   642,   421,    54,    55,   414,    97,   833,    75,
    76,    77,    78,    98,  1385,   843,   757,   879,     4,   226,
   810,   422,   447,  1083,   419,  1084,   825,   832,  1723,  1834,
   837,   423,   424,  1085,   842,  1721,  1835,    28,   377,   378,
   425,  1838,   426,    80,    28,   410,   490,   378,  1839,    99,
  1931,   583,  1388,   698,   699,  1855,  1855,  1932,   598,   178,
   174,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,
   341,   100,  1014,    38,   101,  1475,   102,  1434,  1015,   180,
   165,   165,   221,   201,   202,   725,   726,   165,   728,   235,
  1485,  1016,  1359,   238,   733,   448,   736,   378,   600,   703,
   378,  1071,   759,   206,   207,   239,   809,   240,   436,   441,
  1183,  1184,  1185,  1186,   761,   762,  1093,   809,  1094,  1095,
  1889,  1096,   763,   764,  1199,  1737,  1738,  1739,  1740,  1741,
  1742,  1097,   811,   812,   765,   241,   920,   921,   922,   923,
   215,   216,   924,   299,   673,   814,   815,   242,  1098,  1099,
  1100,   243,   816,   817,   810,   810,   810,   810,   818,   819,
   907,  1662,  1663,  1664,   244,  1101,    71,    72,    73,   245,
    74,   840,   841,   471,   472,   473,   474,   246,  1169,  1170,
  1171,  1172,  1680,   247,  1231,  1232,  1086,   860,   248,  1870,
   450,   249,   475,   250,   427,   272,   273,   274,   275,   276,
   251,   277,   278,   279,   280,   252,  1254,   281,   282,   283,
   284,   285,   253,   872,   254,   286,   288,   874,   875,  1102,
   255,   287,    56,   852,   378,   848,   126,   127,     4,  1520,
   256,  1649,   722,   257,   451,   723,  1073,   258,  1074,  1075,
  1076,  1077,  1078,  1079,  1080,   810,   259,  1315,   853,   378,
   260,  1017,   289,   135,   136,   137,   138,   139,   291,  1220,
   261,  1039,  1040,   821,   262,   810,   810,   810,   810,   810,
   810,   810,   810,   810,   810,   810,   810,   810,   810,   810,
   810,   295,   452,   810,   453,   263,  1120,  1103,   854,   378,
   851,   855,   378,   264,  1104,  1743,   298,  1122,  1611,  1612,
  1613,   312,  1615,  1523,  1461,   318,   454,  1462,  1972,   865,
   996,   378,   997,   998,  1000,   378,  1681,   331,  1463,  1464,
  1632,   981,  1465,  1466,   982,   343,   870,   350,  1261,  1262,
  1263,  1264,  1265,  1266,  1267,  1541,  1274,  1339,   378,  1340,
   378,  1543,  1453,  1545,  1257,  1454,  1258,  1259,  1260,  1176,
   341,  1003,   333,   455,  1341,   378,  1455,  1456,  1457,  1342,
   378,   234,   234,   234,   234,   344,    71,    72,    73,   351,
    74,   399,  1288,  1422,  1290,   234,  1567,  1381,   378,  1425,
   168,   403,  1569,  1526,  1527,  1261,  1262,  1263,  1264,  1265,
  1266,  1267,   168,  1268,  1269,  1542,   178,  1686,   810,  1081,
  1060,   480,  1316,   457,   272,   273,   274,   275,   276,   464,
   277,   278,   279,   280,  1544,   178,   281,   282,   283,   284,
   285,   465,  1642,  1467,   286,  1871,  1224,  1687,  1566,   178,
   287,   283,   284,   285,   809,   234,   234,   286,   466,  1110,
  1568,   178,   467,   287,   468,  1241,  1718,  1719,  1688,  1111,
  1728,   378,   484,  1249,  1251,  1730,   378,   234,  1731,   378,
   486,  1458,  1776,  1777,   491,  1275,   495,  1284,  1287,  1845,
  1846,   516,  1293,  1180,   492,  1528,   521,  1295,  1761,   523,
  1763,  1901,  1902,  1910,   378,  1536,   529,  1112,  1113,  1114,
  1115,  1116,  1117,   731,   732,   530,   534,   538,   234,   540,
   541,   542,   300,   547,   548,   549,  1323,  1324,     5,     6,
    71,    72,    73,  1330,    74,  1332,   550,   552,   553,  1336,
   554,   555,  1270,   556,   559,   560,    11,   562,   564,  1797,
  1344,   563,  1125,   566,   568,  1802,   570,   572,   272,   273,
   274,   275,   276,   574,   277,   278,   279,   280,   575,   577,
   281,   282,   283,   284,   285,   582,  1580,   584,   286,   586,
   301,   587,   588,   810,   287,   281,   282,   283,   284,   285,
   590,   591,  1168,   286,   810,   592,   165,   597,   601,   287,
   605,   629,   632,   651,  1178,   637,   640,  1179,   165,  1689,
   641,   648,   653,   658,   660,   661,   662,   665,  1188,  1190,
  1191,  1192,   667,   669,  1849,  1197,   674,  1623,   675,  1308,
   676,  1310,  1118,  1312,   677,   679,   683,   685,   687,   272,
   273,   274,   275,   276,   234,   277,   278,   279,   280,   690,
   234,   281,   282,   283,   284,   285,   691,   693,   694,   286,
   695,  1337,   696,   700,   701,   287,   707,   720,   713,   272,
   273,   274,   275,   276,   721,   277,   278,   279,   280,   729,
   734,   281,   282,   283,   284,   285,  1908,   737,  1665,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
   739,   740,   281,   282,   283,   284,   285,   741,  1861,   742,
   286,   277,   278,   279,   280,  1913,   287,   281,   282,   283,
   284,   285,   751,   752,   341,   286,   753,  1633,   755,  1635,
  1636,   287,  1297,  1298,   754,   528,   126,   127,   128,   760,
   918,   919,   920,   921,   922,   923,   234,  1953,   924,   766,
   813,   845,   820,   822,   834,   839,   234,   130,   131,   132,
   133,   844,   850,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   168,   168,
   168,   857,   168,   856,   858,   859,  1353,   868,  1355,   876,
   877,   878,   900,   884,  1691,  1362,   914,   915,   916,   917,
   168,   886,   918,   919,   920,   921,   922,   923,   888,   889,
   924,   890,   891,   895,   892,  2016,   906,   234,   927,  -667,
   934,   272,   273,   274,   275,   276,   936,   277,   278,   279,
   280,  1519,   937,   281,   282,   283,   284,   285,   938,   939,
   989,   286,   983,   991,  1032,   984,  1033,   287,   126,   127,
   532,   129,  1034,   995,    54,   985,   986,  1037,  1532,   987,
   804,  1257,  1029,  1258,  1259,  1260,  1035,  1041,   234,   130,
   131,   132,   133,   134,  1036,   135,   136,   137,   138,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   924,   810,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1059,
  1268,  1269,  1065,  1656,   229,   321,   322,   323,   324,   325,
   326,   327,   328,   329,  1126,  1127,  1128,  1129,  1130,   234,
  1131,  1576,  1577,  1666,  1132,  1667,  1581,  1133,  1134,  1584,
  1585,  1141,  1142,  1143,  1587,  1518,  1692,  1590,  1591,  1592,
  1593,  1144,  1145,  1594,  1595,  1596,  1146,  1598,   168,  1147,
   168,  1600,  1601,  1175,  1148,   161,  1605,  1606,  1149,  1194,
   162,  1150,  1151,   163,   165,   165,   165,  1614,   165,  1784,
  1785,  1152,   348,  1620,  1153,  1157,  1791,   274,   275,   276,
  1195,   277,   278,   279,   280,  1154,   165,   281,   282,   283,
   284,   285,  1155,  1929,  1156,   286,  1158,  1159,  1200,   168,
  1860,   287,  1182,  1174,  1202,   168,   272,   273,   274,   275,
   276,  1941,   277,   278,   279,   280,  1193,  1201,   281,   282,
   283,   284,   285,  1694,    40,  1203,   286,  1204,    41,  1273,
  1221,  1206,   287,  1573,  1209,  1208,  1210,  1213,   992,  1579,
  1214,  1216,  1225,  1583,  1226,  1227,  1586,  1228,  1233,  1240,
  1252,  1589,  1847,   580,  1848,  1242,  1243,  1244,  1245,  1250,
  1253,   160,  1296,  1599,  1283,  1294,  1333,  1300,  1299,  1301,
  1302,  1303,  1304,  1305,   168,  1306,  1608,   161,  1610,  1307,
  1317,  1318,   162,    42,  1319,   163,  1320,  1321,  1322,    43,
   230,  1325,  1326,   164,  1999,  1327,  1328,  1329,  1334,  1331,
  1696,  1335,    44,  1338,    45,  1726,  1343,  1346,  1729,  1348,
  1640,  1641,  1349,  1643,  1350,  1351,    46,  1352,  1354,  1356,
    47,  1746,  1357,  1358,  1360,  1361,  1363,  1697,  1364,  1365,
  1368,  1369,    48,  1370,  1372,  1374,   168,  1375,  1376,  1380,
  1382,  1383,  1391,  1384,   165,  1762,   165,  1764,  1386,  1389,
  1392,  1393,  1394,    49,  1395,  1396,  1398,  1400,   272,   273,
   274,   275,   276,   341,   277,   278,   279,   280,  1401,  1402,
   281,   282,   283,   284,   285,  1701,  1403,  1404,   286,  1779,
  1405,  1406,  1407,  1783,   287,  1408,  1786,  1787,  1409,  1410,
   126,   127,     4,  1413,  1421,   165,  1414,   168,  1415,  1416,
  1418,   165,  1419,  1420,  1424,  1426,    50,  1423,    51,  1427,
  1428,  1441,  1813,  1814,  1815,  1816,  1817,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,  1430,  1431,   234,   272,   273,   274,   275,   276,
  1433,   277,   278,   279,   280,  1435,  1436,   281,   282,   283,
   284,   285,   234,  1437,  1439,   286,  1768,  1440,  1442,  1444,
   165,   287,  1770,  1445,   272,   273,   274,   275,   276,  1772,
   277,   278,   279,   280,  1443,  1488,   281,   282,   283,   284,
   285,  1510,  1868,  1495,   286,  1780,   581,  1517,  1446,  1525,
   287,  1447,  1875,  1876,  1877,  1533,  1448,  1880,  1449,  1882,
  1537,  1504,  1538,  1539,  1540,  1550,  1450,  1897,  1898,  1551,
  1552,  1512,   272,   273,   274,   275,   276,  1513,   277,   278,
   279,   280,   165,  1909,   281,   282,   283,   284,   285,  1553,
  1451,  1547,   286,  1515,  1487,   234,  1554,  1496,   287,   272,
   273,   274,   275,   276,  1514,   277,   278,   279,   280,  1926,
  1489,   281,   282,   283,   284,   285,  1490,   275,   276,   286,
   277,   278,   279,   280,  1491,   287,   281,   282,   283,   284,
   285,  1556,  1558,  1516,   286,  1946,  1492,  1493,  1494,  1497,
   287,  1530,  1498,   165,  1559,  1955,  1570,   272,   273,   274,
   275,   276,  1499,   277,   278,   279,   280,  1572,  1574,   281,
   282,   283,   284,   285,  1500,  1501,  1502,   286,  1973,  1503,
  1521,  1879,  1546,   287,  1522,   178,  1891,  1524,  1893,   161,
  1534,  1575,  1549,  1578,   162,  1900,  1602,   163,  1571,  1609,
  1616,  1582,  1588,  1597,  1617,   735,  1603,  1618,  1987,  1619,
  1621,  1990,  1604,  1622,  1607,  1624,   126,   127,   767,  1625,
  1631,  1634,  1645,  1646,  1648,  1637,  1650,  1651,  1652,  1653,
  1654,  1659,  2004,  1657,  2006,  1927,  1658,  1669,  1675,  1670,
  1671,  1674,  2011,   135,   136,   137,   138,   139,   768,   769,
   770,   771,   772,   773,   774,   775,   776,   777,   778,   779,
   780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
   790,   791,   792,   793,   794,   126,   127,   767,  1676,  1706,
  1679,  1966,   910,   911,   912,   913,   914,   915,   916,   917,
  1682,  1685,   918,   919,   920,   921,   922,   923,  1695,  1698,
   924,  1707,   135,   136,   137,   138,   139,   768,   769,   770,
   771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
   781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
   791,   792,   793,   794,  1708,   795,  1709,   126,   127,   128,
   129,  1715,   796,    54,  1711,  1712,  1713,  1716,  1724,  1717,
  1725,  1727,  1748,  1732,  1733,  1734,  1735,  1736,   130,   131,
   132,   133,   134,  1745,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   126,
   127,   128,  1747,  1751,   795,  1749,  1752,  1755,  1756,  1757,
  1758,   796,  1760,  1765,  1766,  1767,  1778,  1803,  1781,  1782,
   130,   131,   132,   133,  1788,  1789,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,  1790,  1792,  1793,  1794,  1798,  1805,  1806,   797,  1807,
  1808,   126,   127,   128,   798,   799,  1809,  1810,  1811,  1812,
   800,  1818,  1820,   801,  1821,  1822,  1061,  1062,   802,   803,
  1862,   804,   130,   131,   132,   133,  1823,  1824,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,  1850,  1825,  1851,  1826,   797,  1852,  1828,
  1830,  1831,  1832,   798,   799,  1833,  1841,  1842,  1869,   800,
  1858,  1873,   801,  1859,  1872,  1874,  1878,   802,   803,  1881,
   804,  1892,  1894,  1895,  1896,  1899,  1903,  1904,  1905,  1907,
  1911,  1914,  1915,   655,  1261,  1262,  1263,  1264,  1265,  1266,
  1267,  1920,  1853,  1924,  1925,  1928,  1930,  1937,  1935,  1936,
   160,  1938,  1939,  1940,  1943,  1945,  1947,  1948,  1949,  1951,
   941,  1952,  1954,  1957,  1958,  1959,   161,  1961,    71,    72,
   942,   162,    74,  1962,   163,  1963,  1964,  1965,  1967,  1968,
  1969,  1970,   164,  1795,  1971,  1974,  1796,  1981,  1977,     4,
  1984,  1985,  1988,  1989,  1992,     5,     6,  1994,  1997,  2002,
  2003,  2005,  2012,     7,     8,     9,    10,  2013,  2015,  2017,
  2018,  2020,   941,    11,  1850,  2021,  1851,  1222,   161,  1852,
    71,    72,   942,   162,    74,  1223,   163,  1366,   756,   929,
  1750,  1107,  1508,  1627,   164,  1800,   708,   846,   692,  1702,
   334,   227,     0,     0,     0,     0,    12,     0,     0,     0,
     0,     0,    13,     0,     0,  1261,  1262,  1263,  1264,  1265,
  1266,  1267,     0,  1853,   941,    14,     0,    15,     0,     0,
     0,  1854,    71,    72,   942,     0,    74,     0,     0,    16,
   161,     0,     0,    17,     0,   162,     0,     0,   163,     0,
     0,  1863,     0,     0,     0,    18,   164,   943,     0,   944,
   945,   946,   947,   948,   949,   950,   951,   952,   953,     0,
     0,     0,   954,     0,     0,   955,    19,     0,   956,     0,
     0,   957,     0,   958,   959,   960,   961,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,     0,
     0,     0,   974,     0,     0,     0,     0,   975,     0,   943,
   976,   944,   945,   946,   947,   948,   949,   950,   951,   952,
   953,     0,     0,     0,   954,     0,     0,   955,     0,    20,
   956,    21,     0,   957,     0,   958,   959,   960,   961,   962,
   963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
   973,     0,  1857,     0,   974,     0,     0,     0,     0,   975,
     0,   943,   976,   944,   945,   946,   947,   948,   949,   950,
   951,   952,   953,     0,   977,     0,   954,     0,     0,   955,
     0,     0,   956,     0,     0,   957,     0,   958,   959,   960,
   961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
   971,   972,   973,     0,     0,     0,   974,   941,     0,     0,
     0,   975,     0,     0,   976,    71,    72,   942,     0,    74,
     0,   272,   273,   274,   275,   276,  1759,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   941,
     0,     0,     0,     0,     0,     0,     0,    71,    72,   942,
     0,    74,     0,   272,   273,   274,   275,   276,  1769,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,  1864,   286,     0,     0,     0,     0,     0,   287,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   941,     0,     0,     0,     0,     0,     0,     0,    71,
    72,   942,     0,    74,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1865,     0,
     0,     0,     0,     0,   943,     0,   944,   945,   946,   947,
   948,   949,   950,   951,   952,   953,     0,     0,     0,   954,
     0,     0,   955,     0,     0,   956,     0,     0,   957,     0,
   958,   959,   960,   961,   962,   963,   964,   965,   966,   967,
   968,   969,   970,   971,   972,   973,     0,     0,     0,   974,
     0,     0,     0,     0,   975,     0,   943,   976,   944,   945,
   946,   947,   948,   949,   950,   951,   952,   953,     0,     0,
     0,   954,     0,     0,   955,     0,     0,   956,     0,     0,
   957,     0,   958,   959,   960,   961,   962,   963,   964,   965,
   966,   967,   968,   969,   970,   971,   972,   973,     0,     0,
     0,   974,     0,     0,     0,     0,   975,     0,   943,   976,
   944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     0,  1771,     0,   954,     0,     0,   955,     0,     0,   956,
     0,     0,   957,     0,   958,   959,   960,   961,   962,   963,
   964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     0,     0,     0,   974,   941,     0,     0,     0,   975,     0,
     0,   976,    71,    72,   942,     0,    74,     0,     0,     0,
     0,     0,     0,  1773,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
   287,     0,     0,     0,     0,     0,   941,     0,     0,     0,
     0,     0,     0,     0,    71,    72,   942,     0,    74,     0,
   272,   273,   274,   275,   276,  1774,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,  1866,
   286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   941,     0,
     0,     0,     0,     0,     0,     0,    71,    72,   942,     0,
    74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1867,     0,     0,     0,     0,
     0,   943,     0,   944,   945,   946,   947,   948,   949,   950,
   951,   952,   953,     0,     0,     0,   954,     0,     0,   955,
     0,     0,   956,     0,     0,   957,     0,   958,   959,   960,
   961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
   971,   972,   973,     0,     0,     0,   974,     0,  1378,     0,
     0,   975,     0,   943,   976,   944,   945,   946,   947,   948,
   949,   950,   951,   952,   953,     0,     0,     0,   954,     0,
     0,   955,     0,     0,   956,     0,     0,   957,     0,   958,
   959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
   969,   970,   971,   972,   973,     0,     0,     0,   974,     0,
     0,     0,     0,   975,     0,   943,   976,   944,   945,   946,
   947,   948,   949,   950,   951,   952,   953,     0,  1775,     0,
   954,     0,     0,   955,     0,     0,   956,     0,     0,   957,
     0,   958,   959,   960,   961,   962,   963,   964,   965,   966,
   967,   968,   969,   970,   971,   972,   973,     0,     0,     0,
   974,   941,     0,     0,     0,   975,     0,     0,   976,    71,
    72,   942,     0,    74,     0,     0,     0,     0,     0,     0,
  1950,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,     0,     0,   941,     0,     0,     0,     0,     0,     0,
     0,    71,    72,   942,     0,    74,     0,   272,   273,   274,
   275,   276,  1956,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,  1960,   286,     0,     0,
     0,     0,     0,   287,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   941,     0,     0,     0,     0,
     0,     0,     0,    71,    72,   942,     0,    74,     0,   908,
   909,   910,   911,   912,   913,   914,   915,   916,   917,     0,
     0,   918,   919,   920,   921,   922,   923,     0,   943,   924,
   944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     0,     0,     0,   954,     0,     0,   955,     0,     0,   956,
     0,     0,   957,     0,   958,   959,   960,   961,   962,   963,
   964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     0,     0,     0,   974,     0,     0,     0,     0,   975,     0,
   943,   976,   944,   945,   946,   947,   948,   949,   950,   951,
   952,   953,     0,     0,     0,   954,     0,     0,   955,     0,
     0,   956,     0,     0,   957,     0,   958,   959,   960,   961,
   962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
   972,   973,     0,     0,     0,   974,     0,     0,     0,     0,
   975,     0,   943,   976,   944,   945,   946,   947,   948,   949,
   950,   951,   952,   953,     0,  1991,     0,   954,     0,     0,
   955,     0,     0,   956,     0,     0,   957,     0,   958,   959,
   960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,     0,     0,     0,   974,   941,     0,
     0,     0,   975,     0,     0,   976,    71,    72,   942,     0,
    74,     0,     0,     0,     0,     0,     0,  1993,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,     0,     0,   287,     0,     0,     0,     0,     0,
   941,   126,   127,   128,     0,     0,     0,     0,    71,    72,
   942,     0,    74,     0,     0,     0,     0,     0,     0,  1995,
     0,     0,   130,   131,   132,   133,     0,     0,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,     0,     0,     0,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,  1219,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     0,     0,   287,     0,     0,   943,   290,   944,   945,   946,
   947,   948,   949,   950,   951,   952,   953,     0,     0,     0,
   954,     0,     0,   955,     0,     0,   956,     0,     0,   957,
     0,   958,   959,   960,   961,   962,   963,   964,   965,   966,
   967,   968,   969,   970,   971,   972,   973,     0,     0,     0,
   974,     0,     0,     0,     0,   975,     0,   943,   976,   944,
   945,   946,   947,   948,   949,   950,   951,   952,   953,     0,
     0,     0,   954,     0,     0,   955,     0,     0,   956,     0,
     0,   957,     0,   958,   959,   960,   961,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,     0,
     0,     0,   974,   126,   127,   128,     0,   975,     0,     0,
   976,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1996,     0,   130,   131,   132,   133,     0,     0,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   126,   127,     4,     0,     0,
   161,     0,     0,     0,     0,   162,     0,     0,   163,     0,
     0,     0,     0,     0,  2007,     0,     0,     0,     0,     0,
     0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   126,   127,     4,
   525,   908,   909,   910,   911,   912,   913,   914,   915,   916,
   917,     0,     0,   918,   919,   920,   921,   922,   923,     0,
     0,   924,     0,  1038,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   126,
   127,     4,   908,   909,   910,   911,   912,   913,   914,   915,
   916,   917,     0,     0,   918,   919,   920,   921,   922,   923,
     0,     0,   924,     0,     0,     0,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   271,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   606,   595,   127,     4,   911,   912,   913,
   914,   915,   916,   917,     0,     0,   918,   919,   920,   921,
   922,   923,   161,     0,   924,     0,     0,   162,     0,     0,
   163,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   319,     0,   477,     0,
     0,     0,     0,     0,   607,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   161,     0,     0,   519,     0,   162,
     0,     0,   163,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   608,     0,     0,     0,   520,     0,
     0,   908,   909,   910,   911,   912,   913,   914,   915,   916,
   917,     0,     0,   918,   919,   920,   921,   922,   923,   579,
     0,   924,     0,     0,   609,     0,   161,     0,     0,     0,
     0,   162,  1207,     0,   163,   610,   611,   612,   613,   614,
   615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
   625,   626,   627,   628,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   161,     0,
   287,     0,     0,   162,     0,   493,   163,     0,     0,     0,
     0,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,   494,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
     0,     0,     0,   161,     0,     0,     0,     0,   162,     0,
     0,   163,     0,     0,     0,     0,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,   506,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,   513,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,   514,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,   515,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,   743,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,   744,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,   999,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1167,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1347,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1452,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1460,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1469,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1647,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1672,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1673,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  1677,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  1683,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1690,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1710,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1829,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1837,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1843,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1844,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1919,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1921,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  1944,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  1998,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  2000,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  2008,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,     0,   347,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
   749,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,  1166,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
     0,     0,  1181,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
     0,     0,     0,  1511,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
   287,     0,     0,     0,  1638,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,     0,  1801,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     0,     0,   287,     0,     0,     0,  1804,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,     0,     0,   287,     0,     0,     0,  1819,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,     0,     0,   287,     0,     0,     0,  1912,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,     0,  1986,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
  2014,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,   320,     0,     0,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
   376,     0,     0,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   496,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   497,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   498,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   499,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   500,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   501,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   502,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   503,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   504,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   505,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   507,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   508,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   509,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   510,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   511,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   512,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   522,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   650,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   745,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   746,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   747,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   748,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,   849,     0,     0,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   883,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,  1001,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,  1002,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,  1714,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,  1827,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,  1840,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,  1917,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,  1918,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,  1923,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,  1933,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
  1934,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,  1975,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,  1979,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,  2010,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
   287,   908,   909,   910,   911,   912,   913,   914,   915,   916,
   917,     0,     0,   918,   919,   920,   921,   922,   923,     0,
     0,   924,     0,     0,     0,  1529
};

static const short yycheck[] = {     3,
    82,   571,   103,   104,  1108,   539,   485,   173,   767,    82,
    24,     3,   625,     5,     5,   431,   550,    21,   330,     5,
  1571,     5,   334,     3,    75,     5,   560,    31,     5,     7,
   564,  1582,     5,     5,   568,  1029,     3,  1588,     5,     5,
     5,  1035,  1036,     0,     5,    96,  1597,    61,     3,     7,
     5,     5,  1603,  1604,   606,   607,   311,    11,    12,   262,
    82,   613,     7,     3,    86,    87,   482,   322,   323,   324,
     5,   237,    64,     5,   107,    29,   331,     5,   111,   112,
   113,   114,   115,   116,     5,     5,     5,   599,     3,     7,
     5,   258,    86,    69,     5,   262,   250,   111,   112,   113,
   114,     5,   116,   107,     5,    81,   404,   111,   112,   113,
   114,   115,   116,   117,    23,   531,   110,   121,   122,   123,
     5,     6,    78,    79,     9,    10,   250,   886,    23,   888,
    23,   297,   253,    65,   798,   799,   800,   801,     7,   260,
   117,     5,   243,   258,   253,    64,   252,     5,   181,    69,
    69,   260,    86,    11,    12,    13,    14,    15,    69,    17,
   116,   251,    96,   264,    98,    69,   478,   181,    69,   258,
   260,    29,   338,   253,   130,   249,     5,   181,   262,   107,
   260,   255,    11,    12,    13,    14,    15,   258,    17,   117,
    99,    13,    14,    15,   295,    17,    82,    83,   228,   258,
    29,   251,   714,   664,    99,    69,    99,   252,   259,    67,
   260,   241,   252,   258,     5,   251,   253,   262,   258,  1213,
    11,    12,   252,   260,   260,   889,   230,   258,   143,   252,
   258,   262,   530,   119,   120,   258,   534,   259,    29,   125,
    13,    14,    15,   258,    17,   909,   910,   911,   912,   913,
   914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
   924,   251,  1256,   927,   258,   259,   258,   252,     6,   261,
   260,   262,   258,   258,   258,   161,   162,   163,   258,   258,
   258,   261,   259,   259,   242,   258,   258,   242,   117,   118,
   119,   120,   258,   258,   261,   210,   378,   258,   258,   465,
   314,   717,     5,   259,   258,   259,   261,   311,    11,    12,
    13,    14,    15,   258,    17,   255,   253,   252,   322,   323,
   324,  1872,   404,   260,     5,   259,    29,   331,   258,   250,
  1881,   404,   262,   253,   252,   255,   255,   798,   799,   800,
   801,   256,   227,   252,   255,   643,   601,   258,    23,    23,
   258,   255,   453,   228,   255,   241,   242,   252,   244,   245,
   246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
   256,   257,   258,   259,   260,   261,   262,   263,  1042,  1373,
    13,    14,    15,     7,    17,   271,   272,   273,   274,   275,
   276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
   286,   259,   253,  1954,   716,   409,  1957,   253,   294,   260,
   258,    13,    14,    15,   260,    17,  1967,  1968,   584,   423,
   586,   587,   588,   258,    99,    99,   252,   262,   889,   433,
   259,     7,   318,   319,   438,   252,   258,   259,     7,   258,
   444,  1992,   446,   262,   250,   262,   450,   333,   909,   910,
   911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
   921,   922,   923,   924,  1077,  1078,   927,   258,   259,    82,
     5,    13,    14,    15,    18,    17,    11,    12,    13,    14,
    15,   485,    17,    96,   189,   258,   259,    82,   253,    18,
     5,   592,   378,    88,    29,   260,    11,    12,    13,    14,
    15,    96,    17,    13,    14,    15,   252,    17,    82,   610,
   253,   250,    86,   399,    29,   994,   262,   260,   404,    18,
   406,   252,    96,   253,   606,   607,     5,     5,     7,   252,
   260,   613,     7,    11,    12,    13,    14,    15,     7,    17,
    19,    20,    21,  1207,    88,   857,   253,   255,   258,   257,
  1102,    29,   262,   260,  1218,   258,   259,    36,     5,    88,
   252,  1555,  1114,  1557,    11,    12,    13,    14,    15,   735,
    17,   250,    96,   252,   740,    86,   253,   252,   252,   252,
    98,  1042,    29,   260,     7,    96,    96,    86,   112,    88,
   108,   109,   110,     7,   480,   599,   140,   601,   258,   259,
    99,   112,   253,     7,   133,   116,  1176,   493,   494,   260,
   134,   140,   141,   112,     8,   258,   259,   161,   162,     7,
   506,   722,   723,   133,     7,   258,   259,   513,   514,   515,
   140,   130,   161,   519,   520,   164,   165,     7,   652,   258,
     5,     6,   528,    68,     9,    10,   259,     7,   681,   191,
   192,   193,   194,     7,  1224,   688,   258,   259,     5,     6,
   664,    86,   186,    96,   259,    98,   680,   681,   253,   253,
   684,    96,    97,   106,   688,   260,   260,   681,   259,   260,
   105,   253,   107,   697,   688,   259,   259,   260,   260,     7,
   253,   462,  1226,   579,   580,  1799,  1800,   260,   259,   260,
   251,    69,    70,    71,    72,    73,    74,    75,    76,    77,
   714,     7,    80,   192,     7,   259,     7,  1287,    86,   259,
   606,   607,   130,   258,   259,   611,   612,   613,   614,     6,
   259,    99,  1193,     7,   620,   259,   622,   260,   261,   259,
   260,   259,   756,   258,   259,   252,  1207,   252,   259,   259,
  1005,  1006,  1007,  1008,   258,   259,    81,  1218,    83,    84,
   259,    86,   258,   259,  1019,    89,    90,    91,    92,    93,
    94,    96,   258,   259,   660,   252,   243,   244,   245,   246,
   258,   259,   249,     5,   555,   258,   259,   252,   113,   114,
   115,   252,   258,   259,   798,   799,   800,   801,   258,   259,
   804,  1560,  1561,  1562,   252,   130,    13,    14,    15,   252,
    17,   258,   259,   241,   242,   243,   244,   252,   984,   985,
   986,   987,     7,   252,  1079,  1080,   259,   713,   252,  1823,
    96,   252,   260,   252,   259,   229,   230,   231,   232,   233,
   252,   235,   236,   237,   238,   252,  1101,   241,   242,   243,
   244,   245,   252,   739,   252,   249,     7,   743,   744,   184,
   252,   255,   227,   259,   260,   259,     3,     4,     5,  1348,
   252,  1535,   237,   252,   140,   240,    96,   252,    98,    99,
   100,   101,   102,   103,   104,   889,   252,  1142,   259,   260,
   252,   259,     7,    30,    31,    32,    33,    34,     7,  1065,
   252,   905,   906,   674,   252,   909,   910,   911,   912,   913,
   914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
   924,   260,   188,   927,   190,   252,   940,   252,   259,   260,
   701,   259,   260,   252,   259,   259,     7,   941,  1490,  1491,
  1492,   252,  1494,  1359,   140,   258,   212,   143,  1942,   720,
   259,   260,   259,   260,   259,   260,     7,   252,   154,   155,
  1512,   847,   158,   159,   850,   252,   737,     5,   122,   123,
   124,   125,   126,   127,   128,  1391,   130,   259,   260,   259,
   260,  1397,   140,  1399,    81,   143,    83,    84,    85,   993,
   994,   877,   260,   259,   259,   260,   154,   155,   156,   259,
   260,  1005,  1006,  1007,  1008,   258,    13,    14,    15,     5,
    17,   228,  1113,  1268,  1115,  1019,  1432,   259,   260,  1274,
  1102,   252,  1438,   258,   259,   122,   123,   124,   125,   126,
   127,   128,  1114,   130,   131,   259,   260,     7,  1042,   259,
   926,     8,  1143,   258,   229,   230,   231,   232,   233,   258,
   235,   236,   237,   238,   259,   260,   241,   242,   243,   244,
   245,   258,  1523,   259,   249,  1824,  1070,     7,   259,   260,
   255,   243,   244,   245,  1535,  1079,  1080,   249,   258,    86,
   259,   260,   258,   255,   258,  1089,   259,   260,     7,    96,
   259,   260,   260,  1097,  1098,   259,   260,  1101,   259,   260,
   259,   259,   258,   259,   253,   259,   253,  1111,  1112,   259,
   260,   253,  1116,   999,   260,  1370,     7,  1121,  1670,   253,
  1672,   259,   260,   259,   260,  1380,   228,   134,   135,   136,
   137,   138,   139,   616,   617,   228,   228,     5,  1142,   258,
     5,   258,     5,     5,   258,     5,  1150,  1151,    11,    12,
    13,    14,    15,  1157,    17,  1159,     5,   258,   258,  1163,
   258,   228,   259,   253,     5,     5,    29,   258,     5,  1721,
  1174,   258,   943,   258,     5,  1727,   258,     5,   229,   230,
   231,   232,   233,   258,   235,   236,   237,   238,     5,     5,
   241,   242,   243,   244,   245,   206,  1451,   258,   249,   258,
    63,   258,   258,  1207,   255,   241,   242,   243,   244,   245,
   253,     5,   983,   249,  1218,   252,  1102,   259,   130,   255,
     7,     5,     7,   258,   995,     7,     7,   998,  1114,     7,
   259,     7,     7,     7,   252,   252,     7,     7,  1009,  1010,
  1011,  1012,     7,     7,  1796,  1016,   228,  1502,     7,  1135,
     5,  1137,   259,  1139,     7,     7,     7,   258,     7,   229,
   230,   231,   232,   233,  1268,   235,   236,   237,   238,     7,
  1274,   241,   242,   243,   244,   245,     7,     7,     7,   249,
     7,  1167,   259,     5,   260,   255,     7,   258,     8,   229,
   230,   231,   232,   233,     5,   235,   236,   237,   238,     5,
     5,   241,   242,   243,   244,   245,  1858,   258,  1563,   249,
   229,   230,   231,   232,   233,   255,   235,   236,   237,   238,
   258,   258,   241,   242,   243,   244,   245,     3,  1807,   253,
   249,   235,   236,   237,   238,  1869,   255,   241,   242,   243,
   244,   245,     7,     7,  1348,   249,     5,  1513,   228,  1515,
  1516,   255,  1123,  1124,     7,   255,     3,     4,     5,     7,
   241,   242,   243,   244,   245,   246,  1370,  1919,   249,     5,
     7,   259,     7,     7,     7,     7,  1380,    24,    25,    26,
    27,     7,   258,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,  1490,  1491,
  1492,   253,  1494,   260,     7,   237,  1187,     6,  1189,     7,
   258,    66,     3,   253,     7,  1196,   235,   236,   237,   238,
  1512,   252,   241,   242,   243,   244,   245,   246,   252,   252,
   249,   252,   252,     5,   252,  2015,     5,  1451,   252,   252,
     7,   229,   230,   231,   232,   233,   258,   235,   236,   237,
   238,  1347,   258,   241,   242,   243,   244,   245,   258,   258,
   256,   249,   260,   253,     5,   258,     5,   255,     3,     4,
     5,     6,     5,   260,     9,   258,   258,   237,  1374,   258,
   258,    81,   252,    83,    84,    85,   252,   259,  1502,    24,
    25,    26,    27,    28,   252,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   249,  1535,   122,   123,   124,   125,   126,   127,   128,     3,
   130,   131,   258,  1547,    69,   197,   198,   199,   200,   201,
   202,   203,   204,   205,   252,   252,   252,   252,   252,  1563,
   252,  1447,  1448,  1567,   252,  1569,  1452,   252,     7,  1455,
  1456,   258,   252,   252,  1460,  1346,     7,  1463,  1464,  1465,
  1466,   252,   252,  1469,  1470,  1471,   252,  1473,  1670,   252,
  1672,  1477,  1478,     7,   252,   242,  1482,  1483,   252,     5,
   247,   258,   258,   250,  1490,  1491,  1492,  1493,  1494,  1710,
  1711,   252,   259,  1499,   252,   258,  1717,   231,   232,   233,
     5,   235,   236,   237,   238,   252,  1512,   241,   242,   243,
   244,   245,   252,  1888,   252,   249,   258,   252,     5,  1721,
  1806,   255,   252,   256,     5,  1727,   229,   230,   231,   232,
   233,  1906,   235,   236,   237,   238,   258,   258,   241,   242,
   243,   244,   245,     7,     3,     5,   249,   253,     7,   259,
     5,   253,   255,  1444,   252,   260,   253,   252,     5,  1450,
   259,   253,     5,  1454,     5,     5,  1457,   258,     5,     5,
     3,  1462,  1793,     8,  1795,     5,     5,     5,     5,     5,
     3,   226,     7,  1474,     5,     5,   252,     5,     7,     5,
     5,     5,     5,     5,  1796,     5,  1487,   242,  1489,     5,
     5,     5,   247,    62,     5,   250,     5,     5,     5,    68,
   255,     5,     5,   258,  1989,     5,     5,     5,   252,     5,
     7,   258,    81,   259,    83,  1631,     7,   260,  1634,   255,
  1521,  1522,     7,  1524,     7,     7,    95,     7,     7,     7,
    99,  1647,     7,     7,     7,     7,     7,     7,     7,     7,
     7,     7,   111,   260,     3,   258,  1858,   253,   260,   252,
     7,     7,     5,     7,  1670,  1671,  1672,  1673,     7,   258,
     7,     7,     7,   132,     7,     7,     7,     7,   229,   230,
   231,   232,   233,  1807,   235,   236,   237,   238,     7,     7,
   241,   242,   243,   244,   245,     7,     7,     7,   249,  1705,
     7,     7,     7,  1709,   255,     7,  1712,  1713,     7,     7,
     3,     4,     5,     7,   252,  1721,     7,  1919,     7,     7,
     5,  1727,     5,     5,   252,   252,   185,     7,   187,     5,
     5,   253,  1738,  1739,  1740,  1741,  1742,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,     7,     7,  1888,   229,   230,   231,   232,   233,
     7,   235,   236,   237,   238,     7,     7,   241,   242,   243,
   244,   245,  1906,     7,     7,   249,  1677,     7,   253,   260,
  1796,   255,  1683,   260,   229,   230,   231,   232,   233,  1690,
   235,   236,   237,   238,   253,   253,   241,   242,   243,   244,
   245,     7,  1818,   259,   249,  1706,   251,     7,   260,     7,
   255,   260,  1828,  1829,  1830,     3,   260,  1833,   260,  1835,
     7,   253,     7,   112,     7,     7,   260,  1843,  1844,     7,
     7,   258,   229,   230,   231,   232,   233,   258,   235,   236,
   237,   238,  1858,  1859,   241,   242,   243,   244,   245,     3,
   260,   252,   249,   258,   260,  1989,     7,   259,   255,   229,
   230,   231,   232,   233,   259,   235,   236,   237,   238,  1885,
   260,   241,   242,   243,   244,   245,   260,   232,   233,   249,
   235,   236,   237,   238,   260,   255,   241,   242,   243,   244,
   245,     7,     7,   258,   249,  1911,   260,   260,   260,   260,
   255,   253,   260,  1919,     7,  1921,     7,   229,   230,   231,
   232,   233,   260,   235,   236,   237,   238,     7,     5,   241,
   242,   243,   244,   245,   260,   260,   260,   249,  1944,   260,
   260,  1832,   259,   255,   260,   260,  1837,   260,  1839,   242,
   253,     5,   253,     5,   247,  1846,     5,   250,   258,     7,
     7,   258,   258,   258,     7,   258,   258,     5,  1974,     5,
     5,  1977,   258,     5,   258,     5,     3,     4,     5,     7,
   258,   258,   253,   253,   253,   259,   253,     5,     5,     5,
     5,   253,  1998,     7,  2000,  1886,     7,   253,   253,   260,
   260,   260,  2008,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,     3,     4,     5,   260,   260,
     7,  1932,   231,   232,   233,   234,   235,   236,   237,   238,
     7,     7,   241,   242,   243,   244,   245,   246,     7,     7,
   249,   253,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,   253,   122,   260,     3,     4,     5,
     6,   253,   129,     9,   260,   260,   260,   253,   258,   260,
   258,   260,     7,   260,   253,   253,   259,   253,    24,    25,
    26,    27,    28,   253,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,     3,
     4,     5,   259,   253,   122,   259,     7,     7,     7,     7,
     7,   129,     7,     5,     7,     5,     7,   259,     7,     7,
    24,    25,    26,    27,     7,     7,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,     7,     7,   135,     7,     7,   259,   258,   235,   255,
     7,     3,     4,     5,   241,   242,     7,     7,     7,     5,
   247,   258,   111,   250,     7,     7,   253,   254,   255,   256,
     7,   258,    24,    25,    26,    27,   260,   260,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    81,    16,    83,   253,   235,    86,   260,
   260,   253,   260,   241,   242,   260,   253,   253,     5,   247,
   260,     7,   250,   258,   258,     7,     7,   255,   256,   258,
   258,     7,     7,     7,     7,     7,     5,     5,     5,   252,
   260,   253,   253,   258,   122,   123,   124,   125,   126,   127,
   128,   253,   130,     5,     5,     5,   253,     4,   259,     7,
   226,     7,     7,     7,   259,   259,     7,     7,     7,     7,
     5,     7,   258,   258,     7,     7,   242,     7,    13,    14,
    15,   247,    17,     7,   250,     7,     7,     7,   258,   258,
     7,   259,   258,   207,     7,   258,   210,   253,   260,     5,
     7,   253,     7,    62,   258,    11,    12,     7,     7,     7,
     7,     7,   132,    19,    20,    21,    22,     7,     5,     7,
   259,     0,     5,    29,    81,     0,    83,  1068,   242,    86,
    13,    14,    15,   247,    17,  1069,   250,  1200,   651,   808,
  1655,   937,  1334,  1508,   258,  1725,   591,   697,   574,     7,
   227,   122,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
    -1,    -1,    68,    -1,    -1,   122,   123,   124,   125,   126,
   127,   128,    -1,   130,     5,    81,    -1,    83,    -1,    -1,
    -1,   259,    13,    14,    15,    -1,    17,    -1,    -1,    95,
   242,    -1,    -1,    99,    -1,   247,    -1,    -1,   250,    -1,
    -1,     7,    -1,    -1,    -1,   111,   258,   142,    -1,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
    -1,    -1,   157,    -1,    -1,   160,   132,    -1,   163,    -1,
    -1,   166,    -1,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,    -1,    -1,    -1,    -1,   192,    -1,   142,
   195,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,    -1,    -1,    -1,   157,    -1,    -1,   160,    -1,   185,
   163,   187,    -1,   166,    -1,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,    -1,   259,    -1,   187,    -1,    -1,    -1,    -1,   192,
    -1,   142,   195,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,    -1,   259,    -1,   157,    -1,    -1,   160,
    -1,    -1,   163,    -1,    -1,   166,    -1,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,    -1,    -1,    -1,   187,     5,    -1,    -1,
    -1,   192,    -1,    -1,   195,    13,    14,    15,    -1,    17,
    -1,   229,   230,   231,   232,   233,   259,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
    -1,    17,    -1,   229,   230,   231,   232,   233,   259,   235,
   236,   237,   238,    -1,    -1,   241,   242,   243,   244,   245,
    -1,    -1,     7,   249,    -1,    -1,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
    -1,    -1,    -1,    -1,   142,    -1,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,   157,
    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
    -1,    -1,    -1,    -1,   192,    -1,   142,   195,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,    -1,    -1,
    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,
   166,    -1,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,    -1,    -1,    -1,    -1,   192,    -1,   142,   195,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    -1,   259,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,
    -1,    -1,   166,    -1,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,     5,    -1,    -1,    -1,   192,    -1,
    -1,   195,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
    -1,    -1,    -1,   259,   229,   230,   231,   232,   233,    -1,
   235,   236,   237,   238,    -1,    -1,   241,   242,   243,   244,
   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,
   255,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
   229,   230,   231,   232,   233,   259,   235,   236,   237,   238,
    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,     7,
   249,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
    -1,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,    -1,    -1,    -1,   157,    -1,    -1,   160,
    -1,    -1,   163,    -1,    -1,   166,    -1,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,    -1,    -1,    -1,   187,    -1,     8,    -1,
    -1,   192,    -1,   142,   195,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,    -1,    -1,    -1,   157,    -1,
    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,   168,
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,    -1,
    -1,    -1,    -1,   192,    -1,   142,   195,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,    -1,   259,    -1,
   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
    -1,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,
   187,     5,    -1,    -1,    -1,   192,    -1,    -1,   195,    13,
    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
   259,   229,   230,   231,   232,   233,    -1,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,
    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    13,    14,    15,    -1,    17,    -1,   229,   230,   231,
   232,   233,   259,   235,   236,   237,   238,    -1,    -1,   241,
   242,   243,   244,   245,    -1,    -1,     7,   249,    -1,    -1,
    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,   229,
   230,   231,   232,   233,   234,   235,   236,   237,   238,    -1,
    -1,   241,   242,   243,   244,   245,   246,    -1,   142,   249,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    -1,    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,
    -1,    -1,   166,    -1,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,   192,    -1,
   142,   195,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,    -1,    -1,    -1,   157,    -1,    -1,   160,    -1,
    -1,   163,    -1,    -1,   166,    -1,   168,   169,   170,   171,
   172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
   192,    -1,   142,   195,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,    -1,   259,    -1,   157,    -1,    -1,
   160,    -1,    -1,   163,    -1,    -1,   166,    -1,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,     5,    -1,
    -1,    -1,   192,    -1,    -1,   195,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,    -1,    -1,    -1,   259,   229,   230,
   231,   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,
   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,
    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
     5,     3,     4,     5,    -1,    -1,    -1,    -1,    13,    14,
    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,   259,
    -1,    -1,    24,    25,    26,    27,    -1,    -1,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    -1,    -1,    -1,   229,   230,   231,   232,
   233,    -1,   235,   236,   237,   238,    -1,    69,   241,   242,
   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,
    -1,    -1,   255,    -1,    -1,   142,   259,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,
   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
    -1,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,
   187,    -1,    -1,    -1,    -1,   192,    -1,   142,   195,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,
    -1,   166,    -1,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,     3,     4,     5,    -1,   192,    -1,    -1,
   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   259,    -1,    24,    25,    26,    27,    -1,    -1,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,     3,     4,     5,    -1,    -1,
   242,    -1,    -1,    -1,    -1,   247,    -1,    -1,   250,    -1,
    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,     3,     4,     5,
     6,   229,   230,   231,   232,   233,   234,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,   246,    -1,
    -1,   249,    -1,   251,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,     3,
     4,     5,   229,   230,   231,   232,   233,   234,   235,   236,
   237,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
    -1,    -1,   249,    -1,    -1,    -1,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    75,     3,     4,     5,   232,   233,   234,
   235,   236,   237,   238,    -1,    -1,   241,   242,   243,   244,
   245,   246,   242,    -1,   249,    -1,    -1,   247,    -1,    -1,
   250,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,     8,    -1,   226,    -1,
    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   242,    -1,    -1,     8,    -1,   247,
    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,     8,    -1,
    -1,   229,   230,   231,   232,   233,   234,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,   246,     8,
    -1,   249,    -1,    -1,   196,    -1,   242,    -1,    -1,    -1,
    -1,   247,   260,    -1,   250,   207,   208,   209,   210,   211,
   212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
   222,   223,   224,   225,   229,   230,   231,   232,   233,    -1,
   235,   236,   237,   238,    -1,    -1,   241,   242,   243,   244,
   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,   242,    -1,
   255,    -1,    -1,   247,    -1,   260,   250,    -1,    -1,    -1,
    -1,   229,   230,   231,   232,   233,    -1,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,   229,   230,   231,   232,   233,   255,   235,   236,
   237,   238,   260,    -1,   241,   242,   243,   244,   245,    -1,
    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,   255,    -1,
    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,   247,    -1,
    -1,   250,    -1,    -1,    -1,    -1,   229,   230,   231,   232,
   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,
   243,   244,   245,    -1,    -1,    -1,   249,   229,   230,   231,
   232,   233,   255,   235,   236,   237,   238,   260,    -1,   241,
   242,   243,   244,   245,    -1,    -1,    -1,   249,   229,   230,
   231,   232,   233,   255,   235,   236,   237,   238,    -1,    -1,
   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,   229,
   230,   231,   232,   233,   255,   235,   236,   237,   238,    -1,
    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,
   229,   230,   231,   232,   233,   255,   235,   236,   237,   238,
    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,
   249,   229,   230,   231,   232,   233,   255,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,   229,   230,   231,   232,   233,   255,   235,   236,
   237,   238,   260,    -1,   241,   242,   243,   244,   245,    -1,
    -1,    -1,   249,   229,   230,   231,   232,   233,   255,   235,
   236,   237,   238,   260,    -1,   241,   242,   243,   244,   245,
    -1,    -1,    -1,   249,   229,   230,   231,   232,   233,   255,
   235,   236,   237,   238,   260,    -1,   241,   242,   243,   244,
   245,    -1,    -1,    -1,   249,   229,   230,   231,   232,   233,
   255,   235,   236,   237,   238,   260,    -1,   241,   242,   243,
   244,   245,    -1,    -1,    -1,   249,   229,   230,   231,   232,
   233,   255,   235,   236,   237,   238,   260,    -1,   241,   242,
   243,   244,   245,    -1,    -1,    -1,   249,   229,   230,   231,
   232,   233,   255,   235,   236,   237,   238,   260,    -1,   241,
   242,   243,   244,   245,    -1,    -1,    -1,   249,   229,   230,
   231,   232,   233,   255,   235,   236,   237,   238,   260,    -1,
   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,   229,
   230,   231,   232,   233,   255,   235,   236,   237,   238,   260,
    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,
   229,   230,   231,   232,   233,   255,   235,   236,   237,   238,
   260,    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,
   249,   229,   230,   231,   232,   233,   255,   235,   236,   237,
   238,   260,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,   229,   230,   231,   232,   233,   255,   235,   236,
   237,   238,   260,    -1,   241,   242,   243,   244,   245,    -1,
    -1,    -1,   249,   229,   230,   231,   232,   233,   255,   235,
   236,   237,   238,   260,    -1,   241,   242,   243,   244,   245,
    -1,    -1,    -1,   249,   229,   230,   231,   232,   233,   255,
   235,   236,   237,   238,   260,    -1,   241,   242,   243,   244,
   245,    -1,    -1,    -1,   249,   229,   230,   231,   232,   233,
   255,   235,   236,   237,   238,   260,    -1,   241,   242,   243,
   244,   245,    -1,    -1,    -1,   249,   229,   230,   231,   232,
   233,   255,   235,   236,   237,   238,   260,    -1,   241,   242,
   243,   244,   245,    -1,    -1,    -1,   249,   229,   230,   231,
   232,   233,   255,   235,   236,   237,   238,   260,    -1,   241,
   242,   243,   244,   245,    -1,    -1,    -1,   249,   229,   230,
   231,   232,   233,   255,   235,   236,   237,   238,   260,    -1,
   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,   229,
   230,   231,   232,   233,   255,   235,   236,   237,   238,   260,
    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,
   229,   230,   231,   232,   233,   255,   235,   236,   237,   238,
   260,    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,
   249,   229,   230,   231,   232,   233,   255,   235,   236,   237,
   238,   260,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,   229,   230,   231,   232,   233,   255,   235,   236,
   237,   238,   260,    -1,   241,   242,   243,   244,   245,    -1,
    -1,    -1,   249,   229,   230,   231,   232,   233,   255,   235,
   236,   237,   238,   260,    -1,   241,   242,   243,   244,   245,
    -1,    -1,    -1,   249,   229,   230,   231,   232,   233,   255,
   235,   236,   237,   238,   260,    -1,   241,   242,   243,   244,
   245,    -1,    -1,    -1,   249,   229,   230,   231,   232,   233,
   255,   235,   236,   237,   238,   260,    -1,   241,   242,   243,
   244,   245,    -1,    -1,    -1,   249,   229,   230,   231,   232,
   233,   255,   235,   236,   237,   238,   260,    -1,   241,   242,
   243,   244,   245,    -1,    -1,    -1,   249,   229,   230,   231,
   232,   233,   255,   235,   236,   237,   238,   260,    -1,   241,
   242,   243,   244,   245,    -1,    -1,    -1,   249,   229,   230,
   231,   232,   233,   255,   235,   236,   237,   238,   260,    -1,
   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,   229,
   230,   231,   232,   233,   255,   235,   236,   237,   238,   260,
    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,
    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
   229,   230,   231,   232,   233,    -1,   235,   236,   237,   238,
    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,
   249,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,
   259,   229,   230,   231,   232,   233,    -1,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,   229,   230,   231,   232,   233,    -1,   235,   236,
   237,   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,
    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,   255,    -1,
    -1,    -1,   259,   229,   230,   231,   232,   233,    -1,   235,
   236,   237,   238,    -1,    -1,   241,   242,   243,   244,   245,
    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,   229,   230,   231,   232,   233,    -1,
   235,   236,   237,   238,    -1,    -1,   241,   242,   243,   244,
   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,
   255,    -1,    -1,    -1,   259,   229,   230,   231,   232,   233,
    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,   243,
   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,   229,   230,   231,   232,
   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,
   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,
    -1,    -1,   255,    -1,    -1,    -1,   259,   229,   230,   231,
   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,
   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,   229,   230,
   231,   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,
   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,
    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,   229,
   230,   231,   232,   233,    -1,   235,   236,   237,   238,    -1,
    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,
    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
   229,   230,   231,   232,   233,    -1,   235,   236,   237,   238,
    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,
   249,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,
   259,   229,   230,   231,   232,   233,    -1,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,    -1,   251,    -1,    -1,    -1,   255,   229,   230,
   231,   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,
   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,
   251,    -1,    -1,    -1,   255,   229,   230,   231,   232,   233,
    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,   243,
   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,
    -1,   255,   229,   230,   231,   232,   233,    -1,   235,   236,
   237,   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,
    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,   255,   229,
   230,   231,   232,   233,    -1,   235,   236,   237,   238,    -1,
    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,
    -1,    -1,    -1,   253,    -1,   255,   229,   230,   231,   232,
   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,
   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,
   253,    -1,   255,   229,   230,   231,   232,   233,    -1,   235,
   236,   237,   238,    -1,    -1,   241,   242,   243,   244,   245,
    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,   255,
   229,   230,   231,   232,   233,    -1,   235,   236,   237,   238,
    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,
   249,    -1,    -1,    -1,   253,    -1,   255,   229,   230,   231,
   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,
   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,
    -1,   253,    -1,   255,   229,   230,   231,   232,   233,    -1,
   235,   236,   237,   238,    -1,    -1,   241,   242,   243,   244,
   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,
   255,   229,   230,   231,   232,   233,    -1,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,    -1,    -1,    -1,   253,    -1,   255,   229,   230,
   231,   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,
   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,
    -1,    -1,   253,    -1,   255,   229,   230,   231,   232,   233,
    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,   243,
   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,
    -1,   255,   229,   230,   231,   232,   233,    -1,   235,   236,
   237,   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,
    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,   255,   229,
   230,   231,   232,   233,    -1,   235,   236,   237,   238,    -1,
    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,
    -1,    -1,    -1,   253,    -1,   255,   229,   230,   231,   232,
   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,
   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,
   253,    -1,   255,   229,   230,   231,   232,   233,    -1,   235,
   236,   237,   238,    -1,    -1,   241,   242,   243,   244,   245,
    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,   255,
   229,   230,   231,   232,   233,    -1,   235,   236,   237,   238,
    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,
   249,    -1,    -1,    -1,   253,    -1,   255,   229,   230,   231,
   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,
   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,
    -1,   253,    -1,   255,   229,   230,   231,   232,   233,    -1,
   235,   236,   237,   238,    -1,    -1,   241,   242,   243,   244,
   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,
   255,   229,   230,   231,   232,   233,    -1,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,    -1,    -1,    -1,   253,    -1,   255,   229,   230,
   231,   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,
   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,
    -1,    -1,   253,    -1,   255,   229,   230,   231,   232,   233,
    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,   243,
   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,
    -1,   255,   229,   230,   231,   232,   233,    -1,   235,   236,
   237,   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,
    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,   255,   229,
   230,   231,   232,   233,    -1,   235,   236,   237,   238,    -1,
    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,
    -1,   251,    -1,    -1,    -1,   255,   229,   230,   231,   232,
   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,
   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,
   253,    -1,   255,   229,   230,   231,   232,   233,    -1,   235,
   236,   237,   238,    -1,    -1,   241,   242,   243,   244,   245,
    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,   255,
   229,   230,   231,   232,   233,    -1,   235,   236,   237,   238,
    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,
   249,    -1,    -1,    -1,   253,    -1,   255,   229,   230,   231,
   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,
   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,
    -1,   253,    -1,   255,   229,   230,   231,   232,   233,    -1,
   235,   236,   237,   238,    -1,    -1,   241,   242,   243,   244,
   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,
   255,   229,   230,   231,   232,   233,    -1,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,
    -1,   249,    -1,    -1,    -1,   253,    -1,   255,   229,   230,
   231,   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,
   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,
    -1,    -1,   253,    -1,   255,   229,   230,   231,   232,   233,
    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,   243,
   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,
    -1,   255,   229,   230,   231,   232,   233,    -1,   235,   236,
   237,   238,    -1,    -1,   241,   242,   243,   244,   245,    -1,
    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,   255,   229,
   230,   231,   232,   233,    -1,   235,   236,   237,   238,    -1,
    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,   249,
    -1,    -1,    -1,   253,    -1,   255,   229,   230,   231,   232,
   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,   242,
   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,
   253,    -1,   255,   229,   230,   231,   232,   233,    -1,   235,
   236,   237,   238,    -1,    -1,   241,   242,   243,   244,   245,
    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,   255,
   229,   230,   231,   232,   233,    -1,   235,   236,   237,   238,
    -1,    -1,   241,   242,   243,   244,   245,    -1,    -1,    -1,
   249,    -1,    -1,    -1,   253,    -1,   255,   229,   230,   231,
   232,   233,    -1,   235,   236,   237,   238,    -1,    -1,   241,
   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,    -1,
    -1,   253,    -1,   255,   229,   230,   231,   232,   233,    -1,
   235,   236,   237,   238,    -1,    -1,   241,   242,   243,   244,
   245,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,
   255,   229,   230,   231,   232,   233,   234,   235,   236,   237,
   238,    -1,    -1,   241,   242,   243,   244,   245,   246,    -1,
    -1,   249,    -1,    -1,    -1,   253
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison.simple"
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

#line 217 "/usr/share/bison.simple"

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
#line 373 "GetDP.y"
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
#line 407 "GetDP.y"
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
#line 450 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 473 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 488 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 490 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 492 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 494 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 496 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 498 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 500 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 502 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 504 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 506 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 508 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 510 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 512 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 514 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 516 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 518 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 520 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 522 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 524 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 526 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 528 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 536 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 553 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 560 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 562 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 567 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 569 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 51:
#line 576 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 54:
#line 586 "GetDP.y"
{ 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      i = (int)yyvsp[-3].d ;
      List_Add(Group_S.InitialList, &i) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    ;
    break;}
case 55:
#line 596 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 56:
#line 603 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 57:
#line 613 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 58:
#line 618 "GetDP.y"
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
case 59:
#line 630 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 60:
#line 639 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 61:
#line 650 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 62:
#line 655 "GetDP.y"
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
case 63:
#line 692 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 64:
#line 695 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 65:
#line 707 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 66:
#line 709 "GetDP.y"
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
case 67:
#line 725 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 68:
#line 728 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 69:
#line 731 "GetDP.y"
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
case 70:
#line 782 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 71:
#line 795 "GetDP.y"
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
case 72:
#line 819 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 73:
#line 826 "GetDP.y"
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
case 74:
#line 839 "GetDP.y"
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
case 75:
#line 857 "GetDP.y"
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
case 76:
#line 880 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 77:
#line 884 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	List_Read(yyvsp[-1].l, i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      yyval.l = ListOfInt_L;
    ;
    break;}
case 78:
#line 896 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
#line 905 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!(int)yyvsp[0].d || (yyvsp[-4].i<yyvsp[-2].i && (int)yyvsp[0].d<0) || (yyvsp[-4].i>yyvsp[-2].i && (int)yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", yyvsp[-4].i, yyvsp[-2].i, (int)yyvsp[0].d) ;
	List_Add(ListOfInt_L, &(yyvsp[-4].i)) ;
      }
      else
	for(j=yyvsp[-4].i ; ((int)yyvsp[0].d>0)?(j<=yyvsp[-2].i):(j>=yyvsp[-2].i) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 80:
#line 919 "GetDP.y"
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
case 81:
#line 953 "GetDP.y"
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
case 83:
#line 977 "GetDP.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 84:
#line 987 "GetDP.y"
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
case 87:
#line 1009 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 1014 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 1015 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 1022 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].i ; ;
    break;}
case 94:
#line 1042 "GetDP.y"
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
case 95:
#line 1062 "GetDP.y"
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
case 99:
#line 1115 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 100:
#line 1135 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 1141 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 1147 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1150 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1157 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 106:
#line 1168 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 107:
#line 1171 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1177 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 109:
#line 1181 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 111:
#line 1193 "GetDP.y"
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
case 112:
#line 1206 "GetDP.y"
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
case 113:
#line 1220 "GetDP.y"
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
case 114:
#line 1235 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1241 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1247 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1253 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1259 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1265 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1271 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1277 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1283 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1289 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1295 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1301 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1307 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1313 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1319 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1325 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1331 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1338 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1346 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 135:
#line 1359 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 136:
#line 1365 "GetDP.y"
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
		     (WholeQuantity_S.Case.Function.NbrArguments == -2 )) { 
	      /* && ($2)%2 == 0)) { */
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
case 137:
#line 1439 "GetDP.y"
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
case 138:
#line 1473 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
#line 1482 "GetDP.y"
{ 
      if(yyvsp[0].i!=1 && yyvsp[0].i!=3 && yyvsp[0].i!=4) /* Modification for using the previous result of a Quantity */
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", yyvsp[0].i) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = yyvsp[0].i ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[-1].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 140:
#line 1494 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1496 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 142:
#line 1508 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 143:
#line 1510 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ATANTERIORTIMESTEP ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.WholeQuantity = yyvsp[-3].l ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.TimeStep = yyvsp[-1].i ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 144:
#line 1522 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 145:
#line 1524 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-8].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHTransform", yyvsp[-8].c) ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition cannot be used in MHTransform") ;
      WholeQuantity_S.Type = WQ_MHTRANSFORM ; 
      WholeQuantity_S.Case.MHTransform.Index = i ;
      WholeQuantity_S.Case.MHTransform.WholeQuantity = yyvsp[-5].l ;
      WholeQuantity_S.Case.MHTransform.NbrPoints = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 146:
#line 1538 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-6].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHJacNL", yyvsp[-6].c) ;
      WholeQuantity_S.Type = WQ_MHJACNL ; 
      WholeQuantity_S.Case.MHJacNL.Index = i ;
      WholeQuantity_S.Case.MHJacNL.NbrPoints = (int)yyvsp[-3].d ;
      WholeQuantity_S.Case.MHJacNL.FreqOffSet = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1550 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1556 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 149:
#line 1562 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 150:
#line 1564 "GetDP.y"
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
case 151:
#line 1593 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CAST ;
      WholeQuantity_S.Case.Cast.WholeQuantity = yyvsp[-1].l ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-4].c,
			       fcmp_DefineQuantity_Name)) < 0) {
	if (!strcmp(yyvsp[-4].c, "Real"))
	  WholeQuantity_S.Case.Cast.NbrHar = 1 ;
	else if (!strcmp(yyvsp[-4].c, "Complex"))
	  WholeQuantity_S.Case.Cast.NbrHar = 2 ;
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
case 152:
#line 1619 "GetDP.y"
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
case 153:
#line 1632 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1638 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1645 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1651 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1658 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1665 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_POSTSAVE ;
      WholeQuantity_S.Case.PostSave.Value = (struct Value *)Add_PostSave(yyvsp[0].c) ;
      printf("PostSave %p\n", (struct Value *)Add_PostSave(yyvsp[0].c)) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 159:
#line 1673 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 160:
#line 1680 "GetDP.y"
{
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-3].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("DofValue : Unknown System: %s", yyvsp[-3].c) ;
      /* Free($3) ; */
      WholeQuantity_S.Case.DofValue.DefineSystemIndex = i ;
      WholeQuantity_S.Type = WQ_DOFVALUE ;
      WholeQuantity_S.Case.DofValue.SystemName = yyvsp[-3].c ;
      WholeQuantity_S.Case.DofValue.DofNumber = yyvsp[-1].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 161:
#line 1697 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 162:
#line 1698 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 163:
#line 1699 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 164:
#line 1704 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 165:
#line 1705 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 166:
#line 1711 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 167:
#line 1714 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 168:
#line 1717 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 169:
#line 1733 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 170:
#line 1738 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 171:
#line 1745 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 173:
#line 1754 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 174:
#line 1759 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 175:
#line 1766 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 176:
#line 1769 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 177:
#line 1776 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 179:
#line 1786 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 180:
#line 1789 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 181:
#line 1792 "GetDP.y"
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
case 182:
#line 1830 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 183:
#line 1836 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 184:
#line 1843 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 186:
#line 1856 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 187:
#line 1863 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 188:
#line 1866 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 189:
#line 1873 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 190:
#line 1876 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 191:
#line 1883 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 193:
#line 1895 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 194:
#line 1905 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 195:
#line 1915 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 196:
#line 1922 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 197:
#line 1925 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 198:
#line 1932 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 200:
#line 1948 "GetDP.y"
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
case 201:
#line 1996 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1999 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 2002 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 204:
#line 2005 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 205:
#line 2008 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 206:
#line 2019 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 209:
#line 2030 "GetDP.y"
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
case 211:
#line 2055 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 213:
#line 2069 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 214:
#line 2075 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 215:
#line 2082 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 216:
#line 2091 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 217:
#line 2094 "GetDP.y"
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
case 218:
#line 2118 "GetDP.y"
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
case 219:
#line 2133 "GetDP.y"
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
case 220:
#line 2153 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 221:
#line 2162 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 223:
#line 2176 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 224:
#line 2186 "GetDP.y"
{ 
      if (!Nbr_Index){
	ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
      }
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
case 225:
#line 2211 "GetDP.y"
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
case 226:
#line 2236 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 227:
#line 2241 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 228:
#line 2249 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 229:
#line 2257 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 230:
#line 2267 "GetDP.y"
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
case 231:
#line 2284 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 232:
#line 2292 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 233:
#line 2299 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 234:
#line 2306 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 235:
#line 2315 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 236:
#line 2324 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 237:
#line 2333 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 238:
#line 2354 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 240:
#line 2365 "GetDP.y"
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
case 243:
#line 2394 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 245:
#line 2407 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 246:
#line 2413 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 247:
#line 2420 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 248:
#line 2429 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2432 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2435 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 251:
#line 2438 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 252:
#line 2445 "GetDP.y"
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
case 253:
#line 2461 "GetDP.y"
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
case 254:
#line 2510 "GetDP.y"
{ 
      BasisFunction_S.Name = NULL ; 
      BasisFunction_S.NameOfCoef = NULL ;
      BasisFunction_S.Num = 0 ;
      BasisFunction_S.GlobalBasisFunction = NULL ;
      BasisFunction_S.Function = NULL ; 
      BasisFunction_S.dFunction = NULL ;
      BasisFunction_S.dInvFunction = NULL ;
      BasisFunction_S.SubFunction = NULL ; 
      BasisFunction_S.SubdFunction = NULL ; 
      BasisFunction_S.SupportIndex = -1 ; 
      BasisFunction_S.EntityIndex  = -1 ;
    ;
    break;}
case 256:
#line 2531 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 257:
#line 2534 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 258:
#line 2539 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 259:
#line 2544 "GetDP.y"
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
case 260:
#line 2558 "GetDP.y"
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
case 261:
#line 2578 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 262:
#line 2583 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 263:
#line 2588 "GetDP.y"
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
case 264:
#line 2612 "GetDP.y"
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
case 266:
#line 2672 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 267:
#line 2675 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 268:
#line 2684 "GetDP.y"
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
case 269:
#line 2750 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 270:
#line 2754 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 271:
#line 2761 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 273:
#line 2770 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 274:
#line 2775 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 275:
#line 2778 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2785 "GetDP.y"
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
case 277:
#line 2801 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 278:
#line 2807 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 279:
#line 2810 "GetDP.y"
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
case 280:
#line 2829 "GetDP.y"
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
case 281:
#line 2841 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 282:
#line 2847 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 283:
#line 2850 "GetDP.y"
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
case 284:
#line 2865 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 285:
#line 2869 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 286:
#line 2878 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 288:
#line 2889 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 289:
#line 2894 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 290:
#line 2904 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 291:
#line 2917 "GetDP.y"
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
case 292:
#line 2932 "GetDP.y"
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
case 293:
#line 3006 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 295:
#line 3022 "GetDP.y"
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
case 296:
#line 3055 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 297:
#line 3058 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 298:
#line 3061 "GetDP.y"
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
case 299:
#line 3107 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 301:
#line 3117 "GetDP.y"
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
case 304:
#line 3145 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 306:
#line 3157 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 307:
#line 3163 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 308:
#line 3170 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 310:
#line 3182 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 311:
#line 3188 "GetDP.y"
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
case 312:
#line 3202 "GetDP.y"
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
case 314:
#line 3222 "GetDP.y"
{ DefineQuantity_S.Name = NULL ;
      DefineQuantity_S.Type = LOCALQUANTITY ;
      DefineQuantity_S.IndexInFunctionSpace = NULL ;
      DefineQuantity_S.FunctionSpaceIndex = -1 ;
      DefineQuantity_S.DofDataIndex = -1 ;
      DefineQuantity_S.DofData = NULL ;
      DefineQuantity_S.DummyFrequency = NULL ;

      DefineQuantity_S.IntegralQuantity.InIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.Symmetry = 0 ;
      DefineQuantity_S.IntegralQuantity.WholeQuantity = NULL ;
    ;
    break;}
case 316:
#line 3245 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 317:
#line 3248 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 318:
#line 3252 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 319:
#line 3255 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 320:
#line 3266 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 321:
#line 3272 "GetDP.y"
{
      if (!Nbr_Index) {
	if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[0].c,
				 fcmp_FunctionSpace_Name)) < 0)
	  vyyerror("Unknown FunctionSpace: %s", yyvsp[0].c) ;
	else
	  DefineQuantity_S.FunctionSpaceIndex = i ;
      }
      else{ 
	vyyerror("Multiple Formulation out of context: %s {}", yyvsp[0].c) ;
      }
    ;
    break;}
case 322:
#line 3285 "GetDP.y"
{ 
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
     
    ;
    break;}
case 323:
#line 3312 "GetDP.y"
{
      Flag_MultipleIndex = 1 ;

      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-2].c,
				   fcmp_FunctionSpace_Name)) < 0)
	    vyyerror("Unknown FunctionSpace: %s", yyvsp[-2].c) ;
	  else
	    DefineQuantity_S.FunctionSpaceIndex = i ;
	}
	else{ 
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-2].c) ;
	}
      }
      else {
	List_Reset(ListOfFunctionSpaceIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-2].c,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s", yyvsp[-2].c) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	  else {
	    sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, k+1) ;
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
case 324:
#line 3353 "GetDP.y"
{ /* attention : doit disparaitre. */
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
      Free(yyvsp[-5].c) ;
    ;
    break;}
case 325:
#line 3379 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 326:
#line 3384 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 327:
#line 3390 "GetDP.y"
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
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }

	  DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF ;

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	    
	  
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
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }
	  
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF ;
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_DOF ;
	    
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;
	}

	/* DOF OPER GF_FUNCTION */
	else if( (WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 0 ) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	    
	  }

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF ;/* Scalar Prod Transitive */
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_DOF_PVEC_GF ;
	  
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;	 
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
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+1)->Case.Expression.Index ;
	    
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_EXP ;
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_EXP ;
	  /*
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	 
	  */
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	 
	}	  
      
	/* EXPR OPER GF_FUNCTION */
	else if( (WholeQuantity_P+0)->Type == WQ_EXPRESSION      &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR  ) {
	 
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct) ;
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+0)->Case.Expression.Index ;
	  
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_EXP ;/* Transitive product */
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF ;
	     
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;	 
	}
      }

      else if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 5){
	
	/* EXPR  OPER  GF_FUNCTION  OPER  DOF */
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
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	  
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+0)->Case.Expression.Index ;

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PVEC_DOF ;
	  }
	  else if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF_PVEC_DOF ;
	  } 
	}

	/* FCT OPER  GF_FUNCTION  OPER  DOF */	
	else if( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION     &&
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
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	    
	  }

	  DefineQuantity_S.IntegralQuantity.AnyFunction.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.AnyFunction.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.AnyFunction.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_TIME_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_TIME_GF_PVEC_DOF ;
	  }
	  else if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_PVEC_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_PVEC_GF_PVEC_DOF ;
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
case 328:
#line 3701 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 329:
#line 3706 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3715 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 331:
#line 3724 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 332:
#line 3733 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 334:
#line 3741 "GetDP.y"
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
case 335:
#line 3781 "GetDP.y"
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
case 336:
#line 3796 "GetDP.y"
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
case 337:
#line 3820 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 338:
#line 3825 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 339:
#line 3834 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 340:
#line 3837 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 341:
#line 3840 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 342:
#line 3843 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 343:
#line 3854 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 345:
#line 3865 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 346:
#line 3875 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 347:
#line 3885 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 348:
#line 3899 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 350:
#line 3911 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3913 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 352:
#line 3915 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 353:
#line 3917 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 354:
#line 3925 "GetDP.y"
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
      EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.MatrixIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.Active = NULL ;
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 0 ;
    ;
    break;}
case 356:
#line 3950 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 357:
#line 3958 "GetDP.y"
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
      else if ((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	if ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	  EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_FCT_TIME_DOF ;
	if ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	  EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_FCT_PVEC_DOF ;
	    
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.Fct =
	  (WholeQuantity_P+0)->Case.Function.Fct ;
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.NbrParameters =
	  (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.Para =
	  (WholeQuantity_P+0)->Case.Function.Para ;
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
case 358:
#line 4037 "GetDP.y"
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
case 359:
#line 4083 "GetDP.y"
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
case 360:
#line 4107 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 361:
#line 4116 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 4125 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 363:
#line 4130 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 364:
#line 4139 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 365:
#line 4150 "GetDP.y"
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
case 367:
#line 4179 "GetDP.y"
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
case 368:
#line 4203 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 369:
#line 4211 "GetDP.y"
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
case 370:
#line 4266 "GetDP.y"
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
case 371:
#line 4283 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 372:
#line 4284 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 373:
#line 4285 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 374:
#line 4286 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 375:
#line 4287 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 376:
#line 4288 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 377:
#line 4289 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 378:
#line 4290 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 379:
#line 4297 "GetDP.y"
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
case 380:
#line 4318 "GetDP.y"
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
case 381:
#line 4342 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 383:
#line 4352 "GetDP.y"
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
case 386:
#line 4379 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 388:
#line 4391 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 389:
#line 4398 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 390:
#line 4405 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 391:
#line 4408 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 392:
#line 4410 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 394:
#line 4418 "GetDP.y"
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
case 395:
#line 4433 "GetDP.y"
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
case 396:
#line 4448 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 397:
#line 4458 "GetDP.y"
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
      DefineSystem_S.Flag_FMM = 0 ;
    ;
    break;}
case 399:
#line 4478 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 400:
#line 4481 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 401:
#line 4490 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 402:
#line 4493 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 403:
#line 4498 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 404:
#line 4503 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 405:
#line 4508 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 406:
#line 4513 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 408:
#line 4523 "GetDP.y"
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
case 409:
#line 4560 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 410:
#line 4567 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 411:
#line 4570 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 412:
#line 4582 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 413:
#line 4592 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 414:
#line 4598 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 415:
#line 4601 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 416:
#line 4613 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 417:
#line 4621 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 418:
#line 4634 "GetDP.y"
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

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;      
    ;
    break;}
case 419:
#line 4656 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 420:
#line 4663 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 421:
#line 4669 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 422:
#line 4675 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 423:
#line 4681 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 424:
#line 4689 "GetDP.y"
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

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;
    ;
    break;}
case 425:
#line 4711 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 426:
#line 4718 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 427:
#line 4724 "GetDP.y"
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
case 428:
#line 4735 "GetDP.y"
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
case 429:
#line 4746 "GetDP.y"
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
case 430:
#line 4759 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-8].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-6].i;
      Operation_P->Case.GenerateFMMGroups.Precision = yyvsp[-4].i;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = yyvsp[-2].i;      
    ;
    break;}
case 431:
#line 4774 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-6].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-4].i;
      Operation_P->Case.GenerateFMMGroups.Precision = yyvsp[-2].i;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;
    break;}
case 432:
#line 4789 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-4].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-2].i;
      Operation_P->Case.GenerateFMMGroups.Precision = -1;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;
    break;}
case 433:
#line 4804 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr(yyvsp[-2].l),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr(yyvsp[-2].l) ; i++){
	List_Read(yyvsp[-2].l,i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete(yyvsp[-2].l); 
    ;
    break;}
case 434:
#line 4824 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLYJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr(yyvsp[-2].l),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr(yyvsp[-2].l) ; i++){
	List_Read(yyvsp[-2].l,i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete(yyvsp[-2].l); 
    ;
    break;}
case 435:
#line 4845 "GetDP.y"
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
case 436:
#line 4857 "GetDP.y"
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
case 437:
#line 4877 "GetDP.y"
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
case 438:
#line 4894 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM2 ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform2.Period = yyvsp[-2].d;
      Operation_P->Case.FourierTransform2.Period_sofar = 0.;
      Operation_P->Case.FourierTransform2.Scales = NULL;
    ;
    break;}
case 439:
#line 4913 "GetDP.y"
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
case 440:
#line 4934 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)yyvsp[-6].d ;
      Operation_P->Case.EigenSolve.Shift_r = yyvsp[-4].d ;
      Operation_P->Case.EigenSolve.Shift_i = yyvsp[-2].d ;
    ;
    break;}
case 441:
#line 4949 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PERTURBATION ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-14].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-14].c) ;
      Free(yyvsp[-14].c) ;
      Operation_P->DefineSystemIndex = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-12].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-12].c) ;
      Free(yyvsp[-12].c) ;
      Operation_P->Case.Perturbation.DefineSystemIndex2 = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->Case.Perturbation.DefineSystemIndex3 = i ;
      Operation_P->Case.Perturbation.Size = (int)yyvsp[-8].d ;
      Operation_P->Case.Perturbation.Save = 
	List_Create(List_Nbr(yyvsp[-6].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[-6].l) ; i++) {
	List_Read(yyvsp[-6].l, i, &Value) ;
	j = (int)Value ;
	List_Add(Operation_P->Case.Perturbation.Save, &j) ;
      }
      List_Delete(yyvsp[-6].l);
      Operation_P->Case.Perturbation.Shift = yyvsp[-4].d ;
      Operation_P->Case.Perturbation.PertFreq = (int)yyvsp[-2].d ;
    ;
    break;}
case 442:
#line 4983 "GetDP.y"
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
case 443:
#line 4996 "GetDP.y"
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
case 444:
#line 5010 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-6].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-4].i ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 445:
#line 5023 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-10].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-6].i ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-4].d ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 446:
#line 5035 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 448:
#line 5044 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 450:
#line 5053 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = -1 ; 
    ;
    break;}
case 451:
#line 5064 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-8].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-6].i ;
      Operation_P->Case.ChangeOfCoordinates.NumNode = (int)yyvsp[-4].d ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = yyvsp[-2].i ; 
    ;
    break;}
case 452:
#line 5076 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 453:
#line 5086 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 454:
#line 5094 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SOLVEJACADAPTRELAX ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SolveJac_AdaptRelax.CheckAll = (int)yyvsp[-2].d ;
      Operation_P->Case.SolveJac_AdaptRelax.Factor_L = yyvsp[-4].l ; 
    ;
    break;}
case 455:
#line 5107 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = (int)yyvsp[-4].d ;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = yyvsp[-2].c ;
    ;
    break;}
case 456:
#line 5120 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONMHTOTIME ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionMHtoTime.Time = yyvsp[-4].l ;
      Operation_P->Case.SaveSolutionMHtoTime.ResFile = yyvsp[-2].c ;
    ;
    break;}
case 457:
#line 5134 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 458:
#line 5144 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 459:
#line 5154 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-6].i) ;
      Operation_P->Case.SaveMesh.FileName = yyvsp[-4].c ;
      Operation_P->Case.SaveMesh.ExprIndex = yyvsp[-2].i ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;
    break;}
case 460:
#line 5168 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-4].i) ;
      Operation_P->Case.SaveMesh.FileName = yyvsp[-2].c ;
      Operation_P->Case.SaveMesh.ExprIndex = -1 ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;
    break;}
case 461:
#line 5182 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-11].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-9].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING ;
      Operation_P->Case.Generate_MH_Moving.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving.Period  = yyvsp[-7].d ;
      Operation_P->Case.Generate_MH_Moving.NbrStep = (int)yyvsp[-5].d ;
      Operation_P->Case.Generate_MH_Moving.Operation = yyvsp[-2].l ;
    ;
    break;}
case 462:
#line 5201 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-11].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-9].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING_S ;
      Operation_P->Case.Generate_MH_Moving_S.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving_S.Period  = yyvsp[-7].d ;
      Operation_P->Case.Generate_MH_Moving_S.NbrStep = (int)yyvsp[-5].d ;
      Operation_P->Case.Generate_MH_Moving_S.Operation = yyvsp[-2].l ;
    ;
    break;}
case 463:
#line 5219 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Type = OPERATION_ADD_MH_MOVING ;
      Operation_P->Case.Add_MH_Moving.dummy = yyvsp[-2].d ;
    ;
    break;}
case 464:
#line 5230 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-9].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-7].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = yyvsp[-4].c ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = yyvsp[-2].d ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;
    break;}
case 465:
#line 5245 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-7].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-7].c) ;
      Free(yyvsp[-7].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-5].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = yyvsp[-2].c ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;
    break;}
case 466:
#line 5260 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-2].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = NULL ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;
    break;}
case 467:
#line 5275 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_GENERATE ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;
    break;}
case 468:
#line 5290 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_GENERATEJAC ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;
    break;}
case 469:
#line 5305 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 470:
#line 5316 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 471:
#line 5321 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 472:
#line 5331 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 474:
#line 5341 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 475:
#line 5344 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 476:
#line 5354 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 477:
#line 5369 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 479:
#line 5385 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 480:
#line 5389 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 481:
#line 5393 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 482:
#line 5397 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 483:
#line 5402 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 484:
#line 5413 "GetDP.y"
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
case 486:
#line 5430 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5434 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 488:
#line 5438 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 489:
#line 5442 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 490:
#line 5446 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 491:
#line 5451 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 492:
#line 5462 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 494:
#line 5477 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 495:
#line 5481 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 496:
#line 5485 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 497:
#line 5489 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 498:
#line 5493 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 499:
#line 5504 "GetDP.y"
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
case 501:
#line 5522 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 502:
#line 5526 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 503:
#line 5530 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 504:
#line 5534 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 505:
#line 5539 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 506:
#line 5549 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 507:
#line 5555 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 508:
#line 5561 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 509:
#line 5571 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 510:
#line 5574 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 511:
#line 5579 "GetDP.y"
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
case 513:
#line 5597 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 514:
#line 5607 "GetDP.y"
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
case 515:
#line 5636 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 516:
#line 5639 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 517:
#line 5642 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 518:
#line 5650 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 519:
#line 5667 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 521:
#line 5679 "GetDP.y"
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
case 523:
#line 5702 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 525:
#line 5716 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 526:
#line 5723 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 527:
#line 5731 "GetDP.y"
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
case 528:
#line 5777 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 529:
#line 5782 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 530:
#line 5788 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 531:
#line 5791 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 532:
#line 5794 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 533:
#line 5796 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 534:
#line 5802 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 536:
#line 5813 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 537:
#line 5816 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 538:
#line 5822 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 539:
#line 5827 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 540:
#line 5833 "GetDP.y"
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
case 541:
#line 5847 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 543:
#line 5861 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 544:
#line 5868 "GetDP.y"
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
case 545:
#line 5896 "GetDP.y"
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
case 546:
#line 5906 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 547:
#line 5907 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 548:
#line 5913 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 549:
#line 5922 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 550:
#line 5939 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 552:
#line 5951 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 555:
#line 5960 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 557:
#line 5972 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 558:
#line 5979 "GetDP.y"
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
case 559:
#line 5991 "GetDP.y"
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
case 560:
#line 6002 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 561:
#line 6007 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 562:
#line 6013 "GetDP.y"
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
case 563:
#line 6030 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 564:
#line 6040 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 565:
#line 6043 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 566:
#line 6047 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 567:
#line 6060 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 568:
#line 6064 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 569:
#line 6070 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;
    break;}
case 570:
#line 6076 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 571:
#line 6083 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 572:
#line 6091 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 573:
#line 6097 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 574:
#line 6102 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 575:
#line 6107 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 576:
#line 6116 "GetDP.y"
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
case 577:
#line 6128 "GetDP.y"
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
case 578:
#line 6151 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 579:
#line 6152 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 580:
#line 6153 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 581:
#line 6154 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 582:
#line 6160 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 583:
#line 6162 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 584:
#line 6168 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 585:
#line 6174 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 6181 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 587:
#line 6190 "GetDP.y"
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
case 588:
#line 6212 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 589:
#line 6220 "GetDP.y"
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
case 590:
#line 6231 "GetDP.y"
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
case 591:
#line 6245 "GetDP.y"
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
case 592:
#line 6266 "GetDP.y"
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
case 593:
#line 6293 "GetDP.y"
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
case 594:
#line 6324 "GetDP.y"
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
case 595:
#line 6344 "GetDP.y"
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
      PostSubOperation_S.DecomposeInSimplex = 0 ;
      PostSubOperation_S.ChangeOfCoordinates[0] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[1] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[2] = -1 ;
      PostSubOperation_S.ChangeOfValues = NULL ;
      PostSubOperation_S.FrequencyLegend[0] = -1 ;
      PostSubOperation_S.EvaluationPoints = NULL ;
      PostSubOperation_S.StoreInRegister = -1 ;
    ;
    break;}
case 597:
#line 6374 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 598:
#line 6381 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 599:
#line 6388 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 600:
#line 6395 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 601:
#line 6399 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 602:
#line 6403 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 603:
#line 6407 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 604:
#line 6411 "GetDP.y"
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
case 605:
#line 6421 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 606:
#line 6426 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 607:
#line 6431 "GetDP.y"
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
case 608:
#line 6451 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 609:
#line 6458 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 610:
#line 6467 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 611:
#line 6476 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 612:
#line 6485 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 613:
#line 6492 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 614:
#line 6500 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 615:
#line 6504 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 616:
#line 6513 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 617:
#line 6517 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 618:
#line 6521 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 619:
#line 6529 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 620:
#line 6535 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 621:
#line 6540 "GetDP.y"
{ 
      PostSubOperation_S.FrequencyLegend[0] = yyvsp[-5].d ;
      PostSubOperation_S.FrequencyLegend[1] = yyvsp[-3].d ;
      PostSubOperation_S.FrequencyLegend[2] = yyvsp[-1].d ;
    ;
    break;}
case 622:
#line 6547 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", 
		 List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 623:
#line 6557 "GetDP.y"
{
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;
    break;}
case 624:
#line 6567 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 625:
#line 6573 "GetDP.y"
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
	  } while(i<(int)strlen(yyvsp[0].c)) ;
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
      } while (i<(int)strlen(yyvsp[0].c)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 626:
#line 6623 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
    ;
    break;}
case 627:
#line 6633 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
    ;
    break;}
case 628:
#line 6643 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-6].c ;      
      Constant_S.Name = yyvsp[-6].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-3].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
    ;
    break;}
case 629:
#line 6657 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-8].c ;      
      Constant_S.Name = yyvsp[-8].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-5].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
    ;
    break;}
case 630:
#line 6671 "GetDP.y"
{
      if(LoopControlVariablesTab[ImbricatedLoop-1][1] >  
	 LoopControlVariablesTab[ImbricatedLoop-1][0]){
	LoopControlVariablesTab[ImbricatedLoop-1][0] +=
	  LoopControlVariablesTab[ImbricatedLoop-1][2];
		
	if(strlen(LoopControlVariablesNameTab[ImbricatedLoop-1])){
	  Constant_S.Name = LoopControlVariablesNameTab[ImbricatedLoop-1] ; 
	  Constant_S.Type = VAR_FLOAT ;
	  Constant_S.Value.Float = LoopControlVariablesTab[ImbricatedLoop-1][0] ;

	  if ((i=List_ISearchSeq(ConstantTable_L, &Constant_S, fcmp_Constant))<0) 
	    vyyerror("Something wrong with For loop starting ") ;

	  List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;      
	}

	fsetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop-1]);
	yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
      }
      else{
	ImbricatedLoop--;
      }
    ;
    break;}
case 631:
#line 6697 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 632:
#line 6701 "GetDP.y"
{
    ;
    break;}
case 634:
#line 6717 "GetDP.y"
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
case 635:
#line 6732 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 636:
#line 6738 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 637:
#line 6744 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 638:
#line 6750 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      if (!(File = fopen(yyvsp[-2].c, "r"))) Msg(ERROR, "Unable to open file '%s'", yyvsp[-2].c);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &_value) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &_value) ;
      fclose(File) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 639:
#line 6761 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 640:
#line 6766 "GetDP.y"
{
      i = Print_ListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstring);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstring);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 641:
#line 6778 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 642:
#line 6788 "GetDP.y"
{
      Msg(INFO2, "[<return>=%g] ? ",yyvsp[-2].d);
      fgets(buff, 128, stdin);

      if(!strcmp(buff,"\n"))
	Constant_S.Value.Float = yyvsp[-2].d;
      else
	Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-5].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 644:
#line 6807 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 645:
#line 6813 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 646:
#line 6819 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 647:
#line 6830 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 648:
#line 6831 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 649:
#line 6832 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 650:
#line 6833 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 651:
#line 6834 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 652:
#line 6835 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 653:
#line 6836 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 654:
#line 6837 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 655:
#line 6838 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 656:
#line 6839 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 657:
#line 6840 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 658:
#line 6841 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 659:
#line 6842 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 660:
#line 6843 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 661:
#line 6844 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 662:
#line 6845 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 663:
#line 6846 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 664:
#line 6847 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 665:
#line 6848 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 666:
#line 6849 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 667:
#line 6850 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 668:
#line 6854 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 669:
#line 6855 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 670:
#line 6856 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 671:
#line 6857 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 672:
#line 6858 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 673:
#line 6859 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 674:
#line 6860 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 675:
#line 6861 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 676:
#line 6862 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 677:
#line 6863 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 678:
#line 6864 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 679:
#line 6865 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 680:
#line 6866 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 681:
#line 6867 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 682:
#line 6868 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 683:
#line 6869 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 684:
#line 6870 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 685:
#line 6871 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 686:
#line 6872 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 687:
#line 6873 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 688:
#line 6874 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 689:
#line 6875 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 690:
#line 6876 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 691:
#line 6877 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 692:
#line 6878 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 693:
#line 6879 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 694:
#line 6880 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 695:
#line 6881 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 696:
#line 6882 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 697:
#line 6883 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 698:
#line 6884 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 699:
#line 6885 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 700:
#line 6886 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 701:
#line 6887 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 702:
#line 6888 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 703:
#line 6889 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 704:
#line 6890 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 705:
#line 6891 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 706:
#line 6892 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 707:
#line 6893 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 708:
#line 6898 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 709:
#line 6899 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 710:
#line 6900 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 711:
#line 6901 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 712:
#line 6902 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 713:
#line 6903 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 714:
#line 6904 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 715:
#line 6923 "GetDP.y"
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
case 716:
#line 6941 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 717:
#line 6944 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 718:
#line 6950 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 719:
#line 6953 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 720:
#line 6960 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 721:
#line 6966 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 722:
#line 6969 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 723:
#line 6972 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 724:
#line 6984 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 725:
#line 6990 "GetDP.y"
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
case 726:
#line 7001 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  /* vyyerror("Multi value Constant needed: %s", $1) ; */
	  List_Add(yyval.l, &Constant_S.Value.Float) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;
    break;}
case 727:
#line 7017 "GetDP.y"
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
case 728:
#line 7039 "GetDP.y"
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
case 729:
#line 7054 "GetDP.y"
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
case 730:
#line 7092 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 731:
#line 7100 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 732:
#line 7112 "GetDP.y"
{ 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 733:
#line 7120 "GetDP.y"
{
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;
    break;}
case 734:
#line 7132 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 735:
#line 7134 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 736:
#line 7141 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 737:
#line 7144 "GetDP.y"
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
case 738:
#line 7159 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 739:
#line 7164 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 740:
#line 7169 "GetDP.y"
{
      i = Print_ListOfDouble(yyvsp[-3].c,yyvsp[-1].l,tmpstring);
      if(i<0){
	vyyerror("Too few arguments in Sprintf");
	yyval.c = yyvsp[-3].c;
      }
      else if(i>0){
	vyyerror("Too many arguments (%d) in Sprintf", i);
	yyval.c = yyvsp[-3].c;
      }
      else{
	yyval.c = (char*)Malloc((strlen(tmpstring)+1)*sizeof(char));
	strcpy(yyval.c, tmpstring);
	Free(yyvsp[-3].c);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 741:
#line 7188 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 742:
#line 7206 "GetDP.y"
{
      if (yyvsp[-3].c != NULL && yyvsp[-1].c != NULL) {
	yyval.c = (char *)Malloc((strlen(yyvsp[-3].c)+strlen(yyvsp[-1].c)+1)*sizeof(char)) ;
	strcpy(yyval.c, yyvsp[-3].c) ;  strcat(yyval.c, yyvsp[-1].c) ;
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  yyval.c = NULL ;
      }
    ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/share/bison.simple"

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
#line 7217 "GetDP.y"



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


int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) {
  int  i, j ;
  List_T *InitialList;

  if (!Problem_S.Group)
    Problem_S.Group = List_Create(50, 50, sizeof (struct Group) ) ;

  if (Flag_Plus == 0)
    sprintf(StringAux1, "%s", Name) ;
  else if (Flag_Plus == 1)
    sprintf(StringAux1, "%s_%d_", Name, Num_Index1) ;
  else if (Flag_Plus == 2)
    sprintf(StringAux1, "%s_%d_%d_", Name, Num_Index1,Num_Index2) ;

  Group_P->Name = strsave(StringAux1) ;
  
  if ((i = List_ISearchSeq(Problem_S.Group, Group_P->Name, fcmp_Group_Name)) < 0) {
    i = Group_P->Num = List_Nbr(Problem_S.Group) ;
    Group_P->ExtendedList = NULL ;  Group_P->ExtendedSuppList = NULL ;
    List_Add(Problem_S.Group, Group_P) ;
  } else if (Flag_Add) {
    InitialList = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
    for (j = 0 ; j < List_Nbr(Group_P->InitialList) ; j++) {
      List_Add(InitialList, (int *)List_Pointer(Group_P->InitialList, j)) ;
    } 
  } else List_Write(Problem_S.Group, i, Group_P) ;

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


/*  A d d _ P o s t S a v e  */

struct Value *  Add_PostSave(char * Name) {
  struct PostSave PostSave_S;

  if (!Problem_S.PostSave)
    Problem_S.PostSave = List_Create(10, 10, sizeof (struct PostSave) ) ;

  if ((i = List_ISearchSeq(Problem_S.PostSave, Name, fcmp_PostSave_Name)) < 0) {
    PostSave_S.Name = Name ;
    PostSave_S.Value = (struct Value *)Calloc(1,sizeof(struct Value)) ;
    List_Add(Problem_S.PostSave, &PostSave_S) ;
    printf("PostSave 11 %p\n",  PostSave_S.Value) ;
  }
  else {
    PostSave_S.Value = (struct Value *)(((struct PostSave *)
					 List_Pointer(Problem_S.PostSave,i))->Value) ;
    /* List_Write(Problem_S.PostSave, i, &PostSave_S) ; */
    printf("PostSave 22 %p\n",  PostSave_S.Value) ;
  }

  return  PostSave_S.Value ;
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
    case WQ_MHTRANSFORM  :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.MHTransform.WholeQuantity, TraceGroupIndex) ;
    case WQ_TIMEDERIVATIVE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.TimeDerivative.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_ATANTERIORTIMESTEP :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.AtAnteriorTimeStep.WholeQuantity, TraceGroupIndex) ;
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
    case WQ_TEST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Test.WholeQuantity_True, TraceGroupIndex) ;
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Test.WholeQuantity_False, TraceGroupIndex) ;
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
int  fcmp_PostSave_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostSave *)b)->Name ) ) ;
}


int Print_ListOfDouble(char *format, List_T *list, char *buffer){
  int i, j, k;
  char tmp1[256], tmp2[256];

  j=0;
  while(format[j]!='%') j++;
  strncpy(buffer, format, j); 
  buffer[j]='\0'; 
  for(i = 0 ; i<List_Nbr(list) ; i++){
    k = j;
    j++;
    if(j<(int)strlen(format)){
      if(format[j]=='%'){
	strcat(buffer, "%");
	j++;
      }
      while(format[j]!='%' && j<(int)strlen(format)) j++;
      if(k != j){
	strncpy(tmp1, &(format[k]),j-k);
	tmp1[j-k]='\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list,i)); 
	strcat(buffer, tmp2);
      }
    }
    else{
      return List_Nbr(list)-i;
      break ;
    }
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
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

