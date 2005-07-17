
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
#define	tTimeLegend	477
#define	tFrequencyLegend	478
#define	tEigenvalueLegend	479
#define	tEvaluationPoints	480
#define	tStore	481
#define	tStr	482
#define	tDate	483
#define	tDEF	484
#define	tOR	485
#define	tAND	486
#define	tEQUAL	487
#define	tNOTEQUAL	488
#define	tAPPROXEQUAL	489
#define	tLESSOREQUAL	490
#define	tGREATEROREQUAL	491
#define	tLESSLESS	492
#define	tGREATERGREATER	493
#define	tCROSSPRODUCT	494
#define	UNARYPREC	495
#define	tSHOW	496

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.82 2005-07-17 06:53:13 geuzaine Exp $ */
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

#define MAX_RECUR_LOOPS 100
static double x0, x1, step;
static int ImbricatedLoop = 0, do_next;
static fpos_t yyposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int yylinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static char *LoopControlVariablesNameTab[MAX_RECUR_LOOPS];

time_t date_info;

char   buff[128];

FILE* File;
double _value;


#line 221 "GetDP.y"
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



#define	YYFINAL		2031
#define	YYFLAG		-32768
#define	YYNTBASE	265

#define YYTRANSLATE(x) ((unsigned)(x) <= 496 ? yytranslate[x] : 459)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   249,     2,   257,   258,   247,     2,     2,   252,
   253,   245,   243,   262,   244,   256,   246,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   237,
     2,   239,   231,   263,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   254,     2,   255,   251,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   260,     2,   261,   264,     2,     2,     2,     2,
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
   227,   228,   229,   230,   232,   233,   234,   235,   236,   238,
   240,   241,   242,   248,   250,   259
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
   587,   590,   594,   596,   600,   601,   605,   612,   613,   618,
   619,   622,   626,   631,   632,   637,   638,   641,   645,   649,
   654,   655,   660,   661,   664,   668,   672,   677,   678,   683,
   684,   687,   691,   695,   700,   701,   706,   707,   710,   714,
   718,   722,   726,   730,   734,   735,   737,   740,   744,   746,
   747,   750,   754,   759,   763,   768,   774,   775,   780,   783,
   784,   787,   791,   795,   799,   803,   807,   811,   819,   823,
   827,   831,   835,   839,   847,   855,   863,   864,   867,   871,
   873,   875,   876,   879,   883,   888,   892,   897,   902,   907,
   912,   913,   918,   919,   922,   926,   930,   935,   940,   948,
   952,   956,   960,   964,   965,   966,   967,   986,   987,   992,
   993,   996,  1000,  1004,  1008,  1010,  1014,  1015,  1019,  1021,
  1025,  1026,  1030,  1031,  1036,  1037,  1040,  1044,  1048,  1052,
  1053,  1058,  1059,  1062,  1066,  1070,  1074,  1079,  1080,  1083,
  1087,  1089,  1091,  1092,  1095,  1099,  1104,  1108,  1113,  1118,
  1119,  1124,  1127,  1128,  1131,  1135,  1139,  1143,  1147,  1151,
  1152,  1158,  1159,  1167,  1171,  1172,  1178,  1182,  1186,  1190,
  1194,  1198,  1199,  1203,  1204,  1207,  1210,  1213,  1218,  1223,
  1228,  1233,  1234,  1237,  1241,  1245,  1249,  1250,  1253,  1257,
  1261,  1265,  1269,  1270,  1273,  1274,  1275,  1285,  1289,  1293,
  1297,  1300,  1304,  1310,  1311,  1314,  1318,  1319,  1320,  1330,
  1331,  1333,  1335,  1337,  1339,  1341,  1343,  1345,  1350,  1354,
  1355,  1358,  1362,  1364,  1366,  1367,  1370,  1374,  1379,  1384,
  1385,  1391,  1393,  1394,  1399,  1402,  1403,  1406,  1410,  1414,
  1418,  1422,  1426,  1430,  1434,  1438,  1440,  1443,  1447,  1448,
  1452,  1454,  1458,  1459,  1463,  1464,  1467,  1471,  1475,  1480,
  1485,  1490,  1495,  1501,  1507,  1510,  1518,  1530,  1538,  1552,
  1564,  1574,  1582,  1590,  1598,  1608,  1618,  1628,  1640,  1652,
  1670,  1684,  1700,  1712,  1726,  1727,  1735,  1736,  1744,  1752,
  1764,  1770,  1776,  1786,  1796,  1806,  1812,  1818,  1830,  1840,
  1855,  1870,  1878,  1891,  1902,  1910,  1918,  1926,  1928,  1930,
  1932,  1933,  1936,  1940,  1944,  1947,  1948,  1951,  1955,  1959,
  1963,  1967,  1972,  1973,  1976,  1980,  1984,  1988,  1992,  1996,
  2001,  2002,  2005,  2009,  2013,  2017,  2021,  2026,  2027,  2030,
  2034,  2038,  2042,  2046,  2050,  2055,  2060,  2065,  2066,  2071,
  2072,  2075,  2079,  2083,  2087,  2091,  2095,  2099,  2100,  2103,
  2107,  2109,  2110,  2113,  2117,  2122,  2127,  2131,  2136,  2137,
  2142,  2145,  2148,  2149,  2152,  2156,  2161,  2162,  2168,  2174,
  2175,  2178,  2179,  2186,  2190,  2191,  2196,  2200,  2204,  2205,
  2208,  2212,  2214,  2216,  2217,  2220,  2224,  2228,  2232,  2236,
  2241,  2242,  2251,  2252,  2253,  2257,  2265,  2273,  2286,  2295,
  2307,  2308,  2319,  2321,  2328,  2332,  2339,  2341,  2343,  2345,
  2347,  2348,  2352,  2354,  2357,  2360,  2373,  2376,  2392,  2397,
  2410,  2428,  2451,  2464,  2465,  2468,  2472,  2477,  2482,  2486,
  2489,  2492,  2496,  2500,  2504,  2508,  2512,  2516,  2520,  2524,
  2528,  2532,  2536,  2540,  2546,  2549,  2552,  2556,  2566,  2570,
  2573,  2583,  2586,  2596,  2599,  2609,  2615,  2619,  2620,  2623,
  2630,  2639,  2648,  2659,  2661,  2666,  2668,  2674,  2679,  2684,
  2692,  2697,  2705,  2711,  2719,  2725,  2734,  2735,  2739,  2745,
  2751,  2753,  2755,  2757,  2759,  2761,  2763,  2765,  2767,  2769,
  2771,  2773,  2775,  2777,  2779,  2781,  2783,  2785,  2787,  2789,
  2791,  2793,  2795,  2799,  2802,  2805,  2809,  2813,  2817,  2821,
  2825,  2829,  2833,  2837,  2841,  2845,  2849,  2853,  2857,  2861,
  2866,  2871,  2876,  2881,  2886,  2891,  2896,  2901,  2906,  2911,
  2918,  2923,  2928,  2933,  2938,  2943,  2948,  2955,  2962,  2969,
  2975,  2978,  2980,  2982,  2984,  2986,  2988,  2990,  2992,  2994,
  2995,  2997,  2999,  3003,  3005,  3007,  3011,  3015,  3019,  3025,
  3029,  3034,  3039,  3046,  3055,  3064,  3070,  3076,  3078,  3080,
  3082,  3084,  3086,  3091,  3098,  3100
};

