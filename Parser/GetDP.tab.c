/* A Bison parser, made from GetDP.y
   by GNU bison 1.35.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	tINT	257
# define	tFLOAT	258
# define	tSTRING	259
# define	tBIGSTR	260
# define	tEND	261
# define	tDOTS	262
# define	tStrCat	263
# define	tSprintf	264
# define	tPrintf	265
# define	tRead	266
# define	tFor	267
# define	tEndFor	268
# define	tIf	269
# define	tElse	270
# define	tEndIf	271
# define	tFlag	272
# define	tHelp	273
# define	tCpu	274
# define	tCheck	275
# define	tInclude	276
# define	tConstant	277
# define	tList	278
# define	tListAlt	279
# define	tLinSpace	280
# define	tLogSpace	281
# define	tListFromFile	282
# define	tDefineConstant	283
# define	tPi	284
# define	t0D	285
# define	t1D	286
# define	t2D	287
# define	t3D	288
# define	tExp	289
# define	tLog	290
# define	tLog10	291
# define	tSqrt	292
# define	tSin	293
# define	tAsin	294
# define	tCos	295
# define	tAcos	296
# define	tTan	297
# define	tAtan	298
# define	tAtan2	299
# define	tSinh	300
# define	tCosh	301
# define	tTanh	302
# define	tFabs	303
# define	tFloor	304
# define	tCeil	305
# define	tFmod	306
# define	tModulo	307
# define	tHypot	308
# define	tSolidAngle	309
# define	tTrace	310
# define	tOrder	311
# define	tCrossProduct	312
# define	tDofValue	313
# define	tMHTransform	314
# define	tMHJacNL	315
# define	tGroup	316
# define	tDefineGroup	317
# define	tAll	318
# define	tInSupport	319
# define	tMovingBand2D	320
# define	tDefineFunction	321
# define	tConstraint	322
# define	tRegion	323
# define	tSubRegion	324
# define	tRegionRef	325
# define	tSubRegionRef	326
# define	tFilter	327
# define	tCoefficient	328
# define	tValue	329
# define	tTimeFunction	330
# define	tBranch	331
# define	tNode	332
# define	tLoop	333
# define	tNameOfResolution	334
# define	tJacobian	335
# define	tCase	336
# define	tIntegration	337
# define	tFMMIntegration	338
# define	tMatrix	339
# define	tType	340
# define	tSubType	341
# define	tCriterion	342
# define	tGeoElement	343
# define	tNumberOfPoints	344
# define	tMaxNumberOfPoints	345
# define	tNumberOfDivisions	346
# define	tMaxNumberOfDivisions	347
# define	tStoppingCriterion	348
# define	tFunctionSpace	349
# define	tName	350
# define	tBasisFunction	351
# define	tNameOfCoef	352
# define	tFunction	353
# define	tdFunction	354
# define	tSubFunction	355
# define	tSubdFunction	356
# define	tSupport	357
# define	tEntity	358
# define	tSubSpace	359
# define	tNameOfBasisFunction	360
# define	tGlobalQuantity	361
# define	tEntityType	362
# define	tEntitySubType	363
# define	tNameOfConstraint	364
# define	tFormulation	365
# define	tQuantity	366
# define	tNameOfSpace	367
# define	tIndexOfSystem	368
# define	tSymmetry	369
# define	tEquation	370
# define	tGalerkin	371
# define	tdeRham	372
# define	tGlobalTerm	373
# define	tGlobalEquation	374
# define	tDt	375
# define	tDtDof	376
# define	tDtDt	377
# define	tDtDtDof	378
# define	tJacNL	379
# define	tNeverDt	380
# define	tDtNL	381
# define	tAtAnteriorTimeStep	382
# define	tIn	383
# define	tFull_Matrix	384
# define	tResolution	385
# define	tDefineSystem	386
# define	tNameOfFormulation	387
# define	tNameOfMesh	388
# define	tFrequency	389
# define	tSolver	390
# define	tOriginSystem	391
# define	tDestinationSystem	392
# define	tOperation	393
# define	tOperationEnd	394
# define	tSetTime	395
# define	tDTime	396
# define	tSetFrequency	397
# define	tFourierTransform	398
# define	tFourierTransformJ	399
# define	tLanczos	400
# define	tPerturbation	401
# define	tUpdate	402
# define	tUpdateConstraint	403
# define	tBreak	404
# define	tTimeLoopTheta	405
# define	tTime0	406
# define	tTimeMax	407
# define	tTheta	408
# define	tTimeLoopNewmark	409
# define	tBeta	410
# define	tGamma	411
# define	tIterativeLoop	412
# define	tNbrMaxIteration	413
# define	tRelaxationFactor	414
# define	tIterativeTimeReduction	415
# define	tDivisionCoefficient	416
# define	tChangeOfState	417
# define	tChangeOfCoordinates	418
# define	tChangeOfCoordinates2	419
# define	tSystemCommand	420
# define	tGenerateFMMGroups	421
# define	tGenerateOnly	422
# define	tGenerateOnlyJac	423
# define	tSolveJac_AdaptRelax	424
# define	tSaveSolutionExtendedMH	425
# define	tSaveSolutionMHtoTime	426
# define	tInit_MovingBand2D	427
# define	tMesh_MovingBand2D	428
# define	tGenerate_MH_Moving	429
# define	tGenerate_MH_Moving_Separate	430
# define	tAdd_MH_Moving	431
# define	tGenerateGroup	432
# define	tGenerateJacGroup	433
# define	tSaveMesh	434
# define	tDeformeMesh	435
# define	tDummyFrequency	436
# define	tPostProcessing	437
# define	tNameOfSystem	438
# define	tPostOperation	439
# define	tNameOfPostProcessing	440
# define	tUsingPost	441
# define	tAppend	442
# define	tPlot	443
# define	tPrint	444
# define	tPrintGroup	445
# define	tEcho	446
# define	tWrite	447
# define	tAdapt	448
# define	tOnGlobal	449
# define	tOnRegion	450
# define	tOnElementsOf	451
# define	tOnGrid	452
# define	tOnSection	453
# define	tOnPoint	454
# define	tOnLine	455
# define	tOnPlane	456
# define	tOnBox	457
# define	tWithArgument	458
# define	tFile	459
# define	tDepth	460
# define	tDimension	461
# define	tTimeStep	462
# define	tHarmonicToTime	463
# define	tFormat	464
# define	tHeader	465
# define	tFooter	466
# define	tSkin	467
# define	tSmoothing	468
# define	tTarget	469
# define	tSort	470
# define	tIso	471
# define	tNoNewLine	472
# define	tDecomposeInSimplex	473
# define	tChangeOfValues	474
# define	tFrequencyLegend	475
# define	tEvaluationPoints	476
# define	tStr	477
# define	tDate	478
# define	tDEF	479
# define	tOR	480
# define	tAND	481
# define	tEQUAL	482
# define	tNOTEQUAL	483
# define	tAPPROXEQUAL	484
# define	tLESSOREQUAL	485
# define	tGREATEROREQUAL	486
# define	tLESSLESS	487
# define	tGREATERGREATER	488
# define	tCROSSPRODUCT	489
# define	UNARYPREC	490
# define	tSHOW	491

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.71 2004-11-10 09:58:20 dular Exp $ */
/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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
#ifndef YYSTYPE
typedef union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		2008
#define	YYFLAG		-32768
#define	YYNTBASE	260

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 491 ? yytranslate[x] : 454)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   244,     2,   252,   253,   242,     2,     2,
     247,   248,   240,   238,   257,   239,   251,   241,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     232,     2,   234,   226,   258,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   249,     2,   250,   246,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   255,     2,   256,   259,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
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
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     227,   228,   229,   230,   231,   233,   235,   236,   237,   243,
     245,   254
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     1,     4,     5,     6,    10,    15,    20,    25,
      30,    35,    40,    45,    50,    55,    60,    62,    64,    67,
      69,    72,    76,    80,    84,    88,    92,    96,    99,   102,
     106,   110,   114,   118,   122,   126,   130,   134,   138,   142,
     146,   147,   150,   151,   152,   156,   161,   167,   168,   175,
     181,   183,   189,   191,   193,   194,   195,   214,   215,   216,
     224,   227,   229,   232,   234,   236,   238,   240,   241,   245,
     250,   252,   254,   258,   259,   263,   268,   270,   274,   278,
     284,   286,   290,   291,   295,   302,   303,   305,   310,   311,
     314,   318,   319,   322,   328,   335,   343,   345,   347,   348,
     352,   357,   362,   363,   366,   367,   371,   373,   377,   378,
     381,   383,   384,   385,   393,   397,   401,   408,   412,   416,
     420,   424,   428,   432,   436,   440,   444,   448,   452,   456,
     460,   464,   467,   470,   473,   477,   479,   483,   486,   488,
     491,   492,   498,   499,   507,   508,   520,   530,   535,   540,
     541,   549,   556,   559,   562,   565,   568,   572,   575,   579,
     583,   590,   594,   597,   601,   603,   607,   608,   612,   619,
     620,   625,   626,   629,   633,   638,   639,   644,   645,   648,
     652,   656,   661,   662,   667,   668,   671,   675,   679,   684,
     685,   690,   691,   694,   698,   702,   707,   708,   713,   714,
     717,   721,   725,   729,   733,   737,   741,   742,   744,   747,
     751,   753,   754,   757,   761,   766,   770,   775,   781,   782,
     787,   790,   791,   794,   798,   802,   806,   810,   814,   818,
     826,   830,   834,   838,   842,   846,   854,   862,   870,   871,
     874,   878,   880,   882,   883,   886,   890,   895,   899,   904,
     909,   914,   919,   920,   925,   926,   929,   933,   937,   942,
     947,   955,   959,   963,   967,   971,   972,   973,   974,   993,
     994,   999,  1000,  1003,  1007,  1011,  1015,  1017,  1021,  1022,
    1026,  1028,  1032,  1033,  1037,  1038,  1043,  1044,  1047,  1051,
    1055,  1059,  1060,  1065,  1066,  1069,  1073,  1077,  1081,  1086,
    1087,  1090,  1094,  1096,  1098,  1099,  1102,  1106,  1111,  1115,
    1120,  1125,  1126,  1131,  1134,  1135,  1138,  1142,  1146,  1150,
    1154,  1158,  1159,  1165,  1166,  1174,  1178,  1179,  1185,  1189,
    1193,  1197,  1201,  1205,  1206,  1210,  1211,  1214,  1217,  1220,
    1225,  1230,  1235,  1240,  1241,  1244,  1248,  1252,  1256,  1257,
    1260,  1264,  1268,  1272,  1276,  1277,  1280,  1281,  1282,  1292,
    1296,  1300,  1304,  1307,  1311,  1317,  1318,  1321,  1325,  1326,
    1327,  1337,  1338,  1340,  1342,  1344,  1346,  1348,  1350,  1352,
    1357,  1361,  1362,  1365,  1369,  1371,  1373,  1374,  1377,  1381,
    1386,  1391,  1392,  1398,  1400,  1401,  1406,  1409,  1410,  1413,
    1417,  1421,  1425,  1429,  1433,  1437,  1441,  1445,  1447,  1450,
    1454,  1455,  1459,  1461,  1465,  1466,  1470,  1471,  1474,  1478,
    1482,  1487,  1492,  1497,  1502,  1508,  1514,  1517,  1525,  1537,
    1545,  1559,  1571,  1581,  1589,  1597,  1605,  1615,  1625,  1635,
    1647,  1665,  1679,  1695,  1707,  1721,  1722,  1730,  1731,  1739,
    1747,  1759,  1765,  1771,  1781,  1791,  1801,  1807,  1813,  1825,
    1835,  1850,  1865,  1873,  1886,  1897,  1905,  1913,  1921,  1923,
    1925,  1927,  1928,  1931,  1935,  1939,  1942,  1943,  1946,  1950,
    1954,  1958,  1962,  1967,  1968,  1971,  1975,  1979,  1983,  1987,
    1991,  1996,  1997,  2000,  2004,  2008,  2012,  2016,  2021,  2022,
    2025,  2029,  2033,  2037,  2041,  2045,  2050,  2055,  2060,  2061,
    2066,  2067,  2070,  2074,  2078,  2082,  2086,  2090,  2094,  2095,
    2098,  2102,  2104,  2105,  2108,  2112,  2117,  2122,  2126,  2131,
    2132,  2137,  2140,  2143,  2144,  2147,  2151,  2156,  2157,  2163,
    2169,  2170,  2173,  2174,  2181,  2185,  2186,  2191,  2195,  2199,
    2200,  2203,  2207,  2209,  2211,  2212,  2215,  2219,  2223,  2227,
    2231,  2236,  2237,  2246,  2247,  2248,  2252,  2260,  2268,  2281,
    2290,  2302,  2303,  2314,  2316,  2323,  2327,  2334,  2336,  2338,
    2340,  2342,  2343,  2347,  2349,  2352,  2355,  2368,  2371,  2387,
    2392,  2405,  2423,  2446,  2459,  2460,  2463,  2467,  2472,  2477,
    2481,  2484,  2487,  2491,  2495,  2499,  2503,  2507,  2511,  2515,
    2519,  2523,  2527,  2531,  2535,  2541,  2544,  2547,  2551,  2561,
    2565,  2575,  2581,  2582,  2585,  2592,  2601,  2610,  2621,  2623,
    2628,  2630,  2636,  2641,  2646,  2654,  2659,  2667,  2673,  2681,
    2687,  2696,  2697,  2701,  2707,  2713,  2715,  2717,  2719,  2721,
    2723,  2725,  2727,  2729,  2731,  2733,  2735,  2737,  2739,  2741,
    2743,  2745,  2747,  2749,  2751,  2753,  2755,  2757,  2761,  2764,
    2767,  2771,  2775,  2779,  2783,  2787,  2791,  2795,  2799,  2803,
    2807,  2811,  2815,  2819,  2823,  2828,  2833,  2838,  2843,  2848,
    2853,  2858,  2863,  2868,  2873,  2880,  2885,  2890,  2895,  2900,
    2905,  2910,  2917,  2924,  2931,  2937,  2940,  2942,  2944,  2946,
    2948,  2950,  2952,  2954,  2956,  2957,  2959,  2961,  2965,  2967,
    2969,  2973,  2977,  2981,  2987,  2991,  2996,  3001,  3008,  3017,
    3026,  3032,  3038,  3040,  3042,  3044,  3046,  3048,  3053,  3060,
    3062
};
static const short yyrhs[] =
{
      -1,   261,   262,     0,     0,     0,   262,   263,   264,     0,
      62,   255,   267,   256,     0,    99,   255,   290,   256,     0,
      68,   255,   325,   256,     0,    81,   255,   310,   256,     0,
      83,   255,   316,   256,     0,    95,   255,   332,   256,     0,
     111,   255,   355,   256,     0,   131,   255,   382,   256,     0,
     183,   255,   412,   256,     0,   185,   255,   424,   256,     0,
     428,     0,   442,     0,    22,   452,     0,   265,     0,    19,
       7,     0,    19,   190,     7,     0,    19,    21,     7,     0,
      19,    36,     7,     0,    19,    20,     7,     0,    19,    19,
       7,     0,    19,     5,     7,     0,    20,     7,     0,    21,
       7,     0,    21,    62,     7,     0,    21,    99,     7,     0,
      21,    68,     7,     0,    21,    81,     7,     0,    21,    83,
       7,     0,    21,    95,     7,     0,    21,   111,     7,     0,
      21,   131,     7,     0,    21,   183,     7,     0,    21,   185,
       7,     0,    21,     3,     7,     0,     0,   266,   432,     0,
       0,     0,   267,   268,   269,     0,   451,   225,   274,     7,
       0,     5,   289,   225,   274,     7,     0,     0,     5,   287,
     225,   270,   274,     7,     0,    63,   249,   285,   250,     7,
       0,   271,     0,   451,   238,   225,   274,     7,     0,   442,
       0,   441,     0,     0,     0,   451,   249,   445,   250,   225,
      66,   272,   249,   252,   282,   273,   257,   252,   282,   257,
     445,   250,     7,     0,     0,     0,   278,   249,   275,   279,
     276,   280,   250,     0,   252,   282,     0,   274,     0,   451,
     288,     0,    69,     0,     5,     0,   282,     0,    64,     0,
       0,   286,   281,   282,     0,   286,    65,   451,   288,     0,
       5,     0,   284,     0,   255,   283,   256,     0,     0,   283,
     286,   284,     0,   283,   286,   239,   284,     0,     3,     0,
     258,   448,   258,     0,     3,     8,   445,     0,     3,     8,
       3,     8,   445,     0,   451,     0,     5,   255,   256,     0,
       0,   285,   286,     5,     0,   285,   286,     5,   255,   445,
     256,     0,     0,   257,     0,   255,   252,   445,   256,     0,
       0,   255,   256,     0,   255,     3,   256,     0,     0,   290,
     291,     0,    67,   249,   292,   250,     7,     0,     5,   249,
     250,   225,   293,     7,     0,     5,   249,   277,   250,   225,
     293,     7,     0,   442,     0,   441,     0,     0,   292,   286,
       5,     0,    23,   249,   445,   250,     0,    99,   249,     5,
     250,     0,     0,   294,   297,     0,     0,   255,   296,   256,
       0,   293,     0,   296,   257,   293,     0,     0,   298,   299,
       0,   302,     0,     0,     0,   299,   226,   300,   299,     8,
     301,   299,     0,   299,   240,   299,     0,   299,   243,   299,
       0,    58,   249,   299,   257,   299,   250,     0,   299,   241,
     299,     0,   299,   238,   299,     0,   299,   239,   299,     0,
     299,   242,   299,     0,   299,   246,   299,     0,   299,   232,
     299,     0,   299,   234,   299,     0,   299,   233,   299,     0,
     299,   235,   299,     0,   299,   229,   299,     0,   299,   230,
     299,     0,   299,   231,   299,     0,   299,   228,   299,     0,
     299,   227,   299,     0,   239,   299,     0,   238,   299,     0,
     244,   299,     0,   247,   299,   248,     0,   446,     0,   444,
     307,   309,     0,     5,   381,     0,   381,     0,   381,   307,
       0,     0,   121,   303,   249,   297,   250,     0,     0,   128,
     304,   249,   297,   257,     3,   250,     0,     0,    60,   249,
       5,   249,   305,   297,   250,   250,   255,   445,   256,     0,
      61,   249,     5,   250,   255,   445,   257,   445,   256,     0,
      55,   249,   381,   250,     0,    57,   249,   381,   250,     0,
       0,    56,   306,   249,   297,   257,   277,   250,     0,   232,
       5,   234,   249,   297,   250,     0,   253,     5,     0,   253,
     208,     0,   253,   142,     0,   253,     3,     0,   302,   252,
       3,     0,   252,     3,     0,   253,   253,   451,     0,   302,
     254,   445,     0,    59,   249,     5,   257,     3,   250,     0,
     249,   251,   250,     0,   249,   250,     0,   249,   308,   250,
       0,   299,     0,   308,   257,   299,     0,     0,   255,   448,
     256,     0,   255,    69,   249,   277,   250,   256,     0,     0,
     310,   255,   311,   256,     0,     0,   311,   312,     0,    96,
       5,     7,     0,    82,   255,   313,   256,     0,     0,   313,
     255,   314,   256,     0,     0,   314,   315,     0,    69,   277,
       7,     0,    69,    64,     7,     0,    81,     5,   309,     7,
       0,     0,   316,   255,   317,   256,     0,     0,   317,   318,
       0,    96,     5,     7,     0,    88,   293,     7,     0,    82,
     255,   319,   256,     0,     0,   319,   255,   320,   256,     0,
       0,   320,   321,     0,    86,     5,     7,     0,    87,     5,
       7,     0,    82,   255,   322,   256,     0,     0,   322,   255,
     323,   256,     0,     0,   323,   324,     0,    89,     5,     7,
       0,    90,   445,     7,     0,    91,   445,     7,     0,    92,
     445,     7,     0,    93,   445,     7,     0,    94,   445,     7,
       0,     0,   441,     0,   325,   326,     0,   255,   327,   256,
       0,   442,     0,     0,   327,   328,     0,    96,   451,     7,
       0,    96,   451,   287,     7,     0,    86,     5,     7,     0,
      82,   255,   329,   256,     0,    82,     5,   255,   329,   256,
       0,     0,   329,   255,   330,   256,     0,   329,   441,     0,
       0,   330,   331,     0,    86,     5,     7,     0,    69,   277,
       7,     0,    70,   277,     7,     0,    76,   293,     7,     0,
      75,   293,     7,     0,    80,     5,     7,     0,    77,   255,
     446,   286,   446,   256,     7,     0,    71,   277,     7,     0,
      72,   277,     7,     0,    99,   293,     7,     0,    74,   293,
       7,     0,    73,   293,     7,     0,    99,   249,   293,   257,
     293,   250,     7,     0,    74,   249,   293,   257,   293,   250,
       7,     0,    73,   249,   293,   257,   293,   250,     7,     0,
       0,   332,   333,     0,   255,   334,   256,     0,   442,     0,
     441,     0,     0,   334,   335,     0,    96,   451,     7,     0,
      96,     5,   287,     7,     0,    86,     5,     7,     0,    97,
     255,   336,   256,     0,   105,   255,   342,   256,     0,   107,
     255,   349,   256,     0,    68,   255,   352,   256,     0,     0,
     336,   255,   337,   256,     0,     0,   337,   338,     0,    96,
       5,     7,     0,    98,     5,     7,     0,    98,     5,   287,
       7,     0,    99,     5,   339,     7,     0,   100,   255,     5,
     286,     5,   256,     7,     0,   101,   295,     7,     0,   102,
     295,     7,     0,   103,   277,     7,     0,   104,   277,     7,
       0,     0,     0,     0,   255,   112,     5,     7,   111,     5,
     287,     7,   340,    62,   277,     7,   341,   131,     5,   288,
       7,   256,     0,     0,   342,   255,   343,   256,     0,     0,
     343,   344,     0,    96,     5,     7,     0,   106,   345,     7,
       0,    98,   347,     7,     0,     5,     0,   255,   346,   256,
       0,     0,   346,   286,     5,     0,     5,     0,   255,   348,
     256,     0,     0,   348,   286,     5,     0,     0,   349,   255,
     350,   256,     0,     0,   350,   351,     0,    96,   451,     7,
       0,    86,     5,     7,     0,    98,     5,     7,     0,     0,
     352,   255,   353,   256,     0,     0,   353,   354,     0,    98,
       5,     7,     0,   108,   278,     7,     0,   109,   281,     7,
       0,   110,   451,   288,     7,     0,     0,   355,   356,     0,
     255,   357,   256,     0,   442,     0,   441,     0,     0,   357,
     358,     0,    96,   451,     7,     0,    96,     5,   287,     7,
       0,    86,     5,     7,     0,   112,   255,   359,   256,     0,
     116,   255,   366,   256,     0,     0,   359,   255,   360,   256,
       0,   359,   441,     0,     0,   360,   361,     0,    96,   451,
       7,     0,    86,   107,     7,     0,    86,   117,     7,     0,
      86,     5,     7,     0,   182,   447,     7,     0,     0,   113,
     451,   362,   365,     7,     0,     0,   113,     5,   255,   256,
     363,   365,     7,     0,   114,     3,     7,     0,     0,   249,
     364,   297,   250,     7,     0,   129,   277,     7,     0,    83,
       5,     7,     0,    84,     5,     7,     0,    81,     5,     7,
       0,   115,     3,     7,     0,     0,   249,   451,   250,     0,
       0,   366,   367,     0,   366,   442,     0,   366,   441,     0,
     117,   255,   372,   256,     0,   118,   255,   372,   256,     0,
     119,   255,   376,   256,     0,   120,   255,   368,   256,     0,
       0,   368,   369,     0,    86,     5,     7,     0,   110,     5,
       7,     0,   255,   370,   256,     0,     0,   370,   371,     0,
      78,   381,     7,     0,    79,   381,     7,     0,   116,   381,
       7,     0,   129,   277,     7,     0,     0,   372,   373,     0,
       0,     0,   380,   249,   374,   297,   375,   257,   297,   250,
       7,     0,   129,   277,     7,     0,    81,     5,     7,     0,
      83,     5,     7,     0,   130,     7,     0,    84,     5,     7,
       0,    85,   249,     3,   250,     7,     0,     0,   376,   377,
       0,   129,   277,     7,     0,     0,     0,   380,   249,   378,
     297,   379,   257,   381,   250,     7,     0,     0,   121,     0,
     122,     0,   123,     0,   124,     0,   125,     0,   126,     0,
     127,     0,   255,     5,   451,   256,     0,   255,   451,   256,
       0,     0,   382,   383,     0,   255,   384,   256,     0,   442,
       0,   441,     0,     0,   384,   385,     0,    96,   451,     7,
       0,    96,     5,   287,     7,     0,   132,   255,   387,   256,
       0,     0,   139,   386,   255,   394,   256,     0,   441,     0,
       0,   387,   255,   388,   256,     0,   387,   441,     0,     0,
     388,   389,     0,    96,   451,     7,     0,    86,     5,     7,
       0,   133,   390,     7,     0,   134,   452,     7,     0,   137,
     392,     7,     0,   138,     5,     7,     0,   135,   447,     7,
       0,   136,   452,     7,     0,   441,     0,   451,   288,     0,
     255,   391,   256,     0,     0,   391,   286,   451,     0,   451,
       0,   255,   393,   256,     0,     0,   393,   286,   451,     0,
       0,   394,   395,     0,     5,   451,     7,     0,   141,   293,
       7,     0,   151,   255,   401,   256,     0,   155,   255,   403,
     256,     0,   158,   255,   405,   256,     0,   161,   255,   407,
     256,     0,     5,   249,   451,   250,     7,     0,   141,   249,
     293,   250,     7,     0,   150,     7,     0,    15,   249,   293,
     250,   255,   394,   256,     0,    15,   249,   293,   250,   255,
     394,   256,    16,   255,   394,   256,     0,   143,   249,     5,
     257,   293,   250,     7,     0,   167,   249,     5,   257,   293,
     257,   293,   257,   293,   257,   293,   250,     7,     0,   167,
     249,     5,   257,   293,   257,   293,   257,   293,   250,     7,
       0,   167,   249,     5,   257,   293,   257,   293,   250,     7,
       0,   168,   249,     5,   257,   447,   250,     7,     0,   169,
     249,     5,   257,   447,   250,     7,     0,   148,   249,     5,
     257,   293,   250,     7,     0,   149,   249,     5,   257,   277,
     257,     5,   250,     7,     0,   144,   249,     5,   257,     5,
     257,   447,   250,     7,     0,   145,   249,     5,   257,     5,
     257,   445,   250,     7,     0,   146,   249,     5,   257,   445,
     257,   447,   257,   445,   250,     7,     0,   147,   249,     5,
     257,     5,   257,     5,   257,   445,   257,   447,   257,   445,
     257,   445,   250,     7,     0,   151,   249,   445,   257,   445,
     257,   293,   257,   293,   250,   255,   394,   256,     0,   155,
     249,   445,   257,   445,   257,   293,   257,   445,   257,   445,
     250,   255,   394,   256,     0,   158,   249,   445,   257,   445,
     257,   293,   250,   255,   394,   256,     0,   158,   249,   445,
     257,   445,   257,   293,   257,   445,   250,   255,   394,   256,
       0,     0,   190,   396,   249,   398,   399,   250,     7,     0,
       0,   193,   397,   249,   398,   399,   250,     7,     0,   164,
     249,   277,   257,   293,   250,     7,     0,   164,   249,   277,
     257,   293,   257,   445,   257,   293,   250,     7,     0,   185,
     249,   451,   250,     7,     0,   166,   249,   452,   250,     7,
       0,   170,   249,     5,   257,   447,   257,   445,   250,     7,
       0,   171,   249,     5,   257,   445,   257,   452,   250,     7,
       0,   172,   249,     5,   257,   447,   257,   452,   250,     7,
       0,   173,   255,   451,   256,     7,     0,   174,   255,   451,
     256,     7,     0,   180,   255,   451,   257,   277,   257,   452,
     257,   293,   256,     7,     0,   180,   255,   451,   257,   277,
     257,   452,   256,     7,     0,   175,   249,     5,   257,     5,
     257,   445,   257,   445,   250,   255,   394,   256,     7,     0,
     176,   249,     5,   257,     5,   257,   445,   257,   445,   250,
     255,   394,   256,     7,     0,   177,   249,     5,   257,   445,
     250,     7,     0,   181,   255,     5,   257,     5,   257,   134,
     452,   257,     4,   256,     7,     0,   181,   255,     5,   257,
       5,   257,   134,   452,   256,     7,     0,   181,   255,     5,
     257,     5,   256,     7,     0,   178,   249,     5,   257,     5,
     250,     7,     0,   179,   249,     5,   257,     5,   250,     7,
       0,   441,     0,   295,     0,     5,     0,     0,   399,   400,
       0,   257,   205,   452,     0,   257,   208,   447,     0,   257,
     447,     0,     0,   401,   402,     0,   152,   445,     7,     0,
     153,   445,     7,     0,   142,   293,     7,     0,   154,   293,
       7,     0,   139,   255,   394,   256,     0,     0,   403,   404,
       0,   152,   445,     7,     0,   153,   445,     7,     0,   142,
     293,     7,     0,   156,   445,     7,     0,   157,   445,     7,
       0,   139,   255,   394,   256,     0,     0,   405,   406,     0,
     159,   445,     7,     0,    88,   445,     7,     0,   160,   293,
       7,     0,    18,   445,     7,     0,   139,   255,   394,   256,
       0,     0,   407,   408,     0,   159,   445,     7,     0,   162,
     445,     7,     0,    88,   445,     7,     0,    18,   445,     7,
       0,   132,     5,     7,     0,   163,   255,   409,   256,     0,
     139,   255,   394,   256,     0,   140,   255,   394,   256,     0,
       0,   409,   255,   410,   256,     0,     0,   410,   411,     0,
      86,     5,     7,     0,   112,     5,     7,     0,   129,   277,
       7,     0,    88,   445,     7,     0,    99,   293,     7,     0,
      18,     5,     7,     0,     0,   412,   413,     0,   255,   414,
     256,     0,   442,     0,     0,   414,   415,     0,    96,   451,
       7,     0,    96,     5,   287,     7,     0,   133,   451,   288,
       7,     0,   184,     5,     7,     0,   112,   255,   416,   256,
       0,     0,   416,   255,   417,   256,     0,   416,   442,     0,
     416,   441,     0,     0,   417,   418,     0,    96,   451,     7,
       0,    75,   255,   419,   256,     0,     0,   419,   117,   255,
     420,   256,     0,   419,     5,   255,   420,   256,     0,     0,
     420,   421,     0,     0,   380,   249,   422,   297,   250,     7,
       0,    86,     5,     7,     0,     0,   129,   423,   277,     7,
       0,    81,     5,     7,     0,    83,     5,     7,     0,     0,
     424,   425,     0,   255,   426,   256,     0,   442,     0,   441,
       0,     0,   426,   427,     0,    96,   451,     7,     0,   186,
       5,     7,     0,   210,     5,     7,     0,   188,   452,     7,
       0,   139,   255,   430,   256,     0,     0,   185,   451,   187,
     451,   429,   255,   430,   256,     0,     0,     0,   430,   431,
     432,     0,   189,   249,   434,   437,   438,   250,     7,     0,
     190,   249,   434,   437,   438,   250,     7,     0,   190,   249,
     434,   437,   438,   250,   239,   234,   253,   253,   451,     7,
       0,   190,   249,     6,   257,   445,   438,   250,     7,     0,
     190,   249,     6,   257,   223,   249,   452,   250,   438,   250,
       7,     0,     0,   191,   249,   277,   433,   257,   129,   277,
     438,   250,     7,     0,   441,     0,   192,   249,     6,   438,
     250,     7,     0,   451,   436,   257,     0,   451,   436,   435,
       5,   436,   257,     0,   240,     0,   241,     0,   238,     0,
     239,     0,     0,   249,   277,   250,     0,   195,     0,   196,
     277,     0,   197,   277,     0,   199,   255,   255,   448,   256,
     255,   448,   256,   255,   448,   256,   256,     0,   198,   277,
       0,   198,   255,   293,   257,   293,   257,   293,   256,   255,
     447,   257,   447,   257,   447,   256,     0,   200,   255,   448,
     256,     0,   201,   255,   255,   448,   256,   255,   448,   256,
     256,   255,   445,   256,     0,   202,   255,   255,   448,   256,
     255,   448,   256,   255,   448,   256,   256,   255,   445,   257,
     445,   256,     0,   203,   255,   255,   448,   256,   255,   448,
     256,   255,   448,   256,   255,   448,   256,   256,   255,   445,
     257,   445,   257,   445,   256,     0,   196,   277,   204,     5,
     255,   445,   257,   445,   256,   255,   445,   256,     0,     0,
     438,   439,     0,   257,   205,   452,     0,   257,   205,   234,
     452,     0,   257,   205,   237,   452,     0,   257,   206,   445,
       0,   257,   213,     0,   257,   214,     0,   257,   209,   445,
       0,   257,   210,     5,     0,   257,   211,   440,     0,   257,
     212,   440,     0,   257,   210,   440,     0,   257,   207,   445,
       0,   257,   208,   447,     0,   257,   194,     5,     0,   257,
     216,     5,     0,   257,   215,   445,     0,   257,    75,   447,
       0,   257,   217,   445,     0,   257,   217,   255,   448,   256,
       0,   257,   218,     0,   257,   219,     0,   257,   135,   447,
       0,   257,   164,   255,   293,   257,   293,   257,   293,   256,
       0,   257,   220,   295,     0,   257,   221,   255,   445,   257,
     445,   257,   445,   256,     0,   257,   222,   255,   448,   256,
       0,     0,   440,     6,     0,    13,   247,   445,     8,   445,
     248,     0,    13,   247,   445,     8,   445,     8,   445,   248,
       0,    13,     5,   129,   255,   445,     8,   445,   256,     0,
      13,     5,   129,   255,   445,     8,   445,     8,   445,   256,
       0,    14,     0,    15,   247,   445,   248,     0,    17,     0,
      29,   249,   443,   250,     7,     0,   451,   225,   447,     7,
       0,   451,   225,     6,     7,     0,   451,   225,   223,   249,
     452,   250,     7,     0,   451,   225,   453,     7,     0,   451,
     225,    28,   249,   452,   250,     7,     0,    11,   247,     6,
     248,     7,     0,    11,   247,     6,   257,   448,   248,     7,
       0,    12,   247,   451,   248,     7,     0,    12,   247,   451,
     248,   249,   445,   250,     7,     0,     0,   443,   286,     5,
       0,   443,   286,     5,   225,   445,     0,   443,   286,     5,
     225,     6,     0,    35,     0,    36,     0,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,     0,    45,     0,    46,     0,    47,     0,    48,
       0,    49,     0,    50,     0,    51,     0,    52,     0,    53,
       0,    54,     0,   451,     0,   446,     0,   247,   445,   248,
       0,   239,   445,     0,   244,   445,     0,   445,   239,   445,
       0,   445,   238,   445,     0,   445,   240,   445,     0,   445,
     241,   445,     0,   445,   242,   445,     0,   445,   246,   445,
       0,   445,   232,   445,     0,   445,   234,   445,     0,   445,
     233,   445,     0,   445,   235,   445,     0,   445,   229,   445,
       0,   445,   230,   445,     0,   445,   228,   445,     0,   445,
     227,   445,     0,    35,   249,   445,   250,     0,    36,   249,
     445,   250,     0,    37,   249,   445,   250,     0,    38,   249,
     445,   250,     0,    39,   249,   445,   250,     0,    40,   249,
     445,   250,     0,    41,   249,   445,   250,     0,    42,   249,
     445,   250,     0,    43,   249,   445,   250,     0,    44,   249,
     445,   250,     0,    45,   249,   445,   257,   445,   250,     0,
      46,   249,   445,   250,     0,    47,   249,   445,   250,     0,
      48,   249,   445,   250,     0,    49,   249,   445,   250,     0,
      50,   249,   445,   250,     0,    51,   249,   445,   250,     0,
      52,   249,   445,   257,   445,   250,     0,    53,   249,   445,
     257,   445,   250,     0,    54,   249,   445,   257,   445,   250,
       0,   445,   226,   445,     8,   445,     0,   445,   252,     0,
       4,     0,     3,     0,    30,     0,    31,     0,    32,     0,
      33,     0,    34,     0,   451,     0,     0,   445,     0,   449,
       0,   255,   448,   256,     0,   445,     0,   449,     0,   448,
     257,   445,     0,   448,   257,   449,     0,   445,     8,   445,
       0,   445,     8,   445,     8,   445,     0,     5,   255,   256,
       0,     5,   255,   448,   256,     0,    24,   249,     5,   250,
       0,    25,   249,     5,   257,     5,   250,     0,    26,   249,
     445,   257,   445,   257,   445,   250,     0,    27,   249,   445,
     257,   445,   257,   445,   250,     0,     5,   259,   255,   445,
     256,     0,   450,   259,   255,   445,   256,     0,     5,     0,
     450,     0,     6,     0,     5,     0,   453,     0,    10,   247,
     452,   248,     0,    10,   247,   452,   257,   448,   248,     0,
     224,     0,     9,   249,   452,   257,   452,   250,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   372,   372,   446,   449,   449,   455,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   468,   470,   472,   477,
     486,   489,   491,   493,   495,   497,   499,   501,   503,   505,
     507,   509,   511,   513,   515,   517,   519,   521,   523,   525,
     528,   528,   550,   553,   553,   557,   561,   566,   566,   571,
     573,   575,   578,   580,   583,   583,   583,   610,   610,   610,
     638,   647,   654,   689,   694,   705,   708,   722,   727,   730,
     779,   792,   818,   823,   838,   856,   877,   883,   895,   904,
     918,   952,   972,   976,   986,  1003,  1003,  1006,  1012,  1015,
    1018,  1031,  1034,  1037,  1041,  1061,  1105,  1107,  1111,  1114,
    1131,  1140,  1147,  1147,  1155,  1161,  1165,  1170,  1175,  1175,
    1188,  1192,  1192,  1192,  1234,  1240,  1246,  1252,  1258,  1264,
    1270,  1276,  1282,  1288,  1294,  1300,  1306,  1312,  1318,  1324,
    1330,  1337,  1343,  1345,  1354,  1358,  1364,  1438,  1472,  1481,
    1493,  1493,  1507,  1507,  1521,  1521,  1537,  1549,  1555,  1561,
    1561,  1592,  1616,  1629,  1635,  1642,  1648,  1655,  1662,  1670,
    1677,  1693,  1696,  1697,  1700,  1703,  1706,  1711,  1714,  1728,
    1735,  1740,  1745,  1749,  1756,  1761,  1766,  1771,  1777,  1781,
    1786,  1789,  1825,  1833,  1838,  1847,  1851,  1860,  1863,  1868,
    1873,  1878,  1886,  1890,  1902,  1912,  1917,  1922,  1927,  1939,
    1943,  1993,  1996,  1999,  2002,  2005,  2014,  2021,  2022,  2025,
    2047,  2050,  2060,  2064,  2072,  2079,  2088,  2091,  2113,  2130,
    2150,  2157,  2167,  2171,  2183,  2208,  2233,  2238,  2246,  2254,
    2264,  2281,  2289,  2296,  2303,  2312,  2321,  2330,  2349,  2357,
    2360,  2383,  2385,  2389,  2398,  2402,  2410,  2417,  2426,  2429,
    2432,  2435,  2440,  2458,  2505,  2522,  2526,  2531,  2536,  2541,
    2555,  2575,  2580,  2585,  2609,  2664,  2668,  2668,  2668,  2745,
    2751,  2756,  2761,  2765,  2772,  2775,  2780,  2798,  2803,  2807,
    2824,  2838,  2843,  2847,  2860,  2866,  2873,  2880,  2884,  2891,
    2901,  2912,  2929,  3001,  3013,  3017,  3052,  3055,  3058,  3102,
    3109,  3112,  3134,  3136,  3140,  3148,  3152,  3160,  3167,  3177,
    3179,  3184,  3199,  3213,  3217,  3236,  3240,  3245,  3249,  3252,
    3263,  3269,  3269,  3309,  3309,  3376,  3381,  3381,  3698,  3703,
    3712,  3721,  3730,  3735,  3738,  3776,  3793,  3817,  3822,  3829,
    3834,  3837,  3840,  3845,  3853,  3856,  3868,  3878,  3890,  3899,
    3902,  3906,  3908,  3910,  3916,  3937,  3941,  3941,  3941,  4076,
    4100,  4109,  4118,  4123,  4132,  4141,  4158,  4162,  4196,  4196,
    4196,  4275,  4278,  4279,  4280,  4281,  4282,  4283,  4284,  4288,
    4311,  4333,  4340,  4343,  4364,  4366,  4370,  4378,  4382,  4391,
    4398,  4401,  4401,  4406,  4410,  4426,  4441,  4449,  4465,  4469,
    4474,  4483,  4486,  4491,  4496,  4501,  4506,  4510,  4514,  4553,
    4558,  4563,  4573,  4585,  4589,  4594,  4605,  4614,  4623,  4649,
    4656,  4662,  4668,  4674,  4682,  4704,  4711,  4717,  4728,  4739,
    4752,  4767,  4782,  4797,  4817,  4838,  4850,  4870,  4887,  4906,
    4927,  4961,  4974,  4988,  5001,  5014,  5014,  5023,  5023,  5032,
    5043,  5055,  5065,  5073,  5086,  5099,  5113,  5123,  5133,  5147,
    5161,  5179,  5198,  5209,  5224,  5239,  5254,  5269,  5284,  5294,
    5300,  5310,  5316,  5319,  5323,  5333,  5347,  5359,  5363,  5369,
    5373,  5377,  5382,  5391,  5404,  5408,  5414,  5418,  5422,  5426,
    5431,  5440,  5452,  5455,  5461,  5465,  5469,  5473,  5482,  5497,
    5500,  5506,  5510,  5514,  5519,  5529,  5535,  5541,  5550,  5554,
    5558,  5572,  5575,  5587,  5616,  5619,  5622,  5630,  5646,  5654,
    5657,  5678,  5681,  5692,  5695,  5703,  5711,  5757,  5762,  5767,
    5771,  5774,  5776,  5781,  5788,  5792,  5796,  5801,  5807,  5813,
    5826,  5837,  5840,  5840,  5876,  5887,  5887,  5893,  5902,  5918,
    5926,  5929,  5934,  5936,  5939,  5948,  5951,  5959,  5971,  5982,
    5987,  5992,  5992,  6019,  6023,  6023,  6038,  6044,  6050,  6056,
    6062,  6069,  6069,  6079,  6084,  6091,  6105,  6127,  6130,  6131,
    6132,  6135,  6139,  6143,  6151,  6158,  6165,  6189,  6196,  6208,
    6221,  6241,  6267,  6300,  6320,  6346,  6349,  6357,  6364,  6371,
    6375,  6379,  6383,  6387,  6397,  6402,  6407,  6427,  6434,  6443,
    6452,  6461,  6468,  6476,  6480,  6489,  6493,  6497,  6505,  6511,
    6516,  6523,  6537,  6544,  6592,  6604,  6614,  6628,  6642,  6668,
    6672,  6684,  6688,  6703,  6709,  6715,  6721,  6732,  6737,  6749,
    6759,  6775,  6778,  6784,  6790,  6801,  6803,  6804,  6805,  6806,
    6807,  6808,  6809,  6810,  6811,  6812,  6813,  6814,  6815,  6816,
    6817,  6818,  6819,  6820,  6821,  6822,  6825,  6827,  6828,  6829,
    6830,  6831,  6832,  6833,  6834,  6835,  6836,  6837,  6838,  6839,
    6840,  6841,  6842,  6843,  6844,  6845,  6846,  6847,  6848,  6849,
    6850,  6851,  6852,  6853,  6854,  6855,  6856,  6857,  6858,  6859,
    6860,  6861,  6862,  6863,  6864,  6865,  6868,  6871,  6872,  6873,
    6874,  6875,  6876,  6894,  6910,  6915,  6921,  6924,  6929,  6937,
    6940,  6943,  6953,  6961,  6972,  6988,  7010,  7025,  7063,  7071,
    7081,  7091,  7101,  7105,  7110,  7115,  7130,  7135,  7140,  7159,
    7176
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "tINT", "tFLOAT", "tSTRING", "tBIGSTR", 
  "tEND", "tDOTS", "tStrCat", "tSprintf", "tPrintf", "tRead", "tFor", 
  "tEndFor", "tIf", "tElse", "tEndIf", "tFlag", "tHelp", "tCpu", "tCheck", 
  "tInclude", "tConstant", "tList", "tListAlt", "tLinSpace", "tLogSpace", 
  "tListFromFile", "tDefineConstant", "tPi", "t0D", "t1D", "t2D", "t3D", 
  "tExp", "tLog", "tLog10", "tSqrt", "tSin", "tAsin", "tCos", "tAcos", 
  "tTan", "tAtan", "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tFloor", 
  "tCeil", "tFmod", "tModulo", "tHypot", "tSolidAngle", "tTrace", 
  "tOrder", "tCrossProduct", "tDofValue", "tMHTransform", "tMHJacNL", 
  "tGroup", "tDefineGroup", "tAll", "tInSupport", "tMovingBand2D", 
  "tDefineFunction", "tConstraint", "tRegion", "tSubRegion", "tRegionRef", 
  "tSubRegionRef", "tFilter", "tCoefficient", "tValue", "tTimeFunction", 
  "tBranch", "tNode", "tLoop", "tNameOfResolution", "tJacobian", "tCase", 
  "tIntegration", "tFMMIntegration", "tMatrix", "tType", "tSubType", 
  "tCriterion", "tGeoElement", "tNumberOfPoints", "tMaxNumberOfPoints", 
  "tNumberOfDivisions", "tMaxNumberOfDivisions", "tStoppingCriterion", 
  "tFunctionSpace", "tName", "tBasisFunction", "tNameOfCoef", "tFunction", 
  "tdFunction", "tSubFunction", "tSubdFunction", "tSupport", "tEntity", 
  "tSubSpace", "tNameOfBasisFunction", "tGlobalQuantity", "tEntityType", 
  "tEntitySubType", "tNameOfConstraint", "tFormulation", "tQuantity", 
  "tNameOfSpace", "tIndexOfSystem", "tSymmetry", "tEquation", "tGalerkin", 
  "tdeRham", "tGlobalTerm", "tGlobalEquation", "tDt", "tDtDof", "tDtDt", 
  "tDtDtDof", "tJacNL", "tNeverDt", "tDtNL", "tAtAnteriorTimeStep", "tIn", 
  "tFull_Matrix", "tResolution", "tDefineSystem", "tNameOfFormulation", 
  "tNameOfMesh", "tFrequency", "tSolver", "tOriginSystem", 
  "tDestinationSystem", "tOperation", "tOperationEnd", "tSetTime", 
  "tDTime", "tSetFrequency", "tFourierTransform", "tFourierTransformJ", 
  "tLanczos", "tPerturbation", "tUpdate", "tUpdateConstraint", "tBreak", 
  "tTimeLoopTheta", "tTime0", "tTimeMax", "tTheta", "tTimeLoopNewmark", 
  "tBeta", "tGamma", "tIterativeLoop", "tNbrMaxIteration", 
  "tRelaxationFactor", "tIterativeTimeReduction", "tDivisionCoefficient", 
  "tChangeOfState", "tChangeOfCoordinates", "tChangeOfCoordinates2", 
  "tSystemCommand", "tGenerateFMMGroups", "tGenerateOnly", 
  "tGenerateOnlyJac", "tSolveJac_AdaptRelax", "tSaveSolutionExtendedMH", 
  "tSaveSolutionMHtoTime", "tInit_MovingBand2D", "tMesh_MovingBand2D", 
  "tGenerate_MH_Moving", "tGenerate_MH_Moving_Separate", "tAdd_MH_Moving", 
  "tGenerateGroup", "tGenerateJacGroup", "tSaveMesh", "tDeformeMesh", 
  "tDummyFrequency", "tPostProcessing", "tNameOfSystem", "tPostOperation", 
  "tNameOfPostProcessing", "tUsingPost", "tAppend", "tPlot", "tPrint", 
  "tPrintGroup", "tEcho", "tWrite", "tAdapt", "tOnGlobal", "tOnRegion", 
  "tOnElementsOf", "tOnGrid", "tOnSection", "tOnPoint", "tOnLine", 
  "tOnPlane", "tOnBox", "tWithArgument", "tFile", "tDepth", "tDimension", 
  "tTimeStep", "tHarmonicToTime", "tFormat", "tHeader", "tFooter", 
  "tSkin", "tSmoothing", "tTarget", "tSort", "tIso", "tNoNewLine", 
  "tDecomposeInSimplex", "tChangeOfValues", "tFrequencyLegend", 
  "tEvaluationPoints", "tStr", "tDate", "tDEF", "'?'", "tOR", "tAND", 
  "tEQUAL", "tNOTEQUAL", "tAPPROXEQUAL", "'<'", "tLESSOREQUAL", "'>'", 
  "tGREATEROREQUAL", "tLESSLESS", "tGREATERGREATER", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'", 
  "'['", "']'", "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", "'@'", 
  "'~'", "Stats", "@1", "ProblemDefinitions", "@2", "ProblemDefinition", 
  "Interactive", "@3", "Groups", "@4", "Group", "@5", "MovingBand2DGroup", 
  "@6", "@7", "ReducedGroupRHS", "@8", "@9", "GroupRHS", 
  "FunctionForGroup", "ListOfRegionOrAll", "SuppListOfRegion", 
  "SuppListTypeForGroup", "ListOfRegion", "RecursiveListOfRegion", 
  "IRegion", "DefineGroups", "Comma", "DefineDimension", "MultipleIndex", 
  "Index", "Functions", "Function", "DefineFunctions", "Expression", 
  "@10", "ListOfExpression", "RecursiveListOfExpression", 
  "WholeQuantityExpression", "@11", "WholeQuantity", "@12", "@13", 
  "WholeQuantity_Single", "@14", "@15", "@16", "@17", 
  "ArgumentsForFunction", "RecursiveListOfQuantity", 
  "ParametersForFunction", "JacobianMethods", "JacobianMethod", 
  "JacobianMethodTerm", "JacobianCases", "JacobianCase", 
  "JacobianCaseTerm", "IntegrationMethods", "IntegrationMethod", 
  "IntegrationMethodTerm", "IntegrationCases", "IntegrationCase", 
  "IntegrationCaseTerm", "QuadratureCases", "QuadratureCase", 
  "QuadratureCaseTerm", "Constraints", "BracedConstraint", "Constraint", 
  "ConstraintTerm", "ConstraintCases", "ConstraintCase", 
  "ConstraintCaseTerm", "FunctionSpaces", "BracedFunctionSpace", 
  "FunctionSpace", "FunctionSpaceTerm", "BasisFunctions", "BasisFunction", 
  "BasisFunctionTerm", "OptionalParametersForBasisFunction", "@18", "@19", 
  "SubSpaces", "SubSpace", "SubSpaceTerm", "ListOfBasisFunction", 
  "RecursiveListOfBasisFunction", "ListOfBasisFunctionCoef", 
  "RecursiveListOfBasisFunctionCoef", "GlobalQuantities", 
  "GlobalQuantity", "GlobalQuantityTerm", "ConstraintInFSs", 
  "ConstraintInFS", "ConstraintInFSTerm", "Formulations", 
  "BracedFormulation", "Formulation", "FormulationTerm", 
  "DefineQuantities", "DefineQuantity", "DefineQuantityTerm", "@20", 
  "@21", "@22", "IndexInFunctionSpace", "Equations", "EquationTerm", 
  "GlobalEquation", "GlobalEquationTerm", "GlobalEquationTermTerm", 
  "GlobalEquationTermTermTerm", "LocalTerm", "LocalTermTerm", "@23", 
  "@24", "GlobalTerm", "GlobalTermTerm", "@25", "@26", "TermOperator", 
  "Quantity_Def", "Resolutions", "BracedResolution", "Resolution", 
  "ResolutionTerm", "@27", "DefineSystems", "DefineSystem", 
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation", 
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm", 
  "@28", "@29", "PrintOperation", "PrintOperationOptions", 
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm", 
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop", 
  "IterativeLoopTerm", "IterativeTimeReduction", 
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState", 
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing", 
  "PostProcessing", "PostProcessingTerm", "PostQuantities", 
  "PostQuantity", "PostQuantityTerm", "SubPostQuantities", 
  "SubPostQuantity", "SubPostQuantityTerm", "@30", "@31", 
  "PostOperations", "BracedPostOperation", "PostOperation", 
  "PostOperationTerm", "SeparatePostOperation", "@32", 
  "PostSubOperations", "@33", "PostSubOperation", "@34", 
  "PostQuantitiesToPrint", "Combination", "PostQuantitySupport", 
  "PrintSubType", "PrintOptions", "PrintOption", "ParsedStrings", "Loop", 
  "Affectation", "DefineConstants", "NameForFunction", "FExpr", 
  "OneFExpr", "ListOfFExpr", "RecursiveListOfFExpr", "MultiFExpr", 
  "StringIndex", "String__Index", "CharExpr", "StrCat", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,   261,   260,   262,   263,   262,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     266,   265,   267,   268,   267,   269,   269,   270,   269,   269,
     269,   269,   269,   269,   272,   273,   271,   275,   276,   274,
     274,   277,   277,   278,   278,   279,   279,   280,   280,   280,
     281,   282,   282,   283,   283,   283,   284,   284,   284,   284,
     284,   284,   285,   285,   285,   286,   286,   287,   288,   288,
     289,   290,   290,   291,   291,   291,   291,   291,   292,   292,
     293,   293,   294,   293,   295,   295,   296,   296,   298,   297,
     299,   300,   301,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   302,   302,   302,   302,   302,   302,
     303,   302,   304,   302,   305,   302,   302,   302,   302,   306,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   307,   307,   307,   308,   308,   309,   309,   309,   310,
     310,   311,   311,   312,   312,   313,   313,   314,   314,   315,
     315,   315,   316,   316,   317,   317,   318,   318,   318,   319,
     319,   320,   320,   321,   321,   321,   322,   322,   323,   323,
     324,   324,   324,   324,   324,   324,   325,   325,   325,   326,
     326,   327,   327,   328,   328,   328,   328,   328,   329,   329,
     329,   330,   330,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   332,   332,
     333,   333,   333,   334,   334,   335,   335,   335,   335,   335,
     335,   335,   336,   336,   337,   337,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   339,   340,   341,   339,   342,
     342,   343,   343,   344,   344,   344,   345,   345,   346,   346,
     347,   347,   348,   348,   349,   349,   350,   350,   351,   351,
     351,   352,   352,   353,   353,   354,   354,   354,   354,   355,
     355,   356,   356,   356,   357,   357,   358,   358,   358,   358,
     358,   359,   359,   359,   360,   360,   361,   361,   361,   361,
     361,   362,   361,   363,   361,   361,   364,   361,   361,   361,
     361,   361,   361,   365,   365,   366,   366,   366,   366,   367,
     367,   367,   367,   368,   368,   369,   369,   369,   370,   370,
     371,   371,   371,   371,   372,   372,   374,   375,   373,   373,
     373,   373,   373,   373,   373,   376,   376,   377,   378,   379,
     377,   380,   380,   380,   380,   380,   380,   380,   380,   381,
     381,   382,   382,   383,   383,   383,   384,   384,   385,   385,
     385,   386,   385,   385,   387,   387,   387,   388,   388,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   390,   390,
     391,   391,   392,   392,   393,   393,   394,   394,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   396,   395,   397,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   398,
     398,   399,   399,   400,   400,   400,   401,   401,   402,   402,
     402,   402,   402,   403,   403,   404,   404,   404,   404,   404,
     404,   405,   405,   406,   406,   406,   406,   406,   407,   407,
     408,   408,   408,   408,   408,   408,   408,   408,   409,   409,
     410,   410,   411,   411,   411,   411,   411,   411,   412,   412,
     413,   413,   414,   414,   415,   415,   415,   415,   415,   416,
     416,   416,   416,   417,   417,   418,   418,   419,   419,   419,
     420,   420,   422,   421,   421,   423,   421,   421,   421,   424,
     424,   425,   425,   425,   426,   426,   427,   427,   427,   427,
     427,   429,   428,   430,   431,   430,   432,   432,   432,   432,
     432,   433,   432,   432,   432,   434,   434,   435,   435,   435,
     435,   436,   436,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   438,   438,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   440,   440,   441,   441,   441,   441,   441,   441,
     441,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   443,   443,   443,   443,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   446,   446,   446,   446,
     446,   446,   446,   446,   447,   447,   447,   447,   448,   448,
     448,   448,   449,   449,   449,   449,   449,   449,   449,   449,
     450,   450,   451,   451,   452,   452,   452,   452,   452,   452,
     453
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     0,     2,     0,     0,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     1,     1,     2,     1,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     2,     0,     0,     3,     4,     5,     0,     6,     5,
       1,     5,     1,     1,     0,     0,    18,     0,     0,     7,
       2,     1,     2,     1,     1,     1,     1,     0,     3,     4,
       1,     1,     3,     0,     3,     4,     1,     3,     3,     5,
       1,     3,     0,     3,     6,     0,     1,     4,     0,     2,
       3,     0,     2,     5,     6,     7,     1,     1,     0,     3,
       4,     4,     0,     2,     0,     3,     1,     3,     0,     2,
       1,     0,     0,     7,     3,     3,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     3,     1,     3,     2,     1,     2,
       0,     5,     0,     7,     0,    11,     9,     4,     4,     0,
       7,     6,     2,     2,     2,     2,     3,     2,     3,     3,
       6,     3,     2,     3,     1,     3,     0,     3,     6,     0,
       4,     0,     2,     3,     4,     0,     4,     0,     2,     3,
       3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
       4,     0,     2,     3,     3,     4,     0,     4,     0,     2,
       3,     3,     3,     3,     3,     3,     0,     1,     2,     3,
       1,     0,     2,     3,     4,     3,     4,     5,     0,     4,
       2,     0,     2,     3,     3,     3,     3,     3,     3,     7,
       3,     3,     3,     3,     3,     7,     7,     7,     0,     2,
       3,     1,     1,     0,     2,     3,     4,     3,     4,     4,
       4,     4,     0,     4,     0,     2,     3,     3,     4,     4,
       7,     3,     3,     3,     3,     0,     0,     0,    18,     0,
       4,     0,     2,     3,     3,     3,     1,     3,     0,     3,
       1,     3,     0,     3,     0,     4,     0,     2,     3,     3,
       3,     0,     4,     0,     2,     3,     3,     3,     4,     0,
       2,     3,     1,     1,     0,     2,     3,     4,     3,     4,
       4,     0,     4,     2,     0,     2,     3,     3,     3,     3,
       3,     0,     5,     0,     7,     3,     0,     5,     3,     3,
       3,     3,     3,     0,     3,     0,     2,     2,     2,     4,
       4,     4,     4,     0,     2,     3,     3,     3,     0,     2,
       3,     3,     3,     3,     0,     2,     0,     0,     9,     3,
       3,     3,     2,     3,     5,     0,     2,     3,     0,     0,
       9,     0,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     0,     2,     3,     1,     1,     0,     2,     3,     4,
       4,     0,     5,     1,     0,     4,     2,     0,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     3,
       0,     3,     1,     3,     0,     3,     0,     2,     3,     3,
       4,     4,     4,     4,     5,     5,     2,     7,    11,     7,
      13,    11,     9,     7,     7,     7,     9,     9,     9,    11,
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
       9,     5,     0,     2,     6,     8,     8,    10,     1,     4,
       1,     5,     4,     4,     7,     4,     7,     5,     7,     5,
       8,     0,     3,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     4,     4,     4,     4,     4,
       4,     6,     6,     6,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     3,     1,     1,
       3,     3,     3,     5,     3,     4,     4,     6,     8,     8,
       5,     5,     1,     1,     1,     1,     1,     4,     6,     1,
       6
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,     3,     4,    40,   732,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,    19,     0,    16,    17,   733,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   735,   734,     0,     0,   739,    18,   736,   641,
      42,   206,   169,   182,   238,    91,   299,   381,   518,   549,
       0,     0,   628,     0,   630,     0,     0,     0,     0,    41,
     573,     0,   714,     0,     0,     0,    26,    25,    24,    22,
      23,    21,    39,    29,    31,    32,    33,    34,    30,    35,
      36,    37,    38,     0,     0,    85,    43,     0,   207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   707,   706,   732,     0,
       0,     0,     0,     0,     0,   708,   709,   710,   711,   712,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   715,   666,     0,   716,   713,
       0,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       6,     0,   211,     8,   208,   210,   171,     9,   184,    10,
     243,    11,   239,   242,   241,   732,     0,     7,    92,    97,
      96,   304,    12,   300,   303,   302,   386,    13,   382,   385,
     384,   522,    14,   519,   521,   554,    15,   550,   553,   552,
     561,     0,     0,     0,     0,   581,     0,     0,   732,    63,
       0,    61,   571,     0,    88,   594,     0,     0,   633,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   668,   669,     0,   718,     0,
     719,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   705,   632,   635,
     730,   637,     0,   639,     0,     0,   737,     0,   631,   642,
     732,     0,    44,    50,    53,    52,     0,     0,     0,     0,
       0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
     629,   583,     0,     0,     0,     0,     0,     0,     0,     0,
     594,     0,     0,     0,   594,    76,   732,    73,     0,    60,
      71,    80,     0,    57,     0,    62,     0,   731,   724,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   667,   717,     0,   722,
       0,   683,   682,   680,   681,   676,   678,   677,   679,   671,
     670,   672,   673,   674,   675,     0,     0,     0,     0,     0,
       0,     0,     0,    82,   714,     0,     0,     0,     0,     0,
     209,   212,     0,     0,   170,   172,     0,   102,     0,   183,
     185,     0,     0,     0,     0,     0,     0,   240,   244,     0,
       0,    85,     0,     0,     0,     0,   301,   305,     0,     0,
     391,   383,   387,   393,     0,     0,     0,     0,   520,   523,
       0,     0,     0,     0,     0,   551,   555,   563,     0,     0,
     584,   585,   102,   587,     0,     0,     0,     0,     0,     0,
       0,   579,   580,   577,   578,   575,     0,     0,   594,     0,
       0,     0,    85,     0,     0,     0,    89,     0,     0,   595,
     725,   726,     0,     0,     0,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,     0,   695,   696,   697,
     698,   699,   700,     0,     0,     0,     0,   720,   721,     0,
       0,   638,     0,   740,   738,   644,   643,     0,     0,    47,
       0,    85,   732,     0,     0,     0,     0,   218,     0,     0,
     175,     0,   189,     0,     0,     0,   108,     0,   291,     0,
     732,     0,   252,   269,   284,   102,     0,     0,     0,     0,
     732,     0,   311,   335,   732,     0,   394,     0,   732,     0,
     529,    88,     0,     0,   563,     0,     0,     0,   564,     0,
       0,   624,     0,     0,     0,     0,     0,     0,     0,     0,
     582,   581,     0,     0,     0,   707,    78,    81,    72,     0,
      77,     0,    66,    58,    65,   574,   714,   714,     0,     0,
       0,     0,     0,   714,     0,   622,   622,   622,   600,   601,
       0,     0,     0,   615,   616,   104,     0,     0,     0,     0,
       0,   636,     0,     0,     0,     0,   634,   723,   704,   640,
      90,     0,     0,    64,     0,     0,     0,    45,     0,     0,
     218,     0,   215,   213,     0,     0,     0,   173,     0,     0,
       0,   187,   103,     0,   186,     0,   247,     0,   245,     0,
       0,     0,     0,   102,    93,    99,   308,     0,   306,     0,
       0,     0,   388,     0,   416,     0,   524,     0,     0,   527,
     556,   564,   557,   559,   558,   562,     0,     0,     0,     0,
     102,     0,   589,     0,     0,     0,   566,     0,     0,     0,
     567,     0,     0,     0,    74,   594,    85,   612,   617,   102,
     609,     0,     0,   596,   599,   607,   608,   602,   603,   606,
     604,   605,   611,   610,     0,   613,   102,   619,     0,     0,
     727,     0,     0,   694,   701,   702,   703,    87,     0,    46,
      49,    83,    51,     0,     0,   221,   216,   220,   214,   177,
     174,   191,   188,     0,     0,   732,   645,   646,   647,   648,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,     0,   149,     0,     0,
       0,     0,     0,   140,   142,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   138,     0,   135,   713,   293,
     251,   246,   254,   248,   271,   249,   286,   250,    94,     0,
     307,   314,   309,   313,     0,     0,     0,     0,   310,   336,
     338,   337,   389,   397,   390,   396,     0,   525,   533,   528,
     532,   531,   526,   560,   565,     0,   626,   625,     0,     0,
       0,     0,     0,     0,   576,   594,   569,     0,    79,    75,
       0,     0,     0,     0,   597,   598,   623,     0,   106,     0,
       0,     0,     0,     0,    48,     0,    54,   217,     0,     0,
       0,   100,   101,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,   131,   133,     0,   157,   155,
     152,   154,   153,     0,   732,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,   166,     0,     0,
       0,     0,    95,     0,   354,   354,   365,   343,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   445,   447,   392,   417,   468,     0,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,    59,    70,
       0,     0,   102,   614,   105,   102,     0,   621,   728,   729,
       0,     0,     0,     0,     0,     0,   102,   102,   102,   102,
       0,     0,     0,   102,   219,   222,     0,     0,   176,   178,
       0,     0,     0,   190,   192,     0,   108,     0,     0,     0,
       0,     0,   108,   108,     0,   134,   158,     0,   380,     0,
     130,   129,   126,   127,   128,   122,   124,   123,   125,   118,
     119,   114,   117,   120,   115,   121,   156,   159,   162,     0,
     164,     0,     0,   136,     0,     0,     0,     0,   292,   294,
       0,     0,     0,     0,   104,   104,     0,     0,   253,   255,
       0,     0,     0,   270,   272,     0,     0,     0,   285,   287,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   714,
     326,   312,   315,   371,   371,   371,     0,     0,     0,     0,
       0,   714,     0,     0,     0,   395,   398,   407,     0,     0,
     102,   102,     0,     0,     0,     0,     0,     0,     0,     0,
     426,     0,   476,     0,   483,     0,   491,   498,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     530,   534,   627,     0,     0,     0,     0,     0,     0,     0,
       0,   572,    88,    68,     0,   107,     0,    84,     0,     0,
       0,     0,     0,   102,     0,   102,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,   166,   196,     0,     0,
     147,     0,   148,     0,     0,   144,     0,     0,     0,   108,
     379,     0,   161,   163,     0,     0,     0,     0,     0,     0,
      88,     0,     0,   265,     0,     0,     0,     0,     0,     0,
     280,   282,     0,   276,   278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   732,   321,     0,     0,
       0,     0,   108,     0,     0,     0,     0,   372,   373,   374,
     375,   376,   377,   378,     0,     0,   339,   355,     0,   340,
       0,   341,   366,     0,     0,     0,   348,   342,   344,     0,
       0,   410,     0,    88,     0,     0,     0,   414,     0,   412,
       0,     0,   418,     0,     0,   419,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,   104,
     537,     0,     0,     0,     0,     0,     0,     0,   570,     0,
      69,   102,     0,     0,   224,   225,   230,   231,     0,   234,
       0,   233,   227,   226,    85,   228,   223,     0,   232,   180,
     179,     0,     0,   193,   194,     0,     0,     0,   108,     0,
     141,     0,     0,   112,   165,     0,   167,   295,   296,   297,
       0,   256,   257,     0,     0,     0,    85,   261,   262,   263,
     264,   273,    85,   275,    85,   274,   289,   288,   290,   331,
     329,   330,   319,   317,   318,   316,     0,   333,   325,   332,
     328,   320,     0,     0,     0,     0,     0,     0,   362,   356,
       0,   368,     0,     0,     0,   400,   399,    85,   401,   408,
     402,   405,   406,    85,   403,   404,     0,     0,     0,   102,
       0,     0,     0,     0,   102,     0,     0,     0,   102,     0,
       0,   102,   420,   477,     0,     0,   102,     0,     0,     0,
       0,   421,   484,     0,     0,     0,     0,     0,   102,   422,
     492,     0,     0,     0,     0,     0,     0,     0,     0,   423,
     499,   102,     0,   102,   714,   714,   714,     0,   714,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   470,
     469,   471,   471,     0,   535,     0,   714,     0,     0,     0,
       0,   568,     0,     0,    55,   102,   102,     0,   102,   181,
     198,   195,     0,   116,   160,     0,     0,     0,   151,     0,
       0,   298,   258,     0,   259,     0,   281,     0,   277,     0,
     323,     0,     0,     0,   360,   361,   363,     0,   359,   108,
     367,   108,   345,   346,     0,     0,     0,     0,   347,   349,
     409,     0,   413,     0,   424,   416,   425,     0,     0,     0,
       0,     0,     0,     0,     0,   416,     0,     0,     0,     0,
       0,   416,     0,     0,     0,     0,     0,     0,     0,     0,
     416,     0,     0,     0,     0,     0,   416,   416,     0,     0,
     508,     0,   452,     0,     0,     0,     0,     0,     0,   456,
     457,     0,     0,     0,     0,     0,     0,     0,   451,     0,
       0,     0,     0,   536,     0,     0,     0,     0,     0,     0,
     618,   620,     0,     0,     0,     0,     0,     0,   150,     0,
       0,   143,   113,     0,     0,     0,   283,   279,   333,     0,
     322,   327,     0,   357,   369,     0,     0,     0,     0,   411,
     415,     0,     0,   714,     0,   714,     0,     0,     0,   102,
       0,   480,   478,   479,   481,   102,     0,   487,   485,   486,
     488,   489,   102,   496,   494,     0,   493,   495,   503,   502,
     504,     0,     0,   500,   501,     0,     0,     0,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   714,   472,     0,   540,   540,     0,   714,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,   199,     0,     0,   168,
       0,     0,     0,   334,   364,     0,     0,   350,   351,   352,
     353,   427,   429,     0,     0,     0,     0,   435,     0,     0,
     482,     0,   490,     0,   497,   506,   507,   510,   505,   449,
       0,     0,   433,   434,     0,     0,     0,     0,     0,   462,
     466,   467,     0,   465,     0,   446,     0,   714,   475,   448,
     371,   371,   593,     0,   586,   590,     0,     0,     0,   237,
     236,   229,   235,     0,     0,     0,     0,     0,     0,     0,
     146,     0,   260,   324,   108,     0,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,     0,   102,     0,   102,
       0,     0,     0,     0,     0,     0,   102,     0,   473,   474,
       0,     0,     0,   545,   539,     0,   541,   538,   714,     0,
       0,     0,   200,   201,   202,   203,   204,   205,     0,     0,
       0,     0,   416,   437,   438,     0,     0,   436,     0,     0,
     416,     0,     0,     0,     0,   102,     0,     0,   509,   511,
       0,   432,     0,   453,   454,   455,     0,     0,   459,     0,
       0,     0,     0,     0,     0,     0,   542,     0,     0,     0,
       0,   145,     0,     0,     0,     0,     0,   714,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,     0,     0,     0,   464,     0,   547,   548,   544,     0,
     108,   588,     0,     0,     0,   266,   358,   370,   428,   439,
       0,   416,     0,   443,   416,   517,   512,   515,   516,   513,
     514,   450,   431,     0,   416,   416,   458,     0,   546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   463,     0,   591,     0,    56,     0,     0,   441,   416,
     444,   430,     0,     0,   543,     0,     0,     0,     0,   460,
     461,     0,   267,     0,   442,     0,     0,     0,     0,     0,
     440,   592,    88,     0,     0,   268,     0,     0,     0
};