static const short yyrhs[] = {    -1,
   266,   267,     0,     0,     0,   267,   268,   269,     0,    62,
   260,   272,   261,     0,    99,   260,   295,   261,     0,    68,
   260,   330,   261,     0,    81,   260,   315,   261,     0,    83,
   260,   321,   261,     0,    95,   260,   337,   261,     0,   111,
   260,   360,   261,     0,   132,   260,   387,   261,     0,   185,
   260,   417,   261,     0,   187,   260,   429,   261,     0,   433,
     0,   447,     0,    22,   457,     0,   270,     0,    19,     7,
     0,    19,   192,     7,     0,    19,    21,     7,     0,    19,
    36,     7,     0,    19,    20,     7,     0,    19,    19,     7,
     0,    19,     5,     7,     0,    20,     7,     0,    21,     7,
     0,    21,    62,     7,     0,    21,    99,     7,     0,    21,
    68,     7,     0,    21,    81,     7,     0,    21,    83,     7,
     0,    21,    95,     7,     0,    21,   111,     7,     0,    21,
   132,     7,     0,    21,   185,     7,     0,    21,   187,     7,
     0,    21,     3,     7,     0,     0,   271,   437,     0,     0,
     0,   272,   273,   274,     0,   456,   230,   279,     7,     0,
     5,   294,   230,   279,     7,     0,     0,     5,   292,   230,
   275,   279,     7,     0,    63,   254,   290,   255,     7,     0,
   276,     0,   456,   243,   230,   279,     7,     0,   447,     0,
   446,     0,     0,     0,   456,   254,   450,   255,   230,    66,
   277,   254,   257,   287,   278,   262,   257,   287,   262,   450,
   255,     7,     0,     0,     0,   283,   254,   280,   284,   281,
   285,   255,     0,   257,   287,     0,   279,     0,   456,   293,
     0,    69,     0,     5,     0,   287,     0,    64,     0,     0,
   291,   286,   287,     0,   291,    65,   456,   293,     0,     5,
     0,   289,     0,   260,   288,   261,     0,     0,   288,   291,
   289,     0,   288,   291,   244,   289,     0,     3,     0,   263,
   453,   263,     0,     3,     8,   450,     0,     3,     8,     3,
     8,   450,     0,   456,     0,     5,   260,   261,     0,     0,
   290,   291,     5,     0,   290,   291,     5,   260,   450,   261,
     0,     0,   262,     0,   260,   257,   450,   261,     0,     0,
   260,   261,     0,   260,     3,   261,     0,     0,   295,   296,
     0,    67,   254,   297,   255,     7,     0,     5,   254,   255,
   230,   298,     7,     0,     5,   254,   282,   255,   230,   298,
     7,     0,   447,     0,   446,     0,     0,   297,   291,     5,
     0,    23,   254,   450,   255,     0,    99,   254,     5,   255,
     0,     0,   299,   302,     0,     0,   260,   301,   261,     0,
   298,     0,   301,   262,   298,     0,     0,   303,   304,     0,
   307,     0,     0,     0,   304,   231,   305,   304,     8,   306,
   304,     0,   304,   245,   304,     0,   304,   248,   304,     0,
    58,   254,   304,   262,   304,   255,     0,   304,   246,   304,
     0,   304,   243,   304,     0,   304,   244,   304,     0,   304,
   247,   304,     0,   304,   251,   304,     0,   304,   237,   304,
     0,   304,   239,   304,     0,   304,   238,   304,     0,   304,
   240,   304,     0,   304,   234,   304,     0,   304,   235,   304,
     0,   304,   236,   304,     0,   304,   233,   304,     0,   304,
   232,   304,     0,   244,   304,     0,   243,   304,     0,   249,
   304,     0,   252,   304,   253,     0,   451,     0,   449,   312,
   314,     0,     5,   386,     0,   386,     0,   386,   312,     0,
     0,   122,   308,   254,   302,   255,     0,     0,   129,   309,
   254,   302,   262,     3,   255,     0,     0,    60,   254,     5,
   254,   310,   302,   255,   255,   260,   450,   261,     0,    61,
   254,     5,   255,   260,   450,   262,   450,   261,     0,    55,
   254,   386,   255,     0,    57,   254,   386,   255,     0,     0,
    56,   311,   254,   302,   262,   282,   255,     0,   237,     5,
   239,   254,   302,   255,     0,   258,     5,     0,   258,   210,
     0,   258,   143,     0,   258,     3,     0,   307,   257,     3,
     0,   257,     3,     0,   258,   258,   456,     0,   307,   259,
   450,     0,   254,   256,   255,     0,   254,   255,     0,   254,
   313,   255,     0,   304,     0,   313,   262,   304,     0,     0,
   260,   453,   261,     0,   260,    69,   254,   282,   255,   261,
     0,     0,   315,   260,   316,   261,     0,     0,   316,   317,
     0,    96,     5,     7,     0,    82,   260,   318,   261,     0,
     0,   318,   260,   319,   261,     0,     0,   319,   320,     0,
    69,   282,     7,     0,    69,    64,     7,     0,    81,     5,
   314,     7,     0,     0,   321,   260,   322,   261,     0,     0,
   322,   323,     0,    96,     5,     7,     0,    88,   298,     7,
     0,    82,   260,   324,   261,     0,     0,   324,   260,   325,
   261,     0,     0,   325,   326,     0,    86,     5,     7,     0,
    87,     5,     7,     0,    82,   260,   327,   261,     0,     0,
   327,   260,   328,   261,     0,     0,   328,   329,     0,    89,
     5,     7,     0,    90,   450,     7,     0,    91,   450,     7,
     0,    92,   450,     7,     0,    93,   450,     7,     0,    94,
   450,     7,     0,     0,   446,     0,   330,   331,     0,   260,
   332,   261,     0,   447,     0,     0,   332,   333,     0,    96,
   456,     7,     0,    96,   456,   292,     7,     0,    86,     5,
     7,     0,    82,   260,   334,   261,     0,    82,     5,   260,
   334,   261,     0,     0,   334,   260,   335,   261,     0,   334,
   446,     0,     0,   335,   336,     0,    86,     5,     7,     0,
    69,   282,     7,     0,    70,   282,     7,     0,    76,   298,
     7,     0,    75,   298,     7,     0,    80,     5,     7,     0,
    77,   260,   451,   291,   451,   261,     7,     0,    71,   282,
     7,     0,    72,   282,     7,     0,    99,   298,     7,     0,
    74,   298,     7,     0,    73,   298,     7,     0,    99,   254,
   298,   262,   298,   255,     7,     0,    74,   254,   298,   262,
   298,   255,     7,     0,    73,   254,   298,   262,   298,   255,
     7,     0,     0,   337,   338,     0,   260,   339,   261,     0,
   447,     0,   446,     0,     0,   339,   340,     0,    96,   456,
     7,     0,    96,     5,   292,     7,     0,    86,     5,     7,
     0,    97,   260,   341,   261,     0,   105,   260,   347,   261,
     0,   107,   260,   354,   261,     0,    68,   260,   357,   261,
     0,     0,   341,   260,   342,   261,     0,     0,   342,   343,
     0,    96,     5,     7,     0,    98,     5,     7,     0,    98,
     5,   292,     7,     0,    99,     5,   344,     7,     0,   100,
   260,     5,   291,     5,   261,     7,     0,   101,   300,     7,
     0,   102,   300,     7,     0,   103,   282,     7,     0,   104,
   282,     7,     0,     0,     0,     0,   260,   112,     5,     7,
   111,     5,   292,     7,   345,    62,   282,     7,   346,   132,
     5,   293,     7,   261,     0,     0,   347,   260,   348,   261,
     0,     0,   348,   349,     0,    96,     5,     7,     0,   106,
   350,     7,     0,    98,   352,     7,     0,     5,     0,   260,
   351,   261,     0,     0,   351,   291,     5,     0,     5,     0,
   260,   353,   261,     0,     0,   353,   291,     5,     0,     0,
   354,   260,   355,   261,     0,     0,   355,   356,     0,    96,
   456,     7,     0,    86,     5,     7,     0,    98,     5,     7,
     0,     0,   357,   260,   358,   261,     0,     0,   358,   359,
     0,    98,     5,     7,     0,   108,   283,     7,     0,   109,
   286,     7,     0,   110,   456,   293,     7,     0,     0,   360,
   361,     0,   260,   362,   261,     0,   447,     0,   446,     0,
     0,   362,   363,     0,    96,   456,     7,     0,    96,     5,
   292,     7,     0,    86,     5,     7,     0,   112,   260,   364,
   261,     0,   116,   260,   371,   261,     0,     0,   364,   260,
   365,   261,     0,   364,   446,     0,     0,   365,   366,     0,
    96,   456,     7,     0,    86,   107,     7,     0,    86,   117,
     7,     0,    86,     5,     7,     0,   184,   452,     7,     0,
     0,   113,   456,   367,   370,     7,     0,     0,   113,     5,
   260,   261,   368,   370,     7,     0,   114,     3,     7,     0,
     0,   254,   369,   302,   255,     7,     0,   130,   282,     7,
     0,    83,     5,     7,     0,    84,     5,     7,     0,    81,
     5,     7,     0,   115,     3,     7,     0,     0,   254,   456,
   255,     0,     0,   371,   372,     0,   371,   447,     0,   371,
   446,     0,   117,   260,   377,   261,     0,   118,   260,   377,
   261,     0,   119,   260,   381,   261,     0,   120,   260,   373,
   261,     0,     0,   373,   374,     0,    86,     5,     7,     0,
   110,     5,     7,     0,   260,   375,   261,     0,     0,   375,
   376,     0,    78,   386,     7,     0,    79,   386,     7,     0,
   116,   386,     7,     0,   130,   282,     7,     0,     0,   377,
   378,     0,     0,     0,   385,   254,   379,   302,   380,   262,
   302,   255,     7,     0,   130,   282,     7,     0,    81,     5,
     7,     0,    83,     5,     7,     0,   131,     7,     0,    84,
     5,     7,     0,    85,   254,     3,   255,     7,     0,     0,
   381,   382,     0,   130,   282,     7,     0,     0,     0,   385,
   254,   383,   302,   384,   262,   386,   255,     7,     0,     0,
   122,     0,   123,     0,   124,     0,   125,     0,   126,     0,
   127,     0,   128,     0,   260,     5,   456,   261,     0,   260,
   456,   261,     0,     0,   387,   388,     0,   260,   389,   261,
     0,   447,     0,   446,     0,     0,   389,   390,     0,    96,
   456,     7,     0,    96,     5,   292,     7,     0,   133,   260,
   392,   261,     0,     0,   140,   391,   260,   399,   261,     0,
   446,     0,     0,   392,   260,   393,   261,     0,   392,   446,
     0,     0,   393,   394,     0,    96,   456,     7,     0,    86,
     5,     7,     0,   134,   395,     7,     0,   135,   457,     7,
     0,   138,   397,     7,     0,   139,     5,     7,     0,   136,
   452,     7,     0,   137,   457,     7,     0,   446,     0,   456,
   293,     0,   260,   396,   261,     0,     0,   396,   291,   456,
     0,   456,     0,   260,   398,   261,     0,     0,   398,   291,
   456,     0,     0,   399,   400,     0,     5,   456,     7,     0,
   142,   298,     7,     0,   153,   260,   406,   261,     0,   157,
   260,   408,   261,     0,   160,   260,   410,   261,     0,   163,
   260,   412,   261,     0,     5,   254,   456,   255,     7,     0,
   142,   254,   298,   255,     7,     0,   152,     7,     0,    15,
   254,   298,   255,   260,   399,   261,     0,    15,   254,   298,
   255,   260,   399,   261,    16,   260,   399,   261,     0,   144,
   254,     5,   262,   298,   255,     7,     0,   169,   254,     5,
   262,   298,   262,   298,   262,   298,   262,   298,   255,     7,
     0,   169,   254,     5,   262,   298,   262,   298,   262,   298,
   255,     7,     0,   169,   254,     5,   262,   298,   262,   298,
   255,     7,     0,   170,   254,     5,   262,   452,   255,     7,
     0,   171,   254,     5,   262,   452,   255,     7,     0,   150,
   254,     5,   262,   298,   255,     7,     0,   151,   254,     5,
   262,   282,   262,     5,   255,     7,     0,   145,   254,     5,
   262,     5,   262,   452,   255,     7,     0,   146,   254,     5,
   262,     5,   262,   450,   255,     7,     0,   147,   254,     5,
   262,   450,   262,   452,   262,   450,   255,     7,     0,   148,
   254,     5,   262,   450,   262,   450,   262,   450,   255,     7,
     0,   149,   254,     5,   262,     5,   262,     5,   262,   450,
   262,   452,   262,   450,   262,   450,   255,     7,     0,   153,
   254,   450,   262,   450,   262,   298,   262,   298,   255,   260,
   399,   261,     0,   157,   254,   450,   262,   450,   262,   298,
   262,   450,   262,   450,   255,   260,   399,   261,     0,   160,
   254,   450,   262,   450,   262,   298,   255,   260,   399,   261,
     0,   160,   254,   450,   262,   450,   262,   298,   262,   450,
   255,   260,   399,   261,     0,     0,   192,   401,   254,   403,
   404,   255,     7,     0,     0,   195,   402,   254,   403,   404,
   255,     7,     0,   166,   254,   282,   262,   298,   255,     7,
     0,   166,   254,   282,   262,   298,   262,   450,   262,   298,
   255,     7,     0,   187,   254,   456,   255,     7,     0,   168,
   254,   457,   255,     7,     0,   172,   254,     5,   262,   452,
   262,   450,   255,     7,     0,   173,   254,     5,   262,   450,
   262,   457,   255,     7,     0,   174,   254,     5,   262,   452,
   262,   457,   255,     7,     0,   175,   260,   456,   261,     7,
     0,   176,   260,   456,   261,     7,     0,   182,   260,   456,
   262,   282,   262,   457,   262,   298,   261,     7,     0,   182,
   260,   456,   262,   282,   262,   457,   261,     7,     0,   177,
   254,     5,   262,     5,   262,   450,   262,   450,   255,   260,
   399,   261,     7,     0,   178,   254,     5,   262,     5,   262,
   450,   262,   450,   255,   260,   399,   261,     7,     0,   179,
   254,     5,   262,   450,   255,     7,     0,   183,   260,     5,
   262,     5,   262,   135,   457,   262,     4,   261,     7,     0,
   183,   260,     5,   262,     5,   262,   135,   457,   261,     7,
     0,   183,   260,     5,   262,     5,   261,     7,     0,   180,
   254,     5,   262,     5,   255,     7,     0,   181,   254,     5,
   262,     5,   255,     7,     0,   446,     0,   300,     0,     5,
     0,     0,   404,   405,     0,   262,   207,   457,     0,   262,
   210,   452,     0,   262,   452,     0,     0,   406,   407,     0,
   154,   450,     7,     0,   155,   450,     7,     0,   143,   298,
     7,     0,   156,   298,     7,     0,   140,   260,   399,   261,
     0,     0,   408,   409,     0,   154,   450,     7,     0,   155,
   450,     7,     0,   143,   298,     7,     0,   158,   450,     7,
     0,   159,   450,     7,     0,   140,   260,   399,   261,     0,
     0,   410,   411,     0,   161,   450,     7,     0,    88,   450,
     7,     0,   162,   298,     7,     0,    18,   450,     7,     0,
   140,   260,   399,   261,     0,     0,   412,   413,     0,   161,
   450,     7,     0,   164,   450,     7,     0,    88,   450,     7,
     0,    18,   450,     7,     0,   133,     5,     7,     0,   165,
   260,   414,   261,     0,   140,   260,   399,   261,     0,   141,
   260,   399,   261,     0,     0,   414,   260,   415,   261,     0,
     0,   415,   416,     0,    86,     5,     7,     0,   112,     5,
     7,     0,   130,   282,     7,     0,    88,   450,     7,     0,
    99,   298,     7,     0,    18,     5,     7,     0,     0,   417,
   418,     0,   260,   419,   261,     0,   447,     0,     0,   419,
   420,     0,    96,   456,     7,     0,    96,     5,   292,     7,
     0,   134,   456,   293,     7,     0,   186,     5,     7,     0,
   112,   260,   421,   261,     0,     0,   421,   260,   422,   261,
     0,   421,   447,     0,   421,   446,     0,     0,   422,   423,
     0,    96,   456,     7,     0,    75,   260,   424,   261,     0,
     0,   424,   117,   260,   425,   261,     0,   424,     5,   260,
   425,   261,     0,     0,   425,   426,     0,     0,   385,   254,
   427,   302,   255,     7,     0,    86,     5,     7,     0,     0,
   130,   428,   282,     7,     0,    81,     5,     7,     0,    83,
     5,     7,     0,     0,   429,   430,     0,   260,   431,   261,
     0,   447,     0,   446,     0,     0,   431,   432,     0,    96,
   456,     7,     0,   188,     5,     7,     0,   212,     5,     7,
     0,   190,   457,     7,     0,   140,   260,   435,   261,     0,
     0,   187,   456,   189,   456,   434,   260,   435,   261,     0,
     0,     0,   435,   436,   437,     0,   191,   254,   439,   442,
   443,   255,     7,     0,   192,   254,   439,   442,   443,   255,
     7,     0,   192,   254,   439,   442,   443,   255,   244,   239,
   258,   258,   456,     7,     0,   192,   254,     6,   262,   450,
   443,   255,     7,     0,   192,   254,     6,   262,   228,   254,
   457,   255,   443,   255,     7,     0,     0,   193,   254,   282,
   438,   262,   130,   282,   443,   255,     7,     0,   446,     0,
   194,   254,     6,   443,   255,     7,     0,   456,   441,   262,
     0,   456,   441,   440,     5,   441,   262,     0,   245,     0,
   246,     0,   243,     0,   244,     0,     0,   254,   282,   255,
     0,   197,     0,   198,   282,     0,   199,   282,     0,   201,
   260,   260,   453,   261,   260,   453,   261,   260,   453,   261,
   261,     0,   200,   282,     0,   200,   260,   298,   262,   298,
   262,   298,   261,   260,   452,   262,   452,   262,   452,   261,
     0,   202,   260,   453,   261,     0,   203,   260,   260,   453,
   261,   260,   453,   261,   261,   260,   450,   261,     0,   204,
   260,   260,   453,   261,   260,   453,   261,   260,   453,   261,
   261,   260,   450,   262,   450,   261,     0,   205,   260,   260,
   453,   261,   260,   453,   261,   260,   453,   261,   260,   453,
   261,   261,   260,   450,   262,   450,   262,   450,   261,     0,
   198,   282,   206,     5,   260,   450,   262,   450,   261,   260,
   450,   261,     0,     0,   443,   444,     0,   262,   207,   457,
     0,   262,   207,   239,   457,     0,   262,   207,   242,   457,
     0,   262,   208,   450,     0,   262,   215,     0,   262,   216,
     0,   262,   211,   450,     0,   262,   212,     5,     0,   262,
   213,   445,     0,   262,   214,   445,     0,   262,   212,   445,
     0,   262,   209,   450,     0,   262,   210,   452,     0,   262,
   196,     5,     0,   262,   218,     5,     0,   262,   217,   450,
     0,   262,    75,   452,     0,   262,   219,   450,     0,   262,
   219,   260,   453,   261,     0,   262,   220,     0,   262,   221,
     0,   262,   136,   452,     0,   262,   166,   260,   298,   262,
   298,   262,   298,   261,     0,   262,   222,   300,     0,   262,
   223,     0,   262,   223,   260,   450,   262,   450,   262,   450,
   261,     0,   262,   224,     0,   262,   224,   260,   450,   262,
   450,   262,   450,   261,     0,   262,   225,     0,   262,   225,
   260,   450,   262,   450,   262,   450,   261,     0,   262,   226,
   260,   453,   261,     0,   262,   227,     3,     0,     0,   445,
     6,     0,    13,   252,   450,     8,   450,   253,     0,    13,
   252,   450,     8,   450,     8,   450,   253,     0,    13,     5,
   130,   260,   450,     8,   450,   261,     0,    13,     5,   130,
   260,   450,     8,   450,     8,   450,   261,     0,    14,     0,
    15,   252,   450,   253,     0,    17,     0,    29,   254,   448,
   255,     7,     0,   456,   230,   452,     7,     0,   456,   230,
     6,     7,     0,   456,   230,   228,   254,   457,   255,     7,
     0,   456,   230,   458,     7,     0,   456,   230,    28,   254,
   457,   255,     7,     0,    11,   252,     6,   253,     7,     0,
    11,   252,     6,   262,   453,   253,     7,     0,    12,   252,
   456,   253,     7,     0,    12,   252,   456,   253,   254,   450,
   255,     7,     0,     0,   448,   291,     5,     0,   448,   291,
     5,   230,   450,     0,   448,   291,     5,   230,     6,     0,
    35,     0,    36,     0,    37,     0,    38,     0,    39,     0,
    40,     0,    41,     0,    42,     0,    43,     0,    44,     0,
    45,     0,    46,     0,    47,     0,    48,     0,    49,     0,
    50,     0,    51,     0,    52,     0,    53,     0,    54,     0,
   456,     0,   451,     0,   252,   450,   253,     0,   244,   450,
     0,   249,   450,     0,   450,   244,   450,     0,   450,   243,
   450,     0,   450,   245,   450,     0,   450,   246,   450,     0,
   450,   247,   450,     0,   450,   251,   450,     0,   450,   237,
   450,     0,   450,   239,   450,     0,   450,   238,   450,     0,
   450,   240,   450,     0,   450,   234,   450,     0,   450,   235,
   450,     0,   450,   233,   450,     0,   450,   232,   450,     0,
    35,   254,   450,   255,     0,    36,   254,   450,   255,     0,
    37,   254,   450,   255,     0,    38,   254,   450,   255,     0,
    39,   254,   450,   255,     0,    40,   254,   450,   255,     0,
    41,   254,   450,   255,     0,    42,   254,   450,   255,     0,
    43,   254,   450,   255,     0,    44,   254,   450,   255,     0,
    45,   254,   450,   262,   450,   255,     0,    46,   254,   450,
   255,     0,    47,   254,   450,   255,     0,    48,   254,   450,
   255,     0,    49,   254,   450,   255,     0,    50,   254,   450,
   255,     0,    51,   254,   450,   255,     0,    52,   254,   450,
   262,   450,   255,     0,    53,   254,   450,   262,   450,   255,
     0,    54,   254,   450,   262,   450,   255,     0,   450,   231,
   450,     8,   450,     0,   450,   257,     0,     4,     0,     3,
     0,    30,     0,    31,     0,    32,     0,    33,     0,    34,
     0,   456,     0,     0,   450,     0,   454,     0,   260,   453,
   261,     0,   450,     0,   454,     0,   453,   262,   450,     0,
   453,   262,   454,     0,   450,     8,   450,     0,   450,     8,
   450,     8,   450,     0,     5,   260,   261,     0,     5,   260,
   453,   261,     0,    24,   254,     5,   255,     0,    25,   254,
     5,   262,     5,   255,     0,    26,   254,   450,   262,   450,
   262,   450,   255,     0,    27,   254,   450,   262,   450,   262,
   450,   255,     0,     5,   264,   260,   450,   261,     0,   455,
   264,   260,   450,   261,     0,     5,     0,   455,     0,     6,
     0,     5,     0,   458,     0,    10,   252,   457,   253,     0,
    10,   252,   457,   262,   453,   253,     0,   229,     0,     9,
   254,   457,   262,   457,   255,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   374,   409,   448,   451,   454,   457,   460,   461,   462,   463,
   464,   465,   466,   467,   468,   470,   472,   474,   479,   488,
   491,   493,   495,   497,   499,   501,   503,   505,   507,   509,
   511,   513,   515,   517,   519,   521,   523,   525,   527,   530,
   538,   552,   555,   556,   559,   563,   568,   570,   573,   575,
   577,   580,   582,   585,   597,   604,   612,   620,   631,   640,
   649,   656,   691,   696,   707,   710,   724,   729,   732,   781,
   794,   820,   825,   840,   858,   879,   885,   897,   906,   920,
   954,   974,   978,   988,  1005,  1005,  1008,  1014,  1017,  1020,
  1033,  1036,  1039,  1043,  1063,  1107,  1109,  1113,  1116,  1133,
  1142,  1149,  1152,  1157,  1163,  1167,  1172,  1177,  1183,  1190,
  1194,  1207,  1222,  1236,  1242,  1248,  1254,  1260,  1266,  1272,
  1278,  1284,  1290,  1296,  1302,  1308,  1314,  1320,  1326,  1332,
  1339,  1345,  1347,  1356,  1360,  1366,  1440,  1474,  1483,  1495,
  1497,  1509,  1511,  1523,  1525,  1539,  1551,  1557,  1563,  1565,
  1594,  1620,  1633,  1639,  1646,  1652,  1659,  1666,  1674,  1684,
  1687,  1688,  1691,  1694,  1697,  1702,  1705,  1719,  1726,  1731,
  1736,  1740,  1747,  1752,  1757,  1762,  1768,  1772,  1777,  1780,
  1816,  1824,  1829,  1838,  1842,  1851,  1854,  1859,  1864,  1869,
  1877,  1881,  1893,  1903,  1908,  1913,  1918,  1930,  1934,  1984,
  1987,  1990,  1993,  1996,  2005,  2012,  2013,  2016,  2038,  2041,
  2051,  2055,  2063,  2070,  2079,  2082,  2102,  2119,  2139,  2146,
  2156,  2160,  2172,  2197,  2222,  2227,  2235,  2243,  2252,  2270,
  2279,  2287,  2295,  2305,  2315,  2325,  2343,  2351,  2354,  2377,
  2379,  2383,  2392,  2396,  2404,  2411,  2420,  2423,  2426,  2429,
  2434,  2452,  2499,  2516,  2520,  2525,  2530,  2535,  2549,  2569,
  2574,  2579,  2603,  2658,  2662,  2666,  2675,  2739,  2745,  2750,
  2755,  2759,  2766,  2769,  2774,  2792,  2797,  2801,  2818,  2832,
  2837,  2841,  2854,  2860,  2867,  2874,  2878,  2885,  2895,  2906,
  2923,  2995,  3007,  3011,  3046,  3049,  3052,  3096,  3103,  3106,
  3128,  3130,  3134,  3142,  3146,  3154,  3161,  3171,  3173,  3178,
  3193,  3207,  3211,  3230,  3234,  3239,  3243,  3246,  3257,  3263,
  3276,  3303,  3344,  3370,  3375,  3381,  3692,  3697,  3706,  3715,
  3724,  3729,  3732,  3770,  3787,  3811,  3816,  3823,  3828,  3831,
  3834,  3843,  3851,  3854,  3866,  3876,  3888,  3897,  3900,  3904,
  3906,  3908,  3914,  3935,  3939,  3950,  4028,  4074,  4098,  4107,
  4116,  4121,  4130,  4139,  4156,  4160,  4194,  4203,  4257,  4273,
  4276,  4277,  4278,  4279,  4280,  4281,  4282,  4286,  4309,  4331,
  4338,  4341,  4362,  4364,  4368,  4376,  4380,  4389,  4396,  4399,
  4401,  4404,  4408,  4424,  4439,  4447,  4463,  4467,  4472,  4481,
  4484,  4489,  4494,  4499,  4504,  4509,  4513,  4552,  4557,  4562,
  4572,  4584,  4588,  4593,  4604,  4613,  4622,  4648,  4655,  4661,
  4667,  4673,  4681,  4703,  4710,  4716,  4727,  4738,  4751,  4766,
  4781,  4796,  4816,  4837,  4849,  4869,  4886,  4905,  4926,  4940,
  4974,  4987,  5001,  5014,  5027,  5034,  5036,  5043,  5045,  5056,
  5068,  5078,  5086,  5099,  5112,  5126,  5136,  5146,  5160,  5174,
  5192,  5211,  5222,  5237,  5252,  5267,  5282,  5297,  5307,  5313,
  5323,  5329,  5332,  5336,  5346,  5359,  5371,  5375,  5381,  5385,
  5389,  5394,  5403,  5416,  5420,  5426,  5430,  5434,  5438,  5443,
  5452,  5464,  5467,  5473,  5477,  5481,  5485,  5494,  5509,  5512,
  5518,  5522,  5526,  5531,  5541,  5547,  5553,  5562,  5566,  5570,
  5584,  5587,  5599,  5628,  5631,  5634,  5642,  5658,  5666,  5669,
  5690,  5693,  5704,  5707,  5715,  5723,  5769,  5774,  5779,  5783,
  5786,  5788,  5793,  5800,  5804,  5808,  5813,  5819,  5825,  5838,
  5849,  5852,  5860,  5888,  5899,  5899,  5905,  5914,  5930,  5938,
  5941,  5946,  5948,  5951,  5960,  5963,  5971,  5983,  5994,  5999,
  6004,  6022,  6031,  6035,  6040,  6050,  6056,  6062,  6068,  6075,
  6083,  6089,  6094,  6099,  6106,  6120,  6142,  6145,  6146,  6147,
  6150,  6154,  6158,  6166,  6173,  6180,  6204,  6211,  6223,  6236,
  6256,  6282,  6315,  6335,  6365,  6368,  6376,  6383,  6390,  6394,
  6398,  6402,  6406,  6416,  6421,  6426,  6446,  6453,  6462,  6471,
  6480,  6487,  6495,  6499,  6508,  6512,  6516,  6524,  6530,  6535,
  6544,  6552,  6561,  6569,  6578,  6586,  6595,  6604,  6611,  6659,
  6676,  6692,  6711,  6731,  6762,  6766,  6778,  6782,  6797,  6803,
  6809,  6815,  6826,  6831,  6843,  6853,  6869,  6872,  6878,  6884,
  6895,  6897,  6898,  6899,  6900,  6901,  6902,  6903,  6904,  6905,
  6906,  6907,  6908,  6909,  6910,  6911,  6912,  6913,  6914,  6915,
  6916,  6919,  6921,  6922,  6923,  6924,  6925,  6926,  6927,  6928,
  6929,  6930,  6931,  6932,  6933,  6934,  6935,  6936,  6937,  6938,
  6939,  6940,  6941,  6942,  6943,  6944,  6945,  6946,  6947,  6948,
  6949,  6950,  6951,  6952,  6953,  6954,  6955,  6956,  6957,  6958,
  6959,  6962,  6965,  6966,  6967,  6968,  6969,  6970,  6988,  7004,
  7009,  7015,  7018,  7023,  7031,  7034,  7037,  7047,  7055,  7066,
  7082,  7104,  7119,  7157,  7165,  7175,  7185,  7195,  7199,  7204,
  7209,  7224,  7229,  7234,  7253,  7270
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
"tChangeOfValues","tTimeLegend","tFrequencyLegend","tEigenvalueLegend","tEvaluationPoints",
"tStore","tStr","tDate","tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL",
"'<'","tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'",
"'-'","'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'",
"'['","']'","'.'","'#'","'$'","tSHOW","'{'","'}'","','","'@'","'~'","Stats",
"@1","ProblemDefinitions","@2","ProblemDefinition","Interactive","@3","Groups",
"@4","Group","@5","MovingBand2DGroup","@6","@7","ReducedGroupRHS","@8","@9",
"GroupRHS","FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup",
"ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension",
"MultipleIndex","Index","Functions","Function","DefineFunctions","Expression",
"@10","ListOfExpression","RecursiveListOfExpression","WholeQuantityExpression",
"@11","WholeQuantity","@12","@13","WholeQuantity_Single","@14","@15","@16","@17",
"ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction","JacobianMethods",
"JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase","JacobianCaseTerm",
"IntegrationMethods","IntegrationMethod","IntegrationMethodTerm","IntegrationCases",
"IntegrationCase","IntegrationCaseTerm","QuadratureCases","QuadratureCase","QuadratureCaseTerm",
"Constraints","BracedConstraint","Constraint","ConstraintTerm","ConstraintCases",
"ConstraintCase","ConstraintCaseTerm","FunctionSpaces","BracedFunctionSpace",
"FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction","BasisFunctionTerm",
"OptionalParametersForBasisFunction","@18","@19","SubSpaces","SubSpace","SubSpaceTerm",
"ListOfBasisFunction","RecursiveListOfBasisFunction","ListOfBasisFunctionCoef",
"RecursiveListOfBasisFunctionCoef","GlobalQuantities","GlobalQuantity","GlobalQuantityTerm",
"ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm","Formulations","BracedFormulation",
"Formulation","FormulationTerm","DefineQuantities","DefineQuantity","DefineQuantityTerm",
"@20","@21","@22","IndexInFunctionSpace","Equations","EquationTerm","GlobalEquation",
"GlobalEquationTerm","GlobalEquationTermTerm","GlobalEquationTermTermTerm","LocalTerm",
"LocalTermTerm","@23","@24","GlobalTerm","GlobalTermTerm","@25","@26","TermOperator",
"Quantity_Def","Resolutions","BracedResolution","Resolution","ResolutionTerm",
"@27","DefineSystems","DefineSystem","DefineSystemTerm","ListOfFormulation",
"RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem","Operation",
"OperationTerm","@28","@29","PrintOperation","PrintOperationOptions","PrintOperationOption",
"TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark","TimeLoopNewmarkTerm",
"IterativeLoop","IterativeLoopTerm","IterativeTimeReduction","IterativeTimeReductionTerm",
"ChangeOfStates","ChangeOfState","ChangeOfStateTerm","PostProcessings","BracedPostProcessing",
"PostProcessing","PostProcessingTerm","PostQuantities","PostQuantity","PostQuantityTerm",
"SubPostQuantities","SubPostQuantity","SubPostQuantityTerm","@30","@31","PostOperations",
"BracedPostOperation","PostOperation","PostOperationTerm","SeparatePostOperation",
"@32","PostSubOperations","@33","PostSubOperation","@34","PostQuantitiesToPrint",
"Combination","PostQuantitySupport","PrintSubType","PrintOptions","PrintOption",
"ParsedStrings","Loop","Affectation","DefineConstants","NameForFunction","FExpr",
"OneFExpr","ListOfFExpr","RecursiveListOfFExpr","MultiFExpr","StringIndex","String__Index",
"CharExpr","StrCat", NULL
};
#endif

static const short yyr1[] = {     0,
   266,   265,   267,   268,   267,   269,   269,   269,   269,   269,
   269,   269,   269,   269,   269,   269,   269,   269,   269,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   271,
   270,   272,   273,   272,   274,   274,   275,   274,   274,   274,
   274,   274,   274,   277,   278,   276,   280,   281,   279,   279,
   282,   282,   283,   283,   284,   284,   285,   285,   285,   286,
   287,   287,   288,   288,   288,   289,   289,   289,   289,   289,
   289,   290,   290,   290,   291,   291,   292,   293,   293,   294,
   295,   295,   296,   296,   296,   296,   296,   297,   297,   298,
   298,   299,   298,   300,   300,   301,   301,   303,   302,   304,
   305,   306,   304,   304,   304,   304,   304,   304,   304,   304,
   304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
   304,   304,   304,   307,   307,   307,   307,   307,   307,   308,
   307,   309,   307,   310,   307,   307,   307,   307,   311,   307,
   307,   307,   307,   307,   307,   307,   307,   307,   307,   312,
   312,   312,   313,   313,   314,   314,   314,   315,   315,   316,
   316,   317,   317,   318,   318,   319,   319,   320,   320,   320,
   321,   321,   322,   322,   323,   323,   323,   324,   324,   325,
   325,   326,   326,   326,   327,   327,   328,   328,   329,   329,
   329,   329,   329,   329,   330,   330,   330,   331,   331,   332,
   332,   333,   333,   333,   333,   333,   334,   334,   334,   335,
   335,   336,   336,   336,   336,   336,   336,   336,   336,   336,
   336,   336,   336,   336,   336,   336,   337,   337,   338,   338,
   338,   339,   339,   340,   340,   340,   340,   340,   340,   340,
   341,   341,   342,   342,   343,   343,   343,   343,   343,   343,
   343,   343,   343,   344,   345,   346,   344,   347,   347,   348,
   348,   349,   349,   349,   350,   350,   351,   351,   352,   352,
   353,   353,   354,   354,   355,   355,   356,   356,   356,   357,
   357,   358,   358,   359,   359,   359,   359,   360,   360,   361,
   361,   361,   362,   362,   363,   363,   363,   363,   363,   364,
   364,   364,   365,   365,   366,   366,   366,   366,   366,   367,
   366,   368,   366,   366,   369,   366,   366,   366,   366,   366,
   366,   370,   370,   371,   371,   371,   371,   372,   372,   372,
   372,   373,   373,   374,   374,   374,   375,   375,   376,   376,
   376,   376,   377,   377,   379,   380,   378,   378,   378,   378,
   378,   378,   378,   381,   381,   382,   383,   384,   382,   385,
   385,   385,   385,   385,   385,   385,   385,   386,   386,   387,
   387,   388,   388,   388,   389,   389,   390,   390,   390,   391,
   390,   390,   392,   392,   392,   393,   393,   394,   394,   394,
   394,   394,   394,   394,   394,   394,   395,   395,   396,   396,
   397,   397,   398,   398,   399,   399,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   401,   400,   402,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   403,   403,
   404,   404,   405,   405,   405,   406,   406,   407,   407,   407,
   407,   407,   408,   408,   409,   409,   409,   409,   409,   409,
   410,   410,   411,   411,   411,   411,   411,   412,   412,   413,
   413,   413,   413,   413,   413,   413,   413,   414,   414,   415,
   415,   416,   416,   416,   416,   416,   416,   417,   417,   418,
   418,   419,   419,   420,   420,   420,   420,   420,   421,   421,
   421,   421,   422,   422,   423,   423,   424,   424,   424,   425,
   425,   427,   426,   426,   428,   426,   426,   426,   429,   429,
   430,   430,   430,   431,   431,   432,   432,   432,   432,   432,
   434,   433,   435,   436,   435,   437,   437,   437,   437,   437,
   438,   437,   437,   437,   439,   439,   440,   440,   440,   440,
   441,   441,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   443,   443,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   445,   445,   446,
   446,   446,   446,   446,   446,   446,   447,   447,   447,   447,
   447,   447,   447,   447,   447,   447,   448,   448,   448,   448,
   449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
   449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
   449,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   451,   451,   451,   451,   451,   451,   451,   451,   452,
   452,   452,   452,   453,   453,   453,   453,   454,   454,   454,
   454,   454,   454,   454,   454,   455,   455,   456,   456,   457,
   457,   457,   457,   457,   457,   458
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
     6,     2,     2,     2,     2,     3,     2,     3,     3,     3,
     2,     3,     1,     3,     0,     3,     6,     0,     4,     0,
     2,     3,     4,     0,     4,     0,     2,     3,     3,     4,
     0,     4,     0,     2,     3,     3,     4,     0,     4,     0,
     2,     3,     3,     4,     0,     4,     0,     2,     3,     3,
     3,     3,     3,     3,     0,     1,     2,     3,     1,     0,
     2,     3,     4,     3,     4,     5,     0,     4,     2,     0,
     2,     3,     3,     3,     3,     3,     3,     7,     3,     3,
     3,     3,     3,     7,     7,     7,     0,     2,     3,     1,
     1,     0,     2,     3,     4,     3,     4,     4,     4,     4,
     0,     4,     0,     2,     3,     3,     4,     4,     7,     3,
     3,     3,     3,     0,     0,     0,    18,     0,     4,     0,
     2,     3,     3,     3,     1,     3,     0,     3,     1,     3,
     0,     3,     0,     4,     0,     2,     3,     3,     3,     0,
     4,     0,     2,     3,     3,     3,     4,     0,     2,     3,
     1,     1,     0,     2,     3,     4,     3,     4,     4,     0,
     4,     2,     0,     2,     3,     3,     3,     3,     3,     0,
     5,     0,     7,     3,     0,     5,     3,     3,     3,     3,
     3,     0,     3,     0,     2,     2,     2,     4,     4,     4,
     4,     0,     2,     3,     3,     3,     0,     2,     3,     3,
     3,     3,     0,     2,     0,     0,     9,     3,     3,     3,
     2,     3,     5,     0,     2,     3,     0,     0,     9,     0,
     1,     1,     1,     1,     1,     1,     1,     4,     3,     0,
     2,     3,     1,     1,     0,     2,     3,     4,     4,     0,
     5,     1,     0,     4,     2,     0,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     1,     2,     3,     0,     3,
     1,     3,     0,     3,     0,     2,     3,     3,     4,     4,
     4,     4,     5,     5,     2,     7,    11,     7,    13,    11,
     9,     7,     7,     7,     9,     9,     9,    11,    11,    17,
    13,    15,    11,    13,     0,     7,     0,     7,     7,    11,
     5,     5,     9,     9,     9,     5,     5,    11,     9,    14,
    14,     7,    12,    10,     7,     7,     7,     1,     1,     1,
     0,     2,     3,     3,     2,     0,     2,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
     0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
     3,     3,     3,     3,     4,     4,     4,     0,     4,     0,
     2,     3,     3,     3,     3,     3,     3,     0,     2,     3,
     1,     0,     2,     3,     4,     4,     3,     4,     0,     4,
     2,     2,     0,     2,     3,     4,     0,     5,     5,     0,
     2,     0,     6,     3,     0,     4,     3,     3,     0,     2,
     3,     1,     1,     0,     2,     3,     3,     3,     3,     4,
     0,     8,     0,     0,     3,     7,     7,    12,     8,    11,
     0,    10,     1,     6,     3,     6,     1,     1,     1,     1,
     0,     3,     1,     2,     2,    12,     2,    15,     4,    12,
    17,    22,    12,     0,     2,     3,     4,     4,     3,     2,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     5,     2,     2,     3,     9,     3,     2,
     9,     2,     9,     2,     9,     5,     3,     0,     2,     6,
     8,     8,    10,     1,     4,     1,     5,     4,     4,     7,
     4,     7,     5,     7,     5,     8,     0,     3,     5,     5,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     3,     2,     2,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
     4,     4,     4,     4,     4,     4,     4,     4,     4,     6,
     4,     4,     4,     4,     4,     4,     6,     6,     6,     5,
     2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
     1,     1,     3,     1,     1,     3,     3,     3,     5,     3,
     4,     4,     6,     8,     8,     5,     5,     1,     1,     1,
     1,     1,     4,     6,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   738,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   739,     0,     0,     0,
     0,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   741,   740,     0,     0,   745,    18,   742,   647,    42,
   205,   168,   181,   237,    91,   298,   380,   518,   549,     0,
     0,   634,     0,   636,     0,     0,     0,     0,    41,   573,
     0,   720,     0,     0,     0,    26,    25,    24,    22,    23,
    21,    39,    29,    31,    32,    33,    34,    30,    35,    36,
    37,    38,     0,     0,    85,    43,     0,   206,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   713,   712,   738,     0,     0,
     0,     0,     0,     0,   714,   715,   716,   717,   718,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   721,   672,     0,   722,   719,     0,
     0,     0,     0,     0,     0,     0,     0,    86,     0,     6,
     0,   210,     8,   207,   209,   170,     9,   183,    10,   242,
    11,   238,   241,   240,   738,     0,     7,    92,    97,    96,
   303,    12,   299,   302,   301,   385,    13,   381,   384,   383,
   522,    14,   519,   521,   554,    15,   550,   553,   552,   561,
     0,     0,     0,     0,   581,     0,     0,   738,    63,     0,
    61,   571,     0,    88,   594,     0,     0,   639,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   674,   675,     0,   724,     0,   725,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   711,   638,   641,   736,
   643,     0,   645,     0,     0,   743,     0,   637,   648,   738,
     0,    44,    50,    53,    52,     0,     0,     0,     0,     0,
     0,    98,     0,     0,     0,     0,     0,     0,     0,   635,
   583,     0,     0,     0,     0,     0,     0,     0,     0,   594,
     0,     0,     0,   594,    76,   738,    73,     0,    60,    71,
    80,     0,    57,     0,    62,     0,   737,   730,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   673,   723,     0,   728,     0,
   689,   688,   686,   687,   682,   684,   683,   685,   677,   676,
   678,   679,   680,   681,     0,     0,     0,     0,     0,     0,
     0,     0,    82,   720,     0,     0,     0,     0,     0,   208,
   211,     0,     0,   169,   171,     0,   102,     0,   182,   184,
     0,     0,     0,     0,     0,     0,   239,   243,     0,     0,
    85,     0,     0,     0,     0,   300,   304,     0,     0,   390,
   382,   386,   392,     0,     0,     0,     0,   520,   523,     0,
     0,     0,     0,     0,   551,   555,   563,     0,     0,   584,
   585,   102,   587,     0,     0,     0,     0,     0,     0,     0,
   579,   580,   577,   578,   575,     0,     0,   594,     0,     0,
     0,    85,     0,     0,     0,    89,     0,     0,   595,   731,
   732,     0,     0,     0,     0,   690,   691,   692,   693,   694,
   695,   696,   697,   698,   699,     0,   701,   702,   703,   704,
   705,   706,     0,     0,     0,     0,   726,   727,     0,     0,
   644,     0,   746,   744,   650,   649,     0,     0,    47,     0,
    85,   738,     0,     0,     0,     0,   217,     0,     0,   174,
     0,   188,     0,     0,     0,   108,     0,   290,     0,   738,
     0,   251,   268,   283,   102,     0,     0,     0,     0,   738,
     0,   310,   334,   738,     0,   393,     0,   738,     0,   529,
    88,     0,     0,   563,     0,     0,     0,   564,     0,     0,
   630,     0,     0,     0,     0,     0,     0,     0,     0,   582,
   581,     0,     0,     0,   713,    78,    81,    72,     0,    77,
     0,    66,    58,    65,   574,   720,   720,     0,     0,     0,
     0,     0,   720,     0,   628,   628,   628,   600,   601,     0,
     0,     0,   615,   616,   104,   620,   622,   624,     0,     0,
     0,     0,     0,   642,     0,     0,     0,     0,   640,   729,
   710,   646,    90,     0,     0,    64,     0,     0,     0,    45,
     0,     0,   217,     0,   214,   212,     0,     0,     0,   172,
     0,     0,     0,   186,   103,     0,   185,     0,   246,     0,
   244,     0,     0,     0,     0,   102,    93,    99,   307,     0,
   305,     0,     0,     0,   387,     0,   415,     0,   524,     0,
     0,   527,   556,   564,   557,   559,   558,   562,     0,     0,
     0,     0,   102,     0,   589,     0,     0,     0,   566,     0,
     0,     0,   567,     0,     0,     0,    74,   594,    85,   612,
   617,   102,   609,     0,     0,   596,   599,   607,   608,   602,
   603,   606,   604,   605,   611,   610,     0,   613,   102,   619,
     0,     0,     0,     0,   627,   733,     0,     0,   700,   707,
   708,   709,    87,     0,    46,    49,    83,    51,     0,     0,
   220,   215,   219,   213,   176,   173,   190,   187,     0,     0,
   738,   651,   652,   653,   654,   655,   656,   657,   658,   659,
   660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
   670,     0,   149,     0,     0,     0,     0,   140,   142,     0,
     0,     0,     0,     0,     0,     0,     0,   109,   110,   138,
     0,   135,   719,   292,   250,   245,   253,   247,   270,   248,
   285,   249,    94,     0,   306,   313,   308,   312,     0,     0,
     0,     0,   309,   335,   337,   336,   388,   396,   389,   395,
     0,   525,   533,   528,   532,   531,   526,   560,   565,     0,
   632,   631,     0,     0,     0,     0,     0,     0,   576,   594,
   569,     0,    79,    75,     0,     0,     0,     0,   597,   598,
   629,     0,   106,     0,     0,     0,     0,     0,     0,     0,
    48,     0,    54,   216,     0,     0,     0,   100,   101,   137,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
   131,   133,     0,   157,   155,   152,   154,   153,     0,   738,
     0,   111,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   139,   165,     0,     0,     0,     0,    95,     0,   353,
   353,   364,   342,     0,     0,     0,   102,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   445,   447,
   391,   416,   468,     0,     0,     0,   102,     0,     0,     0,
     0,     0,     0,     0,    59,    70,     0,     0,   102,   614,
   105,   102,     0,     0,     0,   626,   734,   735,     0,     0,
     0,     0,     0,     0,   102,   102,   102,   102,     0,     0,
     0,   102,   218,   221,     0,     0,   175,   177,     0,     0,
     0,   189,   191,     0,   108,     0,     0,     0,     0,   108,
   108,     0,   134,   158,     0,   379,     0,   130,   129,   126,
   127,   128,   122,   124,   123,   125,   118,   119,   114,   117,
   120,   115,   121,   156,   159,   161,     0,   163,     0,     0,
   136,     0,     0,     0,     0,   291,   293,     0,     0,     0,
     0,   104,   104,     0,     0,   252,   254,     0,     0,     0,
   269,   271,     0,     0,     0,   284,   286,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   720,   325,   311,   314,
   370,   370,   370,     0,     0,     0,     0,     0,   720,     0,
     0,     0,   394,   397,   406,     0,     0,   102,   102,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   425,     0,
   476,     0,   483,     0,   491,   498,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   530,   534,
   633,     0,     0,     0,     0,     0,     0,     0,     0,   572,
    88,    68,     0,   107,     0,     0,     0,    84,     0,     0,
     0,     0,     0,   102,     0,   102,     0,     0,     0,     0,
     0,     0,   102,     0,     0,     0,   165,   195,     0,     0,
   147,     0,   148,     0,   144,     0,     0,     0,   108,   378,
     0,   160,   162,     0,     0,     0,     0,     0,     0,    88,
     0,     0,   264,     0,     0,     0,     0,     0,     0,   279,
   281,     0,   275,   277,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   738,   320,     0,     0,     0,
     0,   108,     0,     0,     0,     0,   371,   372,   373,   374,
   375,   376,   377,     0,     0,   338,   354,     0,   339,     0,
   340,   365,     0,     0,     0,   347,   341,   343,     0,     0,
   409,     0,    88,     0,     0,     0,   413,     0,   411,     0,
     0,   417,     0,     0,   418,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   104,   104,
   537,     0,     0,     0,     0,     0,     0,     0,   570,     0,
    69,   102,     0,     0,     0,     0,   223,   224,   229,   230,
     0,   233,     0,   232,   226,   225,    85,   227,   222,     0,
   231,   179,   178,     0,     0,   192,   193,     0,     0,   108,
     0,   141,     0,     0,   112,   164,     0,   166,   294,   295,
   296,     0,   255,   256,     0,     0,     0,    85,   260,   261,
   262,   263,   272,    85,   274,    85,   273,   288,   287,   289,
   330,   328,   329,   318,   316,   317,   315,     0,   332,   324,
   331,   327,   319,     0,     0,     0,     0,     0,     0,   361,
   355,     0,   367,     0,     0,     0,   399,   398,    85,   400,
   407,   401,   404,   405,    85,   402,   403,     0,     0,     0,
   102,     0,     0,     0,     0,     0,   102,     0,     0,     0,
   102,     0,     0,   102,   419,   477,     0,     0,   102,     0,
     0,     0,     0,   420,   484,     0,     0,     0,     0,     0,
   102,   421,   492,     0,     0,     0,     0,     0,     0,     0,
     0,   422,   499,   102,     0,   102,   720,   720,   720,     0,
   720,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   470,   469,   471,   471,     0,   535,     0,   720,     0,
     0,     0,     0,   568,     0,     0,     0,     0,    55,   102,
   102,     0,   102,   180,   197,   194,     0,   116,     0,     0,
     0,   151,     0,     0,   297,   257,     0,   258,     0,   280,
     0,   276,     0,   322,     0,     0,     0,   359,   360,   362,
     0,   358,   108,   366,   108,   344,   345,     0,     0,     0,
     0,   346,   348,   408,     0,   412,     0,   423,   415,   424,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   415,
     0,     0,     0,     0,     0,   415,     0,     0,     0,     0,
     0,     0,     0,     0,   415,     0,     0,     0,     0,     0,
   415,   415,     0,     0,   508,     0,   452,     0,     0,     0,
     0,     0,     0,   456,   457,     0,     0,     0,     0,     0,
     0,     0,   451,     0,     0,     0,     0,   536,     0,     0,
     0,     0,     0,     0,   618,   621,   623,   625,     0,     0,
     0,     0,     0,     0,   150,     0,     0,   143,   113,     0,
     0,     0,   282,   278,   332,     0,   321,   326,     0,   356,
   368,     0,     0,     0,     0,   410,   414,     0,     0,   720,
     0,   720,     0,     0,     0,     0,   102,     0,   480,   478,
   479,   481,   102,     0,   487,   485,   486,   488,   489,   102,
   496,   494,     0,   493,   495,   503,   502,   504,     0,     0,
   500,   501,     0,     0,     0,   102,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   720,   472,     0,   540,   540,     0,   720,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   196,   198,     0,     0,   167,     0,     0,     0,
   333,   363,     0,     0,   349,   350,   351,   352,   426,   428,
     0,     0,     0,     0,     0,   434,     0,     0,   482,     0,
   490,     0,   497,   506,   507,   510,   505,   449,     0,     0,
   432,   433,     0,     0,     0,     0,     0,   462,   466,   467,
     0,   465,     0,   446,     0,   720,   475,   448,   370,   370,
   593,     0,   586,   590,     0,     0,     0,   236,   235,   228,
   234,     0,     0,     0,     0,     0,     0,     0,   146,     0,
   259,   323,   108,     0,     0,     0,     0,     0,     0,     0,
     0,   102,     0,     0,     0,     0,   102,     0,   102,     0,
     0,     0,     0,     0,     0,   102,     0,   473,   474,     0,
     0,     0,   545,   539,     0,   541,   538,   720,     0,     0,
     0,   199,   200,   201,   202,   203,   204,     0,     0,     0,
     0,   415,   436,   437,     0,     0,     0,   435,     0,     0,
   415,     0,     0,     0,     0,   102,     0,     0,   509,   511,
     0,   431,     0,   453,   454,   455,     0,     0,   459,     0,
     0,     0,     0,     0,     0,     0,   542,     0,     0,     0,
     0,   145,     0,     0,     0,     0,     0,     0,   720,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   102,     0,     0,     0,   464,     0,   547,   548,   544,
     0,   108,   588,     0,     0,     0,   265,   357,   369,   427,
   438,   439,     0,   415,     0,   443,   415,   517,   512,   515,
   516,   513,   514,   450,   430,     0,   415,   415,   458,     0,
   546,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   463,     0,   591,     0,    56,     0,     0,
   441,   415,   444,   429,     0,     0,   543,     0,     0,     0,
     0,   460,   461,     0,   266,     0,   442,     0,     0,     0,
     0,     0,   440,   592,    88,     0,     0,   267,     0,     0,
     0
};