static const short yydefgoto[] =
{
    2006,     1,     2,     3,    22,    23,    24,   106,   181,   302,
     642,   303,  1001,  1632,   231,   485,   716,   232,   233,   603,
     861,   991,   339,   482,   340,   531,   179,   401,   345,   402,
     112,   198,   431,   545,   546,  1500,   869,   662,   663,   803,
    1039,  1529,   804,   891,   892,  1368,   885,   926,  1061,  1063,
     109,   308,   415,   656,   879,  1019,   110,   309,   420,   658,
     880,  1024,  1362,  1637,  1736,   107,   184,   307,   411,   651,
     878,  1015,   111,   192,   310,   428,   669,   929,  1079,  1385,
    1963,  1996,   670,   930,  1084,  1235,  1394,  1232,  1392,   671,
     931,  1089,   665,   928,  1069,   113,   203,   313,   437,   679,
     933,  1102,  1407,  1648,  1252,  1542,   680,   829,  1106,  1278,
    1424,  1559,  1103,  1267,  1549,  1745,  1105,  1272,  1551,  1746,
    1268,   805,   114,   208,   314,   442,   567,   683,   938,  1116,
    1282,  1427,  1288,  1433,   836,   975,  1156,  1157,  1501,  1619,
    1714,  1304,  1453,  1306,  1462,  1308,  1470,  1309,  1480,  1695,
    1826,  1879,   115,   213,   315,   449,   687,   977,  1161,  1503,
    1790,  1846,  1930,  1895,   116,   217,   316,   456,    25,   317,
     578,   696,    79,   342,   224,   476,   332,   330,   346,   489,
     729,   976,    26,   105,   806,   268,   166,   167,   269,   270,
      27,   169,    57,    58
};

static const short yypact[] =
{
  -32768,-32768,     9,  3833,  -213,  -145,  -119,   681,   136,  1018,
     180,  -101,   -40,   -11,    10,    42,    98,   124,   155,   197,
     221,    18,-32768,-32768,   586,-32768,-32768,   -63,   202,   223,
     486,   400,   435,-32768,   497,   510,   547,   549,   565,-32768,
     587,-32768,   590,   595,   607,   612,   616,   620,   641,   644,
     651,   663,-32768,-32768,   292,   438,-32768,-32768,-32768,-32768,
  -32768,   699,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
     509,    22,-32768,   487,-32768,   450,   494,   521,   535,-32768,
  -32768,   531,  2253,  3783,  -133,   540,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   180,   180,   -62,   566,    59,-32768,   -86,
     -25,   189,   455,   534,   563,    94,   576,   400,   710,  3783,
    3783,   400,   379,   130,   845,  3783,-32768,-32768,  -152,   858,
     618,   640,   653,   688,   702,-32768,-32768,-32768,-32768,-32768,
     704,   709,   718,   720,   729,   737,   742,   761,   767,   771,
     775,   798,   810,   811,   814,   817,   821,   822,   823,   826,
     827,  3783,  3783,  3783,  3619,  3771,-32768,   982,-32768,-32768,
    1058,  4535,  1070,  3619,    53,   828,   -31,  1071,-32768,  1074,
  -32768,  1107,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  -183,   833,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,   829,  3831,  1771,  1415,   838,   831,  1415,  -158,-32768,
      17,-32768,-32768,   840,   835,-32768,  4566,  1428,-32768,  1089,
    1091,  3783,  3783,   180,  3783,  3783,  3783,  3783,  3783,  3783,
    3783,  3783,  3783,  3783,  3783,  3783,  3783,  3783,  3783,  3783,
    3783,  3783,  3783,  3783,   180,  -100,  -100,  4938,  3771,   272,
  -32768,  3783,  3783,  3783,  3783,  3783,  3783,  3783,  3783,  3783,
    3783,  3783,  3783,  3783,  3783,  3783,  3783,-32768,-32768,-32768,
  -32768,-32768,   216,-32768,  3783,   180,-32768,  3619,-32768,   873,
     -75,   851,-32768,-32768,-32768,-32768,  -104,   231,   355,   401,
     427,   167,-32768,   577,   411,   675,   642,   847,  3783,  3783,
  -32768,-32768,   130,   130,    48,   849,   852,   853,   854,   859,
  -32768,   130,   466,  3671,-32768,  1108,   -26,-32768,  3619,-32768,
  -32768,-32768,   866,-32768,   870,-32768,   172,-32768,-32768,   313,
     878,   885,  3863,  3947,   880,  4965,  4992,  5019,  5046,  5073,
    5100,  5127,  5154,  5181,  5208,  3968,  5235,  5262,  5289,  5316,
    5343,  5370,  3989,  4010,  4031,   896,-32768,-32768,  3619,  3884,
    3905,  2962,  1087,   899,   899,   765,   765,   765,   765,   -59,
     -59,  -100,  -100,  -100,  -100,  1140,  5397,   898,   243,  3723,
      55,   928,   929,-32768,  2201,   930,  3783,    29,  1161,   400,
  -32768,-32768,   914,  1167,-32768,-32768,   931,    -9,  1188,-32768,
  -32768,   939,  1190,  1192,   943,   944,   952,-32768,-32768,   983,
     959,   182,  1207,  1208,   966,   972,-32768,-32768,  1223,   974,
  -32768,-32768,-32768,-32768,  1225,   985,   400,  1236,-32768,-32768,
     400,   987,  1239,   180,  1240,-32768,-32768,-32768,  3926,  1307,
    1043,-32768,    -9,-32768,   996,  3619,   997,   998,   999,   249,
    1005,-32768,-32768,-32768,-32768,-32768,  1261,  1024,  5937,   253,
    3837,  1021,   328,   433,  1145,    33,-32768,  1272,  3830,-32768,
  -32768,-32768,  1275,  3783,  3783,  1274,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  3783,-32768,-32768,-32768,
  -32768,-32768,-32768,  3783,  3783,  3783,  1276,  3771,-32768,  3783,
    3783,-32768,  1277,-32768,-32768,-32768,  5937,  1031,  3783,-32768,
     156,   280,  -105,  1279,   156,  5424,  1038,-32768,  1291,    19,
  -32768,  1292,-32768,  1056,  1057,  1300,-32768,  1302,-32768,  1304,
      57,  1305,-32768,-32768,-32768,    -9,  1098,  1306,  1325,  1324,
      57,  1327,-32768,-32768,    57,  1329,-32768,  1077,    57,  1334,
  -32768,   835,  1335,  1336,-32768,  1338,  1339,  1340,  1092,  3783,
    3783,-32768,  1344,  1099,  3619,   452,  3619,  3619,  3619,  1348,
  -32768,   838,   180,   308,     6,  1350,  5937,-32768,-32768,    32,
  -32768,   130,-32768,-32768,-32768,-32768,   715,   715,  1102,  1354,
     237,  3783,  3783,   715,  3783,  1355,-32768,-32768,-32768,-32768,
    3783,  1356,  1349,-32768,-32768,  1109,  1110,  1116,  1113,  4052,
    4073,-32768,  5451,  5478,  5505,  5532,-32768,  5937,  5937,-32768,
  -32768,  4597,   156,-32768,  1366,  1367,  1370,-32768,  1369,  1152,
  -32768,    70,-32768,-32768,  1126,  1400,   469,-32768,   517,  3783,
    1404,-32768,-32768,  2140,-32768,   524,-32768,  1403,-32768,   527,
     536,   542,  1405,    -9,-32768,-32768,-32768,  1407,-32768,   194,
     162,  1409,-32768,   199,-32768,  1410,-32768,   627,  1411,-32768,
  -32768,  1155,-32768,-32768,-32768,-32768,   586,   608,  5559,  1164,
      -9,   550,-32768,   560,   564,   568,-32768,  1163,  1173,  1417,
  -32768,  1191,  3783,    37,-32768,-32768,   360,-32768,-32768,    -9,
  -32768,   180,   180,-32768,  5937,  5937,-32768,  5937,-32768,  1421,
    1421,  1421,  5937,-32768,  3619,  5937,    -9,-32768,  3783,  3619,
  -32768,  3783,  3783,-32768,-32768,-32768,-32768,-32768,  1422,-32768,
  -32768,  1175,-32768,  1362,   224,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,  5586,  1185,   235,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  1187,-32768,  1189,  1194,
    1195,  1196,  1197,-32768,-32768,  1432,  2140,  2140,  2140,  2140,
    1437,   150,  1436,  5989,   100,  1198,  1198,-32768,  1199,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1443,
  -32768,-32768,-32768,-32768,  1228,  1230,  1237,  1249,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  2429,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  3783,-32768,-32768,  3783,  1248,
    1256,  1257,  1258,  1260,-32768,-32768,-32768,  1203,  5937,-32768,
     363,  1266,    84,  1262,-32768,-32768,-32768,   588,-32768,   605,
    4094,   624,  5613,  5640,-32768,  3783,-32768,-32768,  1088,   242,
     399,-32768,-32768,-32768,  1263,  1202,  1263,  2140,  1512,  1516,
    1517,  1278,  1280,  1289,  1282,  1282,  1282,  3504,-32768,-32768,
  -32768,-32768,-32768,   400,     5,  1269,-32768,  2140,  2140,  2140,
    2140,  2140,  2140,  2140,  2140,  2140,  2140,  2140,  2140,  2140,
    2140,  2140,  2140,  1521,  3783,  2081,-32768,  1288,   705,   825,
     315,   -24,-32768,  1587,-32768,-32768,-32768,-32768,  1353,    40,
      38,    34,  1281,  1283,  1295,  1301,  1303,  1313,  1314,  1544,
     191,   276,   425,  1312,  1319,  1321,  1328,  1332,  1341,  1345,
    1346,  1357,  1342,  1343,  1358,  1371,  1373,  1375,  1377,  1364,
    1372,  1379,-32768,-32768,-32768,-32768,-32768,    66,  4628,  4115,
      -9,  3619,  3619,  3619,  3619,   365,  1323,  1549,-32768,-32768,
     400,    17,    -9,-32768,-32768,    -9,  3783,-32768,-32768,-32768,
    4659,  1380,   130,   130,   130,   130,    69,   106,    -9,    -9,
    1381,  1579,  1584,   187,-32768,-32768,    95,  1629,-32768,-32768,
    1383,  1630,  1640,-32768,-32768,  1401,-32768,  1408,  3745,  1393,
    1412,  1413,-32768,-32768,  1416,-32768,-32768,  1420,-32768,  2140,
    1923,  2248,  1829,  1829,  1829,   977,   977,   977,   977,   692,
     692,  1282,  1282,  1282,  1282,  1282,-32768,-32768,-32768,  1427,
    5989,   368,  3565,-32768,  1652,    58,  1654,   400,-32768,-32768,
    1659,  1674,  1675,  1430,  1109,  1109,   130,   130,-32768,-32768,
    1677,    39,    44,-32768,-32768,  1682,   400,  1683,-32768,-32768,
    1684,  1685,  1686,   346,   400,  1687,  1690,  1691,   130,   715,
  -32768,-32768,-32768,  1832,  2290,   770,   426,  1692,   400,    49,
     180,   715,   180,    50,  1694,-32768,-32768,-32768,   400,  1688,
      -9,    -9,  1689,  1698,  1700,  1701,  1703,  1704,  1705,  1710,
  -32768,  3783,-32768,  3783,-32768,  3783,-32768,-32768,   130,   180,
    1712,  1718,  1723,  1724,  1730,  1731,   400,   400,  1732,  1735,
    1736,  1738,  1755,   400,  1756,   400,  1498,  1518,  1519,   400,
  -32768,-32768,-32768,  3783,  1515,   629,   631,   685,   687,  1765,
     400,-32768,   835,-32768,  1520,-32768,  4136,-32768,  1523,  1766,
    1774,  1775,  1776,    -9,  1777,    -9,  1783,  1789,  1795,  1201,
    1796,  1797,    -9,  1800,  1801,  1802,  1288,-32768,  1803,  1806,
  -32768,  1557,-32768,  2140,  1812,-32768,  1562,  1568,  1564,-32768,
  -32768,  3451,-32768,-32768,  2140,  1573,   708,  1816,  1817,  1818,
     835,  1819,    54,  1574,  1825,  1824,  1826,  1828,  1830,  1831,
  -32768,-32768,  1833,-32768,-32768,  1834,  1835,  1837,  1843,  1849,
    1854,  1855,  1861,  1862,  1863,  1865,   298,-32768,  1866,  1868,
    1869,  1871,-32768,  1827,  1874,  1875,  1590,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,   130,  1879,-32768,-32768,  1642,-32768,
     130,-32768,-32768,  1649,  1895,  1898,-32768,-32768,-32768,  1897,
    1899,-32768,  1901,   835,  1902,  1903,  1904,-32768,  1907,-32768,
    1911,  1669,-32768,  1670,  1671,-32768,  1665,  1666,  1668,  1672,
    1673,  1676,  1679,  4157,   841,  4178,   716,  4199,   447,   420,
    1680,  1681,  1693,  1695,  1708,  1709,  1721,  1722,  1711,  1729,
    1733,  1734,  1739,  1745,  1750,  1751,  1757,  1696,    51,    51,
  -32768,  1919,  4690,  1737,  1740,  1760,  1763,  1780,-32768,  1920,
  -32768,    -9,  3783,    17,-32768,-32768,-32768,-32768,  1764,-32768,
    1773,-32768,-32768,-32768,  1779,-32768,-32768,  1785,-32768,-32768,
  -32768,  1925,   700,-32768,-32768,   130,  5964,  1697,-32768,  3783,
  -32768,  1936,  1743,-32768,  5989,   130,-32768,-32768,-32768,-32768,
    1934,-32768,-32768,  1935,  1839,  1937,  1779,-32768,-32768,-32768,
  -32768,-32768,   717,-32768,   719,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  1787,  1804,-32768,-32768,
  -32768,-32768,  1770,  1938,  1953,  1979,  1940,  1980,-32768,-32768,
    2037,-32768,  2039,  2041,   380,-32768,-32768,   725,-32768,-32768,
  -32768,-32768,-32768,   728,-32768,-32768,  2042,  1805,  2043,    -9,
    2049,  2050,  3783,  2051,    -9,   130,  3783,  1810,    -9,  3783,
    3783,    -9,-32768,-32768,  3783,  1822,    -9,  3783,  3783,  3783,
    3783,-32768,-32768,  3783,  3783,  3783,  1823,  3783,    -9,-32768,
  -32768,  3783,  3783,  2053,  1836,  1838,  3783,  3783,  1840,-32768,
  -32768,    -9,  2066,    -9,   715,   715,   715,  3783,   715,  2067,
    2073,  2076,  2077,  3783,  2078,  2082,   130,  2084,  2083,-32768,
  -32768,-32768,-32768,    14,-32768,  1841,   715,  3619,  1842,  3619,
    3619,-32768,  1845,  4721,-32768,    -9,    -9,  1201,    -9,-32768,
  -32768,-32768,  1844,-32768,-32768,  1848,  4220,  1853,-32768,  2140,
    1856,-32768,-32768,  2087,-32768,  2094,-32768,  2099,-32768,  2102,
  -32768,   400,  2101,  2139,-32768,-32768,-32768,  1859,-32768,-32768,
  -32768,-32768,-32768,-32768,  1263,  1263,  1263,   130,-32768,-32768,
  -32768,   400,-32768,   400,-32768,-32768,-32768,  1909,  1890,  1891,
    4241,  1892,  1910,  1946,  4262,-32768,  2160,   816,   950,  2161,
    4283,-32768,  2204,  1030,  1062,  1268,  1414,  4304,  1492,  1524,
  -32768,  1559,  2205,  1625,  1655,  2206,-32768,-32768,  1742,  1799,
  -32768,   374,-32768,  1951,  1964,  1965,  1959,  4325,  1960,-32768,
  -32768,  1961,  1962,  5667,  1970,  1971,  1966,   740,-32768,   397,
     409,  1967,  1969,-32768,  3783,  1973,   752,  3783,   758,   766,
  -32768,-32768,  2003,  2013,  2014,  2009,  2016,   785,-32768,  2017,
    3783,-32768,  5989,  2015,  2262,  2018,-32768,-32768,  1804,  2022,
  -32768,-32768,  2266,-32768,-32768,  2268,  2269,  2275,  2301,-32768,
  -32768,  2488,  2303,   715,  3783,   715,  2306,  2305,  2309,    -9,
    2548,-32768,-32768,-32768,-32768,    -9,  2610,-32768,-32768,-32768,
  -32768,-32768,    -9,-32768,-32768,  2669,-32768,-32768,-32768,-32768,
  -32768,  2792,  2850,-32768,-32768,   772,  2308,  3783,    -9,  2314,
    2315,  3783,   180,   180,  3783,  3783,  2316,  2317,  2319,   180,
    2320,  2195,  2323,  2313,-32768,  2328,-32768,-32768,  4752,   715,
    2085,  4783,  2086,  2113,  2117,  2363,  2369,  2370,  2373,  2376,
    3783,  3783,  3783,  3783,  3783,-32768,-32768,  2127,  4814,-32768,
    2272,  2378,  2379,-32768,-32768,  2131,  2132,-32768,-32768,-32768,
  -32768,  2374,-32768,  2141,  5694,  2137,  2142,-32768,  2146,  2143,
  -32768,  2144,-32768,   414,-32768,-32768,-32768,-32768,-32768,-32768,
    4346,   418,-32768,-32768,  5721,  2147,  2148,  4367,  4388,-32768,
  -32768,-32768,   773,-32768,   180,-32768,   180,   715,-32768,-32768,
    2388,  3826,-32768,  2145,-32768,-32768,  2149,  3619,    17,-32768,
  -32768,-32768,-32768,  2396,  2302,  2643,  2664,  2947,  3239,  3783,
  -32768,  2400,-32768,-32768,-32768,  1263,  2151,  2401,  2402,  3783,
    3783,  2403,    -9,  3783,  2152,  3783,   389,    -9,  2411,    -9,
    2414,  2415,  2416,  3783,  3783,  2418,    -9,   776,-32768,-32768,
    2421,  2422,  2423,-32768,-32768,  2180,-32768,-32768,   715,  3783,
     778,  2173,-32768,-32768,-32768,-32768,-32768,-32768,  4845,  2176,
    2182,  2183,-32768,-32768,-32768,  5748,  4409,-32768,  2185,  4430,
  -32768,  5775,  2431,  2432,  3783,    -9,  2433,   130,-32768,-32768,
    2189,-32768,   422,-32768,-32768,-32768,  5802,  5829,-32768,  2191,
    2434,  2445,  2443,  2444,  2447,   130,-32768,  2196,  4451,  2199,
    3783,-32768,  2450,  2451,  2452,  2906,  2453,   715,  2207,  3783,
    2973,  2208,  2454,  2457,  3266,  2458,  2459,  2460,  2461,  2463,
      -9,  2217,  2218,  2468,-32768,  2228,-32768,-32768,-32768,  2478,
  -32768,-32768,  3783,  2240,  5856,-32768,-32768,-32768,-32768,-32768,
    2239,-32768,  5883,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,  2249,-32768,-32768,-32768,  2491,-32768,  2254,
    4876,  3783,  2499,  2462,  3783,  3087,  2252,  3154,  2509,  3205,
    3270,-32768,  2512,-32768,  4472,-32768,   130,  4493,-32768,-32768,
  -32768,-32768,  2513,  2515,-32768,  3783,  2516,  3783,  3386,-32768,
  -32768,  4514,-32768,  5910,-32768,  3783,  2394,  2519,  4907,  2522,
  -32768,-32768,   835,  2526,  2282,-32768,  2539,  2545,-32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  -374,-32768,-32768,  -272,  1482,-32768,
  -32768,  1483,  -480,-32768,  -591,-32768,  -415,  -535,  -568,-32768,
  -32768,-32768,-32768,   230,-32768,  -618,-32768,  -985,-32768,  -659,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,  1744,-32768,  1359,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1906,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,   903,-32768,-32768,-32768,-32768,
  -32768,-32768,  1623,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   -1093,  -754,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768, -1439,-32768,-32768,-32768,  1235,  1064,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
     842,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    1993,-32768,  1873,-32768,  2449,-32768,  1990,  2355,  -313,-32768,
     436,   -18,   -34,-32768,-32768,   115,  -577,  -538,  -172,   -80,
  -32768,    -3,   -72,   -58
};