static const short yydefgoto[] = {  2029,
     1,     2,     3,    22,    23,    24,   106,   181,   302,   645,
   303,  1010,  1649,   231,   485,   719,   232,   233,   603,   866,
   998,   339,   482,   340,   531,   179,   401,   345,   402,   112,
   198,   431,   545,   546,  1513,   874,   665,   666,   808,  1047,
  1543,   809,   897,   898,  1380,   892,   932,  1069,  1071,   109,
   308,   415,   659,   886,  1028,   110,   309,   420,   661,   887,
  1033,  1375,  1654,  1754,   107,   184,   307,   411,   654,   885,
  1024,   111,   192,   310,   428,   672,   935,  1087,  1397,  1986,
  2019,   673,   936,  1092,  1245,  1406,  1242,  1404,   674,   937,
  1097,   668,   934,  1077,   113,   203,   313,   437,   682,   939,
  1110,  1419,  1665,  1262,  1556,   683,   834,  1114,  1288,  1436,
  1573,  1111,  1277,  1563,  1763,  1113,  1282,  1565,  1764,  1278,
   810,   114,   208,   314,   442,   567,   686,   944,  1124,  1292,
  1439,  1298,  1445,   841,   982,  1165,  1166,  1514,  1634,  1732,
  1315,  1466,  1317,  1475,  1319,  1483,  1320,  1493,  1713,  1846,
  1900,   115,   213,   315,   449,   690,   984,  1170,  1516,  1809,
  1866,  1952,  1916,   116,   217,   316,   456,    25,   317,   578,
   699,    79,   342,   224,   476,   332,   330,   346,   489,   732,
   983,    26,   105,   811,   268,   166,   167,   269,   270,    27,
   169,    57,    58
};

static const short yypact[] = {-32768,
-32768,    82,  2912,  -250,  -212,  -129,   595,    88,   994,    93,
   -44,   -93,   -47,   -17,    23,    42,    49,    57,    92,   169,
    19,-32768,-32768,   841,-32768,-32768,     6,   146,   174,   259,
   337,   379,-32768,   430,   435,   458,   478,   503,-32768,   518,
-32768,   533,   564,   566,   569,   581,   594,   614,   617,   657,
   677,-32768,-32768,   258,   268,-32768,-32768,-32768,-32768,-32768,
   798,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   349,
    71,-32768,   462,-32768,   482,   488,   506,   519,-32768,-32768,
   511,  1989,  3971,   117,   523,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,    93,    93,  -119,   521,   172,-32768,   -29,   292,
    76,   333,   344,   738,   197,   819,   337,   673,  3971,  3971,
   337,   358,   112,   817,  3971,-32768,-32768,   -66,   803,   586,
   591,   593,   605,   632,-32768,-32768,-32768,-32768,-32768,   636,
   646,   655,   672,   681,   689,   693,   697,   719,   722,   730,
   734,   739,   742,   746,   758,   764,   769,   771,   775,   801,
  3971,  3971,  3971,  3800,  4070,-32768,   828,-32768,-32768,   836,
  4868,   864,  3800,    73,   669,   131,  1024,-32768,  1038,-32768,
  1496,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -157,   812,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   792,  4091,  3342,  1536,   814,   795,  1536,   -36,-32768,    27,
-32768,-32768,   820,   816,-32768,  4899,   608,-32768,  1073,  1078,
  3971,  3971,    93,  3971,  3971,  3971,  3971,  3971,  3971,  3971,
  3971,  3971,  3971,  3971,  3971,  3971,  3971,  3971,  3971,  3971,
  3971,  3971,  3971,    93,   194,   194,  5333,  4070,   296,-32768,
  3971,  3971,  3971,  3971,  3971,  3971,  3971,  3971,  3971,  3971,
  3971,  3971,  3971,  3971,  3971,  3971,-32768,-32768,-32768,-32768,
-32768,   165,-32768,  3971,    93,-32768,  3800,-32768,   855,    21,
   844,-32768,-32768,-32768,-32768,   505,    10,   278,   111,   709,
    78,-32768,   678,   298,   974,    35,   830,  3971,  3971,-32768,
-32768,   112,   112,    15,   850,   856,   859,   862,   869,-32768,
   112,   494,  3852,-32768,  1096,   335,-32768,  3800,-32768,-32768,
-32768,   871,-32768,   882,-32768,    18,-32768,-32768,   345,   877,
   886,  3878,  4049,   895,  5360,  5387,  5414,  5441,  5468,  5495,
  5522,  5549,  5576,  5603,  4175,  5630,  5657,  5684,  5711,  5738,
  5765,  4196,  4217,  4238,   899,-32768,-32768,  3800,  4112,  4133,
  2089,  2396,  1427,  1427,  1135,  1135,  1135,  1135,   286,   286,
   194,   194,   194,   194,  1142,  5792,   901,   166,  3904,    50,
   927,   928,-32768,  1839,   933,  3971,    26,  1162,   337,-32768,
-32768,   909,  1165,-32768,-32768,   913,   101,  1169,-32768,-32768,
   915,  1172,  1173,   920,   924,   925,-32768,-32768,   963,   941,
   150,  1192,  1193,   939,   945,-32768,-32768,  1205,   957,-32768,
-32768,-32768,-32768,  1213,   962,   337,  1218,-32768,-32768,   337,
   964,  1220,    93,  1222,-32768,-32768,-32768,  4154,  3951,  1022,
-32768,   101,-32768,   971,  3800,   972,   973,   976,   161,   979,
-32768,-32768,-32768,-32768,-32768,  1224,   983,  6359,   184,  4023,
   978,   420,   454,  1110,    14,-32768,  1236,  4033,-32768,-32768,
-32768,  1244,  3971,  3971,  1247,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  3971,-32768,-32768,-32768,-32768,
-32768,-32768,  3971,  3971,  3971,  1254,  4070,-32768,  3971,  3971,
-32768,  1255,-32768,-32768,-32768,  6359,  1002,  3971,-32768,   128,
   193,   190,  1258,   128,  5819,  1006,-32768,  1260,    16,-32768,
  1261,-32768,  1015,  1029,  1275,-32768,  1283,-32768,  1284,   359,
  1286,-32768,-32768,-32768,   101,  1064,  1288,  1291,  1292,   359,
  1294,-32768,-32768,   359,  1295,-32768,  1045,   359,  1299,-32768,
   816,  1300,  1306,-32768,  1311,  1312,  1318,  1066,  3971,  3971,
-32768,  1326,  1068,  3800,   535,  3800,  3800,  3800,  1338,-32768,
   814,    93,   307,     1,  1324,  6359,-32768,-32768,    47,-32768,
   112,-32768,-32768,-32768,-32768,  2107,  2107,  1086,  1349,   136,
  3971,  3971,  2107,  3971,  1351,-32768,-32768,-32768,-32768,  3971,
  1352,  2436,-32768,-32768,  1099,  1103,  1105,  1109,  1111,  1367,
  1117,  4259,  4280,-32768,  5846,  5873,  5900,  5927,-32768,  6359,
  6359,-32768,-32768,  4930,   128,-32768,  1366,  1369,  1378,-32768,
  1384,  1144,-32768,   220,-32768,-32768,  1128,  1430,   560,-32768,
   589,  3971,  1434,-32768,-32768,  1712,-32768,   601,-32768,  1437,
-32768,   613,   616,   628,  1439,   101,-32768,-32768,-32768,  1440,
-32768,   227,   175,  1441,-32768,   502,-32768,  1442,-32768,   870,
  1446,-32768,-32768,  1184,-32768,-32768,-32768,-32768,   841,   969,
  5954,  1194,   101,   641,-32768,   643,   668,   688,-32768,  1195,
  1201,  1451,-32768,  1221,  3971,    67,-32768,-32768,   308,-32768,
-32768,   101,-32768,    93,    93,-32768,  6359,  6359,-32768,  6359,
-32768,  1453,  1453,  1453,  6359,-32768,  3800,  6359,   101,-32768,
  3971,  3971,  3971,  3800,-32768,-32768,  3971,  3971,-32768,-32768,
-32768,-32768,-32768,  1454,-32768,-32768,  1202,-32768,  1398,   509,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  5981,  1210,
   577,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1243,-32768,  1250,  1262,  1263,  1265,-32768,-32768,  1462,
  1712,  1712,  1712,  1712,  1509,    68,  1515,  3680,   -87,  1267,
  1267,-32768,  1268,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1507,-32768,-32768,-32768,-32768,  1264,  1266,
  1269,  1270,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   326,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  3971,
-32768,-32768,  3971,  1273,  1276,  1277,  1279,  1296,-32768,-32768,
-32768,  1303,  6359,-32768,   374,  1272,    61,  1302,-32768,-32768,
-32768,   694,-32768,   696,  4301,  4322,  4343,   702,  6008,  6035,
-32768,  3971,-32768,-32768,  1065,     5,   295,-32768,-32768,-32768,
  1297,  1274,  1297,  1712,  1518,  1553,  1317,  1321,  1323,  1314,
  1314,  1314,  3627,-32768,-32768,-32768,-32768,-32768,   337,     4,
  1315,-32768,  1712,  1712,  1712,  1712,  1712,  1712,  1712,  1712,
  1712,  1712,  1712,  1712,  1712,  1712,  1712,  1712,  1574,  3971,
  1438,-32768,  1319,   894,  1325,   522,   126,-32768,  1467,-32768,
-32768,-32768,-32768,   531,    44,   137,   198,  1329,  1330,  1334,
  1336,  1339,  1341,  1344,  1346,  1571,   230,   281,   314,  1332,
  1348,  1350,  1354,  1355,  1356,  1357,  1359,  1360,  1345,  1358,
  1362,  1370,  1371,  1372,  1373,  1382,  1386,  1375,-32768,-32768,
-32768,-32768,-32768,   107,  4961,  4364,   101,  3800,  3800,  3800,
  3800,   423,  1389,  1599,-32768,-32768,   337,    27,   101,-32768,
-32768,   101,  3971,  3971,  3971,-32768,-32768,-32768,  4992,  1376,
   112,   112,   112,   112,   206,   215,   101,   101,  1388,  1612,
  1615,   293,-32768,-32768,   110,  1645,-32768,-32768,  1393,  1650,
  1651,-32768,-32768,  1402,-32768,  1413,  2026,  1415,  1421,-32768,
-32768,  1423,-32768,-32768,  1418,-32768,  1712,  6409,  3743,  2205,
  2205,  2205,   650,   650,   650,   650,   619,   619,  1314,  1314,
  1314,  1314,  1314,-32768,-32768,-32768,  1428,  3680,   424,  3748,
-32768,  1680,   116,  1681,   337,-32768,-32768,  1683,  1684,  1686,
  1432,  1099,  1099,   112,   112,-32768,-32768,  1692,    29,    40,
-32768,-32768,  1694,   337,  1695,-32768,-32768,  1696,  1697,  1698,
   129,   337,  1700,  1704,  1705,   112,  2107,-32768,-32768,-32768,
  1994,  2096,  1308,   304,  1706,   337,    41,    93,  2107,    93,
    64,  1708,-32768,-32768,-32768,   337,  1702,   101,   101,  1707,
  1713,  1715,  1717,  1718,  1719,  1720,  1721,  1724,-32768,  3971,
-32768,  3971,-32768,  3971,-32768,-32768,   112,    93,  1725,  1726,
  1766,  1770,  1771,  1772,   337,   337,  1773,  1779,  1785,  1791,
  1792,   337,  1793,   337,  1549,  1550,  1546,   337,-32768,-32768,
-32768,  3971,  1547,   718,   720,   744,   753,  1800,   337,-32768,
   816,-32768,  1557,-32768,  4385,  4406,  4427,-32768,  1563,  1820,
  1823,  1824,  1825,   101,  1826,   101,  1829,  1830,  1831,  1629,
  1832,  1833,   101,  1840,  1842,  1844,  1319,-32768,  1845,  1846,
-32768,  1584,-32768,  1712,-32768,  1594,  1600,  1595,-32768,-32768,
  1104,-32768,-32768,  1712,  1602,   755,  1851,  1852,  1853,   816,
  1854,    28,  1634,  1857,  1889,  1890,  1891,  1892,  1893,-32768,
-32768,  1896,-32768,-32768,  1897,  1898,  1900,  1904,  1905,  1908,
  1909,  1914,  1915,  1919,  1921,   578,-32768,  1922,  1923,  1926,
  1927,-32768,  1930,  1933,  1934,  1687,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   112,  1935,-32768,-32768,  1689,-32768,   112,
-32768,-32768,  1703,  1945,  1946,-32768,-32768,-32768,  1947,  1951,
-32768,  1952,   816,  1953,  1955,  1956,-32768,  1958,-32768,  1961,
  1685,-32768,  1716,  1723,-32768,  1690,  1714,  1722,  1727,  1728,
  1729,  1737,  1738,  4448,   831,  4469,  1028,  4490,   300,   804,
  1739,  1731,  1740,  1741,  1742,  1743,  1744,  1745,  1747,  1748,
  1749,  1756,  1782,  1783,  1786,  1798,  1799,  1732,    72,    72,
-32768,  1967,  5023,  1795,  1808,  1810,  1809,  1812,-32768,  1968,
-32768,   101,  3971,  3971,  3971,    27,-32768,-32768,-32768,-32768,
  1811,-32768,  1818,-32768,-32768,-32768,  1822,-32768,-32768,  1828,
-32768,-32768,-32768,  1972,   776,-32768,-32768,   112,  6386,-32768,
  3971,-32768,  1978,  1733,-32768,  3680,   112,-32768,-32768,-32768,
-32768,  1975,-32768,-32768,  1976,  1962,  2075,  1822,-32768,-32768,
-32768,-32768,-32768,   777,-32768,   780,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1834,  1838,-32768,
-32768,-32768,-32768,  1843,  2078,  2080,  2086,  2091,  2090,-32768,
-32768,  2093,-32768,  2094,  2095,    90,-32768,-32768,   784,-32768,
-32768,-32768,-32768,-32768,   789,-32768,-32768,  2098,  1847,  2099,
   101,  2103,  2104,  3971,  3971,  2108,   101,   112,  3971,  1855,
   101,  3971,  3971,   101,-32768,-32768,  3971,  1863,   101,  3971,
  3971,  3971,  3971,-32768,-32768,  3971,  3971,  3971,  1866,  3971,
   101,-32768,-32768,  3971,  3971,  2109,  1875,  1876,  3971,  3971,
  1903,-32768,-32768,   101,  2157,   101,  2107,  2107,  2107,  3971,
  2107,  2158,  2161,  2166,  2167,  3971,  2168,  2169,   112,  2170,
  2175,-32768,-32768,-32768,-32768,     8,-32768,  1916,  2107,  3800,
  1925,  3800,  3800,-32768,  1928,  5054,  5085,  5116,-32768,   101,
   101,  1629,   101,-32768,-32768,-32768,  1848,-32768,  1931,  4511,
  1932,-32768,  1712,  1936,-32768,-32768,  2178,-32768,  2183,-32768,
  2185,-32768,  2187,-32768,   337,  2186,  2193,-32768,-32768,-32768,
  1939,-32768,-32768,-32768,-32768,-32768,-32768,  1297,  1297,  1297,
   112,-32768,-32768,-32768,   337,-32768,   337,-32768,-32768,-32768,
  1949,  1940,  1943,  4532,  4553,  1944,  1957,  1948,  4574,-32768,
  2194,   164,   346,  2200,  4595,-32768,  2201,  1013,  1041,  1077,
  1548,  4616,  1578,  1819,-32768,  2074,  2204,  2160,  2381,  2206,
-32768,-32768,  2668,  2722,-32768,   428,-32768,  1963,  1959,  1960,
  1966,  4637,  1969,-32768,-32768,  1973,  1974,  6062,  1979,  1982,
  1977,   802,-32768,   499,   513,  1970,  1980,-32768,  3971,  1981,
   826,  3971,   833,   835,-32768,-32768,-32768,-32768,  1983,  1987,
  1991,  1986,  1993,   583,-32768,  1995,  3971,-32768,  3680,  1990,
  2222,  2006,-32768,-32768,  1838,  1997,-32768,-32768,  2237,-32768,
-32768,  2247,  2249,  2261,  2269,-32768,-32768,  2356,  2271,  2107,
  3971,  2107,  3971,  2274,  2273,  2276,   101,  2408,-32768,-32768,
-32768,-32768,   101,  2591,-32768,-32768,-32768,-32768,-32768,   101,
-32768,-32768,  2643,-32768,-32768,-32768,-32768,-32768,  2697,  2880,
-32768,-32768,   846,  2275,  3971,   101,  2277,  2282,  3971,    93,
    93,  3971,  3971,  2284,  2286,  2287,    93,  2288,  2148,  2289,
  1363,-32768,  2290,-32768,-32768,  5147,  2107,  2037,  5178,  2038,
  2042,  2046,  2297,  2303,  2323,  2330,  2333,  3971,  3971,  3971,
  3971,  3971,-32768,-32768,  2079,  5209,-32768,  2230,  2336,  2337,
-32768,-32768,  2083,  2085,-32768,-32768,-32768,-32768,  2332,-32768,
  2097,  6089,  2087,  4658,  2088,-32768,  2100,  2092,-32768,  2102,
-32768,   517,-32768,-32768,-32768,-32768,-32768,-32768,  4679,   526,
-32768,-32768,  6116,  2105,  2111,  4700,  4721,-32768,-32768,-32768,
   840,-32768,    93,-32768,    93,  2107,-32768,-32768,  1419,  1513,
-32768,  2112,-32768,-32768,  2115,  3800,    27,-32768,-32768,-32768,
-32768,  2346,  2957,  3011,  3246,  3300,  3321,  3971,-32768,  2357,
-32768,-32768,-32768,  1297,  2117,  2372,  2373,  3971,  3971,  3971,
  2374,   101,  3971,  2122,  3971,   860,   101,  2376,   101,  2377,
  2378,  2379,  3971,  3971,  2380,   101,   863,-32768,-32768,  2384,
  2385,  2391,-32768,-32768,  2154,-32768,-32768,  2107,  3971,   866,
  2140,-32768,-32768,-32768,-32768,-32768,-32768,  5240,  2149,  2155,
  2159,-32768,-32768,-32768,  6143,  6170,  4742,-32768,  2163,  4763,
-32768,  6197,  2410,  2411,  3971,   101,  2414,   112,-32768,-32768,
  2165,-32768,   529,-32768,-32768,-32768,  6224,  6251,-32768,  2171,
  2417,  2422,  2420,  2421,  2423,   112,-32768,  2172,  4784,  2174,
  3971,-32768,  2429,  2430,  2431,  2932,  2439,  2440,  2107,  2199,
  3971,  2986,  2202,  2447,  2453,  3489,  2454,  2456,  2457,  2484,
  2485,   101,  2233,  2234,  2488,-32768,  2235,-32768,-32768,-32768,
  2490,-32768,-32768,  3971,  2239,  6278,-32768,-32768,-32768,-32768,
-32768,-32768,  2248,-32768,  6305,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  2256,-32768,-32768,-32768,  2505,
-32768,  2259,  5271,  3971,  2508,  2367,  3971,  3169,  2257,  3221,
  2511,  3275,  3458,-32768,  2513,-32768,  4805,-32768,   112,  4826,
-32768,-32768,-32768,-32768,  2514,  2516,-32768,  3971,  2533,  3971,
  3510,-32768,-32768,  4847,-32768,  6332,-32768,  3971,  2409,  2535,
  5302,  2539,-32768,-32768,   816,  2538,  2285,-32768,  2547,  2549,
-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -339,-32768,-32768,  -267,  1489,-32768,-32768,
  1490,  -484,-32768,  -477,-32768,  -415,  -517,  -559,-32768,-32768,
-32768,-32768,   516,-32768,  -619,-32768, -1014,-32768,  -765,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1752,-32768,  1365,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1913,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   902,-32768,-32768,-32768,-32768,-32768,
-32768,  1628,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1098,
  -761,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1511,-32768,-32768,-32768,  1230,  1058,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   857,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2001,
-32768,  1894,-32768,  2472,-32768,  2007,  2370,  -305,-32768,   530,
   103,   -53,-32768,-32768,   447,  -664,  -565,  -162,   -79,-32768,
    -3,   -99,   -75
};