#define	YYLAST		6235


static const short yytable[] =
{
      28,   292,   168,   688,   655,   604,    80,   737,   714,    -2,
       4,   883,  1273,   710,   543,   667,   558,   469,    70,  1621,
     335,   479,   336,     4,   170,   677,   653,   118,    85,   681,
     533,   175,   176,   685,   536,   335,   335,   336,   336,   430,
     335,  1201,   336,   108,  1230,     4,    29,  1207,  1208,  1233,
     460,   461,   463,   228,     4,     4,  1499,   543,   527,   470,
     293,  1382,  1085,   643,     4,   349,   311,   599,   717,   718,
       5,     6,  1086,   185,  1087,   726,    29,   194,   200,   205,
     210,   214,   219,    71,    72,    73,   807,    74,    11,   989,
     544,   -64,   543,   193,   199,   204,   209,   602,   218,     4,
     228,    29,    30,   237,    28,     5,     6,    29,    28,    28,
      28,    28,    28,    28,   220,   172,   646,   229,   225,   225,
     234,   404,   859,    11,   173,   398,  1661,   229,    31,   543,
    1025,  1622,  1027,   544,   405,   228,  1670,   894,   895,   896,
     897,  1158,  1676,    39,   -64,   406,   286,   305,    59,   990,
     237,  1685,   287,   899,    29,   900,   644,  1691,  1692,  1194,
     648,   643,  1159,   304,   229,   593,   483,     4,   544,   186,
     187,   354,   228,     5,     6,    71,    72,    73,   306,    74,
     400,   283,   284,   285,    29,    52,    53,   286,   177,    54,
      55,    11,   375,   287,     4,   178,    81,   165,   171,   229,
       5,     6,    71,    72,    73,   544,    74,    71,    72,    73,
     543,    74,    71,    72,    73,    60,    74,   296,    11,   807,
     807,   807,   807,   397,  1372,   229,   297,   341,  1028,   481,
     188,   189,  1088,    29,   222,   223,   229,    71,    72,    73,
     236,    74,    52,    53,    61,   711,    54,    55,  1040,  1041,
    1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1053,  1054,  1055,    29,    62,  1060,  1412,   748,   119,
    1623,   713,   337,    69,   654,   338,   265,   266,   267,   824,
     825,   826,   827,  1121,   537,   120,   544,  1120,   337,  1118,
     338,   338,   901,   585,  1231,   338,   443,    63,   518,  1234,
     230,   862,   294,   462,  1281,  1287,   736,   528,   234,   654,
     807,  1016,   654,   407,   182,   183,    29,   408,  1183,   234,
     234,   234,  1160,  1017,   168,   755,   756,   409,   234,   715,
     807,   807,   807,   807,   807,   807,   807,   807,   807,   807,
     807,   807,   807,   807,   807,   807,   170,   230,   807,   211,
     212,  1242,   923,    64,   924,  1185,   352,   353,   902,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,    65,
    1211,   576,   230,  1525,     4,   226,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   860,   903,    56,     4,   539,  1872,   230,   396,
      66,  1080,   701,  1081,   703,   704,   705,   429,   828,   230,
     551,  1082,   487,  1905,    71,    72,    73,    82,    74,   488,
     561,  1910,   557,   458,   459,   565,  1192,   412,  1471,   178,
    1131,   569,    86,   571,   190,   191,  1132,   573,   478,   821,
     822,   413,    67,  1243,   833,   834,  1225,  1226,  1554,  1555,
     195,    56,   807,  1244,   395,  1464,     5,     6,    71,    72,
      73,   721,    74,   378,   722,  1873,    68,  1874,    83,   755,
     877,  1020,   341,   416,    11,  1021,  1022,   410,  1875,   417,
     802,   524,    84,   517,    29,   421,  1556,   418,  1018,   589,
     378,  1876,  1965,   594,    87,  1967,   488,   438,  1472,  1557,
     488,  1173,  1274,   422,   526,  1969,  1970,    88,  1877,   165,
     708,   535,   196,   423,   424,  1133,   168,   168,   377,   378,
     645,  1134,   425,   168,   426,  1465,  1275,   178,   723,     4,
    1988,   103,   985,   439,  1366,     5,     6,    71,    72,    73,
     440,    74,  1473,  1406,    89,  1374,    90,    29,   709,  1474,
    1475,  1251,   867,    11,  1653,   488,  1654,   871,     4,   490,
     378,  1083,    91,  1285,     5,     6,    71,    72,    73,  1476,
      74,     4,  1477,  1478,   598,   178,  1466,     5,     6,    71,
      72,    73,    11,    74,    92,   596,   341,    93,   234,    71,
      72,    73,    94,    74,  1340,    11,  1467,  1468,   629,   630,
     -67,   414,  1354,   987,    95,  1169,   845,   178,  1213,    96,
     488,   632,   488,    97,  1696,  1214,   807,    98,   633,   634,
     635,  1697,     4,   757,   637,   638,  1558,   807,     5,     6,
      71,    72,    73,   641,    74,  1878,   831,  1712,    99,   864,
     865,   100,  1380,   841,  1713,  1023,    11,   419,   101,  1715,
     808,   823,   830,   432,  1824,   835,  1713,   441,  1828,   840,
     102,  1825,  1919,   433,  1135,  1829,  1479,    28,    80,  1920,
    1136,  1276,  1277,   427,    28,   104,    32,  1383,    33,   434,
     378,   600,   583,   435,   697,   698,   117,  1845,  1845,   121,
      34,    35,    36,  1469,   471,   472,   473,   474,   702,   378,
     341,   197,    71,    72,    73,  1429,    74,    37,   126,   127,
     128,   165,   165,   475,   759,   760,   724,   725,   165,   727,
    1179,  1180,  1181,  1182,   120,   732,   757,   735,   450,   130,
     131,   132,   133,   122,  1195,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     123,   444,   761,   762,   763,    75,    76,    77,    78,   809,
     810,   451,   812,   813,   124,   672,   125,   445,   174,   201,
     202,   814,   815,   808,   808,   808,   808,   816,   817,   905,
    1655,  1656,  1657,  1064,  1227,  1228,   850,   378,   446,  1165,
    1166,  1167,  1168,  1065,  1066,  1067,   851,   378,   206,   207,
     852,   378,   180,  1672,   853,   378,  1250,   858,   452,  1860,
     453,   215,   216,   436,   272,   273,   274,   275,   276,   221,
     277,   278,   279,   280,   993,   378,   281,   282,   283,   284,
     285,   235,   454,   870,   286,  1455,   872,   873,  1456,   447,
     287,   994,   995,  1514,   846,   238,  1310,   239,  1457,  1458,
    1642,    38,  1459,  1460,  1729,  1730,  1731,  1732,  1733,  1734,
     997,   378,   838,   839,   808,  1334,   378,  1335,   378,   240,
    1216,  1257,  1258,  1259,  1260,  1261,  1262,  1263,   455,  1270,
    1036,  1037,   241,   819,   808,   808,   808,   808,   808,   808,
     808,   808,   808,   808,   808,   808,   808,   808,   808,   808,
    1117,  1070,   808,  1071,  1072,  1073,  1074,  1075,  1076,  1077,
     849,   448,   918,   919,   920,   921,  1119,   242,   922,  1517,
    1635,  1336,   378,  1337,   378,  1959,  1604,  1605,  1606,   863,
    1608,   243,   807,   244,   161,  1520,  1521,  1673,   245,   162,
     978,  1068,   163,   979,  1376,   378,   868,   246,  1625,   247,
     164,  1535,  1461,  1536,   178,  1538,   178,  1537,   248,  1539,
    1447,  1560,   178,  1448,  1562,   178,   249,  1172,   341,   288,
    1000,   250,  1417,  1449,  1450,  1451,  1710,  1711,  1420,   234,
     234,   234,   234,   281,   282,   283,   284,   285,  1720,   378,
     251,   286,  1561,   234,  1722,   378,   252,   287,  1563,   168,
     253,    40,  1723,   378,   254,    41,  1271,  1767,  1768,  1835,
    1836,   168,  1890,  1891,  1899,   378,   808,  1678,  1284,  1057,
    1286,  1735,   272,   273,   274,   275,   276,   255,   277,   278,
     279,   280,   730,   731,   281,   282,   283,   284,   285,   256,
     257,  1861,   286,   258,  1220,   289,   259,  1311,   287,  1679,
     260,   261,   262,   234,   234,   263,   264,   291,   298,   299,
      42,  1078,   312,  1237,   318,   295,    43,   331,   333,   343,
     344,  1245,  1247,  1522,   350,   234,   351,  1452,   399,    44,
     403,    45,   457,  1530,   464,  1280,  1283,   465,   466,   467,
    1289,  1176,   300,    46,   468,  1291,   480,    47,     5,     6,
      71,    72,    73,   484,    74,  1753,   486,  1755,   491,    48,
     495,   277,   278,   279,   280,   234,    11,   281,   282,   283,
     284,   285,   492,  1318,  1319,   286,   516,   521,   523,    49,
    1325,   287,  1327,   529,   530,   534,  1331,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,   538,  1339,  1011,   540,
     301,  1122,   541,  1573,  1012,  1788,   272,   273,   274,   275,
     276,  1793,   277,   278,   279,   280,   542,  1013,   281,   282,
     283,   284,   285,   547,   548,   549,   286,   550,   552,   553,
     808,    50,   287,    51,   126,   127,     4,   554,   555,   556,
    1164,   808,   559,   560,   165,   916,   917,   918,   919,   920,
     921,   562,  1174,   922,  1616,  1175,   165,   563,   564,   566,
     568,   135,   136,   137,   138,   139,  1184,  1186,  1187,  1188,
     570,   572,   574,  1193,   575,   577,  1303,   582,  1305,  1839,
    1307,   584,   586,   587,   588,   590,   272,   273,   274,   275,
     276,   234,   277,   278,   279,   280,   591,   234,   281,   282,
     283,   284,   285,   592,   601,  1680,   286,   597,  1332,   605,
     628,   631,   287,   636,   639,  1658,   647,   640,   272,   273,
     274,   275,   276,   650,   277,   278,   279,   280,   652,   657,
     281,   282,   283,   284,   285,   659,   660,   661,   286,   664,
    1897,   666,   668,   674,   287,   580,   275,   276,  1851,   277,
     278,   279,   280,   673,  1902,   281,   282,   283,   284,   285,
     675,   676,   684,   286,   678,  1626,   682,  1628,  1629,   287,
     341,   686,   689,   690,  1014,   692,   693,   694,   695,   699,
    1293,  1294,   126,   127,     4,   706,   700,   719,   712,   720,
     728,   733,   234,   740,   736,   738,    71,    72,    73,  1940,
      74,   739,   234,   749,   750,   751,   752,   753,   528,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   168,   168,   168,   758,   168,   764,
     811,   843,   818,  1348,   820,  1350,   832,   837,   842,   848,
     854,  1681,  1357,   855,   856,   857,   168,   866,   876,   874,
     875,   126,   127,   128,  2003,   882,   884,   893,   886,  1107,
     898,   904,   234,   887,   888,   889,   890,   925,  -665,  1108,
     932,  1026,   130,   131,   132,   133,   986,  1513,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   934,  1526,   935,  1109,  1110,  1111,  1112,
    1113,  1114,   936,   234,   272,   273,   274,   275,   276,  1683,
     277,   278,   279,   280,   937,   980,   281,   282,   283,   284,
     285,   981,   982,   983,   286,   984,   988,  1029,   802,   992,
     287,  1030,  1031,  1034,  1056,  1038,   808,  1032,   922,  1033,
    1123,  1684,  1124,   272,   273,   274,   275,   276,  1649,   277,
     278,   279,   280,  1062,  1125,   281,   282,   283,   284,   285,
    1126,  1130,  1127,   286,   234,   581,  1171,  1570,  1659,   287,
    1660,  1574,  1128,  1129,  1577,  1578,  1686,  1137,  1138,  1580,
    1139,  1512,  1583,  1584,  1585,  1586,  1170,  1140,  1587,  1588,
    1589,  1141,  1591,   168,  1190,   168,  1593,  1594,   161,  1191,
    1142,  1598,  1599,   162,  1143,  1144,   163,  1146,  1147,   165,
     165,   165,  1607,   165,   734,  1917,  1145,  1148,  1613,  1115,
     321,   322,   323,   324,   325,   326,   327,   328,   329,  1153,
    1149,   165,  1150,  1929,  1151,  1850,  1152,  1154,  1155,  1178,
    1775,  1776,  1688,   168,  1196,  1198,  1189,  1782,  1197,   168,
     272,   273,   274,   275,   276,  1199,   277,   278,   279,   280,
    1204,  1200,   281,   282,   283,   284,   285,  1217,  1202,   989,
     286,  1205,  1689,  1206,  1221,  1209,   287,   161,  1090,  1567,
    1091,  1092,   162,  1093,  1572,   163,  1210,  1212,  1576,  1222,
    1223,  1579,  1229,  1094,   348,  1224,  1582,  1236,  1238,  1239,
    1240,  1241,  1246,  1248,  1249,  1292,  1295,  1279,  1592,  1290,
    1095,  1096,  1097,  1296,  1986,  1297,  1298,   168,  1299,  1300,
    1301,  1601,  1837,  1603,  1838,  1302,  1098,  1312,   272,   273,
     274,   275,   276,  1313,   277,   278,   279,   280,  1314,  1315,
     281,   282,   283,   284,   285,  1316,  1317,  1320,   286,  1718,
    1321,  1322,  1721,  1323,   287,  1633,  1634,  1328,  1636,  1693,
     272,   273,   274,   275,   276,  1738,   277,   278,   279,   280,
    1324,  1326,   281,   282,   283,   284,   285,  1329,   168,  1099,
     286,  1333,  1338,  1344,  1330,  1343,   287,  1341,   165,  1754,
     165,  1345,  1346,  1347,  1349,   272,   273,   274,   275,   276,
    1351,   277,   278,   279,   280,   341,  1352,   281,   282,   283,
     284,   285,  1353,  1355,  1356,   286,  1694,  1358,  1359,  1360,
    1363,   287,  1770,  1364,  1365,  1367,  1774,  1369,  1370,  1777,
    1778,  1371,  1375,  1377,  1378,  1379,  1381,   168,   165,  1384,
    1386,  1387,  1413,  1388,   165,  1389,  1100,  1390,  1391,  1416,
    1393,  1395,  1396,  1101,  1397,  1804,  1805,  1806,  1807,  1808,
    1398,   272,   273,   274,   275,   276,  1399,   277,   278,   279,
     280,  1400,  1401,   281,   282,   283,   284,   285,  1402,  1403,
    1404,   286,  1405,  1408,   234,  1409,  1410,   287,  1411,  1414,
    1415,   272,   273,   274,   275,   276,  1418,   277,   278,   279,
     280,  1419,   234,   281,   282,   283,   284,   285,  1421,  1759,
    1422,   286,   165,  1423,  1425,  1761,  1426,   287,  1428,  1430,
    1431,  1432,  1763,  1253,  1434,  1254,  1255,  1256,  1435,  1436,
    1437,  1438,  1439,  1440,  1858,  1441,  1504,  1511,  1771,  1442,
    1443,  1482,  1519,  1444,  1865,  1866,  1445,  1481,  1869,  1527,
    1871,  1531,  1532,  1547,  1534,  1544,  1498,  1524,  1886,  1887,
    1483,  1533,  1484,  1257,  1258,  1259,  1260,  1261,  1262,  1263,
    1545,  1264,  1265,   165,  1898,  1485,  1486,  1489,   272,   273,
     274,   275,   276,   234,   277,   278,   279,   280,  1487,  1488,
     281,   282,   283,   284,   285,  1490,  1546,  1548,   286,  1914,
    1491,  1492,  1506,  1528,   287,  1507,  1493,   272,   273,   274,
     275,   276,  1494,   277,   278,   279,   280,  1495,  1496,   281,
     282,   283,   284,   285,  1497,  1934,  1508,   286,  1509,   320,
    1543,  1515,   165,   287,  1942,   272,   273,   274,   275,   276,
    1516,   277,   278,   279,   280,  1510,   178,   281,   282,   283,
     284,   285,  1518,  1540,  1550,   286,  1552,  1960,  1553,  1564,
    1566,   287,  1868,  1541,  1568,  1569,  1571,  1880,  1595,  1882,
    1565,   912,   913,   914,   915,  1575,  1889,   916,   917,   918,
     919,   920,   921,  1602,  1609,   922,  1974,  1581,  1590,  1977,
    1610,  1611,  1612,  1614,   126,   127,   765,  1615,  1266,  1617,
    1618,  1596,  1644,  1597,  1638,  1600,  1624,  1627,  1639,  1645,
    1991,  1630,  1993,  1641,  1646,  1915,  1643,  1647,  1650,  1652,
    1998,   135,   136,   137,   138,   139,   766,   767,   768,   769,
     770,   771,   772,   773,   774,   775,   776,   777,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   126,   127,   765,  1651,  1663,  1664,  1666,
    1953,   908,   909,   910,   911,   912,   913,   914,   915,  1662,
    1667,   916,   917,   918,   919,   920,   921,  1671,  1674,   922,
     135,   136,   137,   138,   139,   766,   767,   768,   769,   770,
     771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
     791,   792,   793,  1668,   126,   127,   532,   129,  1698,   794,
      54,  1677,  1687,  1690,  1699,  1700,  1701,  1703,  1704,  1705,
    1707,  1708,  1716,  1709,  1717,   130,   131,   132,   133,   134,
    1719,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   126,   127,   128,   129,
    1724,   793,    54,  1725,  1726,  1727,  1728,  1737,   794,  1740,
     229,  1739,  1743,  1744,  1741,  1747,  1748,   130,   131,   132,
     133,   134,  1749,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,  1750,  1853,
    1752,  1756,  1757,   795,  1758,  1769,   126,   127,   128,   796,
     797,  1772,  1773,  1779,  1780,   798,  1781,  1783,   799,  1784,
    1785,  1058,  1059,   800,   801,  1789,   802,   130,   131,   132,
     133,  1794,  1796,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,  1797,  1798,
    1799,  1253,   795,  1254,  1255,  1256,  1800,  1801,   796,   797,
    1802,  1803,  1809,  1811,   798,  1812,  1813,   799,  1814,  1815,
    1816,  1817,   800,   801,  1819,   802,  1821,  1831,  1832,  1820,
    1822,  1823,  1848,  1852,  1849,  1859,  1862,  1870,  1863,  1864,
    1867,  1257,  1258,  1259,  1260,  1261,  1262,  1263,  1881,  1264,
    1265,  1883,  1884,  1885,   160,  1888,  1892,  1893,  1894,  1896,
    1900,   654,  1903,  1904,   939,  1908,  1912,  1913,  1916,  1918,
     161,  1924,    71,    72,   940,   162,    74,  1923,   163,  1925,
    1926,  1927,  1931,   230,  1928,  1933,   164,  1935,  1936,  1937,
    1939,  1945,  1941,  1944,  1946,  1948,  1949,  1950,  1951,  1840,
    1952,  1841,  1954,  1955,  1842,  1956,   160,   909,   910,   911,
     912,   913,   914,   915,  1957,  1958,   916,   917,   918,   919,
     920,   921,   161,   939,   922,  1961,  1964,   162,  1971,  1968,
     163,    71,    72,   940,  1972,    74,  1975,  1979,   164,  1257,
    1258,  1259,  1260,  1261,  1262,  1263,  1981,  1843,  1786,  1984,
    1989,  1787,  1990,  1992,  1976,  1999,  2000,  2002,   272,   273,
     274,   275,   276,  2004,   277,   278,   279,   280,  2005,  2007,
     281,   282,   283,   284,   285,  2008,  1269,  1218,   286,  1219,
     927,  1742,   161,   939,   287,  1361,   754,   162,  1104,  1791,
     163,    71,    72,   940,  1502,    74,  1620,   691,   164,   844,
     941,   227,   942,   943,   944,   945,   946,   947,   948,   949,
     950,   707,   334,     0,   951,     0,     0,   952,     0,     0,
     953,     0,     0,   954,     0,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,     0,     0,     0,   971,   939,     0,     0,     0,   972,
       0,     0,   973,    71,    72,   940,     0,    74,     0,   941,
       0,   942,   943,   944,   945,   946,   947,   948,   949,   950,
       0,     0,     0,   951,  1844,     0,   952,     0,     0,   953,
    1854,     0,   954,     0,   955,   956,   957,   958,   959,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
       0,  1855,     0,   971,   939,     0,     0,     0,   972,     0,
       0,   973,    71,    72,   940,   974,    74,     0,     0,   941,
       0,   942,   943,   944,   945,   946,   947,   948,   949,   950,
       0,     0,     0,   951,     0,     0,   952,     0,     0,   953,
       0,     0,   954,     0,   955,   956,   957,   958,   959,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
       0,     0,     0,   971,     0,     0,     0,     0,   972,     0,
       0,   973,     0,     0,  1751,     0,     0,     0,     0,     0,
       0,   941,     0,   942,   943,   944,   945,   946,   947,   948,
     949,   950,     0,     0,     0,   951,     0,     0,   952,     0,
       0,   953,     0,     0,   954,     0,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,     0,     0,     0,   971,     0,   939,     0,     0,
     972,     0,     0,   973,  1760,    71,    72,   940,     0,    74,
     941,     0,   942,   943,   944,   945,   946,   947,   948,   949,
     950,     0,     0,     0,   951,     0,     0,   952,     0,     0,
     953,     0,     0,   954,     0,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,     0,     0,     0,   971,   939,     0,     0,     0,   972,
       0,     0,   973,    71,    72,   940,  1762,    74,     0,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,   939,     0,     0,     0,     0,   287,     0,     0,    71,
      72,   940,     0,    74,     0,  1764,     0,     0,     0,     0,
       0,     0,     0,   941,     0,   942,   943,   944,   945,   946,
     947,   948,   949,   950,     0,     0,     0,   951,     0,     0,
     952,     0,     0,   953,  1856,     0,   954,     0,   955,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,     0,     0,     0,   971,   939,     0,
       0,     0,   972,     0,     0,   973,    71,    72,   940,     0,
      74,   941,     0,   942,   943,   944,   945,   946,   947,   948,
     949,   950,     0,     0,     0,   951,     0,     0,   952,     0,
       0,   953,     0,     0,   954,     0,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,     0,     0,     0,   971,     0,     0,     0,     0,
     972,     0,     0,   973,     0,     0,     0,   941,  1765,   942,
     943,   944,   945,   946,   947,   948,   949,   950,     0,     0,
       0,   951,     0,     0,   952,     0,     0,   953,     0,     0,
     954,     0,   955,   956,   957,   958,   959,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,     0,     0,
       0,   971,   939,     0,     0,     0,   972,     0,     0,   973,
      71,    72,   940,     0,    74,     0,  1766,     0,     0,     0,
       0,     0,     0,     0,   941,     0,   942,   943,   944,   945,
     946,   947,   948,   949,   950,     0,     0,     0,   951,     0,
       0,   952,     0,     0,   953,     0,     0,   954,     0,   955,
     956,   957,   958,   959,   960,   961,   962,   963,   964,   965,
     966,   967,   968,   969,   970,     0,     0,     0,   971,   939,
       0,     0,  1938,   972,     0,     0,   973,    71,    72,   940,
       0,    74,     0,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     274,   275,   276,   286,   277,   278,   279,   280,     0,   287,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     939,     0,     0,     0,   287,     0,     0,     0,    71,    72,
     940,     0,    74,     0,     0,     0,     0,     0,   941,  1943,
     942,   943,   944,   945,   946,   947,   948,   949,   950,     0,
       0,     0,   951,     0,     0,   952,  1857,     0,   953,     0,
       0,   954,     0,   955,   956,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,     0,
       0,     0,   971,  1947,     0,   939,     0,   972,     0,     0,
     973,     0,     0,    71,    72,   940,     0,    74,     0,     0,
       0,     0,     0,     0,     0,   941,     0,   942,   943,   944,
     945,   946,   947,   948,   949,   950,     0,     0,     0,   951,
       0,     0,   952,     0,     0,   953,     0,     0,   954,     0,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,     0,     0,     0,   971,
       0,     0,     0,  1978,   972,     0,   941,   973,   942,   943,
     944,   945,   946,   947,   948,   949,   950,     0,     0,     0,
     951,     0,     0,   952,     0,     0,   953,     0,     0,   954,
       0,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,     0,     0,     0,
     971,   939,     0,     0,     0,   972,     0,     0,   973,    71,
      72,   940,     0,    74,     0,     0,     0,     0,     0,     0,
    1980,   941,     0,   942,   943,   944,   945,   946,   947,   948,
     949,   950,     0,     0,     0,   951,     0,     0,   952,     0,
       0,   953,     0,     0,   954,     0,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,     0,     0,     0,   971,     0,     0,     0,  1373,
     972,  1982,     0,   973,     0,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
       0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
       0,     0,     0,     0,     0,     0,  1983,   941,     0,   942,
     943,   944,   945,   946,   947,   948,   949,   950,     0,     0,
       0,   951,     0,     0,   952,     0,     0,   953,     0,     0,
     954,     0,   955,   956,   957,   958,   959,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   126,   127,
     128,   971,     0,     0,     0,     0,   972,     0,     0,   973,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
     131,   132,   133,     0,     0,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
       0,     0,   126,   127,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1215,     0,     0,     0,     0,     0,
       0,     0,  1994,   130,   131,   132,   133,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   126,   127,     4,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,     0,     0,   916,
     917,   918,   919,   920,   921,     0,     0,   922,     0,     0,
       0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   126,   127,     4,   525,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
       0,     0,   916,   917,   918,   919,   920,   921,     0,     0,
     922,     0,  1035,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,     0,   271,
       0,     0,     0,     0,     0,     0,   126,   127,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,     0,     0,     0,     0,   162,
       0,     0,   163,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,     4,   319,
     595,   127,     4,     0,     5,     6,     0,     0,     0,     0,
       0,     0,     7,     8,     9,    10,     0,     0,   161,     0,
       0,     0,    11,   162,     0,     0,   163,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   519,     0,   477,    12,     0,     0,     0,     0,
       0,    13,     0,     0,     0,   606,     0,  1840,     0,  1841,
     161,     0,  1842,   520,    14,   162,    15,     0,   163,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     0,    17,     0,   579,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,  1257,  1258,  1259,
    1260,  1261,  1262,  1263,     0,  1843,     0,     0,     0,     0,
       0,     0,   161,     0,    19,   607,     0,   162,     0,     0,
     163,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,     0,     0,   916,   917,   918,   919,   920,   921,     0,
       0,   922,     0,     0,   608,     0,     0,   272,   273,   274,
     275,   276,  1203,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,    20,   286,    21,     0,
       0,     0,   161,   287,   609,     0,     0,   162,     0,     0,
     163,     0,     0,     0,     0,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,     0,     0,     0,     0,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,   161,   286,     0,     0,
       0,   162,  1847,   287,   163,     0,     0,     0,     0,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
     493,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,   494,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
     287,   277,   278,   279,   280,   506,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
     276,   287,   277,   278,   279,   280,   513,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
     275,   276,   287,   277,   278,   279,   280,   514,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
     274,   275,   276,   287,   277,   278,   279,   280,   515,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
     273,   274,   275,   276,   287,   277,   278,   279,   280,   741,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
     742,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
     280,   996,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
     279,   280,  1163,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
     278,   279,   280,  1342,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,  1446,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
     287,   277,   278,   279,   280,  1454,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
     276,   287,   277,   278,   279,   280,  1463,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
     275,   276,   287,   277,   278,   279,   280,  1640,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
     274,   275,   276,   287,   277,   278,   279,   280,  1665,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
     273,   274,   275,   276,   287,   277,   278,   279,   280,  1669,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
    1675,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
     280,  1682,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
     279,   280,  1702,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
     278,   279,   280,  1827,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,  1833,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
     287,   277,   278,   279,   280,  1834,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
     276,   287,   277,   278,   279,   280,  1907,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
     275,   276,   287,   277,   278,   279,   280,  1909,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
     274,   275,   276,   287,   277,   278,   279,   280,  1932,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
     273,   274,   275,   276,   287,   277,   278,   279,   280,  1985,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
    1987,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
     280,  1995,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
       0,   290,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
       0,     0,   347,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
       0,     0,     0,   747,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
     287,     0,     0,     0,  1162,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
       0,   287,     0,     0,     0,  1177,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
       0,     0,   287,     0,     0,     0,  1505,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,     0,     0,   287,     0,     0,     0,  1631,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,     0,     0,   287,     0,     0,     0,  1792,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,     0,     0,   287,     0,     0,     0,  1795,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
    1810,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
       0,  1901,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
       0,     0,  1973,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
       0,     0,     0,  2001,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,   376,     0,     0,     0,
     287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,   496,     0,   287,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,   497,     0,   287,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,   498,
       0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,   499,     0,   287,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,   500,     0,   287,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     501,     0,   287,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,   502,     0,   287,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,   503,     0,   287,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,   504,     0,   287,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,   505,     0,
     287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,   507,     0,   287,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,   508,     0,   287,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,   509,
       0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,   510,     0,   287,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,   511,     0,   287,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     512,     0,   287,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,   522,     0,   287,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,   649,     0,   287,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,   743,     0,   287,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,   744,     0,
     287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,   745,     0,   287,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,   746,     0,   287,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,   847,     0,     0,
       0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,   881,     0,   287,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,   998,     0,   287,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     999,     0,   287,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,  1706,     0,   287,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,  1818,     0,   287,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,  1830,     0,   287,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,  1906,     0,
     287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,  1911,     0,   287,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,  1921,     0,   287,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,  1922,
       0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,  1962,     0,   287,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,  1966,     0,   287,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
    1997,     0,   287,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
       0,     0,   916,   917,   918,   919,   920,   921,     0,     0,
     922,     0,     0,     0,  1523,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,     0,     0,   916,   917,   918,
     919,   920,   921,     0,     0,   922
};