#define	YYLAST		6660


static const short yytable[] = {    28,
   604,   812,   168,   175,   176,   740,   170,   713,     4,   890,
   292,   691,  1636,    29,  1283,   558,   335,    70,   336,   228,
  1212,   658,   656,     4,   469,  1217,  1218,    85,   479,   335,
   536,   336,   670,  1240,  1394,   900,   901,   902,   903,    30,
   720,   721,   680,   430,  1243,     4,   684,   729,     4,   335,
   688,   336,   527,   185,   460,   461,   463,   194,   200,   205,
   210,   214,   219,   470,   533,   996,   599,  1678,     4,   335,
   905,   336,   906,  1025,   349,   118,  1512,   602,  1688,   293,
     4,    -2,   228,   229,  1694,  1026,     5,     6,    71,    72,
    73,   407,    74,  1703,    39,   408,   311,    52,    53,  1709,
  1710,    54,    55,    28,    11,   409,    29,    28,    28,    28,
    28,    28,    28,   220,   228,   649,   228,   225,   225,   234,
   646,   717,    31,   543,  1637,   997,    80,   305,  1037,  1034,
   450,  1036,   646,  1252,   398,   177,   812,   812,   812,   812,
    52,    53,   178,   354,    54,    55,   229,  1048,  1049,  1050,
  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
  1061,  1062,  1063,   108,   375,  1068,    60,  1568,  1569,   929,
  1690,   930,   593,  1205,   451,   483,     4,   306,   229,     4,
   229,  1167,     5,     6,   229,     5,     6,    71,    72,    73,
   647,    74,   416,   237,   651,   397,   229,    29,   417,   544,
    11,     4,  1168,    11,  1384,  1570,   418,     5,     6,    59,
   907,  1093,    61,   193,   199,   204,   209,   -64,   218,  1571,
   543,  1094,   452,  1095,   453,    11,   341,    29,   543,   812,
   186,   187,    71,    72,    73,  1253,    74,   543,   864,    71,
    72,    73,    62,    74,   714,  1254,   454,  1424,   812,   812,
   812,   812,   812,   812,   812,   812,   812,   812,   812,   812,
   812,   812,   812,   812,    84,  1027,   812,    29,  1638,    81,
   410,   230,   487,   337,   462,   657,   338,   908,    69,   488,
   400,  1221,    63,   304,    29,   537,   337,   657,  1241,   338,
   716,   829,   830,   831,   832,   455,   544,  1126,   518,  1244,
  1291,    64,   585,   867,   544,   754,   528,   234,    65,   338,
    71,    72,    73,   544,    74,   543,    66,  1477,   234,   234,
   234,    56,   119,  1297,   168,   909,   294,   234,   170,   338,
   945,   739,   429,   718,   230,   190,   191,   195,    71,    72,
   946,     4,    74,     5,     6,    71,    72,    73,     4,    74,
  1572,    67,  1691,   576,     5,     6,    71,    72,    73,   412,
    74,    11,     4,   226,    56,  1539,   230,  1169,   230,   172,
  1926,   419,    11,   413,   724,    82,  1029,   725,   173,  1932,
  1030,  1031,   812,   296,   230,    86,  1096,  1478,   120,  1284,
  1128,   544,   297,   438,   272,   273,   274,   275,   276,   196,
   277,   278,   279,   280,   557,   539,   281,   282,   283,   284,
   285,   178,   865,  1285,   286,   589,   443,   395,   524,   551,
   287,   704,   488,   706,   707,   708,   378,   378,    68,   561,
   439,   182,   183,    83,   565,   833,    87,   440,   594,  1479,
   569,    88,   571,   -64,   286,   488,   573,   648,  1379,   237,
   287,  1129,  1988,    29,   178,  1990,   211,   212,  1386,  1194,
  1480,  1481,  1235,  1236,    89,  1992,  1993,   947,  1196,   948,
   949,   950,   951,   952,   953,   954,   955,   956,   957,   761,
   762,   341,   958,  1140,    90,   959,   826,   827,   960,  1141,
  2011,   961,   711,   962,   963,   964,   965,   966,   967,   968,
   969,   970,   971,   972,   973,   974,   975,   976,   977,    91,
   726,   103,   978,  1182,    71,    72,    73,   979,    74,   104,
   980,    71,    72,    73,    92,    74,   168,   168,   165,   171,
   283,   284,   285,   168,  1142,  1367,   286,   117,   414,    93,
  1143,  1261,   287,    71,    72,    73,  1203,    74,  1670,   812,
  1671,   188,   189,  1295,   992,  1032,   377,   378,   441,   812,
  1482,   712,   -67,  1286,  1287,   222,   223,  1144,   488,   178,
    94,   236,    95,  1145,   872,    96,   272,   273,   274,   275,
   276,   878,   277,   278,   279,   280,   981,    97,   281,   282,
   283,   284,   285,   197,   481,   341,   286,   234,    29,    32,
    98,    33,   287,   201,   202,   490,   378,   265,   266,   267,
   126,   127,   128,    34,    35,    36,  1115,  1088,   657,  1089,
    99,  1351,    29,   100,   869,   870,  1116,  1090,   994,   836,
    37,   130,   131,   132,   133,   488,   846,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   813,   101,  1117,  1118,  1119,  1120,  1121,  1122,
  1392,  1747,  1748,  1749,  1750,  1751,  1752,  1178,  1223,    28,
   598,   178,  1714,   102,   488,  1224,    28,   352,   353,  1715,
   355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
   365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
  1865,  1865,   341,   120,  1395,   378,   600,   379,   380,   381,
   382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
   392,   393,   394,  1441,   404,   121,   471,   472,   473,   474,
   396,   122,     4,  1190,  1191,  1192,  1193,   405,     5,     6,
    71,    72,    73,  1730,    74,   475,   763,  1206,   406,   123,
  1731,   838,   839,   432,   458,   459,    11,  1733,   761,   884,
   125,  1844,   124,   433,  1731,   174,   421,  1659,  1845,   478,
  1848,   180,  1091,  1941,   828,   835,    38,  1849,   840,   434,
  1942,  1123,   845,   435,   422,   705,   378,   813,   813,   813,
   813,    80,   221,   911,   423,   424,  1672,  1673,  1674,   238,
    71,    72,    73,   425,    74,   426,  1237,  1238,  1880,   765,
   766,  1484,   235,     4,   517,  1174,  1175,  1176,  1177,     5,
     6,    71,    72,    73,   288,    74,   807,  1418,  1260,   239,
    29,    29,   289,  1753,   240,   526,   241,    11,   767,   768,
   165,   161,   535,    71,    72,    73,   162,    74,   242,   163,
   814,   815,   763,   924,   925,   926,   927,  1652,   348,   928,
   291,  1529,   817,   818,     4,   819,   820,  1893,   812,  1321,
     5,     6,    71,    72,    73,   243,    74,   821,   822,   244,
   813,  1485,   922,   923,   924,   925,   926,   927,    11,   245,
   928,   855,   378,   856,   378,  1044,  1045,  1226,   246,   813,
   813,   813,   813,   813,   813,   813,   813,   813,   813,   813,
   813,   813,   813,   813,   813,   247,   596,   813,   857,   378,
   295,  1619,  1620,  1621,   248,  1623,  1486,  1982,   436,   632,
   633,  1127,   249,  1487,  1488,  1894,   250,  1895,   858,   378,
   251,  1532,   635,  1640,  1000,   378,  1001,  1002,  1896,   636,
   637,   638,  1006,   378,  1489,   640,   641,  1490,  1491,   427,
  1460,  1897,   252,  1461,   644,   253,   850,   583,  1345,   378,
  1346,   378,  1549,   254,  1462,  1463,  1464,   255,  1551,  1898,
  1553,  1072,   256,  1181,   341,   257,    40,   206,   207,   258,
    41,  1073,  1074,  1075,  1347,   378,  1429,   234,   234,   234,
   234,   259,  1432,  1348,   378,  1388,   378,   260,  1294,  1696,
  1296,   234,   261,  1575,   262,   700,   701,   168,   263,  1577,
   298,    75,    76,    77,    78,  1535,  1536,  1550,   178,   168,
  1552,   178,   299,   813,  1574,   178,  1125,  1697,  1322,  1576,
   178,   318,   165,   165,   264,    42,   333,   727,   728,   165,
   730,    43,  1728,  1729,  1492,   312,   735,   331,   738,   444,
   675,  1230,  1881,   343,    44,   344,    45,   350,   215,   216,
   234,   234,   351,  1698,   399,   445,  1738,   378,    46,   457,
  1247,  1465,    47,  1740,   378,  1741,   378,   403,  1255,  1257,
  1855,  1856,   234,   480,    48,  1786,  1787,   446,   769,   464,
  1537,  1385,  1290,  1293,  1771,   465,  1773,  1299,   466,  1544,
  1899,   467,  1301,  1911,  1912,    49,  1920,   378,   468,   843,
   844,   491,   484,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
  1018,  1019,   486,   234,  1020,   733,   734,   492,   521,   495,
  1021,  1329,  1330,   516,  1076,   523,   529,   530,  1336,   447,
  1338,   863,   534,  1022,  1342,  1807,   538,  1468,   540,   541,
  1469,  1812,   542,   547,   548,  1350,   549,   550,    50,   552,
    51,  1470,  1471,   553,   554,  1472,  1473,   875,   876,   877,
  1588,   824,   555,   879,   880,   556,   559,   560,   562,   272,
   273,   274,   275,   276,   563,   277,   278,   279,   280,   564,
   813,   281,   282,   283,   284,   285,   566,   568,   854,   286,
   813,   570,   572,   574,   575,   287,   577,   582,   591,   851,
   584,   586,   587,   590,   448,   588,   592,   868,   597,   601,
  1859,  1631,   605,   272,   273,   274,   275,   276,   631,   277,
   278,   279,   280,   634,   873,   281,   282,   283,   284,   285,
   639,   642,   643,   286,   650,   653,   655,   660,   662,   287,
   234,   272,   273,   274,   275,   276,   234,   277,   278,   279,
   280,   664,   663,   281,   282,   283,   284,   285,  1474,   667,
   669,   286,   671,   676,   677,   678,   985,   287,   679,   986,
   681,   685,  1918,  1675,   687,   689,   692,   272,   273,   274,
   275,   276,   693,   277,   278,   279,   280,   695,   696,   281,
   282,   283,   284,   285,   697,  1023,   698,   286,  1009,   703,
   702,   715,  1871,   287,   912,   913,   914,   915,   916,   917,
   918,   919,   920,   921,   709,   722,   922,   923,   924,   925,
   926,   927,   341,   723,   928,   731,   736,  1641,   739,  1643,
  1644,  1923,   741,  1963,   742,   126,   127,   128,   743,   745,
   744,   746,   755,   759,   234,   756,  1065,   281,   282,   283,
   284,   285,   757,   234,   528,   286,   130,   131,   132,   133,
   758,   287,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   168,   168,   168,
  1078,   168,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1267,
  1268,  1269,  1270,  1271,  1272,  1273,   764,  1280,   770,   168,
   126,   127,   771,   816,   848,   823,   825,   837,   842,  1185,
  1186,  1187,   847,   853,   234,   860,   859,   861,   871,   862,
   881,   882,  1130,   883,   889,  2026,   899,   135,   136,   137,
   138,   139,   772,   773,   774,   775,   776,   777,   778,   779,
   780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
   790,   791,   792,   793,   794,   795,   891,   796,   797,  1860,
   300,  1861,  1173,   893,  1862,   234,     5,     6,    71,    72,
    73,   904,    74,   938,  1183,   894,   895,  1184,   896,   910,
   931,  -671,  1038,   940,    11,   941,   995,  1035,   942,   943,
  1195,  1197,  1198,  1199,   987,   988,   989,  1204,   990,   813,
  1267,  1268,  1269,  1270,  1271,  1272,  1273,  1098,  1863,  1099,
  1100,  1666,  1101,   165,  1699,   991,   807,  1039,   301,   798,
   993,  1042,  1102,   999,   928,   165,   799,   234,  1281,  1805,
  1040,  1676,  1806,  1677,  1041,  1046,  1064,  1139,  1070,  1103,
  1104,  1105,  1131,  1132,  1701,  1086,  1314,  1133,  1316,  1134,
  1318,  1146,  1135,  1860,  1136,  1861,  1106,  1137,  1862,  1138,
   168,  1147,   168,  1148,  1155,  1180,   161,  1149,  1150,  1151,
  1152,   162,  1153,  1154,   163,  1157,  1201,  1156,  1343,  1202,
  1794,  1795,   164,  1158,  1159,  1160,  1161,  1801,  1164,  1189,
  1939,   126,   127,     4,  1267,  1268,  1269,  1270,  1271,  1272,
  1273,  1162,  1863,  1303,  1304,  1163,  1179,  1200,  1951,  1207,
  1107,   168,  1208,  1870,  1209,  1210,  1211,   168,   135,   136,
   137,   138,   139,   277,   278,   279,   280,  1213,  1215,   281,
   282,   283,   284,   285,   800,  1216,  1219,   286,  1220,  1864,
   801,   802,  1222,   287,  1227,   996,   803,  1231,  1232,   804,
  1233,  1234,  1066,  1067,   805,   806,  1239,   807,  1246,  1248,
  1249,  1250,  1251,  1857,  1256,  1858,  1258,  1259,  1302,  1361,
  1289,  1363,  1300,  1305,   126,   127,   771,  1306,  1370,  1307,
  1108,  1308,  1309,  1310,  1311,  1312,   168,  1109,  1313,  1323,
  1324,  2009,   321,   322,   323,   324,   325,   326,   327,   328,
   329,   135,   136,   137,   138,   139,   772,   773,   774,   775,
   776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
   786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
  1325,   796,   797,  1867,  1326,  1327,  1328,  1331,   272,   273,
   274,   275,   276,  1332,   277,   278,   279,   280,   168,  1333,
   281,   282,   283,   284,   285,  1334,  1335,  1337,   286,  1526,
  1527,  1528,  1339,  1340,   287,  1341,  1349,  1344,   272,   273,
   274,   275,   276,   341,   277,   278,   279,   280,  1352,  1356,
   281,   282,   283,   284,   285,  1702,  1357,  1540,   286,  1358,
  1359,  1360,  1362,   798,   287,  1364,  1365,  1366,  1368,  1369,
   799,   126,   127,   532,   129,  1378,  1371,    54,  1372,   168,
  1373,  1376,  1377,  1381,  1382,  1387,  1383,  1389,  1390,  1391,
  1393,  1398,   130,   131,   132,   133,   134,  1525,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,  1396,   234,  1399,  1400,  1401,  1402,  1403,
  1584,  1585,  1405,  1407,  1408,  1589,  1409,   229,  1592,  1593,
  1410,  1411,   234,  1595,  1412,  1413,  1598,  1599,  1600,  1601,
  1414,  1415,  1602,  1603,  1604,  1416,  1606,  1417,  1420,  1421,
  1608,  1609,  1422,  1423,  1425,  1613,  1614,  1426,  1427,  1448,
  1428,  1430,  1431,   165,   165,   165,  1622,   165,   800,  1434,
  1435,  1451,  1628,  1437,   801,   802,  1433,  1438,  1440,  1442,
   803,  1443,  1444,   804,  1446,   165,  1581,  1447,   805,   806,
  1449,   807,  1587,  1517,  1524,  1452,  1591,  1450,  1534,  1594,
  1541,  1545,  1546,  1453,  1597,  1495,  1511,  1542,  1454,  1455,
  1456,   126,   127,   128,   129,   234,  1607,    54,  1457,  1458,
  1494,  1496,  1497,  1498,  1499,  1500,  1501,  1502,  1503,  1616,
  1504,  1618,   130,   131,   132,   133,   134,  1505,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,  1506,  1507,  1650,  1651,  1508,  1653,   272,
   273,   274,   275,   276,  1519,   277,   278,   279,   280,  1509,
  1510,   281,   282,   283,   284,   285,   160,  1520,  1522,   286,
  1521,  1523,  1530,  1547,  1263,   287,  1264,  1265,  1266,  1531,
  1704,  1548,   161,   178,  1558,  1736,  1559,   162,  1739,  1533,
   163,  1555,  1560,  1561,  1554,   230,  1562,  1557,   164,  1564,
  1566,  1567,  1655,  1756,  1578,  1580,  1579,  1582,  1583,   126,
   127,   128,  1586,  1610,  1590,  1267,  1268,  1269,  1270,  1271,
  1272,  1273,  1596,  1274,  1275,  1605,   165,  1772,   165,  1774,
   130,   131,   132,   133,  1611,  1612,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,  1789,  1615,  1617,  1624,  1793,  1706,  1625,  1796,  1797,
  1626,  1627,  1629,  1630,  1632,  1639,  1263,   165,  1264,  1265,
  1266,  1633,  1661,   165,  1642,  1656,  1658,  1662,  1645,  1663,
  1660,  1664,  1667,  1669,  1823,  1824,  1825,  1826,  1827,  1668,
  1689,  1680,  1778,  1679,  1681,  1684,  1692,  1695,  1780,  1686,
  1705,  1685,  1708,  1717,  1718,  1782,   160,  1267,  1268,  1269,
  1270,  1271,  1272,  1273,  1716,  1274,  1275,  1719,  1758,  1734,
  1721,  1790,   161,  1725,  1722,  1723,  1726,   162,  1727,  1735,
   163,  1743,  1737,  1762,  1742,  1744,  1745,  1746,   164,  1755,
  1757,  1761,   165,  1765,  1276,  1766,   912,   913,   914,   915,
   916,   917,   918,   919,   920,   921,  1759,  1767,   922,   923,
   924,   925,   926,   927,  1878,  1768,   928,  1770,  1775,  1776,
  1777,  1788,  1803,  1791,  1885,  1886,  1887,  1214,  1792,  1890,
  1798,  1892,  1799,  1800,  1802,  1804,  1808,  1813,  1815,  1907,
  1908,  1816,  1817,  1818,   272,   273,   274,   275,   276,  1819,
   277,   278,   279,   280,   165,  1919,   281,   282,   283,   284,
   285,   274,   275,   276,   286,   277,   278,   279,   280,  1820,
   287,   281,   282,   283,   284,   285,  1821,  1822,  1828,   286,
  1830,  1936,  1831,  1832,  1833,   287,  1834,  1835,  1838,  1840,
   161,  1836,  1872,  1842,  1841,   162,  1279,  1889,   163,  1851,
   945,  1879,  1901,  1843,  1903,  1852,   164,  1956,    71,    72,
   946,  1910,    74,  1868,  1869,   165,  1882,  1965,  1883,  1884,
  1888,  1891,  1902,  1904,  1905,  1906,  1909,  1707,  1913,  1914,
   272,   273,   274,   275,   276,  1915,   277,   278,   279,   280,
  1983,  1921,   281,   282,   283,   284,   285,  1917,   657,  1924,
   286,  1937,   945,  1925,  1934,  1935,   287,  1930,  1938,  1940,
    71,    72,   946,  1946,    74,  1947,  1948,  1949,  1999,  1950,
  1997,  1945,  1953,  2000,  1955,  1957,  1958,  1959,   126,   127,
     4,   918,   919,   920,   921,  1961,  1962,   922,   923,   924,
   925,   926,   927,  1968,  2014,   928,  2016,  1976,  1964,  1969,
  1971,  1967,  1972,  1973,  2021,   135,   136,   137,   138,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
  1974,  1975,  1977,  1978,  1979,  1980,  1981,   947,  1984,   948,
   949,   950,   951,   952,   953,   954,   955,   956,   957,  1987,
  1991,  1994,   958,  1995,  1998,   959,  2002,  2004,   960,  2007,
  2012,   961,  2013,   962,   963,   964,   965,   966,   967,   968,
   969,   970,   971,   972,   973,   974,   975,   976,   977,  2015,
  2022,  2023,   978,  2025,  2027,  2028,  2030,   979,  2031,   947,
   980,   948,   949,   950,   951,   952,   953,   954,   955,   956,
   957,  1228,   933,  1229,   958,   760,  1760,   959,  1112,  1515,
   960,  1374,  1635,   961,   694,   962,   963,   964,   965,   966,
   967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
   977,  1810,   849,   227,   978,   945,   334,   710,     0,   979,
     0,     0,   980,    71,    72,   946,     0,    74,     0,     0,
     0,   272,   273,   274,   275,   276,  1769,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,   275,
   276,   286,   277,   278,   279,   280,     0,   287,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   945,     0,     0,
     0,     0,   287,     0,     0,    71,    72,   946,     0,    74,
     0,     0,     0,     0,     0,     0,     0,     0,  1779,     0,
     0,     0,     0,     0,  1711,     0,     0,     0,     0,   161,
     0,     0,     0,     0,   162,     0,     0,   163,     0,     0,
     0,     0,     0,     0,     0,   737,     0,     0,     0,     0,
     0,   945,     0,     0,     0,     0,     0,     0,     0,    71,
    72,   946,     0,    74,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1712,     0,
     0,     0,   947,     0,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,     0,     0,     0,   958,     0,     0,
   959,     0,     0,   960,     0,     0,   961,     0,   962,   963,
   964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
   974,   975,   976,   977,     0,     0,     0,   978,     0,     0,
     0,     0,   979,     0,   947,   980,   948,   949,   950,   951,
   952,   953,   954,   955,   956,   957,     0,     0,     0,   958,
     0,     0,   959,     0,     0,   960,     0,     0,   961,     0,
   962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
   972,   973,   974,   975,   976,   977,     0,     0,     0,   978,
     0,     0,     0,     0,   979,     0,     0,   980,   947,     0,
   948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
     0,  1781,     0,   958,     0,     0,   959,     0,     0,   960,
     0,     0,   961,     0,   962,   963,   964,   965,   966,   967,
   968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     0,     0,     0,   978,   945,     0,     0,     0,   979,     0,
     0,   980,    71,    72,   946,     0,    74,     0,   272,   273,
   274,   275,   276,  1783,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     4,     0,   286,     0,
     0,     0,     5,     6,   287,     0,     0,     0,     0,     0,
     7,     8,     9,    10,     0,     0,   945,     0,     0,     0,
    11,     0,     0,     0,    71,    72,   946,     0,    74,     0,
     0,     0,   272,   273,   274,   275,   276,  1784,   277,   278,
   279,   280,     0,  1873,   281,   282,   283,   284,   285,     0,
     0,     0,   286,    12,     0,     0,     0,     0,   287,    13,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   945,     0,    14,     0,    15,     0,     0,     0,    71,    72,
   946,     0,    74,     0,     0,     0,    16,     0,     0,     0,
    17,     0,     0,     0,     0,     0,     0,  1874,     0,     0,
     0,   947,    18,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,     0,     0,     0,   958,     0,     0,   959,
     0,     0,   960,    19,     0,   961,     0,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,     0,     0,     0,   978,     0,     0,     0,
     0,   979,     0,   947,   980,   948,   949,   950,   951,   952,
   953,   954,   955,   956,   957,     0,     0,     0,   958,     0,
     0,   959,     0,     0,   960,     0,    20,   961,    21,   962,
   963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
   973,   974,   975,   976,   977,     0,     0,     0,   978,     0,
     0,     0,     0,   979,     0,     0,   980,   947,     0,   948,
   949,   950,   951,   952,   953,   954,   955,   956,   957,     0,
  1785,     0,   958,     0,     0,   959,     0,     0,   960,     0,
     0,   961,     0,   962,   963,   964,   965,   966,   967,   968,
   969,   970,   971,   972,   973,   974,   975,   976,   977,     0,
     0,     0,   978,   945,     0,     0,     0,   979,     0,     0,
   980,    71,    72,   946,     0,    74,     0,   272,   273,   274,
   275,   276,  1960,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,     0,     0,   287,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   945,     0,     0,     0,     0,
     0,     0,     0,    71,    72,   946,     0,    74,     0,     0,
     0,   272,   273,   274,   275,   276,  1966,   277,   278,   279,
   280,     0,  1875,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   945,
     0,     0,     0,     0,     0,     0,     0,    71,    72,   946,
     0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1876,     0,     0,     0,
   947,     0,   948,   949,   950,   951,   952,   953,   954,   955,
   956,   957,     0,     0,     0,   958,     0,  1877,   959,     0,
     0,   960,     0,     0,   961,     0,   962,   963,   964,   965,
   966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
   976,   977,     0,     0,     0,   978,     0,     0,     0,     0,
   979,     0,   947,   980,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,     0,     0,     0,   958,     0,     0,
   959,     0,     0,   960,     0,     0,   961,     0,   962,   963,
   964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
   974,   975,   976,   977,     0,     0,     0,   978,     0,     0,
     0,     0,   979,     0,     0,   980,   947,     0,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,     0,  2001,
     0,   958,     0,     0,   959,     0,     0,   960,     0,     0,
   961,     0,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     0,   978,   945,     0,     0,     0,   979,     0,     0,   980,
    71,    72,   946,     0,    74,     0,   272,   273,   274,   275,
   276,  2003,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,  1970,   286,     0,     0,     0,
     0,     0,   287,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   945,     0,     0,     0,     0,     0,
     0,     0,    71,    72,   946,     0,    74,     0,     0,     0,
   272,   273,   274,   275,   276,  2005,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,   320,     0,     0,     0,   287,   947,
     0,   948,   949,   950,   951,   952,   953,   954,   955,   956,
   957,     0,     0,     0,   958,     0,     0,   959,     0,     0,
   960,     0,     0,   961,     0,   962,   963,   964,   965,   966,
   967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
   977,     0,     0,     0,   978,     0,     0,     0,     0,   979,
     0,   947,   980,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,     0,     0,     0,   958,     0,     0,   959,
     0,     0,   960,     0,     0,   961,     0,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,     0,     0,     0,   978,     0,     0,     0,
     0,   979,     0,     0,   980,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  2006,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,     0,     0,
   126,   127,   128,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  2017,   130,   131,   132,   133,     0,     0,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   126,   127,   128,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1225,     0,     0,     0,
     0,     0,     0,   130,   131,   132,   133,     0,     0,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   126,   127,     4,   912,   913,   914,
   915,   916,   917,   918,   919,   920,   921,     0,     0,   922,
   923,   924,   925,   926,   927,     0,     0,   928,     0,  1043,
     0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   126,   127,     4,   525,
   912,   913,   914,   915,   916,   917,   918,   919,   920,   921,
     0,     0,   922,   923,   924,   925,   926,   927,     0,     0,
   928,     0,     0,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   580,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   126,   127,     4,   915,   916,   917,   918,
   919,   920,   921,     0,     0,   922,   923,   924,   925,   926,
   927,   161,     0,   928,     0,     0,   162,     0,     0,   163,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   595,   127,     4,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   161,     0,     0,     0,     0,   162,     0,
     0,   163,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   271,     0,   477,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   161,     0,     0,   319,     0,
   162,     0,     0,   163,     0,     0,     0,   606,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,   519,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,     0,     0,   287,     0,     0,     0,     0,   493,
   520,     0,     0,     0,     0,     0,     0,   161,     0,     0,
     0,     0,   162,     0,     0,   163,     0,     0,     0,     0,
     0,   579,     0,     0,     0,     0,     0,     0,   607,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,   608,     0,
     0,   286,     0,   581,     0,     0,     0,   287,     0,     0,
     0,     0,     0,     0,   161,     0,     0,     0,     0,   162,
     0,     0,   163,     0,     0,     0,     0,     0,   609,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   610,
   611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
   621,   622,   623,   624,   625,   626,   627,   628,   629,   630,
     0,     0,     0,     0,     0,     0,   161,     0,     0,     0,
     0,   162,     0,     0,   163,     0,     0,     0,     0,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
   494,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,   506,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,   513,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,   514,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,   515,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
   747,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,   748,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1003,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1004,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1005,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1172,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  1353,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  1354,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1355,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1459,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1467,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1476,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1657,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1682,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1683,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1687,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  1693,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  1700,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1720,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1839,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1847,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1853,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1854,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1929,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1931,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1954,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  2008,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  2010,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  2018,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,     0,     0,   287,     0,     0,     0,   290,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,     0,   347,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
   753,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,  1171,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
     0,     0,  1188,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
     0,     0,     0,  1518,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
   287,     0,     0,     0,  1646,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,     0,  1647,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     0,     0,   287,     0,     0,     0,  1648,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,     0,     0,   287,     0,     0,     0,  1811,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,     0,     0,   287,     0,     0,     0,  1814,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,     0,  1829,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
  1922,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,  1996,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
     0,     0,  2024,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,   376,     0,     0,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   496,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   497,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   498,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   499,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   500,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   501,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   502,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   503,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   504,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   505,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   507,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   508,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   509,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   510,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   511,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   512,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   522,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   652,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   749,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   750,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   751,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   752,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,   852,     0,     0,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   888,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,  1007,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,  1008,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,  1724,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,  1837,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
  1850,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,  1927,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,  1928,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,  1933,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,  1943,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,  1944,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,  1985,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,  1989,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,  2020,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,   912,   913,   914,   915,
   916,   917,   918,   919,   920,   921,     0,     0,   922,   923,
   924,   925,   926,   927,     0,     0,   928,     0,     0,     0,
  1538,   914,   915,   916,   917,   918,   919,   920,   921,     0,
     0,   922,   923,   924,   925,   926,   927,     0,     0,   928
};

static const short yycheck[] = {     3,
   485,   666,    82,   103,   104,   625,    82,     7,     5,   771,
   173,   571,     5,   264,  1113,   431,     3,    21,     5,     5,
  1035,   539,     7,     5,   330,  1040,  1041,    31,   334,     3,
     5,     5,   550,     5,     7,   801,   802,   803,   804,   252,
   606,   607,   560,   311,     5,     5,   564,   613,     5,     3,
   568,     5,     3,   107,   322,   323,   324,   111,   112,   113,
   114,   115,   116,   331,   404,     5,   482,  1579,     5,     3,
     3,     5,     5,    69,   237,     5,     5,    64,  1590,     7,
     5,     0,     5,    69,  1596,    81,    11,    12,    13,    14,
    15,    82,    17,  1605,     7,    86,   254,     5,     6,  1611,
  1612,     9,    10,   107,    29,    96,   264,   111,   112,   113,
   114,   115,   116,   117,     5,   531,     5,   121,   122,   123,
     5,   599,   252,    23,   117,    65,    24,   181,   894,   891,
    96,   893,     5,     5,   297,   255,   801,   802,   803,   804,
     5,     6,   262,   243,     9,    10,    69,   913,   914,   915,
   916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
   926,   927,   928,    61,   264,   931,   260,    78,    79,   257,
     7,   259,   478,    64,   140,   338,     5,   181,    69,     5,
    69,    75,    11,    12,    69,    11,    12,    13,    14,    15,
   530,    17,    82,   260,   534,   295,    69,   264,    88,    99,
    29,     5,    96,    29,  1219,   116,    96,    11,    12,   254,
   143,    86,   260,   111,   112,   113,   114,   254,   116,   130,
    23,    96,   188,    98,   190,    29,   230,   264,    23,   894,
   260,   261,    13,    14,    15,   107,    17,    23,   716,    13,
    14,    15,   260,    17,   244,   117,   212,  1262,   913,   914,
   915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
   925,   926,   927,   928,     6,   261,   931,   264,   261,   264,
   261,   257,   255,   260,   260,   260,   263,   210,   260,   262,
   260,  1047,   260,   181,   264,   260,   260,   260,   260,   263,
   244,   117,   118,   119,   120,   261,    99,   254,   378,   260,
   260,   260,   465,   719,    99,   645,   257,   311,   260,   263,
    13,    14,    15,    99,    17,    23,   260,    18,   322,   323,
   324,   229,   252,   260,   404,   258,   254,   331,   404,   263,
     5,   260,   255,   601,   257,   260,   261,     5,    13,    14,
    15,     5,    17,    11,    12,    13,    14,    15,     5,    17,
   261,   260,     7,   453,    11,    12,    13,    14,    15,    82,
    17,    29,     5,     6,   229,  1380,   257,   261,   257,   253,
  1882,   261,    29,    96,   239,   230,    82,   242,   262,  1891,
    86,    87,  1047,   253,   257,     7,   261,    88,   252,    86,
   254,    99,   262,    96,   231,   232,   233,   234,   235,    67,
   237,   238,   239,   240,   255,   409,   243,   244,   245,   246,
   247,   262,   718,   110,   251,   255,   314,   253,   253,   423,
   257,   584,   262,   586,   587,   588,   262,   262,   260,   433,
   133,   260,   261,   260,   438,   261,     7,   140,   255,   140,
   444,     7,   446,   254,   251,   262,   450,   255,  1214,   260,
   257,   254,  1964,   264,   262,  1967,   260,   261,  1224,   254,
   161,   162,  1082,  1083,     7,  1977,  1978,   142,   254,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   260,
   261,   485,   157,   254,     7,   160,   260,   261,   163,   260,
  2002,   166,   592,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,     7,
   610,   254,   187,   998,    13,    14,    15,   192,    17,   252,
   195,    13,    14,    15,     7,    17,   606,   607,    82,    83,
   245,   246,   247,   613,   254,  1200,   251,   189,   261,     7,
   260,  1107,   257,    13,    14,    15,   254,    17,  1563,  1214,
  1565,   260,   261,  1119,   860,   261,   261,   262,   261,  1224,
   261,   255,   255,   260,   261,   119,   120,   254,   262,   262,
     7,   125,     7,   260,   737,     7,   231,   232,   233,   234,
   235,   744,   237,   238,   239,   240,   261,     7,   243,   244,
   245,   246,   247,   261,   260,   599,   251,   601,   264,     5,
     7,     7,   257,   260,   261,   261,   262,   161,   162,   163,
     3,     4,     5,    19,    20,    21,    86,    96,   260,    98,
     7,  1181,   264,     7,   724,   725,    96,   106,   255,   683,
    36,    24,    25,    26,    27,   262,   690,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,   666,     7,   134,   135,   136,   137,   138,   139,
  1230,    89,    90,    91,    92,    93,    94,   255,   255,   683,
   261,   262,   255,     7,   262,   262,   690,   241,   242,   262,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
  1809,  1810,   716,   252,  1232,   262,   263,   271,   272,   273,
   274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
   284,   285,   286,  1293,   230,   254,   243,   244,   245,   246,
   294,   254,     5,  1011,  1012,  1013,  1014,   243,    11,    12,
    13,    14,    15,   255,    17,   262,   654,  1025,   254,   254,
   262,   260,   261,    86,   318,   319,    29,   255,   260,   261,
   260,   255,   254,    96,   262,   253,    68,  1543,   262,   333,
   255,   261,   261,   255,   682,   683,   192,   262,   686,   112,
   262,   261,   690,   116,    86,   261,   262,   801,   802,   803,
   804,   699,   130,   807,    96,    97,  1568,  1569,  1570,     7,
    13,    14,    15,   105,    17,   107,  1084,  1085,  1833,   260,
   261,    18,     6,     5,   378,   988,   989,   990,   991,    11,
    12,    13,    14,    15,     7,    17,   260,   260,  1106,   254,
   264,   264,     7,   261,   254,   399,   254,    29,   260,   261,
   404,   244,   406,    13,    14,    15,   249,    17,   254,   252,
   260,   261,   760,   245,   246,   247,   248,  1532,   261,   251,
     7,  1356,   260,   261,     5,   260,   261,    18,  1543,  1147,
    11,    12,    13,    14,    15,   254,    17,   260,   261,   254,
   894,    88,   243,   244,   245,   246,   247,   248,    29,   254,
   251,   261,   262,   261,   262,   909,   910,  1070,   254,   913,
   914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
   924,   925,   926,   927,   928,   254,   480,   931,   261,   262,
   262,  1497,  1498,  1499,   254,  1501,   133,  1952,   261,   493,
   494,   945,   254,   140,   141,    86,   254,    88,   261,   262,
   254,  1367,   506,  1519,   261,   262,   261,   262,    99,   513,
   514,   515,   261,   262,   161,   519,   520,   164,   165,   261,
   140,   112,   254,   143,   528,   254,     8,   462,   261,   262,
   261,   262,  1398,   254,   154,   155,   156,   254,  1404,   130,
  1406,    98,   254,   997,   998,   254,     3,   260,   261,   254,
     7,   108,   109,   110,   261,   262,  1274,  1011,  1012,  1013,
  1014,   254,  1280,   261,   262,   261,   262,   254,  1118,     7,
  1120,  1025,   254,  1439,   254,   579,   580,  1107,   254,  1445,
     7,   191,   192,   193,   194,   260,   261,   261,   262,  1119,
   261,   262,     5,  1047,   261,   262,   944,     7,  1148,   261,
   262,   260,   606,   607,   254,    62,   262,   611,   612,   613,
   614,    68,   261,   262,   261,   254,   620,   254,   622,    96,
   555,  1075,  1834,   254,    81,   260,    83,     5,   260,   261,
  1084,  1085,     5,     7,   230,   112,   261,   262,    95,   260,
  1094,   261,    99,   261,   262,   261,   262,   254,  1102,  1103,
   261,   262,  1106,     8,   111,   260,   261,   134,   662,   260,
  1378,     8,  1116,  1117,  1680,   260,  1682,  1121,   260,  1387,
   261,   260,  1126,   261,   262,   132,   261,   262,   260,   260,
   261,   255,   262,    69,    70,    71,    72,    73,    74,    75,
    76,    77,   261,  1147,    80,   616,   617,   262,     7,   255,
    86,  1155,  1156,   255,   261,   255,   230,   230,  1162,   186,
  1164,   715,   230,    99,  1168,  1731,     5,   140,   260,     5,
   143,  1737,   260,     5,   260,  1179,     5,     5,   185,   260,
   187,   154,   155,   260,   260,   158,   159,   741,   742,   743,
  1458,   676,   230,   747,   748,   255,     5,     5,   260,   231,
   232,   233,   234,   235,   260,   237,   238,   239,   240,     5,
  1214,   243,   244,   245,   246,   247,   260,     5,   703,   251,
  1224,   260,     5,   260,     5,   257,     5,   206,     5,   261,
   260,   260,   260,   255,   261,   260,   254,   722,   261,   130,
  1806,  1509,     7,   231,   232,   233,   234,   235,     5,   237,
   238,   239,   240,     7,   739,   243,   244,   245,   246,   247,
     7,     7,   261,   251,     7,   260,     7,     7,   254,   257,
  1274,   231,   232,   233,   234,   235,  1280,   237,   238,   239,
   240,     7,   254,   243,   244,   245,   246,   247,   261,     7,
     7,   251,     7,   230,     7,     5,   850,   257,     7,   853,
     7,     7,  1868,  1571,   260,     7,     7,   231,   232,   233,
   234,   235,     7,   237,   238,   239,   240,     7,     7,   243,
   244,   245,   246,   247,     7,   261,   261,   251,   882,   262,
     5,     8,  1817,   257,   231,   232,   233,   234,   235,   236,
   237,   238,   239,   240,     7,   260,   243,   244,   245,   246,
   247,   248,  1356,     5,   251,     5,     5,  1520,   260,  1522,
  1523,  1879,   260,  1929,   260,     3,     4,     5,   260,     3,
   260,   255,     7,   230,  1378,     7,   930,   243,   244,   245,
   246,   247,     5,  1387,   257,   251,    24,    25,    26,    27,
     7,   257,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,  1497,  1498,  1499,
    96,  1501,    98,    99,   100,   101,   102,   103,   104,   122,
   123,   124,   125,   126,   127,   128,     7,   130,     5,  1519,
     3,     4,     5,     7,   261,     7,     7,     7,     7,  1003,
  1004,  1005,     7,   260,  1458,   255,   262,     7,     6,   239,
     7,   260,   947,    66,   255,  2025,     5,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,   254,    60,    61,    81,
     5,    83,   987,   254,    86,  1509,    11,    12,    13,    14,
    15,     3,    17,     7,   999,   254,   254,  1002,   254,     5,
   254,   254,     5,   260,    29,   260,   255,   254,   260,   260,
  1015,  1016,  1017,  1018,   262,   260,   260,  1022,   260,  1543,
   122,   123,   124,   125,   126,   127,   128,    81,   130,    83,
    84,  1555,    86,  1107,     7,   260,   260,     5,    63,   122,
   258,   239,    96,   262,   251,  1119,   129,  1571,   261,   207,
   254,  1575,   210,  1577,   254,   261,     3,     7,   260,   113,
   114,   115,   254,   254,     7,   261,  1140,   254,  1142,   254,
  1144,   260,   254,    81,   254,    83,   130,   254,    86,   254,
  1680,   254,  1682,   254,   260,     7,   244,   254,   254,   254,
   254,   249,   254,   254,   252,   254,     5,   260,  1172,     5,
  1720,  1721,   260,   254,   254,   254,   254,  1727,   254,   254,
  1898,     3,     4,     5,   122,   123,   124,   125,   126,   127,
   128,   260,   130,  1128,  1129,   260,   258,   260,  1916,     5,
   184,  1731,   260,  1816,     5,     5,   255,  1737,    30,    31,
    32,    33,    34,   237,   238,   239,   240,   255,   254,   243,
   244,   245,   246,   247,   237,   255,   254,   251,   261,   261,
   243,   244,   255,   257,     5,     5,   249,     5,     5,   252,
     5,   260,   255,   256,   257,   258,     5,   260,     5,     5,
     5,     5,     5,  1803,     5,  1805,     3,     3,     7,  1194,
     5,  1196,     5,     7,     3,     4,     5,     5,  1203,     5,
   254,     5,     5,     5,     5,     5,  1806,   261,     5,     5,
     5,  1999,   197,   198,   199,   200,   201,   202,   203,   204,
   205,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
     5,    60,    61,   261,     5,     5,     5,     5,   231,   232,
   233,   234,   235,     5,   237,   238,   239,   240,  1868,     5,
   243,   244,   245,   246,   247,     5,     5,     5,   251,  1353,
  1354,  1355,   254,   254,   257,   260,     7,   261,   231,   232,
   233,   234,   235,  1817,   237,   238,   239,   240,   262,   257,
   243,   244,   245,   246,   247,     7,     7,  1381,   251,     7,
     7,     7,     7,   122,   257,     7,     7,     7,     7,     7,
   129,     3,     4,     5,     6,   262,     7,     9,     7,  1929,
     7,     7,     7,   260,   255,   254,   262,     7,     7,     7,
     7,     5,    24,    25,    26,    27,    28,  1352,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,   260,  1898,     7,     7,     7,     7,     7,
  1454,  1455,     7,     7,     7,  1459,     7,    69,  1462,  1463,
     7,     7,  1916,  1467,     7,     7,  1470,  1471,  1472,  1473,
     7,     7,  1476,  1477,  1478,     7,  1480,     7,     7,     7,
  1484,  1485,     7,     7,     5,  1489,  1490,     5,     5,   255,
   254,     7,   254,  1497,  1498,  1499,  1500,  1501,   237,     5,
     5,   262,  1506,     7,   243,   244,   254,     7,     7,     7,
   249,     7,     7,   252,     7,  1519,  1451,     7,   257,   258,
   255,   260,  1457,     7,     7,   262,  1461,   255,     7,  1464,
     3,     7,     7,   262,  1469,   255,   255,   255,   262,   262,
   262,     3,     4,     5,     6,  1999,  1481,     9,   262,   262,
   262,   262,   262,   262,   262,   262,   262,   261,   261,  1494,
   262,  1496,    24,    25,    26,    27,    28,   262,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,   262,   262,  1530,  1531,   262,  1533,   231,
   232,   233,   234,   235,   260,   237,   238,   239,   240,   262,
   262,   243,   244,   245,   246,   247,   228,   260,   260,   251,
   261,   260,   262,   112,    81,   257,    83,    84,    85,   262,
     7,     7,   244,   262,     7,  1639,     7,   249,  1642,   262,
   252,   254,     7,     3,   261,   257,     7,   255,   260,     7,
     7,     7,   255,  1657,     7,     7,   260,     5,     5,     3,
     4,     5,     5,     5,   260,   122,   123,   124,   125,   126,
   127,   128,   260,   130,   131,   260,  1680,  1681,  1682,  1683,
    24,    25,    26,    27,   260,   260,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,  1715,   260,     7,     7,  1719,     7,     7,  1722,  1723,
     5,     5,     5,     5,     5,   260,    81,  1731,    83,    84,
    85,     7,     5,  1737,   260,   255,   255,     5,   261,     5,
   255,     5,     7,   255,  1748,  1749,  1750,  1751,  1752,     7,
     7,   262,  1687,   255,   262,   262,     7,     7,  1693,   262,
     7,   255,     7,   255,   255,  1700,   228,   122,   123,   124,
   125,   126,   127,   128,   262,   130,   131,   262,     7,   260,
   262,  1716,   244,   255,   262,   262,   255,   249,   262,   260,
   252,   255,   262,     7,   262,   255,   261,   255,   260,   255,
   261,   255,  1806,     7,   261,     7,   231,   232,   233,   234,
   235,   236,   237,   238,   239,   240,   261,     7,   243,   244,
   245,   246,   247,   248,  1828,     7,   251,     7,     5,     7,
     5,     7,   135,     7,  1838,  1839,  1840,   262,     7,  1843,
     7,  1845,     7,     7,     7,     7,     7,   261,   261,  1853,
  1854,   260,   257,     7,   231,   232,   233,   234,   235,     7,
   237,   238,   239,   240,  1868,  1869,   243,   244,   245,   246,
   247,   233,   234,   235,   251,   237,   238,   239,   240,     7,
   257,   243,   244,   245,   246,   247,     7,     5,   260,   251,
   111,  1895,     7,     7,   262,   257,   262,    16,   262,   262,
   244,   255,     7,   262,   255,   249,   261,  1842,   252,   255,
     5,     5,  1847,   262,  1849,   255,   260,  1921,    13,    14,
    15,  1856,    17,   262,   260,  1929,   260,  1931,     7,     7,
     7,   260,     7,     7,     7,     7,     7,     7,     5,     5,
   231,   232,   233,   234,   235,     5,   237,   238,   239,   240,
  1954,   262,   243,   244,   245,   246,   247,   254,   260,   255,
   251,  1896,     5,   255,     5,     5,   257,   255,     5,   255,
    13,    14,    15,     7,    17,     4,     7,     7,    62,     7,
  1984,   261,   261,  1987,   261,     7,     7,     7,     3,     4,
     5,   237,   238,   239,   240,     7,     7,   243,   244,   245,
   246,   247,   248,     7,  2008,   251,  2010,  1942,   260,     7,
     7,   260,     7,     7,  2018,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     7,     7,   260,   260,     7,   261,     7,   142,   260,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   262,
   255,     7,   157,   255,     7,   160,   260,     7,   163,     7,
     7,   166,     7,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,     7,
   132,     7,   187,     5,     7,   261,     0,   192,     0,   142,
   195,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,  1073,   811,  1074,   157,   653,  1665,   160,   941,  1340,
   163,  1207,  1515,   166,   574,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,  1735,   699,   122,   187,     5,   227,   591,    -1,   192,
    -1,    -1,   195,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,   231,   232,   233,   234,   235,   261,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,   234,
   235,   251,   237,   238,   239,   240,    -1,   257,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,     5,    -1,    -1,
    -1,    -1,   257,    -1,    -1,    13,    14,    15,    -1,    17,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,
    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,   244,
    -1,    -1,    -1,    -1,   249,    -1,    -1,   252,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,
    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
    -1,    -1,   142,    -1,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,    -1,    -1,    -1,   157,    -1,    -1,
   160,    -1,    -1,   163,    -1,    -1,   166,    -1,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,    -1,    -1,
    -1,    -1,   192,    -1,   142,   195,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,   157,
    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
    -1,    -1,    -1,    -1,   192,    -1,    -1,   195,   142,    -1,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    -1,   261,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,
    -1,    -1,   166,    -1,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,     5,    -1,    -1,    -1,   192,    -1,
    -1,   195,    13,    14,    15,    -1,    17,    -1,   231,   232,
   233,   234,   235,   261,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,     5,    -1,   251,    -1,
    -1,    -1,    11,    12,   257,    -1,    -1,    -1,    -1,    -1,
    19,    20,    21,    22,    -1,    -1,     5,    -1,    -1,    -1,
    29,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
    -1,    -1,   231,   232,   233,   234,   235,   261,   237,   238,
   239,   240,    -1,     7,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    62,    -1,    -1,    -1,    -1,   257,    68,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     5,    -1,    81,    -1,    83,    -1,    -1,    -1,    13,    14,
    15,    -1,    17,    -1,    -1,    -1,    95,    -1,    -1,    -1,
    99,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
    -1,   142,   111,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,    -1,    -1,    -1,   157,    -1,    -1,   160,
    -1,    -1,   163,   132,    -1,   166,    -1,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,    -1,    -1,    -1,   187,    -1,    -1,    -1,
    -1,   192,    -1,   142,   195,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,    -1,    -1,    -1,   157,    -1,
    -1,   160,    -1,    -1,   163,    -1,   185,   166,   187,   168,
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,    -1,
    -1,    -1,    -1,   192,    -1,    -1,   195,   142,    -1,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
   261,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,
    -1,   166,    -1,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,     5,    -1,    -1,    -1,   192,    -1,    -1,
   195,    13,    14,    15,    -1,    17,    -1,   231,   232,   233,
   234,   235,   261,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,   231,   232,   233,   234,   235,   261,   237,   238,   239,
   240,    -1,     7,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
   142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,    -1,    -1,    -1,   157,    -1,     7,   160,    -1,
    -1,   163,    -1,    -1,   166,    -1,   168,   169,   170,   171,
   172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
   192,    -1,   142,   195,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,    -1,    -1,    -1,   157,    -1,    -1,
   160,    -1,    -1,   163,    -1,    -1,   166,    -1,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,    -1,    -1,
    -1,    -1,   192,    -1,    -1,   195,   142,    -1,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,    -1,   261,
    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,
   166,    -1,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,     5,    -1,    -1,    -1,   192,    -1,    -1,   195,
    13,    14,    15,    -1,    17,    -1,   231,   232,   233,   234,
   235,   261,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,     7,   251,    -1,    -1,    -1,
    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
   231,   232,   233,   234,   235,   261,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,   231,   232,   233,   234,   235,   257,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,   253,    -1,    -1,    -1,   257,   142,
    -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,    -1,    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,
   163,    -1,    -1,   166,    -1,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,   192,
    -1,   142,   195,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,    -1,    -1,    -1,   157,    -1,    -1,   160,
    -1,    -1,   163,    -1,    -1,   166,    -1,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,    -1,    -1,    -1,   187,    -1,    -1,    -1,
    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   261,    24,    25,    26,    27,    -1,    -1,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
    -1,    -1,    -1,    24,    25,    26,    27,    -1,    -1,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,     3,     4,     5,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,   248,    -1,    -1,   251,    -1,   253,
    -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,     3,     4,     5,     6,
   231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,   248,    -1,    -1,
   251,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,     8,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,     3,     4,     5,   234,   235,   236,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
   248,   244,    -1,   251,    -1,    -1,   249,    -1,    -1,   252,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,     3,     4,     5,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,   249,    -1,
    -1,   252,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,     8,    -1,   228,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,     8,    -1,
   249,    -1,    -1,   252,    -1,    -1,    -1,    75,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,     8,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,   262,
     8,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,
    -1,    -1,   249,    -1,    -1,   252,    -1,    -1,    -1,    -1,
    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,   166,    -1,
    -1,   251,    -1,   253,    -1,    -1,    -1,   257,    -1,    -1,
    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,   249,
    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,   196,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
   208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
   218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,
    -1,   249,    -1,    -1,   252,    -1,    -1,    -1,    -1,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
   231,   232,   233,   234,   235,   257,   237,   238,   239,   240,
   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,   231,   232,   233,   234,   235,   257,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,   231,   232,   233,   234,   235,   257,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,   257,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,
   257,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,
   235,   257,   237,   238,   239,   240,   262,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,
   234,   235,   257,   237,   238,   239,   240,   262,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,
   233,   234,   235,   257,   237,   238,   239,   240,   262,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,
   232,   233,   234,   235,   257,   237,   238,   239,   240,   262,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
   231,   232,   233,   234,   235,   257,   237,   238,   239,   240,
   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,   231,   232,   233,   234,   235,   257,   237,   238,   239,
   240,   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,   262,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,   231,   232,   233,   234,   235,   257,   237,
   238,   239,   240,   262,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,   257,
   237,   238,   239,   240,   262,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,
   257,   237,   238,   239,   240,   262,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,
   235,   257,   237,   238,   239,   240,   262,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,
   234,   235,   257,   237,   238,   239,   240,   262,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,
   233,   234,   235,   257,   237,   238,   239,   240,   262,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,
   232,   233,   234,   235,   257,   237,   238,   239,   240,   262,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
   231,   232,   233,   234,   235,   257,   237,   238,   239,   240,
   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,   231,   232,   233,   234,   235,   257,   237,   238,   239,
   240,   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,   262,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,   231,   232,   233,   234,   235,   257,   237,
   238,   239,   240,   262,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,   257,
   237,   238,   239,   240,   262,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,
   257,   237,   238,   239,   240,   262,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,
   235,   257,   237,   238,   239,   240,   262,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,
   234,   235,   257,   237,   238,   239,   240,   262,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,
   233,   234,   235,   257,   237,   238,   239,   240,   262,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,
   232,   233,   234,   235,   257,   237,   238,   239,   240,   262,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
   231,   232,   233,   234,   235,   257,   237,   238,   239,   240,
   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,   231,   232,   233,   234,   235,   257,   237,   238,   239,
   240,   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,   262,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,   231,   232,   233,   234,   235,   257,   237,
   238,   239,   240,   262,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,   257,
   237,   238,   239,   240,   262,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,
   257,   237,   238,   239,   240,   262,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,
   235,   257,   237,   238,   239,   240,   262,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,
   234,   235,   257,   237,   238,   239,   240,   262,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,
   233,   234,   235,   257,   237,   238,   239,   240,   262,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
   261,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
    -1,   261,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
    -1,    -1,   261,   231,   232,   233,   234,   235,    -1,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,
    -1,    -1,    -1,   261,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,
   257,    -1,    -1,    -1,   261,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,
    -1,   257,    -1,    -1,    -1,   261,   231,   232,   233,   234,
   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,
    -1,    -1,   257,    -1,    -1,    -1,   261,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
   261,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
    -1,   261,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
    -1,    -1,   261,   231,   232,   233,   234,   235,    -1,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,    -1,   257,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,   255,    -1,   257,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,
   257,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,
    -1,   257,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,
   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,
   255,    -1,   257,   231,   232,   233,   234,   235,    -1,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,   255,    -1,   257,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,
   257,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,
    -1,   257,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,
   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,
   255,    -1,   257,   231,   232,   233,   234,   235,    -1,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,   255,    -1,   257,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,    -1,
   257,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,
    -1,   257,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,
   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,
   255,    -1,   257,   231,   232,   233,   234,   235,    -1,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,   255,    -1,   257,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,
   257,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,
    -1,   257,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,    -1,    -1,   257,   231,   232,   233,   234,
   235,   236,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,   248,    -1,    -1,   251,    -1,    -1,    -1,
   255,   233,   234,   235,   236,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,   248,    -1,    -1,   251
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
#line 375 "GetDP.y"
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
#line 409 "GetDP.y"
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
#line 452 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 475 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 490 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 492 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 494 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 496 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 498 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 500 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 502 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 504 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 506 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 508 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 510 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 512 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 514 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 516 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 518 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 520 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 522 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 524 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 526 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 528 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 530 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 538 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 555 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 562 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 564 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 569 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 571 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 51:
#line 578 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 54:
#line 588 "GetDP.y"
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
#line 598 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 56:
#line 605 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 57:
#line 615 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 58:
#line 620 "GetDP.y"
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
#line 632 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 60:
#line 641 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 61:
#line 652 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 62:
#line 657 "GetDP.y"
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
#line 694 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 64:
#line 697 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 65:
#line 709 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 66:
#line 711 "GetDP.y"
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
#line 727 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 68:
#line 730 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 69:
#line 733 "GetDP.y"
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
#line 784 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 71:
#line 797 "GetDP.y"
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
#line 821 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 73:
#line 828 "GetDP.y"
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
#line 841 "GetDP.y"
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
#line 859 "GetDP.y"
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
#line 882 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 77:
#line 886 "GetDP.y"
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
#line 898 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
#line 907 "GetDP.y"
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
#line 921 "GetDP.y"
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
#line 955 "GetDP.y"
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
#line 979 "GetDP.y"
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
#line 989 "GetDP.y"
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
#line 1011 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 1016 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 1017 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 1024 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].i ; ;
    break;}