static const short yycheck[] =
{
       3,   173,    82,   571,   539,   485,    24,   625,   599,     0,
       5,   765,  1105,     7,    23,   550,   431,   330,    21,     5,
       3,   334,     5,     5,    82,   560,     7,     5,    31,   564,
     404,   103,   104,   568,     5,     3,     3,     5,     5,   311,
       3,  1026,     5,    61,     5,     5,   259,  1032,  1033,     5,
     322,   323,   324,     5,     5,     5,     5,    23,     3,   331,
       7,     7,    86,     5,     5,   237,   249,   482,   606,   607,
      11,    12,    96,   107,    98,   613,   259,   111,   112,   113,
     114,   115,   116,    13,    14,    15,   663,    17,    29,     5,
      99,   249,    23,   111,   112,   113,   114,    64,   116,     5,
       5,   259,   247,   255,   107,    11,    12,   259,   111,   112,
     113,   114,   115,   116,   117,   248,   531,    69,   121,   122,
     123,   225,   713,    29,   257,   297,  1565,    69,   247,    23,
     884,   117,   886,    99,   238,     5,  1575,   796,   797,   798,
     799,    75,  1581,     7,   249,   249,   246,   181,   249,    65,
     255,  1590,   252,     3,   259,     5,   530,  1596,  1597,    64,
     534,     5,    96,   181,    69,   478,   338,     5,    99,   255,
     256,   243,     5,    11,    12,    13,    14,    15,   181,    17,
     255,   240,   241,   242,   259,     5,     6,   246,   250,     9,
      10,    29,   264,   252,     5,   257,   259,    82,    83,    69,
      11,    12,    13,    14,    15,    99,    17,    13,    14,    15,
      23,    17,    13,    14,    15,   255,    17,   248,    29,   796,
     797,   798,   799,   295,  1209,    69,   257,   230,   887,   255,
     255,   256,   256,   259,   119,   120,    69,    13,    14,    15,
     125,    17,     5,     6,   255,   239,     9,    10,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   259,   255,   925,  1252,   642,   247,
     256,   239,   255,   255,   255,   258,   161,   162,   163,   117,
     118,   119,   120,   249,   255,   247,    99,   249,   255,   249,
     258,   258,   142,   465,   255,   258,   314,   255,   378,   255,
     252,   716,   249,   255,   255,   255,   255,   252,   311,   255,
     887,    69,   255,    82,   255,   256,   259,    86,   249,   322,
     323,   324,   256,    81,   404,   255,   256,    96,   331,   601,
     907,   908,   909,   910,   911,   912,   913,   914,   915,   916,
     917,   918,   919,   920,   921,   922,   404,   252,   925,   255,
     256,     5,   252,   255,   254,   249,   241,   242,   208,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   255,
    1039,   453,   252,  1368,     5,     6,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   715,   253,   224,     5,   409,    18,   252,   294,
     255,    96,   584,    98,   586,   587,   588,   250,   256,   252,
     423,   106,   250,  1862,    13,    14,    15,   225,    17,   257,
     433,  1870,   250,   318,   319,   438,   249,    82,    18,   257,
     249,   444,     7,   446,   255,   256,   255,   450,   333,   255,
     256,    96,   255,   107,   255,   256,  1074,  1075,    78,    79,
       5,   224,  1039,   117,   248,    18,    11,    12,    13,    14,
      15,   234,    17,   257,   237,    86,   255,    88,   255,   255,
     256,    82,   485,    82,    29,    86,    87,   256,    99,    88,
     255,   248,     6,   378,   259,    68,   116,    96,   256,   250,
     257,   112,  1941,   250,     7,  1944,   257,    96,    88,   129,
     257,   991,    86,    86,   399,  1954,  1955,     7,   129,   404,
     592,   406,    67,    96,    97,   249,   606,   607,   256,   257,
     250,   255,   105,   613,   107,    88,   110,   257,   610,     5,
    1979,   249,   855,   132,  1203,    11,    12,    13,    14,    15,
     139,    17,   132,   255,     7,  1214,     7,   259,   250,   139,
     140,  1099,   734,    29,  1549,   257,  1551,   739,     5,   256,
     257,   256,     7,  1111,    11,    12,    13,    14,    15,   159,
      17,     5,   162,   163,   256,   257,   139,    11,    12,    13,
      14,    15,    29,    17,     7,   480,   599,     7,   601,    13,
      14,    15,     7,    17,  1172,    29,   159,   160,   493,   494,
     250,   256,  1189,   250,     7,   250,     8,   257,   250,     7,
     257,   506,   257,     7,   250,   257,  1203,     7,   513,   514,
     515,   257,     5,   651,   519,   520,   256,  1214,    11,    12,
      13,    14,    15,   528,    17,   256,   680,   250,     7,   721,
     722,     7,  1220,   687,   257,   256,    29,   256,     7,   250,
     663,   679,   680,    86,   250,   683,   257,   256,   250,   687,
       7,   257,   250,    96,   249,   257,   256,   680,   696,   257,
     255,   255,   256,   256,   687,   247,     5,  1222,     7,   112,
     257,   258,   462,   116,   579,   580,   187,  1790,  1791,   249,
      19,    20,    21,   256,   238,   239,   240,   241,   256,   257,
     713,   256,    13,    14,    15,  1283,    17,    36,     3,     4,
       5,   606,   607,   257,   255,   256,   611,   612,   613,   614,
    1002,  1003,  1004,  1005,   247,   620,   754,   622,    96,    24,
      25,    26,    27,   249,  1016,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     249,    96,   255,   256,   659,   189,   190,   191,   192,   255,
     256,   139,   255,   256,   249,   555,   255,   112,   248,   255,
     256,   255,   256,   796,   797,   798,   799,   255,   256,   802,
    1554,  1555,  1556,    98,  1076,  1077,   256,   257,   133,   981,
     982,   983,   984,   108,   109,   110,   256,   257,   255,   256,
     256,   257,   256,     7,   256,   257,  1098,   712,   186,  1814,
     188,   255,   256,   256,   226,   227,   228,   229,   230,   129,
     232,   233,   234,   235,   256,   257,   238,   239,   240,   241,
     242,     6,   210,   738,   246,   139,   741,   742,   142,   184,
     252,   256,   257,  1343,   256,     7,  1138,   249,   152,   153,
    1529,   190,   156,   157,    89,    90,    91,    92,    93,    94,
     256,   257,   255,   256,   887,   256,   257,   256,   257,   249,
    1062,   121,   122,   123,   124,   125,   126,   127,   256,   129,
     903,   904,   249,   673,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     938,    96,   925,    98,    99,   100,   101,   102,   103,   104,
     700,   256,   240,   241,   242,   243,   939,   249,   246,  1354,
    1517,   256,   257,   256,   257,  1930,  1484,  1485,  1486,   719,
    1488,   249,  1529,   249,   239,   255,   256,     7,   249,   244,
     845,   256,   247,   848,   256,   257,   736,   249,  1506,   249,
     255,  1386,   256,   256,   257,   256,   257,  1392,   249,  1394,
     139,   256,   257,   142,   256,   257,   249,   990,   991,     7,
     875,   249,  1264,   152,   153,   154,   256,   257,  1270,  1002,
    1003,  1004,  1005,   238,   239,   240,   241,   242,   256,   257,
     249,   246,  1427,  1016,   256,   257,   249,   252,  1433,  1099,
     249,     3,   256,   257,   249,     7,   256,   255,   256,   256,
     257,  1111,   256,   257,   256,   257,  1039,     7,  1110,   924,
    1112,   256,   226,   227,   228,   229,   230,   249,   232,   233,
     234,   235,   616,   617,   238,   239,   240,   241,   242,   249,
     249,  1815,   246,   249,  1067,     7,   249,  1139,   252,     7,
     249,   249,   249,  1076,  1077,   249,   249,     7,     7,     5,
      62,   256,   249,  1086,   255,   257,    68,   249,   257,   249,
     255,  1094,  1095,  1365,     5,  1098,     5,   256,   225,    81,
     249,    83,   255,  1375,   255,  1108,  1109,   255,   255,   255,
    1113,   996,     5,    95,   255,  1118,     8,    99,    11,    12,
      13,    14,    15,   257,    17,  1663,   256,  1665,   250,   111,
     250,   232,   233,   234,   235,  1138,    29,   238,   239,   240,
     241,   242,   257,  1146,  1147,   246,   250,     7,   250,   131,
    1153,   252,  1155,   225,   225,   225,  1159,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     5,  1170,    80,   255,
      63,   941,     5,  1445,    86,  1713,   226,   227,   228,   229,
     230,  1719,   232,   233,   234,   235,   255,    99,   238,   239,
     240,   241,   242,     5,   255,     5,   246,     5,   255,   255,
    1203,   183,   252,   185,     3,     4,     5,   255,   225,   250,
     980,  1214,     5,     5,  1099,   238,   239,   240,   241,   242,
     243,   255,   992,   246,  1496,   995,  1111,   255,     5,   255,
       5,    30,    31,    32,    33,    34,  1006,  1007,  1008,  1009,
     255,     5,   255,  1013,     5,     5,  1131,   204,  1133,  1787,
    1135,   255,   255,   255,   255,   250,   226,   227,   228,   229,
     230,  1264,   232,   233,   234,   235,     5,  1270,   238,   239,
     240,   241,   242,   249,   129,     7,   246,   256,  1163,     7,
       5,     7,   252,     7,     7,  1557,     7,   256,   226,   227,
     228,   229,   230,   255,   232,   233,   234,   235,     7,     7,
     238,   239,   240,   241,   242,   249,   249,     7,   246,     7,
    1848,     7,     7,     7,   252,     8,   229,   230,  1798,   232,
     233,   234,   235,   225,  1859,   238,   239,   240,   241,   242,
       5,     7,   255,   246,     7,  1507,     7,  1509,  1510,   252,
    1343,     7,     7,     7,   256,     7,     7,     7,   256,     5,
    1120,  1121,     3,     4,     5,     7,   257,   255,     8,     5,
       5,     5,  1365,   250,   255,   255,    13,    14,    15,  1907,
      17,   255,  1375,     7,     7,     5,     7,   225,   252,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,  1484,  1485,  1486,     7,  1488,     5,
       7,   256,     7,  1183,     7,  1185,     7,     7,     7,   255,
     257,     7,  1192,   250,     7,   234,  1506,     6,    66,     7,
     255,     3,     4,     5,  2002,   250,   249,     5,   249,    86,
       3,     5,  1445,   249,   249,   249,   249,   249,   249,    96,
       7,   249,    24,    25,    26,    27,   253,  1342,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,   255,  1369,   255,   133,   134,   135,   136,
     137,   138,   255,  1496,   226,   227,   228,   229,   230,     7,
     232,   233,   234,   235,   255,   257,   238,   239,   240,   241,
     242,   255,   255,   255,   246,   255,   250,     5,   255,   257,
     252,     5,     5,   234,     3,   256,  1529,   249,   246,   249,
     249,     7,   249,   226,   227,   228,   229,   230,  1541,   232,
     233,   234,   235,   255,   249,   238,   239,   240,   241,   242,
     249,     7,   249,   246,  1557,   248,     7,  1442,  1561,   252,
    1563,  1446,   249,   249,  1449,  1450,     7,   255,   249,  1454,
     249,  1341,  1457,  1458,  1459,  1460,   253,   249,  1463,  1464,
    1465,   249,  1467,  1663,     5,  1665,  1471,  1472,   239,     5,
     249,  1476,  1477,   244,   249,   249,   247,   255,   255,  1484,
    1485,  1486,  1487,  1488,   255,  1877,   249,   249,  1493,   256,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   255,
     249,  1506,   249,  1895,   249,  1797,   249,   255,   249,   249,
    1702,  1703,     7,  1713,     5,     5,   255,  1709,   255,  1719,
     226,   227,   228,   229,   230,     5,   232,   233,   234,   235,
     257,   250,   238,   239,   240,   241,   242,     5,   250,     5,
     246,   249,     7,   250,     5,   249,   252,   239,    81,  1439,
      83,    84,   244,    86,  1444,   247,   256,   250,  1448,     5,
       5,  1451,     5,    96,   256,   255,  1456,     5,     5,     5,
       5,     5,     5,     3,     3,     7,     7,     5,  1468,     5,
     113,   114,   115,     5,  1976,     5,     5,  1787,     5,     5,
       5,  1481,  1784,  1483,  1786,     5,   129,     5,   226,   227,
     228,   229,   230,     5,   232,   233,   234,   235,     5,     5,
     238,   239,   240,   241,   242,     5,     5,     5,   246,  1624,
       5,     5,  1627,     5,   252,  1515,  1516,   249,  1518,     7,
     226,   227,   228,   229,   230,  1640,   232,   233,   234,   235,
       5,     5,   238,   239,   240,   241,   242,   249,  1848,   182,
     246,   256,     7,     7,   255,   252,   252,   257,  1663,  1664,
    1665,     7,     7,     7,     7,   226,   227,   228,   229,   230,
       7,   232,   233,   234,   235,  1798,     7,   238,   239,   240,
     241,   242,     7,     7,     7,   246,     7,     7,     7,     7,
       7,   252,  1697,     7,   257,     3,  1701,   255,   250,  1704,
    1705,   257,   249,     7,     7,     7,     7,  1907,  1713,   255,
       5,     7,     5,     7,  1719,     7,   249,     7,     7,   249,
       7,     7,     7,   256,     7,  1730,  1731,  1732,  1733,  1734,
       7,   226,   227,   228,   229,   230,     7,   232,   233,   234,
     235,     7,     7,   238,   239,   240,   241,   242,     7,     7,
       7,   246,     7,     7,  1877,     7,     7,   252,     7,     5,
       5,   226,   227,   228,   229,   230,     7,   232,   233,   234,
     235,   249,  1895,   238,   239,   240,   241,   242,   249,  1669,
       5,   246,  1787,     5,     7,  1675,     7,   252,     7,     7,
       7,     7,  1682,    81,     7,    83,    84,    85,     7,   250,
     250,   250,   257,   257,  1809,   257,     7,     7,  1698,   257,
     257,   250,     7,   257,  1819,  1820,   257,   257,  1823,     3,
    1825,     7,     7,     3,     7,     7,   250,   250,  1833,  1834,
     257,   112,   257,   121,   122,   123,   124,   125,   126,   127,
       7,   129,   130,  1848,  1849,   257,   257,   256,   226,   227,
     228,   229,   230,  1976,   232,   233,   234,   235,   257,   257,
     238,   239,   240,   241,   242,   256,     7,     7,   246,  1874,
     257,   257,   255,   250,   252,   255,   257,   226,   227,   228,
     229,   230,   257,   232,   233,   234,   235,   257,   257,   238,
     239,   240,   241,   242,   257,  1900,   256,   246,   255,   248,
     250,   257,  1907,   252,  1909,   226,   227,   228,   229,   230,
     257,   232,   233,   234,   235,   255,   257,   238,   239,   240,
     241,   242,   257,   256,     7,   246,     7,  1932,     7,     7,
       7,   252,  1822,   249,     5,     5,     5,  1827,     5,  1829,
     255,   232,   233,   234,   235,   255,  1836,   238,   239,   240,
     241,   242,   243,     7,     7,   246,  1961,   255,   255,  1964,
       7,     5,     5,     5,     3,     4,     5,     5,   256,     5,
       7,   255,     5,   255,   250,   255,   255,   255,   250,     5,
    1985,   256,  1987,   250,     5,  1875,   250,     5,     7,   250,
    1995,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     3,     4,     5,     7,   257,   257,   257,
    1920,   228,   229,   230,   231,   232,   233,   234,   235,   250,
     250,   238,   239,   240,   241,   242,   243,     7,     7,   246,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,   121,   257,     3,     4,     5,     6,   257,   128,
       9,     7,     7,     7,   250,   250,   257,   257,   257,   257,
     250,   250,   255,   257,   255,    24,    25,    26,    27,    28,
     257,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     3,     4,     5,     6,
     257,   121,     9,   250,   250,   256,   250,   250,   128,     7,
      69,   256,   250,     7,   256,     7,     7,    24,    25,    26,
      27,    28,     7,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     7,     7,
       7,     5,     7,   232,     5,     7,     3,     4,     5,   238,
     239,     7,     7,     7,     7,   244,     7,     7,   247,   134,
       7,   250,   251,   252,   253,     7,   255,    24,    25,    26,
      27,   256,   256,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   255,   252,
       7,    81,   232,    83,    84,    85,     7,     7,   238,   239,
       7,     5,   255,   111,   244,     7,     7,   247,   257,   257,
      16,   250,   252,   253,   257,   255,   250,   250,   250,   257,
     257,   257,   257,     7,   255,     5,   255,   255,     7,     7,
       7,   121,   122,   123,   124,   125,   126,   127,     7,   129,
     130,     7,     7,     7,   223,     7,     5,     5,     5,   249,
     257,   255,   250,   250,     5,   250,     5,     5,     5,   250,
     239,     7,    13,    14,    15,   244,    17,   256,   247,     4,
       7,     7,   256,   252,     7,   256,   255,     7,     7,     7,
       7,     7,   255,   255,     7,     7,     7,     7,     7,    81,
       7,    83,   255,   255,    86,     7,   223,   229,   230,   231,
     232,   233,   234,   235,   256,     7,   238,   239,   240,   241,
     242,   243,   239,     5,   246,   255,   257,   244,     7,   250,
     247,    13,    14,    15,   250,    17,     7,   255,   255,   121,
     122,   123,   124,   125,   126,   127,     7,   129,   205,     7,
       7,   208,     7,     7,    62,   131,     7,     5,   226,   227,
     228,   229,   230,     7,   232,   233,   234,   235,   256,     0,
     238,   239,   240,   241,   242,     0,   256,  1065,   246,  1066,
     806,  1648,   239,     5,   252,  1196,   650,   244,   935,  1717,
     247,    13,    14,    15,  1329,    17,  1502,   574,   255,   696,
     141,   122,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   591,   227,    -1,   155,    -1,    -1,   158,    -1,    -1,
     161,    -1,    -1,   164,    -1,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,   185,     5,    -1,    -1,    -1,   190,
      -1,    -1,   193,    13,    14,    15,    -1,    17,    -1,   141,
      -1,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,   155,   256,    -1,   158,    -1,    -1,   161,
       7,    -1,   164,    -1,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,     7,    -1,   185,     5,    -1,    -1,    -1,   190,    -1,
      -1,   193,    13,    14,    15,   256,    17,    -1,    -1,   141,
      -1,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,   155,    -1,    -1,   158,    -1,    -1,   161,
      -1,    -1,   164,    -1,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,   190,    -1,
      -1,   193,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,   155,    -1,    -1,   158,    -1,
      -1,   161,    -1,    -1,   164,    -1,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,   185,    -1,     5,    -1,    -1,
     190,    -1,    -1,   193,   256,    13,    14,    15,    -1,    17,
     141,    -1,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,    -1,    -1,   155,    -1,    -1,   158,    -1,    -1,
     161,    -1,    -1,   164,    -1,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,   185,     5,    -1,    -1,    -1,   190,
      -1,    -1,   193,    13,    14,    15,   256,    17,    -1,   226,
     227,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,   246,
     226,   227,   228,   229,   230,   252,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,
     246,     5,    -1,    -1,    -1,    -1,   252,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,   256,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,    -1,
     158,    -1,    -1,   161,     7,    -1,   164,    -1,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,   185,     5,    -1,
      -1,    -1,   190,    -1,    -1,   193,    13,    14,    15,    -1,
      17,   141,    -1,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,   155,    -1,    -1,   158,    -1,
      -1,   161,    -1,    -1,   164,    -1,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,
     190,    -1,    -1,   193,    -1,    -1,    -1,   141,   256,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,   155,    -1,    -1,   158,    -1,    -1,   161,    -1,    -1,
     164,    -1,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,   185,     5,    -1,    -1,    -1,   190,    -1,    -1,   193,
      13,    14,    15,    -1,    17,    -1,   256,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,    -1,    -1,   155,    -1,
      -1,   158,    -1,    -1,   161,    -1,    -1,   164,    -1,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    -1,    -1,    -1,   185,     5,
      -1,    -1,   256,   190,    -1,    -1,   193,    13,    14,    15,
      -1,    17,    -1,   226,   227,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
     228,   229,   230,   246,   232,   233,   234,   235,    -1,   252,
     238,   239,   240,   241,   242,    -1,    -1,    -1,   246,    -1,
       5,    -1,    -1,    -1,   252,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,   141,   256,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
      -1,    -1,   155,    -1,    -1,   158,     7,    -1,   161,    -1,
      -1,   164,    -1,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
      -1,    -1,   185,     7,    -1,     5,    -1,   190,    -1,    -1,
     193,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,   155,
      -1,    -1,   158,    -1,    -1,   161,    -1,    -1,   164,    -1,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,   185,
      -1,    -1,    -1,   256,   190,    -1,   141,   193,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,    -1,    -1,
     155,    -1,    -1,   158,    -1,    -1,   161,    -1,    -1,   164,
      -1,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
     185,     5,    -1,    -1,    -1,   190,    -1,    -1,   193,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
     256,   141,    -1,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,   155,    -1,    -1,   158,    -1,
      -1,   161,    -1,    -1,   164,    -1,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,   185,    -1,    -1,    -1,     8,
     190,   256,    -1,   193,    -1,   226,   227,   228,   229,   230,
      -1,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   252,   226,   227,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,    -1,
      -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   256,   141,    -1,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,   155,    -1,    -1,   158,    -1,    -1,   161,    -1,    -1,
     164,    -1,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,     3,     4,
       5,   185,    -1,    -1,    -1,    -1,   190,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   256,    24,    25,    26,    27,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     3,     4,     5,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,    -1,    -1,   246,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     3,     4,     5,     6,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,    -1,    -1,
     246,    -1,   248,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,    -1,   244,
      -1,    -1,   247,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     5,     8,
       3,     4,     5,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    -1,   239,    -1,
      -1,    -1,    29,   244,    -1,    -1,   247,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     8,    -1,   223,    62,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    75,    -1,    81,    -1,    83,
     239,    -1,    86,     8,    81,   244,    83,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    99,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,   129,    -1,    -1,    -1,    -1,
      -1,    -1,   239,    -1,   131,   135,    -1,   244,    -1,    -1,
     247,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,   243,    -1,
      -1,   246,    -1,    -1,   164,    -1,    -1,   226,   227,   228,
     229,   230,   257,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,    -1,    -1,   183,   246,   185,    -1,
      -1,    -1,   239,   252,   194,    -1,    -1,   244,    -1,    -1,
     247,    -1,    -1,    -1,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,    -1,    -1,    -1,    -1,   226,   227,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,    -1,    -1,   239,   246,    -1,    -1,
      -1,   244,   256,   252,   247,    -1,    -1,    -1,    -1,   226,
     227,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,   246,
     226,   227,   228,   229,   230,   252,   232,   233,   234,   235,
     257,    -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,
     246,   226,   227,   228,   229,   230,   252,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,
      -1,   246,   226,   227,   228,   229,   230,   252,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,    -1,
      -1,    -1,   246,   226,   227,   228,   229,   230,   252,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
      -1,    -1,    -1,   246,   226,   227,   228,   229,   230,   252,
     232,   233,   234,   235,   257,    -1,   238,   239,   240,   241,
     242,    -1,    -1,    -1,   246,   226,   227,   228,   229,   230,
     252,   232,   233,   234,   235,   257,    -1,   238,   239,   240,
     241,   242,    -1,    -1,    -1,   246,   226,   227,   228,   229,
     230,   252,   232,   233,   234,   235,   257,    -1,   238,   239,
     240,   241,   242,    -1,    -1,    -1,   246,   226,   227,   228,
     229,   230,   252,   232,   233,   234,   235,   257,    -1,   238,
     239,   240,   241,   242,    -1,    -1,    -1,   246,   226,   227,
     228,   229,   230,   252,   232,   233,   234,   235,   257,    -1,
     238,   239,   240,   241,   242,    -1,    -1,    -1,   246,   226,
     227,   228,   229,   230,   252,   232,   233,   234,   235,   257,
      -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,   246,
     226,   227,   228,   229,   230,   252,   232,   233,   234,   235,
     257,    -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,
     246,   226,   227,   228,   229,   230,   252,   232,   233,   234,
     235,   257,    -1,   238,   239,   240,   241,   242,    -1,    -1,
      -1,   246,   226,   227,   228,   229,   230,   252,   232,   233,
     234,   235,   257,    -1,   238,   239,   240,   241,   242,    -1,
      -1,    -1,   246,   226,   227,   228,   229,   230,   252,   232,
     233,   234,   235,   257,    -1,   238,   239,   240,   241,   242,
      -1,    -1,    -1,   246,   226,   227,   228,   229,   230,   252,
     232,   233,   234,   235,   257,    -1,   238,   239,   240,   241,
     242,    -1,    -1,    -1,   246,   226,   227,   228,   229,   230,
     252,   232,   233,   234,   235,   257,    -1,   238,   239,   240,
     241,   242,    -1,    -1,    -1,   246,   226,   227,   228,   229,
     230,   252,   232,   233,   234,   235,   257,    -1,   238,   239,
     240,   241,   242,    -1,    -1,    -1,   246,   226,   227,   228,
     229,   230,   252,   232,   233,   234,   235,   257,    -1,   238,
     239,   240,   241,   242,    -1,    -1,    -1,   246,   226,   227,
     228,   229,   230,   252,   232,   233,   234,   235,   257,    -1,
     238,   239,   240,   241,   242,    -1,    -1,    -1,   246,   226,
     227,   228,   229,   230,   252,   232,   233,   234,   235,   257,
      -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,   246,
     226,   227,   228,   229,   230,   252,   232,   233,   234,   235,
     257,    -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,
     246,   226,   227,   228,   229,   230,   252,   232,   233,   234,
     235,   257,    -1,   238,   239,   240,   241,   242,    -1,    -1,
      -1,   246,   226,   227,   228,   229,   230,   252,   232,   233,
     234,   235,   257,    -1,   238,   239,   240,   241,   242,    -1,
      -1,    -1,   246,   226,   227,   228,   229,   230,   252,   232,
     233,   234,   235,   257,    -1,   238,   239,   240,   241,   242,
      -1,    -1,    -1,   246,   226,   227,   228,   229,   230,   252,
     232,   233,   234,   235,   257,    -1,   238,   239,   240,   241,
     242,    -1,    -1,    -1,   246,   226,   227,   228,   229,   230,
     252,   232,   233,   234,   235,   257,    -1,   238,   239,   240,
     241,   242,    -1,    -1,    -1,   246,   226,   227,   228,   229,
     230,   252,   232,   233,   234,   235,   257,    -1,   238,   239,
     240,   241,   242,    -1,    -1,    -1,   246,   226,   227,   228,
     229,   230,   252,   232,   233,   234,   235,   257,    -1,   238,
     239,   240,   241,   242,    -1,    -1,    -1,   246,   226,   227,
     228,   229,   230,   252,   232,   233,   234,   235,   257,    -1,
     238,   239,   240,   241,   242,    -1,    -1,    -1,   246,   226,
     227,   228,   229,   230,   252,   232,   233,   234,   235,   257,
      -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,   246,
     226,   227,   228,   229,   230,   252,   232,   233,   234,   235,
     257,    -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,
     246,   226,   227,   228,   229,   230,   252,   232,   233,   234,
     235,   257,    -1,   238,   239,   240,   241,   242,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,   256,   226,   227,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,    -1,
      -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,
      -1,    -1,   256,   226,   227,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,
      -1,    -1,    -1,   256,   226,   227,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,
     252,    -1,    -1,    -1,   256,   226,   227,   228,   229,   230,
      -1,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   252,    -1,    -1,    -1,   256,   226,   227,   228,   229,
     230,    -1,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,    -1,    -1,    -1,   246,    -1,    -1,    -1,
      -1,    -1,   252,    -1,    -1,    -1,   256,   226,   227,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,    -1,    -1,    -1,   246,    -1,    -1,
      -1,    -1,    -1,   252,    -1,    -1,    -1,   256,   226,   227,
     228,   229,   230,    -1,   232,   233,   234,   235,    -1,    -1,
     238,   239,   240,   241,   242,    -1,    -1,    -1,   246,    -1,
      -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,   256,   226,
     227,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,   246,
      -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,   256,
     226,   227,   228,   229,   230,    -1,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,
     246,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,
     256,   226,   227,   228,   229,   230,    -1,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,   256,   226,   227,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,    -1,
      -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,
      -1,    -1,   256,   226,   227,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,
      -1,    -1,    -1,   256,   226,   227,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,    -1,    -1,    -1,   246,    -1,   248,    -1,    -1,    -1,
     252,   226,   227,   228,   229,   230,    -1,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,
      -1,   246,    -1,    -1,    -1,   250,    -1,   252,   226,   227,
     228,   229,   230,    -1,   232,   233,   234,   235,    -1,    -1,
     238,   239,   240,   241,   242,    -1,    -1,    -1,   246,    -1,
      -1,    -1,   250,    -1,   252,   226,   227,   228,   229,   230,
      -1,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,    -1,    -1,    -1,   246,    -1,    -1,    -1,   250,
      -1,   252,   226,   227,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,    -1,
      -1,    -1,   246,    -1,    -1,    -1,   250,    -1,   252,   226,
     227,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,   246,
      -1,    -1,    -1,   250,    -1,   252,   226,   227,   228,   229,
     230,    -1,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,    -1,    -1,    -1,   246,    -1,    -1,    -1,
     250,    -1,   252,   226,   227,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
      -1,    -1,    -1,   246,    -1,    -1,    -1,   250,    -1,   252,
     226,   227,   228,   229,   230,    -1,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,
     246,    -1,    -1,    -1,   250,    -1,   252,   226,   227,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,    -1,    -1,    -1,   246,    -1,    -1,
      -1,   250,    -1,   252,   226,   227,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,    -1,    -1,    -1,   246,    -1,    -1,    -1,   250,    -1,
     252,   226,   227,   228,   229,   230,    -1,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,
      -1,   246,    -1,    -1,    -1,   250,    -1,   252,   226,   227,
     228,   229,   230,    -1,   232,   233,   234,   235,    -1,    -1,
     238,   239,   240,   241,   242,    -1,    -1,    -1,   246,    -1,
      -1,    -1,   250,    -1,   252,   226,   227,   228,   229,   230,
      -1,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,    -1,    -1,    -1,   246,    -1,    -1,    -1,   250,
      -1,   252,   226,   227,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,    -1,
      -1,    -1,   246,    -1,    -1,    -1,   250,    -1,   252,   226,
     227,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,   246,
      -1,    -1,    -1,   250,    -1,   252,   226,   227,   228,   229,
     230,    -1,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,    -1,    -1,    -1,   246,    -1,    -1,    -1,
     250,    -1,   252,   226,   227,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
      -1,    -1,    -1,   246,    -1,    -1,    -1,   250,    -1,   252,
     226,   227,   228,   229,   230,    -1,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,
     246,    -1,    -1,    -1,   250,    -1,   252,   226,   227,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,    -1,    -1,    -1,   246,    -1,    -1,
      -1,   250,    -1,   252,   226,   227,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,    -1,    -1,    -1,   246,    -1,    -1,    -1,   250,    -1,
     252,   226,   227,   228,   229,   230,    -1,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,
      -1,   246,    -1,    -1,    -1,   250,    -1,   252,   226,   227,
     228,   229,   230,    -1,   232,   233,   234,   235,    -1,    -1,
     238,   239,   240,   241,   242,    -1,    -1,    -1,   246,    -1,
      -1,    -1,   250,    -1,   252,   226,   227,   228,   229,   230,
      -1,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,    -1,    -1,    -1,   246,    -1,   248,    -1,    -1,
      -1,   252,   226,   227,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,    -1,
      -1,    -1,   246,    -1,    -1,    -1,   250,    -1,   252,   226,
     227,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,   246,
      -1,    -1,    -1,   250,    -1,   252,   226,   227,   228,   229,
     230,    -1,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,    -1,    -1,    -1,   246,    -1,    -1,    -1,
     250,    -1,   252,   226,   227,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
      -1,    -1,    -1,   246,    -1,    -1,    -1,   250,    -1,   252,
     226,   227,   228,   229,   230,    -1,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,
     246,    -1,    -1,    -1,   250,    -1,   252,   226,   227,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,    -1,    -1,    -1,   246,    -1,    -1,
      -1,   250,    -1,   252,   226,   227,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,    -1,    -1,    -1,   246,    -1,    -1,    -1,   250,    -1,
     252,   226,   227,   228,   229,   230,    -1,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,    -1,    -1,
      -1,   246,    -1,    -1,    -1,   250,    -1,   252,   226,   227,
     228,   229,   230,    -1,   232,   233,   234,   235,    -1,    -1,
     238,   239,   240,   241,   242,    -1,    -1,    -1,   246,    -1,
      -1,    -1,   250,    -1,   252,   226,   227,   228,   229,   230,
      -1,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,    -1,    -1,    -1,   246,    -1,    -1,    -1,   250,
      -1,   252,   226,   227,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,    -1,
      -1,    -1,   246,    -1,    -1,    -1,   250,    -1,   252,   226,
     227,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,    -1,    -1,    -1,   246,
      -1,    -1,    -1,   250,    -1,   252,   226,   227,   228,   229,
     230,    -1,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,    -1,    -1,    -1,   246,    -1,    -1,    -1,
     250,    -1,   252,   226,   227,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,    -1,    -1,
     246,    -1,    -1,    -1,   250,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,   243,    -1,    -1,   246
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison/bison.simple"

/* Skeleton output parser for bison,

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software
   Foundation, Inc.

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

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 315 "/usr/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
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
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
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
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
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
#line 1617 "GetDP.y"
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
#line 1630 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1636 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1643 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1649 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1656 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1663 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_POSTSAVE ;
      WholeQuantity_S.Case.PostSave.Value = (struct Value *)Add_PostSave(yyvsp[0].c) ;
      printf("PostSave %p\n", (struct Value *)Add_PostSave(yyvsp[0].c)) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 159:
#line 1671 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 160:
#line 1678 "GetDP.y"
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
#line 1695 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 162:
#line 1696 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 163:
#line 1697 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 164:
#line 1702 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 165:
#line 1703 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 166:
#line 1709 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 167:
#line 1712 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 168:
#line 1715 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 169:
#line 1731 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 170:
#line 1736 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 171:
#line 1743 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 173:
#line 1752 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 174:
#line 1757 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 175:
#line 1764 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 176:
#line 1767 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 177:
#line 1774 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 179:
#line 1784 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 180:
#line 1787 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 181:
#line 1790 "GetDP.y"
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
#line 1828 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 183:
#line 1834 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 184:
#line 1841 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 186:
#line 1854 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 187:
#line 1861 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 188:
#line 1864 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 189:
#line 1871 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 190:
#line 1874 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 191:
#line 1881 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 193:
#line 1893 "GetDP.y"
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
#line 1903 "GetDP.y"
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
#line 1913 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 196:
#line 1920 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 197:
#line 1923 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 198:
#line 1930 "GetDP.y"
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
#line 1946 "GetDP.y"
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
#line 1994 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1997 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 2000 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 204:
#line 2003 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 205:
#line 2006 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 206:
#line 2017 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 209:
#line 2028 "GetDP.y"
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
#line 2053 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 213:
#line 2067 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 214:
#line 2073 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 215:
#line 2080 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 216:
#line 2089 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 217:
#line 2092 "GetDP.y"
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
#line 2116 "GetDP.y"
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
#line 2131 "GetDP.y"
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
#line 2151 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 221:
#line 2160 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 223:
#line 2174 "GetDP.y"
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
#line 2184 "GetDP.y"
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
#line 2209 "GetDP.y"
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
#line 2234 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 227:
#line 2239 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 228:
#line 2247 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 229:
#line 2255 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 230:
#line 2265 "GetDP.y"
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
#line 2282 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 232:
#line 2290 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 233:
#line 2297 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 234:
#line 2304 "GetDP.y"
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
#line 2313 "GetDP.y"
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
#line 2322 "GetDP.y"
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
#line 2331 "GetDP.y"
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
#line 2352 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 240:
#line 2363 "GetDP.y"
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
#line 2392 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 245:
#line 2405 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 246:
#line 2411 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 247:
#line 2418 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 248:
#line 2427 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2430 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2433 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 251:
#line 2436 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 252:
#line 2443 "GetDP.y"
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
#line 2459 "GetDP.y"
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
#line 2508 "GetDP.y"
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
#line 2529 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 257:
#line 2532 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 258:
#line 2537 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 259:
#line 2542 "GetDP.y"
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
#line 2556 "GetDP.y"
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
#line 2576 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 262:
#line 2581 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 263:
#line 2586 "GetDP.y"
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
#line 2610 "GetDP.y"
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
#line 2670 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 267:
#line 2673 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 268:
#line 2682 "GetDP.y"
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
#line 2748 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 270:
#line 2752 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 271:
#line 2759 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 273:
#line 2768 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 274:
#line 2773 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 275:
#line 2776 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2783 "GetDP.y"
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
#line 2799 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 278:
#line 2805 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 279:
#line 2808 "GetDP.y"
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
#line 2827 "GetDP.y"
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
#line 2839 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 282:
#line 2845 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 283:
#line 2848 "GetDP.y"
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
#line 2863 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 285:
#line 2867 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 286:
#line 2876 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 288:
#line 2887 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 289:
#line 2892 "GetDP.y"
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
#line 2902 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 291:
#line 2915 "GetDP.y"
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
#line 2930 "GetDP.y"
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
#line 3004 "GetDP.y"
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
#line 3020 "GetDP.y"
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
#line 3053 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 297:
#line 3056 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 298:
#line 3059 "GetDP.y"
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
#line 3105 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 301:
#line 3115 "GetDP.y"
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
#line 3143 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 306:
#line 3155 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 307:
#line 3161 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 308:
#line 3168 "GetDP.y"
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
#line 3180 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 311:
#line 3186 "GetDP.y"
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
#line 3200 "GetDP.y"
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
#line 3220 "GetDP.y"
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
#line 3243 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 317:
#line 3246 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 318:
#line 3250 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 319:
#line 3253 "GetDP.y"
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
#line 3264 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 321:
#line 3270 "GetDP.y"
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
#line 3283 "GetDP.y"
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
#line 3310 "GetDP.y"
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
#line 3351 "GetDP.y"
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
#line 3377 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 326:
#line 3382 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 327:
#line 3388 "GetDP.y"
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
#line 3699 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 329:
#line 3704 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3713 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 331:
#line 3722 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 332:
#line 3731 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 334:
#line 3739 "GetDP.y"
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
#line 3779 "GetDP.y"
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
#line 3794 "GetDP.y"
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
#line 3818 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 338:
#line 3823 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 339:
#line 3832 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 340:
#line 3835 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 341:
#line 3838 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 342:
#line 3841 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 343:
#line 3848 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 345:
#line 3859 "GetDP.y"
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
#line 3869 "GetDP.y"
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
#line 3879 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 348:
#line 3893 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 350:
#line 3905 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3907 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 352:
#line 3909 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 353:
#line 3911 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 354:
#line 3919 "GetDP.y"
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
#line 3944 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 357:
#line 3952 "GetDP.y"
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
#line 4031 "GetDP.y"
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
#line 4077 "GetDP.y"
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
#line 4101 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 361:
#line 4110 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 4119 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 363:
#line 4124 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 364:
#line 4133 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 365:
#line 4144 "GetDP.y"
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
#line 4173 "GetDP.y"
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
#line 4197 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 369:
#line 4205 "GetDP.y"
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
#line 4260 "GetDP.y"
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
#line 4277 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 372:
#line 4278 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 373:
#line 4279 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 374:
#line 4280 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 375:
#line 4281 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 376:
#line 4282 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 377:
#line 4283 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 378:
#line 4284 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 379:
#line 4291 "GetDP.y"
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
#line 4312 "GetDP.y"
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
#line 4336 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 383:
#line 4346 "GetDP.y"
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
#line 4373 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 388:
#line 4385 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 389:
#line 4392 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 390:
#line 4399 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 391:
#line 4402 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 392:
#line 4404 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 394:
#line 4412 "GetDP.y"
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
#line 4427 "GetDP.y"
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
#line 4442 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 397:
#line 4452 "GetDP.y"
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
#line 4472 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 400:
#line 4475 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 401:
#line 4484 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 402:
#line 4487 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 403:
#line 4492 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 404:
#line 4497 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 405:
#line 4502 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 406:
#line 4507 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 408:
#line 4517 "GetDP.y"
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
#line 4554 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 410:
#line 4561 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 411:
#line 4564 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 412:
#line 4576 "GetDP.y"
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
#line 4586 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 414:
#line 4592 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 415:
#line 4595 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 416:
#line 4607 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 417:
#line 4615 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 418:
#line 4628 "GetDP.y"
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
#line 4650 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 420:
#line 4657 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 421:
#line 4663 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 422:
#line 4669 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 423:
#line 4675 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 424:
#line 4683 "GetDP.y"
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
#line 4705 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 426:
#line 4712 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 427:
#line 4718 "GetDP.y"
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
#line 4729 "GetDP.y"
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
#line 4740 "GetDP.y"
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
#line 4753 "GetDP.y"
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
#line 4768 "GetDP.y"
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
#line 4783 "GetDP.y"
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
#line 4798 "GetDP.y"
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
#line 4818 "GetDP.y"
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
#line 4839 "GetDP.y"
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
#line 4851 "GetDP.y"
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
#line 4871 "GetDP.y"
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
#line 4888 "GetDP.y"
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
#line 4907 "GetDP.y"
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
#line 4929 "GetDP.y"
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
#line 4963 "GetDP.y"
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
#line 4976 "GetDP.y"
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
#line 4990 "GetDP.y"
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
#line 5003 "GetDP.y"
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
#line 5015 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 447:
#line 5024 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 449:
#line 5033 "GetDP.y"
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
#line 5044 "GetDP.y"
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
#line 5056 "GetDP.y"
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
#line 5066 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 453:
#line 5074 "GetDP.y"
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
#line 5087 "GetDP.y"
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
#line 5100 "GetDP.y"
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
#line 5114 "GetDP.y"
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
#line 5124 "GetDP.y"
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
#line 5134 "GetDP.y"
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
#line 5148 "GetDP.y"
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
#line 5162 "GetDP.y"
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
#line 5181 "GetDP.y"
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
#line 5199 "GetDP.y"
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
#line 5210 "GetDP.y"
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
#line 5225 "GetDP.y"
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
#line 5240 "GetDP.y"
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
#line 5255 "GetDP.y"
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
#line 5270 "GetDP.y"
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
#line 5285 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 469:
#line 5296 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 470:
#line 5301 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 471:
#line 5311 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 473:
#line 5321 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 474:
#line 5324 "GetDP.y"
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
#line 5334 "GetDP.y"
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
#line 5350 "GetDP.y"
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
#line 5366 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 479:
#line 5370 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 480:
#line 5374 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 481:
#line 5378 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 482:
#line 5383 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 483:
#line 5394 "GetDP.y"
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
#line 5411 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 486:
#line 5415 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5419 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 488:
#line 5423 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 489:
#line 5427 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 490:
#line 5432 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 491:
#line 5443 "GetDP.y"
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
#line 5458 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 494:
#line 5462 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 495:
#line 5466 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 496:
#line 5470 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 497:
#line 5474 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 498:
#line 5485 "GetDP.y"
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
#line 5503 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 501:
#line 5507 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 502:
#line 5511 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 503:
#line 5515 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 504:
#line 5520 "GetDP.y"
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
#line 5530 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 506:
#line 5536 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 507:
#line 5542 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 508:
#line 5552 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 509:
#line 5555 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 510:
#line 5560 "GetDP.y"
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
#line 5578 "GetDP.y"
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
#line 5588 "GetDP.y"
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
#line 5617 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 515:
#line 5620 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 516:
#line 5623 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 517:
#line 5631 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 518:
#line 5648 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 520:
#line 5660 "GetDP.y"
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
#line 5683 "GetDP.y"
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
#line 5697 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 525:
#line 5704 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 526:
#line 5712 "GetDP.y"
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
#line 5758 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 528:
#line 5763 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 529:
#line 5769 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 530:
#line 5772 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 531:
#line 5775 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 532:
#line 5777 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 533:
#line 5783 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 535:
#line 5794 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 536:
#line 5797 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 537:
#line 5803 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 538:
#line 5808 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 539:
#line 5814 "GetDP.y"
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
#line 5828 "GetDP.y"
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
#line 5842 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 543:
#line 5849 "GetDP.y"
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
#line 5877 "GetDP.y"
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
#line 5887 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 546:
#line 5888 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 547:
#line 5894 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 548:
#line 5903 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 549:
#line 5920 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 551:
#line 5932 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 554:
#line 5941 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 556:
#line 5953 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 557:
#line 5960 "GetDP.y"
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
#line 5972 "GetDP.y"
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
#line 5983 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 560:
#line 5988 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 561:
#line 5994 "GetDP.y"
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
#line 6011 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 563:
#line 6021 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 564:
#line 6024 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 565:
#line 6028 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 566:
#line 6041 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 567:
#line 6045 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 568:
#line 6051 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;
    break;}
case 569:
#line 6057 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 570:
#line 6063 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
    ;
    break;}
case 571:
#line 6070 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 572:
#line 6075 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 573:
#line 6080 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 574:
#line 6085 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 575:
#line 6094 "GetDP.y"
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
#line 6106 "GetDP.y"
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
#line 6129 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 578:
#line 6130 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 579:
#line 6131 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 580:
#line 6132 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 581:
#line 6138 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 582:
#line 6140 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 583:
#line 6146 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 584:
#line 6152 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 585:
#line 6159 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 6168 "GetDP.y"
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
#line 6190 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 588:
#line 6198 "GetDP.y"
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
#line 6209 "GetDP.y"
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
#line 6223 "GetDP.y"
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
#line 6244 "GetDP.y"
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
#line 6271 "GetDP.y"
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
#line 6302 "GetDP.y"
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
#line 6322 "GetDP.y"
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
    ;
    break;}
case 596:
#line 6351 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 597:
#line 6358 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 598:
#line 6365 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 599:
#line 6372 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 600:
#line 6376 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 601:
#line 6380 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 602:
#line 6384 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 603:
#line 6388 "GetDP.y"
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
#line 6398 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 605:
#line 6403 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 606:
#line 6408 "GetDP.y"
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
#line 6428 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 608:
#line 6435 "GetDP.y"
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
#line 6444 "GetDP.y"
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
#line 6453 "GetDP.y"
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
#line 6462 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 612:
#line 6469 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 613:
#line 6477 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 614:
#line 6481 "GetDP.y"
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
#line 6490 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 616:
#line 6494 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 617:
#line 6498 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 618:
#line 6506 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 619:
#line 6512 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 620:
#line 6517 "GetDP.y"
{ 
      PostSubOperation_S.FrequencyLegend[0] = yyvsp[-5].d ;
      PostSubOperation_S.FrequencyLegend[1] = yyvsp[-3].d ;
      PostSubOperation_S.FrequencyLegend[2] = yyvsp[-1].d ;
    ;
    break;}
case 621:
#line 6524 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", 
		 List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 622:
#line 6539 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 623:
#line 6545 "GetDP.y"
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
case 624:
#line 6595 "GetDP.y"
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
case 625:
#line 6605 "GetDP.y"
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
case 626:
#line 6615 "GetDP.y"
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
case 627:
#line 6629 "GetDP.y"
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
case 628:
#line 6643 "GetDP.y"
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
case 629:
#line 6669 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 630:
#line 6673 "GetDP.y"
{
    ;
    break;}
case 632:
#line 6689 "GetDP.y"
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
case 633:
#line 6704 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 634:
#line 6710 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 635:
#line 6716 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 636:
#line 6722 "GetDP.y"
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
case 637:
#line 6733 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 638:
#line 6738 "GetDP.y"
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
case 639:
#line 6750 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 640:
#line 6760 "GetDP.y"
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
case 642:
#line 6779 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 643:
#line 6785 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 644:
#line 6791 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 645:
#line 6802 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 646:
#line 6803 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 647:
#line 6804 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 648:
#line 6805 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 649:
#line 6806 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 650:
#line 6807 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 651:
#line 6808 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 652:
#line 6809 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 653:
#line 6810 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 654:
#line 6811 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 655:
#line 6812 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 656:
#line 6813 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 657:
#line 6814 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 658:
#line 6815 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 659:
#line 6816 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 660:
#line 6817 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 661:
#line 6818 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 662:
#line 6819 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 663:
#line 6820 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 664:
#line 6821 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 665:
#line 6822 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 666:
#line 6826 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 667:
#line 6827 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 668:
#line 6828 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 669:
#line 6829 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 670:
#line 6830 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 671:
#line 6831 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 672:
#line 6832 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 673:
#line 6833 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 674:
#line 6834 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 675:
#line 6835 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 676:
#line 6836 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 677:
#line 6837 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 678:
#line 6838 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 679:
#line 6839 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 680:
#line 6840 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 681:
#line 6841 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 682:
#line 6842 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 683:
#line 6843 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 684:
#line 6844 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 685:
#line 6845 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 686:
#line 6846 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 687:
#line 6847 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 688:
#line 6848 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 689:
#line 6849 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 690:
#line 6850 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 691:
#line 6851 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 692:
#line 6852 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 693:
#line 6853 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 694:
#line 6854 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 695:
#line 6855 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 696:
#line 6856 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 697:
#line 6857 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 698:
#line 6858 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 699:
#line 6859 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 700:
#line 6860 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 701:
#line 6861 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 702:
#line 6862 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 703:
#line 6863 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 704:
#line 6864 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 705:
#line 6865 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 706:
#line 6870 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 707:
#line 6871 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 708:
#line 6872 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 709:
#line 6873 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 710:
#line 6874 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 711:
#line 6875 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 712:
#line 6876 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 713:
#line 6895 "GetDP.y"
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
case 714:
#line 6913 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 715:
#line 6916 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 716:
#line 6922 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 717:
#line 6925 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 718:
#line 6932 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 719:
#line 6938 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 720:
#line 6941 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 721:
#line 6944 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 722:
#line 6956 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 723:
#line 6962 "GetDP.y"
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
case 724:
#line 6973 "GetDP.y"
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
case 725:
#line 6989 "GetDP.y"
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
case 726:
#line 7011 "GetDP.y"
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
case 727:
#line 7026 "GetDP.y"
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
case 728:
#line 7064 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 729:
#line 7072 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 730:
#line 7084 "GetDP.y"
{ 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 731:
#line 7092 "GetDP.y"
{
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;
    break;}
case 732:
#line 7104 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 733:
#line 7106 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 734:
#line 7113 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 735:
#line 7116 "GetDP.y"
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
case 736:
#line 7131 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 737:
#line 7136 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 738:
#line 7141 "GetDP.y"
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
case 739:
#line 7160 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 740:
#line 7178 "GetDP.y"
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

#line 705 "/usr/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
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

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 7189 "GetDP.y"



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