case 94:
#line 1044 "GetDP.y"
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
#line 1064 "GetDP.y"
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
#line 1117 "GetDP.y"
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
#line 1137 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 1143 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 1149 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1152 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1159 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 106:
#line 1170 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 107:
#line 1173 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1179 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 109:
#line 1183 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 111:
#line 1195 "GetDP.y"
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
#line 1208 "GetDP.y"
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
#line 1222 "GetDP.y"
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
#line 1237 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1243 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1249 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1255 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1261 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1267 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1273 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1279 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1285 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1291 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1297 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1303 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1309 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1315 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1321 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1327 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1333 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1340 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1348 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 135:
#line 1361 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 136:
#line 1367 "GetDP.y"
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
#line 1441 "GetDP.y"
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
#line 1475 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
#line 1484 "GetDP.y"
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
#line 1496 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1498 "GetDP.y"
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
#line 1510 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 143:
#line 1512 "GetDP.y"
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
#line 1524 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 145:
#line 1526 "GetDP.y"
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
#line 1540 "GetDP.y"
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
#line 1552 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1558 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 149:
#line 1564 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 150:
#line 1566 "GetDP.y"
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
#line 1595 "GetDP.y"
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
#line 1621 "GetDP.y"
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
#line 1634 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1640 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1647 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1653 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1660 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1667 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_POSTSAVE ;
      WholeQuantity_S.Case.PostSave.Value = (struct Value *)Add_PostSave(yyvsp[0].c) ;
      printf("PostSave %p\n", (struct Value *)Add_PostSave(yyvsp[0].c)) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 159:
#line 1675 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 160:
#line 1686 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 161:
#line 1687 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 162:
#line 1688 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 163:
#line 1693 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 164:
#line 1694 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 165:
#line 1700 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 166:
#line 1703 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 167:
#line 1706 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 168:
#line 1722 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 169:
#line 1727 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 170:
#line 1734 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 172:
#line 1743 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 173:
#line 1748 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 174:
#line 1755 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 175:
#line 1758 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 176:
#line 1765 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 178:
#line 1775 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 179:
#line 1778 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 180:
#line 1781 "GetDP.y"
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
case 181:
#line 1819 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 182:
#line 1825 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 183:
#line 1832 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 185:
#line 1845 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 186:
#line 1852 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 187:
#line 1855 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 188:
#line 1862 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 189:
#line 1865 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 190:
#line 1872 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 192:
#line 1884 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 193:
#line 1894 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 194:
#line 1904 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 195:
#line 1911 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 196:
#line 1914 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 197:
#line 1921 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 199:
#line 1937 "GetDP.y"
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
case 200:
#line 1985 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1988 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1991 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 1994 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 204:
#line 1997 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 205:
#line 2008 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 208:
#line 2019 "GetDP.y"
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
case 210:
#line 2044 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 212:
#line 2058 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 213:
#line 2064 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 214:
#line 2071 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 215:
#line 2080 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 216:
#line 2083 "GetDP.y"
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
case 217:
#line 2105 "GetDP.y"
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
case 218:
#line 2120 "GetDP.y"
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
case 219:
#line 2140 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 220:
#line 2149 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 222:
#line 2163 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 223:
#line 2173 "GetDP.y"
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
case 224:
#line 2198 "GetDP.y"
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
case 225:
#line 2223 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 226:
#line 2228 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 227:
#line 2236 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 228:
#line 2244 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 229:
#line 2253 "GetDP.y"
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
case 230:
#line 2271 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 231:
#line 2280 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 232:
#line 2288 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 233:
#line 2296 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 234:
#line 2306 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 235:
#line 2316 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 236:
#line 2326 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 237:
#line 2346 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 239:
#line 2357 "GetDP.y"
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
case 242:
#line 2386 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 244:
#line 2399 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 245:
#line 2405 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 246:
#line 2412 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 247:
#line 2421 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 248:
#line 2424 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2427 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2430 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 251:
#line 2437 "GetDP.y"
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
case 252:
#line 2453 "GetDP.y"
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
case 253:
#line 2502 "GetDP.y"
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
case 255:
#line 2523 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 256:
#line 2526 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 257:
#line 2531 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 258:
#line 2536 "GetDP.y"
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
case 259:
#line 2550 "GetDP.y"
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
case 260:
#line 2570 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 261:
#line 2575 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 262:
#line 2580 "GetDP.y"
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
case 263:
#line 2604 "GetDP.y"
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
case 265:
#line 2664 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 266:
#line 2667 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 267:
#line 2676 "GetDP.y"
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
case 268:
#line 2742 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 269:
#line 2746 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 270:
#line 2753 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 272:
#line 2762 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 273:
#line 2767 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 274:
#line 2770 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 275:
#line 2777 "GetDP.y"
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
case 276:
#line 2793 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 277:
#line 2799 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 278:
#line 2802 "GetDP.y"
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
case 279:
#line 2821 "GetDP.y"
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
case 280:
#line 2833 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 281:
#line 2839 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 282:
#line 2842 "GetDP.y"
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
case 283:
#line 2857 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 284:
#line 2861 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 285:
#line 2870 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 287:
#line 2881 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 288:
#line 2886 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 289:
#line 2896 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 290:
#line 2909 "GetDP.y"
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
case 291:
#line 2924 "GetDP.y"
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
case 292:
#line 2998 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 294:
#line 3014 "GetDP.y"
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
case 295:
#line 3047 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 296:
#line 3050 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 297:
#line 3053 "GetDP.y"
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
case 298:
#line 3099 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 300:
#line 3109 "GetDP.y"
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
case 303:
#line 3137 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 305:
#line 3149 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 306:
#line 3155 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 307:
#line 3162 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3174 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 310:
#line 3180 "GetDP.y"
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
case 311:
#line 3194 "GetDP.y"
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
case 313:
#line 3214 "GetDP.y"
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
case 315:
#line 3237 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 316:
#line 3240 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 317:
#line 3244 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 318:
#line 3247 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 319:
#line 3258 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 320:
#line 3264 "GetDP.y"
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
case 321:
#line 3277 "GetDP.y"
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
case 322:
#line 3304 "GetDP.y"
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
case 323:
#line 3345 "GetDP.y"
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
case 324:
#line 3371 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 325:
#line 3376 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 326:
#line 3382 "GetDP.y"
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
case 327:
#line 3693 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 328:
#line 3698 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3707 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3716 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 331:
#line 3725 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 333:
#line 3733 "GetDP.y"
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
case 334:
#line 3773 "GetDP.y"
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
case 335:
#line 3788 "GetDP.y"
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
case 336:
#line 3812 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 337:
#line 3817 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 338:
#line 3826 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 339:
#line 3829 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 340:
#line 3832 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 341:
#line 3835 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 342:
#line 3846 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 344:
#line 3857 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 345:
#line 3867 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 346:
#line 3877 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 347:
#line 3891 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 349:
#line 3903 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 350:
#line 3905 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3907 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 352:
#line 3909 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 353:
#line 3917 "GetDP.y"
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
case 355:
#line 3942 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 356:
#line 3950 "GetDP.y"
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
case 357:
#line 4029 "GetDP.y"
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
case 358:
#line 4075 "GetDP.y"
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
case 359:
#line 4099 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 360:
#line 4108 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 361:
#line 4117 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 362:
#line 4122 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 363:
#line 4131 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 364:
#line 4142 "GetDP.y"
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
case 366:
#line 4171 "GetDP.y"
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
case 367:
#line 4195 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 368:
#line 4203 "GetDP.y"
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
case 369:
#line 4258 "GetDP.y"
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
case 370:
#line 4275 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 371:
#line 4276 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 372:
#line 4277 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 373:
#line 4278 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 374:
#line 4279 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 375:
#line 4280 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 376:
#line 4281 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 377:
#line 4282 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 378:
#line 4289 "GetDP.y"
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
case 379:
#line 4310 "GetDP.y"
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
case 380:
#line 4334 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 382:
#line 4344 "GetDP.y"
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
case 385:
#line 4371 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 387:
#line 4383 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 388:
#line 4390 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 389:
#line 4397 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 390:
#line 4400 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 391:
#line 4402 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 393:
#line 4410 "GetDP.y"
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
case 394:
#line 4425 "GetDP.y"
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
case 395:
#line 4440 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 396:
#line 4450 "GetDP.y"
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
case 398:
#line 4470 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 399:
#line 4473 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 400:
#line 4482 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 401:
#line 4485 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 402:
#line 4490 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 403:
#line 4495 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 404:
#line 4500 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 405:
#line 4505 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 407:
#line 4516 "GetDP.y"
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
case 408:
#line 4553 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 409:
#line 4560 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 410:
#line 4563 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 411:
#line 4575 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 412:
#line 4585 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 413:
#line 4591 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 414:
#line 4594 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 415:
#line 4606 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 416:
#line 4614 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 417:
#line 4627 "GetDP.y"
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
case 418:
#line 4649 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 419:
#line 4656 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 420:
#line 4662 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 421:
#line 4668 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 422:
#line 4674 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 423:
#line 4682 "GetDP.y"
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
case 424:
#line 4704 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 425:
#line 4711 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 426:
#line 4717 "GetDP.y"
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
case 427:
#line 4728 "GetDP.y"
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
case 428:
#line 4739 "GetDP.y"
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
case 429:
#line 4752 "GetDP.y"
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
case 430:
#line 4767 "GetDP.y"
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
case 431:
#line 4782 "GetDP.y"
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
case 432:
#line 4797 "GetDP.y"
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
case 433:
#line 4817 "GetDP.y"
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
case 434:
#line 4838 "GetDP.y"
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
case 435:
#line 4850 "GetDP.y"
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
case 436:
#line 4870 "GetDP.y"
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
case 437:
#line 4887 "GetDP.y"
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
case 438:
#line 4906 "GetDP.y"
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
case 439:
#line 4927 "GetDP.y"
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
case 440:
#line 4942 "GetDP.y"
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
case 441:
#line 4976 "GetDP.y"
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
case 442:
#line 4989 "GetDP.y"
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
case 443:
#line 5003 "GetDP.y"
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
case 444:
#line 5016 "GetDP.y"
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
case 445:
#line 5028 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 447:
#line 5037 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 449:
#line 5046 "GetDP.y"
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
case 450:
#line 5057 "GetDP.y"
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
case 451:
#line 5069 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 452:
#line 5079 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 453:
#line 5087 "GetDP.y"
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
case 454:
#line 5100 "GetDP.y"
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
case 455:
#line 5113 "GetDP.y"
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
case 456:
#line 5127 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 457:
#line 5137 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 458:
#line 5147 "GetDP.y"
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
case 459:
#line 5161 "GetDP.y"
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
case 460:
#line 5175 "GetDP.y"
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
case 461:
#line 5194 "GetDP.y"
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
case 462:
#line 5212 "GetDP.y"
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
case 463:
#line 5223 "GetDP.y"
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
case 464:
#line 5238 "GetDP.y"
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
case 465:
#line 5253 "GetDP.y"
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
case 466:
#line 5268 "GetDP.y"
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
case 467:
#line 5283 "GetDP.y"
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
case 468:
#line 5298 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 469:
#line 5309 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 470:
#line 5314 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 471:
#line 5324 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 473:
#line 5334 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 474:
#line 5337 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 475:
#line 5347 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 476:
#line 5362 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 478:
#line 5378 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 479:
#line 5382 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 480:
#line 5386 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 481:
#line 5390 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 482:
#line 5395 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 483:
#line 5406 "GetDP.y"
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
case 485:
#line 5423 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 486:
#line 5427 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5431 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 488:
#line 5435 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 489:
#line 5439 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 490:
#line 5444 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 491:
#line 5455 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 493:
#line 5470 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 494:
#line 5474 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 495:
#line 5478 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 496:
#line 5482 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 497:
#line 5486 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 498:
#line 5497 "GetDP.y"
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
case 500:
#line 5515 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 501:
#line 5519 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 502:
#line 5523 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 503:
#line 5527 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 504:
#line 5532 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 505:
#line 5542 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 506:
#line 5548 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 507:
#line 5554 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 508:
#line 5564 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 509:
#line 5567 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 510:
#line 5572 "GetDP.y"
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
case 512:
#line 5590 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 513:
#line 5600 "GetDP.y"
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
case 514:
#line 5629 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 515:
#line 5632 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 516:
#line 5635 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 517:
#line 5643 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 518:
#line 5660 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 520:
#line 5672 "GetDP.y"
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
case 522:
#line 5695 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 524:
#line 5709 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 525:
#line 5716 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 526:
#line 5724 "GetDP.y"
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
case 527:
#line 5770 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 528:
#line 5775 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 529:
#line 5781 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 530:
#line 5784 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 531:
#line 5787 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 532:
#line 5789 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 533:
#line 5795 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 535:
#line 5806 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 536:
#line 5809 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 537:
#line 5815 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 538:
#line 5820 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 539:
#line 5826 "GetDP.y"
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
case 540:
#line 5840 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 542:
#line 5854 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 543:
#line 5861 "GetDP.y"
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
case 544:
#line 5889 "GetDP.y"
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
case 545:
#line 5899 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 546:
#line 5900 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 547:
#line 5906 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 548:
#line 5915 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 549:
#line 5932 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 551:
#line 5944 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 554:
#line 5953 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 556:
#line 5965 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 557:
#line 5972 "GetDP.y"
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
case 558:
#line 5984 "GetDP.y"
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
case 559:
#line 5995 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 560:
#line 6000 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 561:
#line 6006 "GetDP.y"
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
case 562:
#line 6023 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 563:
#line 6033 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 564:
#line 6036 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 565:
#line 6040 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 566:
#line 6053 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 567:
#line 6057 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 568:
#line 6063 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;
    break;}
case 569:
#line 6069 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 570:
#line 6076 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 571:
#line 6084 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 572:
#line 6090 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 573:
#line 6095 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 574:
#line 6100 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 575:
#line 6109 "GetDP.y"
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
case 576:
#line 6121 "GetDP.y"
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
case 577:
#line 6144 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 578:
#line 6145 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 579:
#line 6146 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 580:
#line 6147 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 581:
#line 6153 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 582:
#line 6155 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 583:
#line 6161 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 584:
#line 6167 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 585:
#line 6174 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 6183 "GetDP.y"
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
case 587:
#line 6205 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 588:
#line 6213 "GetDP.y"
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
case 589:
#line 6224 "GetDP.y"
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
case 590:
#line 6238 "GetDP.y"
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
case 591:
#line 6259 "GetDP.y"
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
case 592:
#line 6286 "GetDP.y"
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
case 593:
#line 6317 "GetDP.y"
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
case 594:
#line 6337 "GetDP.y"
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
      PostSubOperation_S.Legend = LEGEND_NONE;
      PostSubOperation_S.LegendPosition[0] = 0.;
      PostSubOperation_S.LegendPosition[1] = 0.;
      PostSubOperation_S.LegendPosition[2] = 0.;
      PostSubOperation_S.EvaluationPoints = NULL ;
      PostSubOperation_S.StoreInRegister = -1 ;
    ;
    break;}
case 596:
#line 6370 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 597:
#line 6377 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 598:
#line 6384 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 599:
#line 6391 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 600:
#line 6395 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 601:
#line 6399 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 602:
#line 6403 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 603:
#line 6407 "GetDP.y"
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
case 604:
#line 6417 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 605:
#line 6422 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 606:
#line 6427 "GetDP.y"
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
case 607:
#line 6447 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 608:
#line 6454 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 609:
#line 6463 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 610:
#line 6472 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 611:
#line 6481 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 612:
#line 6488 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 613:
#line 6496 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 614:
#line 6500 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 615:
#line 6509 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 616:
#line 6513 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 617:
#line 6517 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 618:
#line 6525 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 619:
#line 6531 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 620:
#line 6536 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 621:
#line 6545 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 622:
#line 6553 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 623:
#line 6562 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 624:
#line 6570 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 625:
#line 6579 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 626:
#line 6587 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 627:
#line 6596 "GetDP.y"
{
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;
    break;}
case 628:
#line 6606 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 629:
#line 6612 "GetDP.y"
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
case 630:
#line 6662 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;
    break;}
case 631:
#line 6677 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-1].d > 0. && yyvsp[-5].d > yyvsp[-3].d) || (yyvsp[-1].d < 0. && yyvsp[-5].d < yyvsp[-3].d))
	skip_until("For", "EndFor");
    ;
    break;}
case 632:
#line 6693 "GetDP.y"
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
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;
    break;}
case 633:
#line 6712 "GetDP.y"
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
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-1].d > 0. && yyvsp[-5].d > yyvsp[-3].d) || (yyvsp[-1].d < 0. && yyvsp[-5].d < yyvsp[-3].d))
	skip_until("For", "EndFor");
    ;
    break;}
case 634:
#line 6732 "GetDP.y"
{
      if(ImbricatedLoop <= 0){
	vyyerror("Invalid For/EndFor loop");
	ImbricatedLoop = 0;
      }
      else{
	x0 = LoopControlVariablesTab[ImbricatedLoop-1][0];
	x1 = LoopControlVariablesTab[ImbricatedLoop-1][1];
	step = LoopControlVariablesTab[ImbricatedLoop-1][2];
	do_next = (step > 0.) ? (x0+step <= x1) : (x0+step >= x1);
	if(do_next){
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
      }
    ;
    break;}
case 635:
#line 6763 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 636:
#line 6767 "GetDP.y"
{
    ;
    break;}
case 638:
#line 6783 "GetDP.y"
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
case 639:
#line 6798 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 640:
#line 6804 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 641:
#line 6810 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 642:
#line 6816 "GetDP.y"
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
case 643:
#line 6827 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 644:
#line 6832 "GetDP.y"
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
case 645:
#line 6844 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 646:
#line 6854 "GetDP.y"
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
case 648:
#line 6873 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 649:
#line 6879 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 650:
#line 6885 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 651:
#line 6896 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 652:
#line 6897 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 653:
#line 6898 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 654:
#line 6899 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 655:
#line 6900 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 656:
#line 6901 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 657:
#line 6902 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 658:
#line 6903 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 659:
#line 6904 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 660:
#line 6905 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 661:
#line 6906 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 662:
#line 6907 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 663:
#line 6908 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 664:
#line 6909 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 665:
#line 6910 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 666:
#line 6911 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 667:
#line 6912 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 668:
#line 6913 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 669:
#line 6914 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 670:
#line 6915 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 671:
#line 6916 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 672:
#line 6920 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 673:
#line 6921 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 674:
#line 6922 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 675:
#line 6923 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 676:
#line 6924 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 677:
#line 6925 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 678:
#line 6926 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 679:
#line 6927 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 680:
#line 6928 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 681:
#line 6929 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 682:
#line 6930 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 683:
#line 6931 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 684:
#line 6932 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 685:
#line 6933 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 686:
#line 6934 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 687:
#line 6935 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 688:
#line 6936 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 689:
#line 6937 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 690:
#line 6938 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 691:
#line 6939 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 692:
#line 6940 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 693:
#line 6941 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 694:
#line 6942 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 695:
#line 6943 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 696:
#line 6944 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 697:
#line 6945 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 698:
#line 6946 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 699:
#line 6947 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 700:
#line 6948 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 701:
#line 6949 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 702:
#line 6950 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 703:
#line 6951 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 704:
#line 6952 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 705:
#line 6953 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 706:
#line 6954 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 707:
#line 6955 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 708:
#line 6956 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 709:
#line 6957 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 710:
#line 6958 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 711:
#line 6959 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 712:
#line 6964 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 713:
#line 6965 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 714:
#line 6966 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 715:
#line 6967 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 716:
#line 6968 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 717:
#line 6969 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 718:
#line 6970 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 719:
#line 6989 "GetDP.y"
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
case 720:
#line 7007 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 721:
#line 7010 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 722:
#line 7016 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 723:
#line 7019 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 724:
#line 7026 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 725:
#line 7032 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 726:
#line 7035 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 727:
#line 7038 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 728:
#line 7050 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 729:
#line 7056 "GetDP.y"
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
case 730:
#line 7067 "GetDP.y"
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
case 731:
#line 7083 "GetDP.y"
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
case 732:
#line 7105 "GetDP.y"
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
case 733:
#line 7120 "GetDP.y"
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
case 734:
#line 7158 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 735:
#line 7166 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 736:
#line 7178 "GetDP.y"
{ 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 737:
#line 7186 "GetDP.y"
{
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;
    break;}
case 738:
#line 7198 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 739:
#line 7200 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 740:
#line 7207 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 741:
#line 7210 "GetDP.y"
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
case 742:
#line 7225 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 743:
#line 7230 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 744:
#line 7235 "GetDP.y"
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
case 745:
#line 7254 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 746:
#line 7272 "GetDP.y"
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
#line 7283 "GetDP.y"



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

  /* special case for the Equ part (right of the comma) 
     FIXME: change this when we allow a full WholeQuantity expression
     there */
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

