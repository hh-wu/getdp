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
# define	tDiscreteGeometry	375
# define	tDt	376
# define	tDtDof	377
# define	tDtDt	378
# define	tDtDtDof	379
# define	tJacNL	380
# define	tNeverDt	381
# define	tDtNL	382
# define	tAtAnteriorTimeStep	383
# define	tIn	384
# define	tFull_Matrix	385
# define	tResolution	386
# define	tDefineSystem	387
# define	tNameOfFormulation	388
# define	tNameOfMesh	389
# define	tFrequency	390
# define	tSolver	391
# define	tOriginSystem	392
# define	tDestinationSystem	393
# define	tOperation	394
# define	tOperationEnd	395
# define	tSetTime	396
# define	tDTime	397
# define	tSetFrequency	398
# define	tFourierTransform	399
# define	tFourierTransformJ	400
# define	tLanczos	401
# define	tPerturbation	402
# define	tUpdate	403
# define	tUpdateConstraint	404
# define	tBreak	405
# define	tTimeLoopTheta	406
# define	tTime0	407
# define	tTimeMax	408
# define	tTheta	409
# define	tTimeLoopNewmark	410
# define	tBeta	411
# define	tGamma	412
# define	tIterativeLoop	413
# define	tNbrMaxIteration	414
# define	tRelaxationFactor	415
# define	tIterativeTimeReduction	416
# define	tDivisionCoefficient	417
# define	tChangeOfState	418
# define	tChangeOfCoordinates	419
# define	tChangeOfCoordinates2	420
# define	tSystemCommand	421
# define	tGenerateFMMGroups	422
# define	tGenerateOnly	423
# define	tGenerateOnlyJac	424
# define	tSolveJac_AdaptRelax	425
# define	tSaveSolutionExtendedMH	426
# define	tSaveSolutionMHtoTime	427
# define	tInit_MovingBand2D	428
# define	tMesh_MovingBand2D	429
# define	tGenerate_MH_Moving	430
# define	tGenerate_MH_Moving_Separate	431
# define	tAdd_MH_Moving	432
# define	tGenerateGroup	433
# define	tGenerateJacGroup	434
# define	tSaveMesh	435
# define	tDeformeMesh	436
# define	tDummyFrequency	437
# define	tPostProcessing	438
# define	tNameOfSystem	439
# define	tPostOperation	440
# define	tNameOfPostProcessing	441
# define	tUsingPost	442
# define	tAppend	443
# define	tPlot	444
# define	tPrint	445
# define	tPrintGroup	446
# define	tEcho	447
# define	tWrite	448
# define	tAdapt	449
# define	tOnGlobal	450
# define	tOnRegion	451
# define	tOnElementsOf	452
# define	tOnGrid	453
# define	tOnSection	454
# define	tOnPoint	455
# define	tOnLine	456
# define	tOnPlane	457
# define	tOnBox	458
# define	tWithArgument	459
# define	tFile	460
# define	tDepth	461
# define	tDimension	462
# define	tTimeStep	463
# define	tHarmonicToTime	464
# define	tFormat	465
# define	tHeader	466
# define	tFooter	467
# define	tSkin	468
# define	tSmoothing	469
# define	tTarget	470
# define	tSort	471
# define	tIso	472
# define	tNoNewLine	473
# define	tDecomposeInSimplex	474
# define	tChangeOfValues	475
# define	tFrequencyLegend	476
# define	tEvaluationPoints	477
# define	tStr	478
# define	tDate	479
# define	tDEF	480
# define	tOR	481
# define	tAND	482
# define	tEQUAL	483
# define	tNOTEQUAL	484
# define	tAPPROXEQUAL	485
# define	tLESSOREQUAL	486
# define	tGREATEROREQUAL	487
# define	tLESSLESS	488
# define	tGREATERGREATER	489
# define	tCROSSPRODUCT	490
# define	UNARYPREC	491
# define	tSHOW	492

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.72 2005-04-13 17:08:09 dular Exp $ */
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



#define	YYFINAL		2012
#define	YYFLAG		-32768
#define	YYNTBASE	261

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 492 ? yytranslate[x] : 455)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   245,     2,   253,   254,   243,     2,     2,
     248,   249,   241,   239,   258,   240,   252,   242,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     233,     2,   235,   227,   259,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   250,     2,   251,   247,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   256,     2,   257,   260,     2,     2,     2,
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
     226,   228,   229,   230,   231,   232,   234,   236,   237,   238,
     244,   246,   255
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
    1225,  1230,  1235,  1240,  1245,  1246,  1249,  1253,  1257,  1261,
    1262,  1265,  1269,  1273,  1277,  1281,  1282,  1285,  1286,  1287,
    1297,  1301,  1305,  1309,  1312,  1316,  1322,  1323,  1326,  1330,
    1331,  1332,  1342,  1343,  1345,  1347,  1349,  1351,  1353,  1355,
    1357,  1362,  1366,  1367,  1370,  1374,  1376,  1378,  1379,  1382,
    1386,  1391,  1396,  1397,  1403,  1405,  1406,  1411,  1414,  1415,
    1418,  1422,  1426,  1430,  1434,  1438,  1442,  1446,  1450,  1452,
    1455,  1459,  1460,  1464,  1466,  1470,  1471,  1475,  1476,  1479,
    1483,  1487,  1492,  1497,  1502,  1507,  1513,  1519,  1522,  1530,
    1542,  1550,  1564,  1576,  1586,  1594,  1602,  1610,  1620,  1630,
    1640,  1652,  1670,  1684,  1700,  1712,  1726,  1727,  1735,  1736,
    1744,  1752,  1764,  1770,  1776,  1786,  1796,  1806,  1812,  1818,
    1830,  1840,  1855,  1870,  1878,  1891,  1902,  1910,  1918,  1926,
    1928,  1930,  1932,  1933,  1936,  1940,  1944,  1947,  1948,  1951,
    1955,  1959,  1963,  1967,  1972,  1973,  1976,  1980,  1984,  1988,
    1992,  1996,  2001,  2002,  2005,  2009,  2013,  2017,  2021,  2026,
    2027,  2030,  2034,  2038,  2042,  2046,  2050,  2055,  2060,  2065,
    2066,  2071,  2072,  2075,  2079,  2083,  2087,  2091,  2095,  2099,
    2100,  2103,  2107,  2109,  2110,  2113,  2117,  2122,  2127,  2131,
    2136,  2137,  2142,  2145,  2148,  2149,  2152,  2156,  2161,  2162,
    2168,  2174,  2175,  2178,  2179,  2186,  2190,  2191,  2196,  2200,
    2204,  2205,  2208,  2212,  2214,  2216,  2217,  2220,  2224,  2228,
    2232,  2236,  2241,  2242,  2251,  2252,  2253,  2257,  2265,  2273,
    2286,  2295,  2307,  2308,  2319,  2321,  2328,  2332,  2339,  2341,
    2343,  2345,  2347,  2348,  2352,  2354,  2357,  2360,  2373,  2376,
    2392,  2397,  2410,  2428,  2451,  2464,  2465,  2468,  2472,  2477,
    2482,  2486,  2489,  2492,  2496,  2500,  2504,  2508,  2512,  2516,
    2520,  2524,  2528,  2532,  2536,  2540,  2546,  2549,  2552,  2556,
    2566,  2570,  2580,  2586,  2587,  2590,  2597,  2606,  2615,  2626,
    2628,  2633,  2635,  2641,  2646,  2651,  2659,  2664,  2672,  2678,
    2686,  2692,  2701,  2702,  2706,  2712,  2718,  2720,  2722,  2724,
    2726,  2728,  2730,  2732,  2734,  2736,  2738,  2740,  2742,  2744,
    2746,  2748,  2750,  2752,  2754,  2756,  2758,  2760,  2762,  2766,
    2769,  2772,  2776,  2780,  2784,  2788,  2792,  2796,  2800,  2804,
    2808,  2812,  2816,  2820,  2824,  2828,  2833,  2838,  2843,  2848,
    2853,  2858,  2863,  2868,  2873,  2878,  2885,  2890,  2895,  2900,
    2905,  2910,  2915,  2922,  2929,  2936,  2942,  2945,  2947,  2949,
    2951,  2953,  2955,  2957,  2959,  2961,  2962,  2964,  2966,  2970,
    2972,  2974,  2978,  2982,  2986,  2992,  2996,  3001,  3006,  3013,
    3022,  3031,  3037,  3043,  3045,  3047,  3049,  3051,  3053,  3058,
    3065,  3067
};
static const short yyrhs[] =
{
      -1,   262,   263,     0,     0,     0,   263,   264,   265,     0,
      62,   256,   268,   257,     0,    99,   256,   291,   257,     0,
      68,   256,   326,   257,     0,    81,   256,   311,   257,     0,
      83,   256,   317,   257,     0,    95,   256,   333,   257,     0,
     111,   256,   356,   257,     0,   132,   256,   383,   257,     0,
     184,   256,   413,   257,     0,   186,   256,   425,   257,     0,
     429,     0,   443,     0,    22,   453,     0,   266,     0,    19,
       7,     0,    19,   191,     7,     0,    19,    21,     7,     0,
      19,    36,     7,     0,    19,    20,     7,     0,    19,    19,
       7,     0,    19,     5,     7,     0,    20,     7,     0,    21,
       7,     0,    21,    62,     7,     0,    21,    99,     7,     0,
      21,    68,     7,     0,    21,    81,     7,     0,    21,    83,
       7,     0,    21,    95,     7,     0,    21,   111,     7,     0,
      21,   132,     7,     0,    21,   184,     7,     0,    21,   186,
       7,     0,    21,     3,     7,     0,     0,   267,   433,     0,
       0,     0,   268,   269,   270,     0,   452,   226,   275,     7,
       0,     5,   290,   226,   275,     7,     0,     0,     5,   288,
     226,   271,   275,     7,     0,    63,   250,   286,   251,     7,
       0,   272,     0,   452,   239,   226,   275,     7,     0,   443,
       0,   442,     0,     0,     0,   452,   250,   446,   251,   226,
      66,   273,   250,   253,   283,   274,   258,   253,   283,   258,
     446,   251,     7,     0,     0,     0,   279,   250,   276,   280,
     277,   281,   251,     0,   253,   283,     0,   275,     0,   452,
     289,     0,    69,     0,     5,     0,   283,     0,    64,     0,
       0,   287,   282,   283,     0,   287,    65,   452,   289,     0,
       5,     0,   285,     0,   256,   284,   257,     0,     0,   284,
     287,   285,     0,   284,   287,   240,   285,     0,     3,     0,
     259,   449,   259,     0,     3,     8,   446,     0,     3,     8,
       3,     8,   446,     0,   452,     0,     5,   256,   257,     0,
       0,   286,   287,     5,     0,   286,   287,     5,   256,   446,
     257,     0,     0,   258,     0,   256,   253,   446,   257,     0,
       0,   256,   257,     0,   256,     3,   257,     0,     0,   291,
     292,     0,    67,   250,   293,   251,     7,     0,     5,   250,
     251,   226,   294,     7,     0,     5,   250,   278,   251,   226,
     294,     7,     0,   443,     0,   442,     0,     0,   293,   287,
       5,     0,    23,   250,   446,   251,     0,    99,   250,     5,
     251,     0,     0,   295,   298,     0,     0,   256,   297,   257,
       0,   294,     0,   297,   258,   294,     0,     0,   299,   300,
       0,   303,     0,     0,     0,   300,   227,   301,   300,     8,
     302,   300,     0,   300,   241,   300,     0,   300,   244,   300,
       0,    58,   250,   300,   258,   300,   251,     0,   300,   242,
     300,     0,   300,   239,   300,     0,   300,   240,   300,     0,
     300,   243,   300,     0,   300,   247,   300,     0,   300,   233,
     300,     0,   300,   235,   300,     0,   300,   234,   300,     0,
     300,   236,   300,     0,   300,   230,   300,     0,   300,   231,
     300,     0,   300,   232,   300,     0,   300,   229,   300,     0,
     300,   228,   300,     0,   240,   300,     0,   239,   300,     0,
     245,   300,     0,   248,   300,   249,     0,   447,     0,   445,
     308,   310,     0,     5,   382,     0,   382,     0,   382,   308,
       0,     0,   122,   304,   250,   298,   251,     0,     0,   129,
     305,   250,   298,   258,     3,   251,     0,     0,    60,   250,
       5,   250,   306,   298,   251,   251,   256,   446,   257,     0,
      61,   250,     5,   251,   256,   446,   258,   446,   257,     0,
      55,   250,   382,   251,     0,    57,   250,   382,   251,     0,
       0,    56,   307,   250,   298,   258,   278,   251,     0,   233,
       5,   235,   250,   298,   251,     0,   254,     5,     0,   254,
     209,     0,   254,   143,     0,   254,     3,     0,   303,   253,
       3,     0,   253,     3,     0,   254,   254,   452,     0,   303,
     255,   446,     0,    59,   250,     5,   258,     3,   251,     0,
     250,   252,   251,     0,   250,   251,     0,   250,   309,   251,
       0,   300,     0,   309,   258,   300,     0,     0,   256,   449,
     257,     0,   256,    69,   250,   278,   251,   257,     0,     0,
     311,   256,   312,   257,     0,     0,   312,   313,     0,    96,
       5,     7,     0,    82,   256,   314,   257,     0,     0,   314,
     256,   315,   257,     0,     0,   315,   316,     0,    69,   278,
       7,     0,    69,    64,     7,     0,    81,     5,   310,     7,
       0,     0,   317,   256,   318,   257,     0,     0,   318,   319,
       0,    96,     5,     7,     0,    88,   294,     7,     0,    82,
     256,   320,   257,     0,     0,   320,   256,   321,   257,     0,
       0,   321,   322,     0,    86,     5,     7,     0,    87,     5,
       7,     0,    82,   256,   323,   257,     0,     0,   323,   256,
     324,   257,     0,     0,   324,   325,     0,    89,     5,     7,
       0,    90,   446,     7,     0,    91,   446,     7,     0,    92,
     446,     7,     0,    93,   446,     7,     0,    94,   446,     7,
       0,     0,   442,     0,   326,   327,     0,   256,   328,   257,
       0,   443,     0,     0,   328,   329,     0,    96,   452,     7,
       0,    96,   452,   288,     7,     0,    86,     5,     7,     0,
      82,   256,   330,   257,     0,    82,     5,   256,   330,   257,
       0,     0,   330,   256,   331,   257,     0,   330,   442,     0,
       0,   331,   332,     0,    86,     5,     7,     0,    69,   278,
       7,     0,    70,   278,     7,     0,    76,   294,     7,     0,
      75,   294,     7,     0,    80,     5,     7,     0,    77,   256,
     447,   287,   447,   257,     7,     0,    71,   278,     7,     0,
      72,   278,     7,     0,    99,   294,     7,     0,    74,   294,
       7,     0,    73,   294,     7,     0,    99,   250,   294,   258,
     294,   251,     7,     0,    74,   250,   294,   258,   294,   251,
       7,     0,    73,   250,   294,   258,   294,   251,     7,     0,
       0,   333,   334,     0,   256,   335,   257,     0,   443,     0,
     442,     0,     0,   335,   336,     0,    96,   452,     7,     0,
      96,     5,   288,     7,     0,    86,     5,     7,     0,    97,
     256,   337,   257,     0,   105,   256,   343,   257,     0,   107,
     256,   350,   257,     0,    68,   256,   353,   257,     0,     0,
     337,   256,   338,   257,     0,     0,   338,   339,     0,    96,
       5,     7,     0,    98,     5,     7,     0,    98,     5,   288,
       7,     0,    99,     5,   340,     7,     0,   100,   256,     5,
     287,     5,   257,     7,     0,   101,   296,     7,     0,   102,
     296,     7,     0,   103,   278,     7,     0,   104,   278,     7,
       0,     0,     0,     0,   256,   112,     5,     7,   111,     5,
     288,     7,   341,    62,   278,     7,   342,   132,     5,   289,
       7,   257,     0,     0,   343,   256,   344,   257,     0,     0,
     344,   345,     0,    96,     5,     7,     0,   106,   346,     7,
       0,    98,   348,     7,     0,     5,     0,   256,   347,   257,
       0,     0,   347,   287,     5,     0,     5,     0,   256,   349,
     257,     0,     0,   349,   287,     5,     0,     0,   350,   256,
     351,   257,     0,     0,   351,   352,     0,    96,   452,     7,
       0,    86,     5,     7,     0,    98,     5,     7,     0,     0,
     353,   256,   354,   257,     0,     0,   354,   355,     0,    98,
       5,     7,     0,   108,   279,     7,     0,   109,   282,     7,
       0,   110,   452,   289,     7,     0,     0,   356,   357,     0,
     256,   358,   257,     0,   443,     0,   442,     0,     0,   358,
     359,     0,    96,   452,     7,     0,    96,     5,   288,     7,
       0,    86,     5,     7,     0,   112,   256,   360,   257,     0,
     116,   256,   367,   257,     0,     0,   360,   256,   361,   257,
       0,   360,   442,     0,     0,   361,   362,     0,    96,   452,
       7,     0,    86,   107,     7,     0,    86,   117,     7,     0,
      86,     5,     7,     0,   183,   448,     7,     0,     0,   113,
     452,   363,   366,     7,     0,     0,   113,     5,   256,   257,
     364,   366,     7,     0,   114,     3,     7,     0,     0,   250,
     365,   298,   251,     7,     0,   130,   278,     7,     0,    83,
       5,     7,     0,    84,     5,     7,     0,    81,     5,     7,
       0,   115,     3,     7,     0,     0,   250,   452,   251,     0,
       0,   367,   368,     0,   367,   443,     0,   367,   442,     0,
     117,   256,   373,   257,     0,   118,   256,   373,   257,     0,
     119,   256,   377,   257,     0,   120,   256,   369,   257,     0,
     121,   256,   373,   257,     0,     0,   369,   370,     0,    86,
       5,     7,     0,   110,     5,     7,     0,   256,   371,   257,
       0,     0,   371,   372,     0,    78,   382,     7,     0,    79,
     382,     7,     0,   116,   382,     7,     0,   130,   278,     7,
       0,     0,   373,   374,     0,     0,     0,   381,   250,   375,
     298,   376,   258,   298,   251,     7,     0,   130,   278,     7,
       0,    81,     5,     7,     0,    83,     5,     7,     0,   131,
       7,     0,    84,     5,     7,     0,    85,   250,     3,   251,
       7,     0,     0,   377,   378,     0,   130,   278,     7,     0,
       0,     0,   381,   250,   379,   298,   380,   258,   382,   251,
       7,     0,     0,   122,     0,   123,     0,   124,     0,   125,
       0,   126,     0,   127,     0,   128,     0,   256,     5,   452,
     257,     0,   256,   452,   257,     0,     0,   383,   384,     0,
     256,   385,   257,     0,   443,     0,   442,     0,     0,   385,
     386,     0,    96,   452,     7,     0,    96,     5,   288,     7,
       0,   133,   256,   388,   257,     0,     0,   140,   387,   256,
     395,   257,     0,   442,     0,     0,   388,   256,   389,   257,
       0,   388,   442,     0,     0,   389,   390,     0,    96,   452,
       7,     0,    86,     5,     7,     0,   134,   391,     7,     0,
     135,   453,     7,     0,   138,   393,     7,     0,   139,     5,
       7,     0,   136,   448,     7,     0,   137,   453,     7,     0,
     442,     0,   452,   289,     0,   256,   392,   257,     0,     0,
     392,   287,   452,     0,   452,     0,   256,   394,   257,     0,
       0,   394,   287,   452,     0,     0,   395,   396,     0,     5,
     452,     7,     0,   142,   294,     7,     0,   152,   256,   402,
     257,     0,   156,   256,   404,   257,     0,   159,   256,   406,
     257,     0,   162,   256,   408,   257,     0,     5,   250,   452,
     251,     7,     0,   142,   250,   294,   251,     7,     0,   151,
       7,     0,    15,   250,   294,   251,   256,   395,   257,     0,
      15,   250,   294,   251,   256,   395,   257,    16,   256,   395,
     257,     0,   144,   250,     5,   258,   294,   251,     7,     0,
     168,   250,     5,   258,   294,   258,   294,   258,   294,   258,
     294,   251,     7,     0,   168,   250,     5,   258,   294,   258,
     294,   258,   294,   251,     7,     0,   168,   250,     5,   258,
     294,   258,   294,   251,     7,     0,   169,   250,     5,   258,
     448,   251,     7,     0,   170,   250,     5,   258,   448,   251,
       7,     0,   149,   250,     5,   258,   294,   251,     7,     0,
     150,   250,     5,   258,   278,   258,     5,   251,     7,     0,
     145,   250,     5,   258,     5,   258,   448,   251,     7,     0,
     146,   250,     5,   258,     5,   258,   446,   251,     7,     0,
     147,   250,     5,   258,   446,   258,   448,   258,   446,   251,
       7,     0,   148,   250,     5,   258,     5,   258,     5,   258,
     446,   258,   448,   258,   446,   258,   446,   251,     7,     0,
     152,   250,   446,   258,   446,   258,   294,   258,   294,   251,
     256,   395,   257,     0,   156,   250,   446,   258,   446,   258,
     294,   258,   446,   258,   446,   251,   256,   395,   257,     0,
     159,   250,   446,   258,   446,   258,   294,   251,   256,   395,
     257,     0,   159,   250,   446,   258,   446,   258,   294,   258,
     446,   251,   256,   395,   257,     0,     0,   191,   397,   250,
     399,   400,   251,     7,     0,     0,   194,   398,   250,   399,
     400,   251,     7,     0,   165,   250,   278,   258,   294,   251,
       7,     0,   165,   250,   278,   258,   294,   258,   446,   258,
     294,   251,     7,     0,   186,   250,   452,   251,     7,     0,
     167,   250,   453,   251,     7,     0,   171,   250,     5,   258,
     448,   258,   446,   251,     7,     0,   172,   250,     5,   258,
     446,   258,   453,   251,     7,     0,   173,   250,     5,   258,
     448,   258,   453,   251,     7,     0,   174,   256,   452,   257,
       7,     0,   175,   256,   452,   257,     7,     0,   181,   256,
     452,   258,   278,   258,   453,   258,   294,   257,     7,     0,
     181,   256,   452,   258,   278,   258,   453,   257,     7,     0,
     176,   250,     5,   258,     5,   258,   446,   258,   446,   251,
     256,   395,   257,     7,     0,   177,   250,     5,   258,     5,
     258,   446,   258,   446,   251,   256,   395,   257,     7,     0,
     178,   250,     5,   258,   446,   251,     7,     0,   182,   256,
       5,   258,     5,   258,   135,   453,   258,     4,   257,     7,
       0,   182,   256,     5,   258,     5,   258,   135,   453,   257,
       7,     0,   182,   256,     5,   258,     5,   257,     7,     0,
     179,   250,     5,   258,     5,   251,     7,     0,   180,   250,
       5,   258,     5,   251,     7,     0,   442,     0,   296,     0,
       5,     0,     0,   400,   401,     0,   258,   206,   453,     0,
     258,   209,   448,     0,   258,   448,     0,     0,   402,   403,
       0,   153,   446,     7,     0,   154,   446,     7,     0,   143,
     294,     7,     0,   155,   294,     7,     0,   140,   256,   395,
     257,     0,     0,   404,   405,     0,   153,   446,     7,     0,
     154,   446,     7,     0,   143,   294,     7,     0,   157,   446,
       7,     0,   158,   446,     7,     0,   140,   256,   395,   257,
       0,     0,   406,   407,     0,   160,   446,     7,     0,    88,
     446,     7,     0,   161,   294,     7,     0,    18,   446,     7,
       0,   140,   256,   395,   257,     0,     0,   408,   409,     0,
     160,   446,     7,     0,   163,   446,     7,     0,    88,   446,
       7,     0,    18,   446,     7,     0,   133,     5,     7,     0,
     164,   256,   410,   257,     0,   140,   256,   395,   257,     0,
     141,   256,   395,   257,     0,     0,   410,   256,   411,   257,
       0,     0,   411,   412,     0,    86,     5,     7,     0,   112,
       5,     7,     0,   130,   278,     7,     0,    88,   446,     7,
       0,    99,   294,     7,     0,    18,     5,     7,     0,     0,
     413,   414,     0,   256,   415,   257,     0,   443,     0,     0,
     415,   416,     0,    96,   452,     7,     0,    96,     5,   288,
       7,     0,   134,   452,   289,     7,     0,   185,     5,     7,
       0,   112,   256,   417,   257,     0,     0,   417,   256,   418,
     257,     0,   417,   443,     0,   417,   442,     0,     0,   418,
     419,     0,    96,   452,     7,     0,    75,   256,   420,   257,
       0,     0,   420,   117,   256,   421,   257,     0,   420,     5,
     256,   421,   257,     0,     0,   421,   422,     0,     0,   381,
     250,   423,   298,   251,     7,     0,    86,     5,     7,     0,
       0,   130,   424,   278,     7,     0,    81,     5,     7,     0,
      83,     5,     7,     0,     0,   425,   426,     0,   256,   427,
     257,     0,   443,     0,   442,     0,     0,   427,   428,     0,
      96,   452,     7,     0,   187,     5,     7,     0,   211,     5,
       7,     0,   189,   453,     7,     0,   140,   256,   431,   257,
       0,     0,   186,   452,   188,   452,   430,   256,   431,   257,
       0,     0,     0,   431,   432,   433,     0,   190,   250,   435,
     438,   439,   251,     7,     0,   191,   250,   435,   438,   439,
     251,     7,     0,   191,   250,   435,   438,   439,   251,   240,
     235,   254,   254,   452,     7,     0,   191,   250,     6,   258,
     446,   439,   251,     7,     0,   191,   250,     6,   258,   224,
     250,   453,   251,   439,   251,     7,     0,     0,   192,   250,
     278,   434,   258,   130,   278,   439,   251,     7,     0,   442,
       0,   193,   250,     6,   439,   251,     7,     0,   452,   437,
     258,     0,   452,   437,   436,     5,   437,   258,     0,   241,
       0,   242,     0,   239,     0,   240,     0,     0,   250,   278,
     251,     0,   196,     0,   197,   278,     0,   198,   278,     0,
     200,   256,   256,   449,   257,   256,   449,   257,   256,   449,
     257,   257,     0,   199,   278,     0,   199,   256,   294,   258,
     294,   258,   294,   257,   256,   448,   258,   448,   258,   448,
     257,     0,   201,   256,   449,   257,     0,   202,   256,   256,
     449,   257,   256,   449,   257,   257,   256,   446,   257,     0,
     203,   256,   256,   449,   257,   256,   449,   257,   256,   449,
     257,   257,   256,   446,   258,   446,   257,     0,   204,   256,
     256,   449,   257,   256,   449,   257,   256,   449,   257,   256,
     449,   257,   257,   256,   446,   258,   446,   258,   446,   257,
       0,   197,   278,   205,     5,   256,   446,   258,   446,   257,
     256,   446,   257,     0,     0,   439,   440,     0,   258,   206,
     453,     0,   258,   206,   235,   453,     0,   258,   206,   238,
     453,     0,   258,   207,   446,     0,   258,   214,     0,   258,
     215,     0,   258,   210,   446,     0,   258,   211,     5,     0,
     258,   212,   441,     0,   258,   213,   441,     0,   258,   211,
     441,     0,   258,   208,   446,     0,   258,   209,   448,     0,
     258,   195,     5,     0,   258,   217,     5,     0,   258,   216,
     446,     0,   258,    75,   448,     0,   258,   218,   446,     0,
     258,   218,   256,   449,   257,     0,   258,   219,     0,   258,
     220,     0,   258,   136,   448,     0,   258,   165,   256,   294,
     258,   294,   258,   294,   257,     0,   258,   221,   296,     0,
     258,   222,   256,   446,   258,   446,   258,   446,   257,     0,
     258,   223,   256,   449,   257,     0,     0,   441,     6,     0,
      13,   248,   446,     8,   446,   249,     0,    13,   248,   446,
       8,   446,     8,   446,   249,     0,    13,     5,   130,   256,
     446,     8,   446,   257,     0,    13,     5,   130,   256,   446,
       8,   446,     8,   446,   257,     0,    14,     0,    15,   248,
     446,   249,     0,    17,     0,    29,   250,   444,   251,     7,
       0,   452,   226,   448,     7,     0,   452,   226,     6,     7,
       0,   452,   226,   224,   250,   453,   251,     7,     0,   452,
     226,   454,     7,     0,   452,   226,    28,   250,   453,   251,
       7,     0,    11,   248,     6,   249,     7,     0,    11,   248,
       6,   258,   449,   249,     7,     0,    12,   248,   452,   249,
       7,     0,    12,   248,   452,   249,   250,   446,   251,     7,
       0,     0,   444,   287,     5,     0,   444,   287,     5,   226,
     446,     0,   444,   287,     5,   226,     6,     0,    35,     0,
      36,     0,    37,     0,    38,     0,    39,     0,    40,     0,
      41,     0,    42,     0,    43,     0,    44,     0,    45,     0,
      46,     0,    47,     0,    48,     0,    49,     0,    50,     0,
      51,     0,    52,     0,    53,     0,    54,     0,   452,     0,
     447,     0,   248,   446,   249,     0,   240,   446,     0,   245,
     446,     0,   446,   240,   446,     0,   446,   239,   446,     0,
     446,   241,   446,     0,   446,   242,   446,     0,   446,   243,
     446,     0,   446,   247,   446,     0,   446,   233,   446,     0,
     446,   235,   446,     0,   446,   234,   446,     0,   446,   236,
     446,     0,   446,   230,   446,     0,   446,   231,   446,     0,
     446,   229,   446,     0,   446,   228,   446,     0,    35,   250,
     446,   251,     0,    36,   250,   446,   251,     0,    37,   250,
     446,   251,     0,    38,   250,   446,   251,     0,    39,   250,
     446,   251,     0,    40,   250,   446,   251,     0,    41,   250,
     446,   251,     0,    42,   250,   446,   251,     0,    43,   250,
     446,   251,     0,    44,   250,   446,   251,     0,    45,   250,
     446,   258,   446,   251,     0,    46,   250,   446,   251,     0,
      47,   250,   446,   251,     0,    48,   250,   446,   251,     0,
      49,   250,   446,   251,     0,    50,   250,   446,   251,     0,
      51,   250,   446,   251,     0,    52,   250,   446,   258,   446,
     251,     0,    53,   250,   446,   258,   446,   251,     0,    54,
     250,   446,   258,   446,   251,     0,   446,   227,   446,     8,
     446,     0,   446,   253,     0,     4,     0,     3,     0,    30,
       0,    31,     0,    32,     0,    33,     0,    34,     0,   452,
       0,     0,   446,     0,   450,     0,   256,   449,   257,     0,
     446,     0,   450,     0,   449,   258,   446,     0,   449,   258,
     450,     0,   446,     8,   446,     0,   446,     8,   446,     8,
     446,     0,     5,   256,   257,     0,     5,   256,   449,   257,
       0,    24,   250,     5,   251,     0,    25,   250,     5,   258,
       5,   251,     0,    26,   250,   446,   258,   446,   258,   446,
     251,     0,    27,   250,   446,   258,   446,   258,   446,   251,
       0,     5,   260,   256,   446,   257,     0,   451,   260,   256,
     446,   257,     0,     5,     0,   451,     0,     6,     0,     5,
       0,   454,     0,    10,   248,   453,   249,     0,    10,   248,
     453,   258,   449,   249,     0,   225,     0,     9,   250,   453,
     258,   453,   251,     0
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
    3834,  3837,  3840,  3843,  3848,  3856,  3859,  3871,  3881,  3893,
    3902,  3905,  3909,  3911,  3913,  3919,  3940,  3944,  3944,  3944,
    4079,  4103,  4112,  4121,  4126,  4135,  4144,  4161,  4165,  4199,
    4199,  4199,  4278,  4281,  4282,  4283,  4284,  4285,  4286,  4287,
    4291,  4314,  4336,  4343,  4346,  4367,  4369,  4373,  4381,  4385,
    4394,  4401,  4404,  4404,  4409,  4413,  4429,  4444,  4452,  4468,
    4472,  4477,  4486,  4489,  4494,  4499,  4504,  4509,  4513,  4517,
    4556,  4561,  4566,  4576,  4588,  4592,  4597,  4608,  4617,  4626,
    4652,  4659,  4665,  4671,  4677,  4685,  4707,  4714,  4720,  4731,
    4742,  4755,  4770,  4785,  4800,  4820,  4841,  4853,  4873,  4890,
    4909,  4930,  4964,  4977,  4991,  5004,  5017,  5017,  5026,  5026,
    5035,  5046,  5058,  5068,  5076,  5089,  5102,  5116,  5126,  5136,
    5150,  5164,  5182,  5201,  5212,  5227,  5242,  5257,  5272,  5287,
    5297,  5303,  5313,  5319,  5322,  5326,  5336,  5350,  5362,  5366,
    5372,  5376,  5380,  5385,  5394,  5407,  5411,  5417,  5421,  5425,
    5429,  5434,  5443,  5455,  5458,  5464,  5468,  5472,  5476,  5485,
    5500,  5503,  5509,  5513,  5517,  5522,  5532,  5538,  5544,  5553,
    5557,  5561,  5575,  5578,  5590,  5619,  5622,  5625,  5633,  5649,
    5657,  5660,  5681,  5684,  5695,  5698,  5706,  5714,  5760,  5765,
    5770,  5774,  5777,  5779,  5784,  5791,  5795,  5799,  5804,  5810,
    5816,  5829,  5840,  5843,  5843,  5879,  5890,  5890,  5896,  5905,
    5921,  5929,  5932,  5937,  5939,  5942,  5951,  5954,  5962,  5974,
    5985,  5990,  5995,  5995,  6022,  6026,  6026,  6041,  6047,  6053,
    6059,  6066,  6074,  6074,  6085,  6090,  6097,  6111,  6133,  6136,
    6137,  6138,  6141,  6145,  6149,  6157,  6164,  6171,  6195,  6202,
    6214,  6227,  6247,  6273,  6306,  6326,  6352,  6355,  6363,  6370,
    6377,  6381,  6385,  6389,  6393,  6403,  6408,  6413,  6433,  6440,
    6449,  6458,  6467,  6474,  6482,  6486,  6495,  6499,  6503,  6511,
    6517,  6522,  6529,  6543,  6550,  6598,  6610,  6620,  6634,  6648,
    6674,  6678,  6690,  6694,  6709,  6715,  6721,  6727,  6738,  6743,
    6755,  6765,  6781,  6784,  6790,  6796,  6807,  6809,  6810,  6811,
    6812,  6813,  6814,  6815,  6816,  6817,  6818,  6819,  6820,  6821,
    6822,  6823,  6824,  6825,  6826,  6827,  6828,  6831,  6833,  6834,
    6835,  6836,  6837,  6838,  6839,  6840,  6841,  6842,  6843,  6844,
    6845,  6846,  6847,  6848,  6849,  6850,  6851,  6852,  6853,  6854,
    6855,  6856,  6857,  6858,  6859,  6860,  6861,  6862,  6863,  6864,
    6865,  6866,  6867,  6868,  6869,  6870,  6871,  6874,  6877,  6878,
    6879,  6880,  6881,  6882,  6900,  6916,  6921,  6927,  6930,  6935,
    6943,  6946,  6949,  6959,  6967,  6978,  6994,  7016,  7031,  7069,
    7077,  7087,  7097,  7107,  7111,  7116,  7121,  7136,  7141,  7146,
    7165,  7182
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
  "tdeRham", "tGlobalTerm", "tGlobalEquation", "tDiscreteGeometry", "tDt", 
  "tDtDof", "tDtDt", "tDtDtDof", "tJacNL", "tNeverDt", "tDtNL", 
  "tAtAnteriorTimeStep", "tIn", "tFull_Matrix", "tResolution", 
  "tDefineSystem", "tNameOfFormulation", "tNameOfMesh", "tFrequency", 
  "tSolver", "tOriginSystem", "tDestinationSystem", "tOperation", 
  "tOperationEnd", "tSetTime", "tDTime", "tSetFrequency", 
  "tFourierTransform", "tFourierTransformJ", "tLanczos", "tPerturbation", 
  "tUpdate", "tUpdateConstraint", "tBreak", "tTimeLoopTheta", "tTime0", 
  "tTimeMax", "tTheta", "tTimeLoopNewmark", "tBeta", "tGamma", 
  "tIterativeLoop", "tNbrMaxIteration", "tRelaxationFactor", 
  "tIterativeTimeReduction", "tDivisionCoefficient", "tChangeOfState", 
  "tChangeOfCoordinates", "tChangeOfCoordinates2", "tSystemCommand", 
  "tGenerateFMMGroups", "tGenerateOnly", "tGenerateOnlyJac", 
  "tSolveJac_AdaptRelax", "tSaveSolutionExtendedMH", 
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
       0,   262,   261,   263,   264,   263,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     267,   266,   268,   269,   268,   270,   270,   271,   270,   270,
     270,   270,   270,   270,   273,   274,   272,   276,   277,   275,
     275,   278,   278,   279,   279,   280,   280,   281,   281,   281,
     282,   283,   283,   284,   284,   284,   285,   285,   285,   285,
     285,   285,   286,   286,   286,   287,   287,   288,   289,   289,
     290,   291,   291,   292,   292,   292,   292,   292,   293,   293,
     294,   294,   295,   294,   296,   296,   297,   297,   299,   298,
     300,   301,   302,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   303,   303,   303,   303,   303,   303,
     304,   303,   305,   303,   306,   303,   303,   303,   303,   307,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   308,   308,   308,   309,   309,   310,   310,   310,   311,
     311,   312,   312,   313,   313,   314,   314,   315,   315,   316,
     316,   316,   317,   317,   318,   318,   319,   319,   319,   320,
     320,   321,   321,   322,   322,   322,   323,   323,   324,   324,
     325,   325,   325,   325,   325,   325,   326,   326,   326,   327,
     327,   328,   328,   329,   329,   329,   329,   329,   330,   330,
     330,   331,   331,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   333,   333,
     334,   334,   334,   335,   335,   336,   336,   336,   336,   336,
     336,   336,   337,   337,   338,   338,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   340,   341,   342,   340,   343,
     343,   344,   344,   345,   345,   345,   346,   346,   347,   347,
     348,   348,   349,   349,   350,   350,   351,   351,   352,   352,
     352,   353,   353,   354,   354,   355,   355,   355,   355,   356,
     356,   357,   357,   357,   358,   358,   359,   359,   359,   359,
     359,   360,   360,   360,   361,   361,   362,   362,   362,   362,
     362,   363,   362,   364,   362,   362,   365,   362,   362,   362,
     362,   362,   362,   366,   366,   367,   367,   367,   367,   368,
     368,   368,   368,   368,   369,   369,   370,   370,   370,   371,
     371,   372,   372,   372,   372,   373,   373,   375,   376,   374,
     374,   374,   374,   374,   374,   374,   377,   377,   378,   379,
     380,   378,   381,   381,   381,   381,   381,   381,   381,   381,
     382,   382,   383,   383,   384,   384,   384,   385,   385,   386,
     386,   386,   387,   386,   386,   388,   388,   388,   389,   389,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   391,
     391,   392,   392,   393,   393,   394,   394,   395,   395,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   397,   396,   398,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     399,   399,   400,   400,   401,   401,   401,   402,   402,   403,
     403,   403,   403,   403,   404,   404,   405,   405,   405,   405,
     405,   405,   406,   406,   407,   407,   407,   407,   407,   408,
     408,   409,   409,   409,   409,   409,   409,   409,   409,   410,
     410,   411,   411,   412,   412,   412,   412,   412,   412,   413,
     413,   414,   414,   415,   415,   416,   416,   416,   416,   416,
     417,   417,   417,   417,   418,   418,   419,   419,   420,   420,
     420,   421,   421,   423,   422,   422,   424,   422,   422,   422,
     425,   425,   426,   426,   426,   427,   427,   428,   428,   428,
     428,   428,   430,   429,   431,   432,   431,   433,   433,   433,
     433,   433,   434,   433,   433,   433,   435,   435,   436,   436,
     436,   436,   437,   437,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   439,   439,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   441,   441,   442,   442,   442,   442,   442,
     442,   442,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   444,   444,   444,   444,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   447,   447,   447,
     447,   447,   447,   447,   447,   448,   448,   448,   448,   449,
     449,   449,   449,   450,   450,   450,   450,   450,   450,   450,
     450,   451,   451,   452,   452,   453,   453,   453,   453,   453,
     453,   454
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
       4,     4,     4,     4,     0,     2,     3,     3,     3,     0,
       2,     3,     3,     3,     3,     0,     2,     0,     0,     9,
       3,     3,     3,     2,     3,     5,     0,     2,     3,     0,
       0,     9,     0,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     0,     2,     3,     1,     1,     0,     2,     3,
       4,     4,     0,     5,     1,     0,     4,     2,     0,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       3,     0,     3,     1,     3,     0,     3,     0,     2,     3,
       3,     4,     4,     4,     4,     5,     5,     2,     7,    11,
       7,    13,    11,     9,     7,     7,     7,     9,     9,     9,
      11,    17,    13,    15,    11,    13,     0,     7,     0,     7,
       7,    11,     5,     5,     9,     9,     9,     5,     5,    11,
       9,    14,    14,     7,    12,    10,     7,     7,     7,     1,
       1,     1,     0,     2,     3,     3,     2,     0,     2,     3,
       3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
       3,     4,     0,     2,     3,     3,     3,     3,     4,     0,
       2,     3,     3,     3,     3,     3,     4,     4,     4,     0,
       4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
       2,     3,     1,     0,     2,     3,     4,     4,     3,     4,
       0,     4,     2,     2,     0,     2,     3,     4,     0,     5,
       5,     0,     2,     0,     6,     3,     0,     4,     3,     3,
       0,     2,     3,     1,     1,     0,     2,     3,     3,     3,
       3,     4,     0,     8,     0,     0,     3,     7,     7,    12,
       8,    11,     0,    10,     1,     6,     3,     6,     1,     1,
       1,     1,     0,     3,     1,     2,     2,    12,     2,    15,
       4,    12,    17,    22,    12,     0,     2,     3,     4,     4,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     2,     2,     3,     9,
       3,     9,     5,     0,     2,     6,     8,     8,    10,     1,
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

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,     3,     4,    40,   733,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,    19,     0,    16,    17,   734,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   736,   735,     0,     0,   740,    18,   737,   642,
      42,   206,   169,   182,   238,    91,   299,   382,   519,   550,
       0,     0,   629,     0,   631,     0,     0,     0,     0,    41,
     574,     0,   715,     0,     0,     0,    26,    25,    24,    22,
      23,    21,    39,    29,    31,    32,    33,    34,    30,    35,
      36,    37,    38,     0,     0,    85,    43,     0,   207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   708,   707,   733,     0,
       0,     0,     0,     0,     0,   709,   710,   711,   712,   713,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   716,   667,     0,   717,   714,
       0,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       6,     0,   211,     8,   208,   210,   171,     9,   184,    10,
     243,    11,   239,   242,   241,   733,     0,     7,    92,    97,
      96,   304,    12,   300,   303,   302,   387,    13,   383,   386,
     385,   523,    14,   520,   522,   555,    15,   551,   554,   553,
     562,     0,     0,     0,     0,   582,     0,     0,   733,    63,
       0,    61,   572,     0,    88,   595,     0,     0,   634,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   669,   670,     0,   719,     0,
     720,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   706,   633,   636,
     731,   638,     0,   640,     0,     0,   738,     0,   632,   643,
     733,     0,    44,    50,    53,    52,     0,     0,     0,     0,
       0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
     630,   584,     0,     0,     0,     0,     0,     0,     0,     0,
     595,     0,     0,     0,   595,    76,   733,    73,     0,    60,
      71,    80,     0,    57,     0,    62,     0,   732,   725,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   668,   718,     0,   723,
       0,   684,   683,   681,   682,   677,   679,   678,   680,   672,
     671,   673,   674,   675,   676,     0,     0,     0,     0,     0,
       0,     0,     0,    82,   715,     0,     0,     0,     0,     0,
     209,   212,     0,     0,   170,   172,     0,   102,     0,   183,
     185,     0,     0,     0,     0,     0,     0,   240,   244,     0,
       0,    85,     0,     0,     0,     0,   301,   305,     0,     0,
     392,   384,   388,   394,     0,     0,     0,     0,   521,   524,
       0,     0,     0,     0,     0,   552,   556,   564,     0,     0,
     585,   586,   102,   588,     0,     0,     0,     0,     0,     0,
       0,   580,   581,   578,   579,   576,     0,     0,   595,     0,
       0,     0,    85,     0,     0,     0,    89,     0,     0,   596,
     726,   727,     0,     0,     0,     0,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,     0,   696,   697,   698,
     699,   700,   701,     0,     0,     0,     0,   721,   722,     0,
       0,   639,     0,   741,   739,   645,   644,     0,     0,    47,
       0,    85,   733,     0,     0,     0,     0,   218,     0,     0,
     175,     0,   189,     0,     0,     0,   108,     0,   291,     0,
     733,     0,   252,   269,   284,   102,     0,     0,     0,     0,
     733,     0,   311,   335,   733,     0,   395,     0,   733,     0,
     530,    88,     0,     0,   564,     0,     0,     0,   565,     0,
       0,   625,     0,     0,     0,     0,     0,     0,     0,     0,
     583,   582,     0,     0,     0,   708,    78,    81,    72,     0,
      77,     0,    66,    58,    65,   575,   715,   715,     0,     0,
       0,     0,     0,   715,     0,   623,   623,   623,   601,   602,
       0,     0,     0,   616,   617,   104,     0,     0,     0,     0,
       0,   637,     0,     0,     0,     0,   635,   724,   705,   641,
      90,     0,     0,    64,     0,     0,     0,    45,     0,     0,
     218,     0,   215,   213,     0,     0,     0,   173,     0,     0,
       0,   187,   103,     0,   186,     0,   247,     0,   245,     0,
       0,     0,     0,   102,    93,    99,   308,     0,   306,     0,
       0,     0,   389,     0,   417,     0,   525,     0,     0,   528,
     557,   565,   558,   560,   559,   563,     0,     0,     0,     0,
     102,     0,   590,     0,     0,     0,   567,     0,     0,     0,
     568,     0,     0,     0,    74,   595,    85,   613,   618,   102,
     610,     0,     0,   597,   600,   608,   609,   603,   604,   607,
     605,   606,   612,   611,     0,   614,   102,   620,     0,     0,
     728,     0,     0,   695,   702,   703,   704,    87,     0,    46,
      49,    83,    51,     0,     0,   221,   216,   220,   214,   177,
     174,   191,   188,     0,     0,   733,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,   149,     0,     0,
       0,     0,     0,   140,   142,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   138,     0,   135,   714,   293,
     251,   246,   254,   248,   271,   249,   286,   250,    94,     0,
     307,   314,   309,   313,     0,     0,     0,     0,     0,   310,
     336,   338,   337,   390,   398,   391,   397,     0,   526,   534,
     529,   533,   532,   527,   561,   566,     0,   627,   626,     0,
       0,     0,     0,     0,     0,   577,   595,   570,     0,    79,
      75,     0,     0,     0,     0,   598,   599,   624,     0,   106,
       0,     0,     0,     0,     0,    48,     0,    54,   217,     0,
       0,     0,   100,   101,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,   131,   133,     0,   157,
     155,   152,   154,   153,     0,   733,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   139,   166,     0,
       0,     0,     0,    95,     0,   355,   355,   366,   344,   355,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,   448,   393,   418,   469,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
      59,    70,     0,     0,   102,   615,   105,   102,     0,   622,
     729,   730,     0,     0,     0,     0,     0,     0,   102,   102,
     102,   102,     0,     0,     0,   102,   219,   222,     0,     0,
     176,   178,     0,     0,     0,   190,   192,     0,   108,     0,
       0,     0,     0,     0,   108,   108,     0,   134,   158,     0,
     381,     0,   130,   129,   126,   127,   128,   122,   124,   123,
     125,   118,   119,   114,   117,   120,   115,   121,   156,   159,
     162,     0,   164,     0,     0,   136,     0,     0,     0,     0,
     292,   294,     0,     0,     0,     0,   104,   104,     0,     0,
     253,   255,     0,     0,     0,   270,   272,     0,     0,     0,
     285,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   715,   326,   312,   315,   372,   372,   372,     0,   372,
       0,     0,     0,     0,   715,     0,     0,     0,   396,   399,
     408,     0,     0,   102,   102,     0,     0,     0,     0,     0,
       0,     0,     0,   427,     0,   477,     0,   484,     0,   492,
     499,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   531,   535,   628,     0,     0,     0,     0,
       0,     0,     0,     0,   573,    88,    68,     0,   107,     0,
      84,     0,     0,     0,     0,     0,   102,     0,   102,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,   166,
     196,     0,     0,   147,     0,   148,     0,     0,   144,     0,
       0,     0,   108,   380,     0,   161,   163,     0,     0,     0,
       0,     0,     0,    88,     0,     0,   265,     0,     0,     0,
       0,     0,     0,   280,   282,     0,   276,   278,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   733,
     321,     0,     0,     0,     0,   108,     0,     0,     0,     0,
     373,   374,   375,   376,   377,   378,   379,     0,     0,   339,
     356,     0,   340,     0,   341,   367,     0,     0,     0,   349,
     342,   345,   343,     0,     0,   411,     0,    88,     0,     0,
       0,   415,     0,   413,     0,     0,   419,     0,     0,   420,
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
       0,     0,   363,   357,     0,   369,     0,     0,     0,   401,
     400,    85,   402,   409,   403,   406,   407,    85,   404,   405,
       0,     0,     0,   102,     0,     0,     0,     0,   102,     0,
       0,     0,   102,     0,     0,   102,   421,   478,     0,     0,
     102,     0,     0,     0,     0,   422,   485,     0,     0,     0,
       0,     0,   102,   423,   493,     0,     0,     0,     0,     0,
       0,     0,     0,   424,   500,   102,     0,   102,   715,   715,
     715,     0,   715,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   471,   470,   472,   472,     0,   536,     0,
     715,     0,     0,     0,     0,   569,     0,     0,    55,   102,
     102,     0,   102,   181,   198,   195,     0,   116,   160,     0,
       0,     0,   151,     0,     0,   298,   258,     0,   259,     0,
     281,     0,   277,     0,   323,     0,     0,     0,   361,   362,
     364,     0,   360,   108,   368,   108,   346,   347,     0,     0,
       0,     0,   348,   350,   410,     0,   414,     0,   425,   417,
     426,     0,     0,     0,     0,     0,     0,     0,     0,   417,
       0,     0,     0,     0,     0,   417,     0,     0,     0,     0,
       0,     0,     0,     0,   417,     0,     0,     0,     0,     0,
     417,   417,     0,     0,   509,     0,   453,     0,     0,     0,
       0,     0,     0,   457,   458,     0,     0,     0,     0,     0,
       0,     0,   452,     0,     0,     0,     0,   537,     0,     0,
       0,     0,     0,     0,   619,   621,     0,     0,     0,     0,
       0,     0,   150,     0,     0,   143,   113,     0,     0,     0,
     283,   279,   333,     0,   322,   327,     0,   358,   370,     0,
       0,     0,     0,   412,   416,     0,     0,   715,     0,   715,
       0,     0,     0,   102,     0,   481,   479,   480,   482,   102,
       0,   488,   486,   487,   489,   490,   102,   497,   495,     0,
     494,   496,   504,   503,   505,     0,     0,   501,   502,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   715,   473,     0,
     541,   541,     0,   715,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     199,     0,     0,   168,     0,     0,     0,   334,   365,     0,
       0,   351,   352,   353,   354,   428,   430,     0,     0,     0,
       0,   436,     0,     0,   483,     0,   491,     0,   498,   507,
     508,   511,   506,   450,     0,     0,   434,   435,     0,     0,
       0,     0,     0,   463,   467,   468,     0,   466,     0,   447,
       0,   715,   476,   449,   372,   372,   594,     0,   587,   591,
       0,     0,     0,   237,   236,   229,   235,     0,     0,     0,
       0,     0,     0,     0,   146,     0,   260,   324,   108,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,   102,     0,   102,     0,     0,     0,     0,     0,     0,
     102,     0,   474,   475,     0,     0,     0,   546,   540,     0,
     542,   539,   715,     0,     0,     0,   200,   201,   202,   203,
     204,   205,     0,     0,     0,     0,   417,   438,   439,     0,
       0,   437,     0,     0,   417,     0,     0,     0,     0,   102,
       0,     0,   510,   512,     0,   433,     0,   454,   455,   456,
       0,     0,   460,     0,     0,     0,     0,     0,     0,     0,
     543,     0,     0,     0,     0,   145,     0,     0,     0,     0,
       0,   715,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,   465,     0,
     548,   549,   545,     0,   108,   589,     0,     0,     0,   266,
     359,   371,   429,   440,     0,   417,     0,   444,   417,   518,
     513,   516,   517,   514,   515,   451,   432,     0,   417,   417,
     459,     0,   547,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   464,     0,   592,     0,    56,
       0,     0,   442,   417,   445,   431,     0,     0,   544,     0,
       0,     0,     0,   461,   462,     0,   267,     0,   443,     0,
       0,     0,     0,     0,   441,   593,    88,     0,     0,   268,
       0,     0,     0
};

static const short yydefgoto[] =
{
    2010,     1,     2,     3,    22,    23,    24,   106,   181,   302,
     642,   303,  1003,  1636,   231,   485,   716,   232,   233,   603,
     862,   993,   339,   482,   340,   531,   179,   401,   345,   402,
     112,   198,   431,   545,   546,  1504,   870,   662,   663,   803,
    1041,  1533,   804,   892,   893,  1372,   886,   927,  1063,  1065,
     109,   308,   415,   656,   880,  1021,   110,   309,   420,   658,
     881,  1026,  1366,  1641,  1740,   107,   184,   307,   411,   651,
     879,  1017,   111,   192,   310,   428,   669,   930,  1081,  1389,
    1967,  2000,   670,   931,  1086,  1238,  1398,  1235,  1396,   671,
     932,  1091,   665,   929,  1071,   113,   203,   313,   437,   679,
     934,  1104,  1411,  1652,  1255,  1546,   680,   830,  1108,  1281,
    1428,  1563,  1105,  1270,  1553,  1749,  1107,  1275,  1555,  1750,
    1271,   805,   114,   208,   314,   442,   567,   683,   940,  1119,
    1286,  1431,  1292,  1437,   837,   977,  1159,  1160,  1505,  1623,
    1718,  1308,  1457,  1310,  1466,  1312,  1474,  1313,  1484,  1699,
    1830,  1883,   115,   213,   315,   449,   687,   979,  1164,  1507,
    1794,  1850,  1934,  1899,   116,   217,   316,   456,    25,   317,
     578,   696,    79,   342,   224,   476,   332,   330,   346,   489,
     729,   978,    26,   105,   806,   268,   166,   167,   269,   270,
      27,   169,    57,    58
};

static const short yypact[] =
{
  -32768,-32768,   102,  4386,  -205,  -123,   -96,   688,   150,   956,
     203,   -73,   -84,   -61,   -36,   -27,   -10,     7,    22,    30,
      66,    27,-32768,-32768,   701,-32768,-32768,    49,   207,    89,
     436,   449,   471,-32768,   473,   494,   503,   514,   532,-32768,
     549,-32768,   567,   571,   586,   599,   645,   652,   654,   663,
     676,   678,-32768,-32768,   286,   368,-32768,-32768,-32768,-32768,
  -32768,   609,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
     493,    42,-32768,   441,-32768,   442,   444,   453,   469,-32768,
  -32768,   465,  2262,  4006,  -170,   237,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   203,   203,  -125,   448,   127,-32768,     5,
     188,    47,   168,   243,   325,   193,   529,   449,   593,  4006,
    4006,   449,   542,    48,   730,  4006,-32768,-32768,    99,   739,
     504,   506,   510,   527,   539,-32768,-32768,-32768,-32768,-32768,
     553,   569,   574,   576,   579,   585,   601,   606,   614,   630,
     632,   640,   649,   686,   696,   699,   714,   724,   726,   737,
     741,  4006,  4006,  4006,  3839,  1576,-32768,   744,-32768,-32768,
     766,  4711,   777,  3839,    73,   637,  -118,   921,-32768,   948,
  -32768,  1017,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,   -29,   742,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,   738,  3990,  5114,  1161,   746,   735,  1161,    93,-32768,
       8,-32768,-32768,   747,   749,-32768,  4742,  1436,-32768,   993,
     994,  4006,  4006,   203,  4006,  4006,  4006,  4006,  4006,  4006,
    4006,  4006,  4006,  4006,  4006,  4006,  4006,  4006,  4006,  4006,
    4006,  4006,  4006,  4006,   203,   169,   169,  5141,  1576,   352,
  -32768,  4006,  4006,  4006,  4006,  4006,  4006,  4006,  4006,  4006,
    4006,  4006,  4006,  4006,  4006,  4006,  4006,-32768,-32768,-32768,
  -32768,-32768,   -34,-32768,  4006,   203,-32768,  3839,-32768,   780,
     129,   757,-32768,-32768,-32768,-32768,   -90,   328,   -25,    59,
     419,   164,-32768,   720,   573,   570,   533,   752,  4006,  4006,
  -32768,-32768,    48,    48,   156,   753,   755,   764,   769,   779,
  -32768,    48,   523,  3891,-32768,  1005,   151,-32768,  3839,-32768,
  -32768,-32768,   775,-32768,   783,-32768,  -100,-32768,-32768,   361,
     791,   785,  2240,  3917,   794,  5168,  5195,  5222,  5249,  5276,
    5303,  5330,  5357,  5384,  5411,  3969,  5438,  5465,  5492,  5519,
    5546,  5573,  4028,  4049,  4084,   796,-32768,-32768,  3839,  4105,
    4126,  2206,  2831,  2567,  2567,   909,   909,   909,   909,   709,
     709,   169,   169,   169,   169,  1041,  5600,   798,   -32,  3943,
      26,   824,   826,-32768,  2210,   827,  4006,    28,  1049,   449,
  -32768,-32768,   800,  1052,-32768,-32768,   803,   101,  1055,-32768,
  -32768,   806,  1058,  1059,   809,   812,   813,-32768,-32768,   844,
     820,   -55,  1069,  1072,   822,   823,-32768,-32768,  1076,   830,
  -32768,-32768,-32768,-32768,  1077,   836,   449,  1078,-32768,-32768,
     449,   839,  1091,   203,  1093,-32768,-32768,-32768,  4147,  1272,
     894,-32768,   101,-32768,   845,  3839,   846,   847,   849,   -11,
     859,-32768,-32768,-32768,-32768,-32768,  1095,   861,  6140,    15,
    4058,   857,   370,   378,   985,     9,-32768,  1109,  3587,-32768,
  -32768,-32768,  1114,  4006,  4006,  1113,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  4006,-32768,-32768,-32768,
  -32768,-32768,-32768,  4006,  4006,  4006,  1116,  1576,-32768,  4006,
    4006,-32768,  1117,-32768,-32768,-32768,  6140,   864,  4006,-32768,
     165,   178,   171,  1118,   165,  5627,   870,-32768,  1120,    61,
  -32768,  1128,-32768,   889,   891,  1136,-32768,  1137,-32768,  1138,
     223,  1150,-32768,-32768,-32768,   101,   932,  1154,  1159,  1156,
     223,  1168,-32768,-32768,   223,  1175,-32768,   927,   223,  1177,
  -32768,   749,  1179,  1180,-32768,  1181,  1182,  1183,   941,  4006,
    4006,-32768,  1199,   952,  3839,   383,  3839,  3839,  3839,  1204,
  -32768,   746,   203,   200,    84,  1207,  6140,-32768,-32768,    12,
  -32768,    48,-32768,-32768,-32768,-32768,  2549,  2549,   960,  1212,
     502,  4006,  4006,  2549,  4006,  1213,-32768,-32768,-32768,-32768,
    4006,  1225,  2375,-32768,-32768,   975,   976,   978,   961,  4183,
    4204,-32768,  5654,  5681,  5708,  5735,-32768,  6140,  6140,-32768,
  -32768,  4773,   165,-32768,  1228,  1229,  1232,-32768,  1231,  1014,
  -32768,   131,-32768,-32768,   992,  1239,   418,-32768,   422,  4006,
    1242,-32768,-32768,  2148,-32768,   445,-32768,  1241,-32768,   455,
     472,   478,  1243,   101,-32768,-32768,-32768,  1244,-32768,   228,
      72,  1245,-32768,   236,-32768,  1249,-32768,   548,  1251,-32768,
  -32768,  1002,-32768,-32768,-32768,-32768,   701,   415,  5762,  1004,
     101,   509,-32768,   513,   522,   525,-32768,   991,  1010,  1255,
  -32768,  1030,  4006,    17,-32768,-32768,   230,-32768,-32768,   101,
  -32768,   203,   203,-32768,  6140,  6140,-32768,  6140,-32768,  1260,
    1260,  1260,  6140,-32768,  3839,  6140,   101,-32768,  4006,  3839,
  -32768,  4006,  4006,-32768,-32768,-32768,-32768,-32768,  1261,-32768,
  -32768,  1011,-32768,  1203,   298,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,  5789,  1031,   242,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  1034,-32768,  1037,  1040,
    1042,  1048,  1060,-32768,-32768,  1276,  2148,  2148,  2148,  2148,
    1308,    87,  1307,  3723,   179,  1064,  1064,-32768,  1065,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1313,
  -32768,-32768,-32768,-32768,  1068,  1070,  1071,  1075,  1083,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,  2491,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  4006,-32768,-32768,  4006,
    1063,  1084,  1086,  1087,  1089,-32768,-32768,-32768,  1074,  6140,
  -32768,   238,  1096,   145,  1067,-32768,-32768,-32768,   530,-32768,
     534,  4259,   540,  5816,  5843,-32768,  4006,-32768,-32768,   801,
      53,   408,-32768,-32768,-32768,  1090,  1102,  1090,  2148,  1317,
    1344,  1349,  1105,  1125,  1133,  1131,  1131,  1131,  3670,-32768,
  -32768,-32768,-32768,-32768,   449,    14,  1129,-32768,  2148,  2148,
    2148,  2148,  2148,  2148,  2148,  2148,  2148,  2148,  2148,  2148,
    2148,  2148,  2148,  2148,  1382,  4006,  2089,-32768,  1147,    78,
    1234,   189,   260,-32768,  1158,-32768,-32768,-32768,-32768,-32768,
     673,    44,    77,    55,  1157,  1163,  1166,  1167,  1169,  1184,
    1185,  1397,   314,   316,   333,  1153,  1187,  1188,  1197,  1205,
    1208,  1214,  1246,  1259,  1162,  1171,  1266,  1268,  1273,  1274,
    1277,  1173,  1174,  1278,-32768,-32768,-32768,-32768,-32768,    32,
    4804,  4280,   101,  3839,  3839,  3839,  3839,   255,  1152,  1424,
  -32768,-32768,   449,     8,   101,-32768,-32768,   101,  4006,-32768,
  -32768,-32768,  4835,  1279,    48,    48,    48,    48,   107,   112,
     101,   101,  1198,  1428,  1452,   176,-32768,-32768,    98,  1454,
  -32768,-32768,  1237,  1489,  1490,-32768,-32768,  1271,-32768,  1275,
    1537,  1289,  1281,  1283,-32768,-32768,  1282,-32768,-32768,  1291,
  -32768,  2148,  6190,  3782,  1209,  1209,  1209,  1130,  1130,  1130,
    1130,   728,   728,  1131,  1131,  1131,  1131,  1131,-32768,-32768,
  -32768,  1284,  3723,   269,  3787,-32768,  1531,    46,  1549,   449,
  -32768,-32768,  1551,  1554,  1555,  1305,   975,   975,    48,    48,
  -32768,-32768,  1561,    36,    41,-32768,-32768,  1562,   449,  1563,
  -32768,-32768,  1565,  1566,  1569,   111,   449,  1570,  1573,  1582,
      48,  2549,-32768,-32768,-32768,  1006,  1575,  1099,    13,  1767,
    1574,   449,    43,   203,  2549,   203,    51,  1587,-32768,-32768,
  -32768,   449,  1571,   101,   101,  1586,  1591,  1592,  1593,  1596,
    1597,  1598,  1599,-32768,  4006,-32768,  4006,-32768,  4006,-32768,
  -32768,    48,   203,  1608,  1609,  1610,  1612,  1613,  1617,   449,
     449,  1618,  1620,  1621,  1622,  1623,   449,  1625,   449,  1381,
    1383,  1376,   449,-32768,-32768,-32768,  4006,  1377,   557,   560,
     587,   590,  1628,   449,-32768,   749,-32768,  1378,-32768,  4301,
  -32768,  1384,  1631,  1634,  1636,  1637,   101,  1644,   101,  1645,
    1646,  1647,  1616,  1648,  1654,   101,  1656,  1658,  1659,  1147,
  -32768,  1660,  1661,-32768,  1411,-32768,  2148,  1669,-32768,  1417,
    1423,  1419,-32768,-32768,  1927,-32768,-32768,  2148,  1425,   592,
    1671,  1673,  1675,   749,  1676,    62,  1430,  1683,  1684,  1685,
    1687,  1688,  1697,-32768,-32768,  1700,-32768,-32768,  1701,  1702,
    1704,  1705,  1707,  1708,  1709,  1710,  1721,  1722,  1728,   335,
  -32768,  1729,  1730,  1732,  1733,-32768,  1736,  1737,  1738,  1440,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,    48,  1739,-32768,
  -32768,  1495,-32768,    48,-32768,-32768,  1498,  1744,  1746,-32768,
  -32768,-32768,-32768,  1745,  1747,-32768,  1749,   749,  1750,  1752,
    1753,-32768,  1754,-32768,  1755,  1502,-32768,  1524,  1532,-32768,
    1527,  1533,  1534,  1536,  1538,  1539,  1540,  4322,   743,  4354,
     680,  4375,    76,   612,  1542,  1550,  1544,  1564,  1567,  1568,
    1572,  1577,  1525,  1556,  1579,  1580,  1581,  1583,  1588,  1589,
    1600,  1557,    58,    58,-32768,  1782,  4866,  1578,  1584,  1602,
    1614,  1615,-32768,  1783,-32768,   101,  4006,     8,-32768,-32768,
  -32768,-32768,  1607,-32768,  1619,-32768,-32768,-32768,  1624,-32768,
  -32768,  1626,-32768,-32768,-32768,  1814,   602,-32768,-32768,    48,
    6167,  1594,-32768,  4006,-32768,  1828,  1630,-32768,  3723,    48,
  -32768,-32768,-32768,-32768,  1837,-32768,-32768,  1842,  1771,  1872,
    1624,-32768,-32768,-32768,-32768,-32768,   605,-32768,   631,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    1652,  1635,-32768,-32768,-32768,-32768,  1653,  1880,  1881,  1909,
    1914,  1911,-32768,-32768,  1913,-32768,  1915,  1917,   501,-32768,
  -32768,   646,-32768,-32768,-32768,-32768,-32768,   664,-32768,-32768,
    1920,  1674,  1921,   101,  1924,  1926,  4006,  1928,   101,    48,
    4006,  1678,   101,  4006,  4006,   101,-32768,-32768,  4006,  1680,
     101,  4006,  4006,  4006,  4006,-32768,-32768,  4006,  4006,  4006,
    1681,  4006,   101,-32768,-32768,  4006,  4006,  1933,  1689,  1691,
    4006,  4006,  1693,-32768,-32768,   101,  1932,   101,  2549,  2549,
    2549,  4006,  2549,  1934,  1937,  1935,  1945,  4006,  1946,  1947,
      48,  1948,  1951,-32768,-32768,-32768,-32768,    20,-32768,  1698,
    2549,  3839,  1699,  3839,  3839,-32768,  1703,  4897,-32768,   101,
     101,  1616,   101,-32768,-32768,-32768,  1718,-32768,-32768,  1723,
    4396,  1724,-32768,  2148,  1725,-32768,-32768,  1954,-32768,  1956,
  -32768,  1968,-32768,  1978,-32768,   449,  1981,  1982,-32768,-32768,
  -32768,  1748,-32768,-32768,-32768,-32768,-32768,-32768,  1090,  1090,
    1090,    48,-32768,-32768,-32768,   449,-32768,   449,-32768,-32768,
  -32768,  1756,  1742,  1743,  4417,  1760,  1757,  1773,  4438,-32768,
    1988,   938,   966,  1989,  4459,-32768,  1995,  1066,  1310,  1491,
    1633,  4480,  1672,  1751,-32768,  1786,  1996,  1807,  1836,  1998,
  -32768,-32768,  2516,  2537,-32768,   279,-32768,  1787,  1758,  1759,
    1793,  4501,  1794,-32768,-32768,  1795,  1798,  5870,  1806,  1808,
    1800,   674,-32768,   294,   317,  1788,  1805,-32768,  4006,  1804,
     677,  4006,   700,   703,-32768,-32768,  1810,  1822,  1823,  1824,
    1829,   850,-32768,  1831,  4006,-32768,  3723,  1833,  1999,  1834,
  -32768,-32768,  1635,  1835,-32768,-32768,  2004,-32768,-32768,  2078,
    2081,  2088,  2091,-32768,-32768,  2542,  2092,  2549,  4006,  2549,
    2095,  2094,  2097,   101,  2724,-32768,-32768,-32768,-32768,   101,
    2778,-32768,-32768,-32768,-32768,-32768,   101,-32768,-32768,  2838,
  -32768,-32768,-32768,-32768,-32768,  2960,  3025,-32768,-32768,   610,
    2096,  4006,   101,  2098,  2099,  4006,   203,   203,  4006,  4006,
    2100,  2102,  2104,   203,  2105,  1961,  2106,  2322,-32768,  2107,
  -32768,-32768,  4928,  2549,  1847,  4959,  1858,  1860,  1864,  2157,
    2158,  2165,  2166,  2170,  4006,  4006,  4006,  4006,  4006,-32768,
  -32768,  1964,  4990,-32768,  2065,  2203,  2205,-32768,-32768,  1919,
    1959,-32768,-32768,-32768,-32768,  2207,-32768,  1970,  5897,  1966,
    1967,-32768,  1971,  1969,-32768,  1972,-32768,   318,-32768,-32768,
  -32768,-32768,-32768,-32768,  4522,   343,-32768,-32768,  5924,  1975,
    1977,  4543,  4564,-32768,-32768,-32768,   721,-32768,   203,-32768,
     203,  2549,-32768,-32768,  1298,  1840,-32768,  1973,-32768,-32768,
    1976,  3839,     8,-32768,-32768,-32768,-32768,  2222,  2597,  2816,
    3117,  3410,  3437,  4006,-32768,  2228,-32768,-32768,-32768,  1090,
    1983,  2265,  2266,  4006,  4006,  2267,   101,  4006,  2013,  4006,
     485,   101,  2268,   101,  2269,  2271,  2273,  4006,  4006,  2274,
     101,   725,-32768,-32768,  2277,  2278,  2279,-32768,-32768,  2035,
  -32768,-32768,  2549,  4006,   727,  2033,-32768,-32768,-32768,-32768,
  -32768,-32768,  5021,  2061,  2067,  2068,-32768,-32768,-32768,  5951,
    4585,-32768,  2069,  4606,-32768,  5978,  2316,  2318,  4006,   101,
    2319,    48,-32768,-32768,  2079,-32768,   356,-32768,-32768,-32768,
    6005,  6032,-32768,  2074,  2325,  2329,  2328,  2331,  2332,    48,
  -32768,  2087,  4627,  2093,  4006,-32768,  2344,  2370,  2376,  3076,
    2377,  2549,  2080,  4006,  3143,  2126,  2378,  2379,  3527,  2382,
    2383,  2384,  2385,  2387,   101,  2139,  2141,  2391,-32768,  2142,
  -32768,-32768,-32768,  2393,-32768,-32768,  4006,  2147,  6059,-32768,
  -32768,-32768,-32768,-32768,  2172,-32768,  6086,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,  2180,-32768,-32768,
  -32768,  2425,-32768,  2182,  5052,  4006,  2431,  2381,  4006,  3259,
    2188,  3326,  2444,  3377,  3442,-32768,  2445,-32768,  4648,-32768,
      48,  4669,-32768,-32768,-32768,-32768,  2447,  2449,-32768,  4006,
    2450,  4006,  3559,-32768,-32768,  4690,-32768,  6113,-32768,  4006,
    2330,  2453,  5083,  2456,-32768,-32768,   749,  2457,  2208,-32768,
    2472,  2477,-32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  -311,-32768,-32768,  -257,  1418,-32768,
  -32768,  1410,  -479,-32768,  -529,-32768,  -410,  -534,  -570,-32768,
  -32768,-32768,-32768,  -169,-32768,  -601,-32768,  -953,-32768,   479,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,  1682,-32768,  1285,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1839,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,   838,-32768,-32768,-32768,-32768,
  -32768,-32768,  -648,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   -1098,  -758,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768, -1426,-32768,-32768,-32768,  1164,   986,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
     770,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    1925,-32768,  1799,-32768,  2372,-32768,  1910,  2276,  -307,-32768,
     350,   -16,   -76,-32768,-32768,   119,  -449,  -563,  -131,   -78,
  -32768,    -3,  -101,   -72
};


#define	YYLAST		6437


static const short yytable[] =
{
      28,   688,   175,   176,   168,   655,   604,   884,    80,  1276,
     170,   335,   335,   336,   336,   335,   667,   336,    70,     4,
     335,   558,   336,   469,   737,  1625,   677,   479,    85,   527,
     681,   185,     4,   536,   685,   194,   200,   205,   210,   214,
     219,  1233,   292,   717,   718,   108,  1236,   118,     4,     4,
     726,   643,     4,   228,   430,    29,     4,   412,     5,     6,
      71,    72,    73,  1503,    74,   460,   461,   463,   653,  1386,
     714,   413,   599,   602,   470,  1204,    11,     4,   543,   172,
     293,  1210,  1211,     5,     6,    71,    72,    73,   173,    74,
     900,   710,   901,   533,  1468,   193,   199,   204,   209,  1277,
     218,    11,    -2,   228,    28,   305,   349,  1161,    28,    28,
      28,    28,    28,    28,   220,   229,  1245,   229,   225,   225,
     234,   646,  1018,  1278,   543,    30,   177,  1027,  1162,  1029,
     543,   296,     4,   178,  1019,   543,   404,  1626,     5,     6,
     297,   416,   354,  1665,    71,    72,    73,   417,    74,   405,
     991,   487,    31,  1674,   544,   418,    11,    39,   488,  1680,
     406,   228,  1197,   375,  1469,   304,   398,   229,  1689,   228,
     643,   593,    60,   195,  1695,  1696,  1066,    59,   306,     5,
       6,    71,    72,    73,   860,    74,  1067,  1068,  1069,   824,
     825,   826,   827,   828,   397,    61,   557,    11,     4,   543,
     544,   165,   171,   178,     5,     6,   544,   483,    52,    53,
     992,   544,    54,    55,   807,   395,  1470,   524,  1246,   644,
      62,   311,    11,   648,   378,   229,   378,   341,  1247,    63,
     902,    29,   414,   229,   229,   196,  1471,  1472,   222,   223,
     589,    71,    72,    73,   236,    74,    64,   488,     4,    71,
      72,    73,   713,    74,     5,     6,    71,    72,    73,  1376,
      74,   186,   187,    65,   337,   337,   594,   338,   338,  1279,
    1280,   338,    11,   488,    29,   544,   338,  1627,    66,   528,
     265,   266,   267,    69,   537,  1082,    67,  1083,  1106,  1163,
     119,  1109,  1234,   583,  1121,  1084,   903,  1237,   443,  1285,
     518,   230,  1416,   190,   191,  1124,   863,  1291,   234,    81,
    1020,    71,    72,    73,   736,    74,   419,   654,   654,   234,
     234,   234,    68,   294,   711,   120,   168,  1123,   234,   829,
       4,   748,   170,  1473,   585,  1070,     5,     6,    71,    72,
      73,   904,    74,   -64,   715,    83,  1087,   807,   807,   807,
     807,   230,   576,    29,    11,   237,  1088,  1186,  1089,    29,
     352,   353,  1188,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   182,   183,   400,   672,   755,   756,    29,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   539,   481,   861,   230,
     407,    29,   462,   396,   408,   429,   286,   230,   230,  1529,
     551,   -64,   287,   846,   409,   197,  1195,   237,    56,   645,
     561,    29,   924,    82,   925,   565,   178,   458,   459,   807,
    1909,   569,    84,   571,   188,   189,  1085,   573,  1914,   211,
     212,   709,   478,   701,     4,   703,   704,   705,   488,   807,
     807,   807,   807,   807,   807,   807,   807,   807,   807,   807,
     807,   807,   807,   807,   807,  1228,  1229,   807,    86,   654,
      87,   -67,   341,    29,   821,   822,   174,   421,   178,   989,
    1022,   708,   834,   835,  1023,  1024,   488,   517,   802,   201,
     202,    88,    29,  1876,   819,   422,  1172,    52,    53,   723,
      89,    54,    55,   488,  1176,   423,   424,  1090,   526,  1969,
    1216,    90,  1971,   165,   425,   535,   426,  1217,   168,   168,
    1700,   850,  1973,  1974,     4,   168,   103,  1701,  1254,    91,
       5,     6,    71,    72,    73,  1716,    74,     4,   226,   987,
     864,  1289,  1717,     4,   755,   878,    92,  1992,    11,     5,
       6,    71,    72,    73,  1134,    74,  1136,   869,  1719,  1828,
    1135,  1877,  1137,  1878,    93,  1717,  1829,    11,    94,  1558,
    1559,   206,   207,  1138,  1879,   410,    71,    72,    73,  1139,
      74,  1410,   807,    95,  1832,    29,   341,  1880,   234,   596,
    1657,  1833,  1658,   868,   832,  1344,    96,  1923,   872,   377,
     378,   842,   629,   630,  1924,  1881,   104,  1560,   490,   378,
     865,   866,    71,    72,    73,   632,    74,   598,   178,   450,
    1475,  1561,   633,   634,   635,   757,   378,   600,   637,   638,
     702,   378,   272,   273,   274,   275,   276,   641,   277,   278,
     279,   280,    97,  1384,   281,   282,   283,   284,   285,    98,
     808,    99,   286,   823,   831,  1025,   444,   836,   287,   438,
     100,   841,   847,   451,   759,   760,   427,    28,   761,   762,
      80,   117,   445,   101,    28,   102,    71,    72,    73,   120,
      74,  1387,   121,    32,   122,    33,  1849,  1849,   697,   698,
    1476,   809,   810,   123,   446,   180,   439,    34,    35,    36,
     341,   812,   813,   440,    71,    72,    73,  1433,    74,   124,
     452,   125,   453,   221,    37,   165,   165,    56,   814,   815,
     724,   725,   165,   727,   816,   817,   235,   721,   757,   732,
     722,   735,  1882,  1358,   454,  1477,   238,  1182,  1183,  1184,
    1185,   288,  1478,  1479,   239,   447,   240,   807,  1562,  1110,
     241,  1198,   471,   472,   473,   474,   851,   378,   807,  1111,
     852,   378,  1480,   289,  1125,  1481,  1482,   242,   763,   853,
     378,   475,   854,   378,   291,   215,   216,   995,   378,   243,
     455,   996,   997,   808,   808,   808,   808,   999,   378,   906,
    1659,  1660,  1661,   244,   839,   840,   432,  1112,  1113,  1114,
    1115,  1116,  1117,  1167,  1338,   378,   433,  1339,   378,   245,
    1459,  1230,  1231,  1460,   246,  1177,   247,   448,  1178,   248,
     441,   859,   434,  1461,  1462,   249,   435,  1463,  1464,  1187,
    1189,  1190,  1191,  1253,  1340,   378,  1196,  1341,   378,  1380,
     378,   250,  1168,  1169,  1170,  1171,   251,   871,  1524,  1525,
     873,   874,  1540,   178,   252,  1864,  1771,  1772,  1518,  1483,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,    38,
     253,  1013,   254,  1451,  1314,   808,  1452,  1014,  1542,   178,
     255,    75,    76,    77,    78,   295,  1453,  1454,  1455,   256,
    1015,  1038,  1039,  1564,   178,   808,   808,   808,   808,   808,
     808,   808,   808,   808,   808,   808,   808,   808,   808,   808,
     808,  1566,   178,   808,  1120,  1608,  1609,  1610,   298,  1612,
    1118,  1714,  1715,  1219,  1724,   378,   257,  1465,  1122,  1733,
    1734,  1735,  1736,  1737,  1738,  1676,   258,  1629,  1521,   259,
     283,   284,   285,   299,  1297,  1298,   286,  1726,   378,    40,
    1727,   378,   287,    41,   260,   980,   730,   731,   981,   919,
     920,   921,   922,  1677,   261,   923,   262,   436,  1839,  1840,
    1539,  1963,  1894,  1895,  1903,   378,  1541,   263,  1543,  1175,
     341,   264,   312,   333,   318,  1002,   331,   343,   350,   351,
    1456,   234,   234,   234,   234,   344,   399,   403,   457,   464,
    1421,   465,  1288,   480,  1290,   234,  1424,  1352,    42,  1354,
     466,  1565,   300,   168,    43,   467,  1361,  1567,     5,     6,
      71,    72,    73,   484,    74,   468,   168,    44,   808,    45,
     486,  1315,   491,   492,  1059,   495,    11,   516,   521,   523,
     529,    46,   530,   534,   538,    47,   540,   541,  1016,   542,
     547,  1865,   548,   549,   550,   552,  1223,    48,   553,   554,
     555,   556,  1639,  1682,   559,   234,   234,   560,   562,   563,
     301,   564,   568,   572,   807,  1240,   566,  1256,    49,  1257,
    1258,  1259,   570,  1248,  1250,   574,   575,   234,   577,   582,
     591,   584,   586,   587,  1757,   588,  1759,  1739,  1284,  1287,
     590,   592,  1526,  1293,   597,   601,   605,  1179,  1295,   628,
     631,   640,  1534,   636,   639,   647,   650,   652,  1260,  1261,
    1262,  1263,  1264,  1265,  1266,   657,  1267,  1268,   234,   659,
      50,   660,    51,   661,   664,   666,  1322,  1323,   281,   282,
     283,   284,   285,  1329,  1792,  1331,   286,   668,   673,  1335,
    1797,   674,   287,   676,   675,   272,   273,   274,   275,   276,
    1343,   277,   278,   279,   280,   678,  1516,   281,   282,   283,
     284,   285,   682,   684,   686,   286,   689,   690,   692,   693,
     694,   287,  1577,   272,   273,   274,   275,   276,   695,   277,
     278,   279,   280,   808,   699,   281,   282,   283,   284,   285,
     700,   706,   740,   286,   808,   712,   719,   720,   728,   287,
     165,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1843,  1273,
     733,   736,   738,   165,   739,   749,   750,   751,   752,  1092,
     753,  1093,  1094,  1620,  1095,   528,   758,   764,   811,   855,
     818,   820,   833,  1307,  1096,  1309,   838,  1311,   843,   844,
     849,   856,   857,  1269,   234,   858,   867,   876,   875,   877,
     234,  1097,  1098,  1099,  1571,   895,   896,   897,   898,  1576,
     580,   894,   883,  1580,   885,  1336,  1583,   887,  1100,  1901,
     888,  1586,   889,   272,   273,   274,   275,   276,   890,   277,
     278,   279,   280,  1596,  1662,   281,   282,   283,   284,   285,
     891,   899,   905,   286,   926,  -666,  1605,  1683,  1607,   287,
     933,   982,  1031,  1855,   935,   994,   936,   937,   988,  1906,
    1072,   938,  1073,  1074,  1075,  1076,  1077,  1078,  1079,   939,
     983,  1101,   984,   985,   341,   986,   802,   990,  1944,  1032,
    1637,  1638,  1028,  1640,  1033,  1034,  1274,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   234,  1030,  1036,   917,
     918,   919,   920,   921,   922,  1035,   234,   923,   923,  1844,
    1630,  1845,  1632,  1633,  1846,  1058,  1040,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,
    1055,  1056,  1057,  1064,  1133,  1062,  1173,  1126,  1102,  1140,
     168,   168,   168,  1127,   168,  1103,  1128,  1129,  1149,  1130,
    1260,  1261,  1262,  1263,  1264,  1265,  1266,  1150,  1847,  1156,
    1157,  1174,   168,  1193,  1131,  1132,  2007,  1141,  1142,   126,
     127,   128,   913,   914,   915,   916,   234,  1143,   917,   918,
     919,   920,   921,   922,  1192,  1144,   923,  1194,  1145,  1199,
     130,   131,   132,   133,  1146,  1517,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,  1080,  1530,  1200,  1201,  1202,  1147,   234,  1684,   272,
     273,   274,   275,   276,  1763,   277,   278,   279,   280,  1148,
    1765,   281,   282,   283,   284,   285,  1151,  1767,  1152,   286,
    1214,   581,  1203,  1153,  1154,   287,  1205,  1155,  1158,  1181,
     808,  1208,  1212,  1775,  1209,  1215,  1220,   272,   273,   274,
     275,   276,  1653,   277,   278,   279,   280,  1207,  1213,   281,
     282,   283,   284,   285,   991,  1848,  1224,   286,   234,  1225,
    1226,  1227,  1663,   287,  1664,  1574,  1232,  1239,  1241,  1578,
    1242,  1243,  1581,  1582,  1244,  1249,  1251,  1584,  1296,  1283,
    1587,  1588,  1589,  1590,   271,  1252,  1591,  1592,  1593,   168,
    1595,   168,  1294,  1299,  1597,  1598,  1300,  1301,  1302,  1602,
    1603,  1303,  1304,  1305,  1306,  1779,  1780,   165,   165,   165,
    1611,   165,  1786,  1316,  1317,  1318,  1617,  1319,  1320,   126,
     127,     4,  1321,  1324,  1921,  1325,  1326,  1327,  1328,   165,
    1330,  1332,  1334,  1333,  1337,  1342,  1345,  1347,  1348,   168,
    1685,  1349,  1933,  1350,  1351,   168,   135,   136,   137,   138,
     139,  1353,  1355,  1356,  1357,  1359,  1256,  1872,  1257,  1258,
    1259,  1360,  1884,  1362,  1886,  1363,  1364,  1367,  1368,  1369,
    1854,  1893,  1371,  1373,  1374,  1379,   161,  1375,  1381,  1687,
    1382,   162,  1383,  1385,   163,  1370,  1388,  1841,  1390,  1842,
    1420,  1391,  1392,   348,  1393,  1394,  1378,  1260,  1261,  1262,
    1263,  1264,  1265,  1266,  1395,  1267,  1268,  1397,  1399,  1400,
    1919,  1401,  1402,   168,  1403,  1404,  1405,  1406,   272,   273,
     274,   275,   276,  1990,   277,   278,   279,   280,  1407,  1408,
     281,   282,   283,   284,   285,  1409,  1412,  1413,   286,  1414,
    1415,  1417,  1418,  1419,   287,  1423,  1422,  1722,  1425,  1426,
    1725,  1427,  1429,  1440,  1430,  1957,  1432,  1434,  1688,  1435,
    1436,  1438,  1439,  1742,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   168,  1441,   917,   918,   919,   920,
     921,   922,  1493,  1442,   923,  1443,   165,  1758,   165,  1508,
    1515,  1444,  1445,  1690,  1446,  1206,  1447,  1448,  1449,   341,
    1485,  1486,  1487,   272,   273,   274,   275,   276,  1502,   277,
     278,   279,   280,  1494,  1692,   281,   282,   283,   284,   285,
    1774,  1523,  1488,   286,  1778,  1489,  1490,  1781,  1782,   287,
    1491,  1531,  1272,   168,  1510,  1492,   165,  1495,  1496,  1497,
    1511,  1498,   165,  1693,  1535,  1528,  1499,  1500,  1256,  1536,
    1257,  1258,  1259,  1808,  1809,  1810,  1811,  1812,  1501,  1512,
     272,   273,   274,   275,   276,  1519,   277,   278,   279,   280,
    1513,  1514,   281,   282,   283,   284,   285,  1520,   234,  1538,
     286,  1532,   178,  1537,  1522,  1545,   287,  1548,  1549,  1260,
    1261,  1262,  1263,  1264,  1265,  1266,   234,  1267,  1268,   272,
     273,   274,   275,   276,  1547,   277,   278,   279,   280,  1544,
     165,   281,   282,   283,   284,   285,  1550,  1551,  1552,   286,
    1554,  1844,  1556,  1845,  1557,   287,  1846,  1568,  1570,  1572,
    1569,  1573,  1862,  1575,  1579,  1377,  1585,  1594,  1599,  1606,
    1615,  1613,  1869,  1870,  1614,  1600,  1873,  1601,  1875,  1604,
    1616,  1618,  1619,  1621,  1628,  1631,  1890,  1891,  1622,  1648,
    1634,  1649,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1642,
    1847,   165,  1902,  1650,  1643,  1645,  1647,   234,   272,   273,
     274,   275,   276,  1651,   277,   278,   279,   280,  1654,  1655,
     281,   282,   283,   284,   285,  1675,  1678,  1918,   286,  1656,
    1667,  1668,  1681,  1691,   287,  1694,  1744,  1666,  1671,  1703,
    1704,  1748,  1646,   272,   273,   274,   275,   276,  1670,   277,
     278,   279,   280,  1938,  1282,   281,   282,   283,   284,   285,
     165,  1672,  1946,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,  1720,  1702,   281,   282,   283,   284,
     285,  1705,  1707,  1708,   286,  1964,  1709,  1711,  1713,  1712,
     287,  1721,  1723,   272,   273,   274,   275,   276,  1728,   277,
     278,   279,   280,  1729,  1730,   281,   282,   283,   284,   285,
    1732,  1731,  1741,   286,  1978,  1751,  1747,  1981,  1752,   287,
    1743,  1745,   126,   127,   765,  1753,  1788,  1851,  1754,  1756,
    1760,  1761,  1762,  1773,  1798,  1776,  1777,  1783,  1995,  1784,
    1997,  1785,  1787,  1789,  1793,  1800,  1801,  1802,  2002,   135,
     136,   137,   138,   139,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   126,   127,   765,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,  1803,  1804,   917,   918,   919,   920,
     921,   922,  1805,  1806,   923,  1807,  1815,  1818,   135,   136,
     137,   138,   139,   766,   767,   768,   769,   770,   771,   772,
     773,   774,   775,   776,   777,   778,   779,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
    1816,   793,  1817,   126,   127,   532,   129,  1819,   794,    54,
    1813,  1821,  1825,  1820,  1823,  1824,  1835,  1826,  1836,  1856,
    1827,  1852,  1853,  1863,   130,   131,   132,   133,   134,  1866,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   126,   127,   128,   129,  1874,
     793,    54,  1867,  1868,  1871,  1885,  1887,   794,  1888,   229,
    1889,  1892,  1896,  1897,  1898,  1900,   130,   131,   132,   133,
     134,  1904,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   654,  1907,  1908,
    1912,  1916,   795,  1917,  1920,   126,   127,   128,   796,   797,
    1922,  1927,  1928,  1929,   798,  1930,  1945,   799,  1931,  1932,
    1060,  1061,   800,   801,  1935,   802,   130,   131,   132,   133,
    1937,  1939,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,  1940,   126,   127,
       4,   795,  1948,  1941,  1943,  1949,  1950,   796,   797,  1952,
    1953,  1954,  1955,   798,  1956,  1958,   799,  1959,  1960,  1961,
    1962,   800,   801,  1965,   802,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
    1968,  1972,  1975,  1976,   160,   274,   275,   276,  1979,   277,
     278,   279,   280,  1980,  1983,   281,   282,   283,   284,   285,
     161,  1985,  1988,   286,  1993,   162,  1994,  1996,   163,   287,
    2004,  2006,  2003,   230,  2008,  2009,   164,   272,   273,   274,
     275,   276,  2011,   277,   278,   279,   280,  2012,  1222,   281,
     282,   283,   284,   285,  1365,  1221,   160,   286,   928,   754,
    1746,  1795,  1624,   287,   227,   845,   941,  1506,   493,   691,
       0,   707,   161,   334,    71,    72,   942,   162,    74,     0,
     163,     0,     0,     0,     0,     0,     0,     0,   164,     0,
       0,     0,     0,  1697,     0,     0,     0,     0,  1790,     0,
       0,  1791,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1698,     0,     0,   941,     0,     0,
       0,     0,   126,   127,   128,    71,    72,   942,     0,    74,
       0,     0,   161,     0,     0,     0,     0,   162,     0,     0,
     163,     0,     0,   130,   131,   132,   133,     0,   164,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,  1857,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,     0,     0,     0,     0,
     162,     0,     0,   163,     0,     0,     0,     0,     0,     0,
       0,   734,     0,   943,     0,   944,   945,   946,   947,   948,
     949,   950,   951,   952,     0,     0,     0,   953,     0,     0,
     954,     0,     0,   955,     0,     0,   956,     0,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,     0,     0,     0,   973,     0,     0,
       0,     0,   974,     0,   943,   975,   944,   945,   946,   947,
     948,   949,   950,   951,   952,     0,     0,     0,   953,     0,
       0,   954,     0,     0,   955,     0,     0,   956,     0,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,     0,     0,     0,   973,   941,
       0,     0,     0,   974,     0,     0,   975,    71,    72,   942,
       0,    74,     0,   272,   273,   274,   275,   276,   976,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,   941,   286,     0,     0,     0,     0,   161,
     287,    71,    72,   942,   162,    74,     0,   163,     0,  1755,
     277,   278,   279,   280,     0,   164,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
     287,     0,     0,  1858,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,   941,   286,     0,     0,     0,     0,     0,
     287,    71,    72,   942,     0,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   943,     0,   944,   945,
     946,   947,   948,   949,   950,   951,   952,     0,     0,     0,
     953,     0,     0,   954,     0,     0,   955,     0,     0,   956,
       0,   957,   958,   959,   960,   961,   962,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   972,     0,     0,     0,
     973,     0,     0,     0,     0,   974,     0,     0,   975,     0,
     943,     0,   944,   945,   946,   947,   948,   949,   950,   951,
     952,     0,     0,     0,   953,     0,     0,   954,     0,     0,
     955,     0,     0,   956,     0,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,     0,     0,     0,   973,   941,     0,     0,     0,   974,
       0,     0,   975,    71,    72,   942,     0,    74,     0,     0,
     943,  1764,   944,   945,   946,   947,   948,   949,   950,   951,
     952,     0,     0,     0,   953,     0,     0,   954,     0,     0,
     955,     0,     0,   956,     0,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,     0,     0,     0,   973,     0,     0,     0,     0,   974,
     941,     0,   975,     0,     0,  1766,     0,     0,    71,    72,
     942,     0,    74,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,   275,   276,   286,   277,   278,   279,   280,     0,   287,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,   941,     0,     0,   287,     0,     0,     0,     0,    71,
      72,   942,     0,    74,     0,  1768,     0,     0,     0,     0,
       0,     0,   943,     0,   944,   945,   946,   947,   948,   949,
     950,   951,   952,     0,     0,     0,   953,     0,     0,   954,
       0,     0,   955,     0,  1859,   956,     0,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,     0,     0,     0,   973,     0,   941,     0,
       0,   974,     0,     0,   975,     0,    71,    72,   942,     0,
      74,     0,     0,     0,     0,     0,     0,   943,     0,   944,
     945,   946,   947,   948,   949,   950,   951,   952,     0,     0,
       0,   953,     0,     0,   954,     0,     0,   955,     0,     0,
     956,     0,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,     0,     0,
       0,   973,     0,     0,     0,     0,   974,  1769,   943,   975,
     944,   945,   946,   947,   948,   949,   950,   951,   952,     0,
       0,     0,   953,     0,     0,   954,     0,     0,   955,     0,
       0,   956,     0,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,     0,
       0,     0,   973,     0,   941,     0,     0,   974,     0,     0,
     975,     0,    71,    72,   942,     0,    74,     0,     0,     0,
       0,     0,  1770,     0,     0,   943,     0,   944,   945,   946,
     947,   948,   949,   950,   951,   952,     0,     0,     0,   953,
       0,     0,   954,     0,     0,   955,     0,     0,   956,     0,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,   971,   972,     0,     0,     0,   973,
       0,   941,     0,  1942,   974,     0,     0,   975,     0,    71,
      72,   942,     0,    74,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
     287,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   941,     0,     0,     0,     0,     0,     0,     0,
      71,    72,   942,     0,    74,     0,     0,     0,     0,     0,
    1947,   943,     0,   944,   945,   946,   947,   948,   949,   950,
     951,   952,     0,     0,     0,   953,     0,  1860,   954,     0,
       0,   955,     0,     0,   956,     0,   957,   958,   959,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,     0,     0,  1861,   973,     0,   941,     0,     0,
     974,     0,     0,   975,     0,    71,    72,   942,     0,    74,
       0,     0,     0,     0,     0,     0,     0,     0,   943,     0,
     944,   945,   946,   947,   948,   949,   950,   951,   952,     0,
       0,     0,   953,     0,     0,   954,     0,     0,   955,     0,
       0,   956,     0,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,     0,
       0,     0,   973,     0,     0,     0,  1982,   974,     0,   943,
     975,   944,   945,   946,   947,   948,   949,   950,   951,   952,
       0,     0,     0,   953,  1951,     0,   954,     0,     0,   955,
       0,     0,   956,     0,   957,   958,   959,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
       0,     0,     0,   973,   941,     0,     0,     0,   974,     0,
       0,   975,    71,    72,   942,     0,    74,     0,     0,     0,
       0,     0,     0,  1984,   943,     0,   944,   945,   946,   947,
     948,   949,   950,   951,   952,     0,     0,     0,   953,     0,
       0,   954,     0,     0,   955,     0,     0,   956,     0,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,     0,     0,     0,   973,     0,
       0,     0,     0,   974,  1986,     0,   975,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,     0,   606,   287,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
     287,     0,     0,     0,     0,     0,     0,     0,     0,  1987,
       0,   943,     0,   944,   945,   946,   947,   948,   949,   950,
     951,   952,     0,     0,     0,   953,     0,     0,   954,     0,
       0,   955,     0,   607,   956,     0,   957,   958,   959,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,     0,     0,     0,   973,     0,     0,     0,     0,
     974,     0,   608,   975,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
     287,     0,   609,     0,     0,     0,     0,     0,     0,     0,
     126,   127,   128,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   130,   131,   132,   133,     0,  1998,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   126,   127,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1218,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   126,   127,     4,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,     0,     0,   917,
     918,   919,   920,   921,   922,     0,     0,   923,     0,  1037,
       0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   126,   127,     4,   525,
     907,   908,   909,   910,   911,   912,   913,   914,   915,   916,
       0,     0,   917,   918,   919,   920,   921,   922,     0,     0,
     923,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   319,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
     127,     4,   910,   911,   912,   913,   914,   915,   916,     0,
       0,   917,   918,   919,   920,   921,   922,   161,     0,   923,
       0,     0,   162,     0,     0,   163,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   595,   127,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   161,
       0,     0,     0,     0,   162,     0,     0,   163,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   519,     0,   477,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,     0,     0,   520,     0,   162,     0,     0,   163,
       0,     0,     0,     0,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,   579,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
     287,     0,     0,     0,     0,   494,     0,     0,     0,     0,
       0,     0,     0,   161,     0,     0,     0,     0,   162,     0,
       0,   163,     0,     0,     0,     0,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
     275,   276,   287,   277,   278,   279,   280,   506,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,     0,     0,   287,     0,     0,   161,     0,     0,     0,
       0,   162,     0,     0,   163,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
     276,   287,   277,   278,   279,   280,   513,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,   161,     0,
       0,     0,   287,   162,     0,     0,   163,   514,     0,     0,
       0,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
     279,   280,   515,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     4,     0,     0,   286,     0,     0,     5,     6,     0,
     287,     0,     0,     0,     0,     7,     8,     9,    10,     0,
     272,   273,   274,   275,   276,    11,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
     280,   741,     0,   281,   282,   283,   284,   285,    12,     0,
       0,   286,     0,     0,    13,     0,     0,   287,     0,     0,
       0,     0,   742,     0,     0,     0,     0,    14,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,    17,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,    18,   281,   282,
     283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
     275,   276,   287,   277,   278,   279,   280,   998,    19,   281,
     282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
     274,   275,   276,   287,   277,   278,   279,   280,  1166,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
     273,   274,   275,   276,   287,   277,   278,   279,   280,  1346,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
      20,     0,    21,     0,     0,   287,     0,     0,     0,     0,
    1450,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
     279,   280,  1458,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
     278,   279,   280,  1467,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,  1644,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
     287,   277,   278,   279,   280,  1669,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
     276,   287,   277,   278,   279,   280,  1673,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
     275,   276,   287,   277,   278,   279,   280,  1679,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
     274,   275,   276,   287,   277,   278,   279,   280,  1686,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
     273,   274,   275,   276,   287,   277,   278,   279,   280,  1706,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
    1831,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
     280,  1837,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
     279,   280,  1838,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
     278,   279,   280,  1911,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,  1913,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
     287,   277,   278,   279,   280,  1936,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
     276,   287,   277,   278,   279,   280,  1989,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
     275,   276,   287,   277,   278,   279,   280,  1991,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
     274,   275,   276,   287,   277,   278,   279,   280,  1999,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,     0,     0,   287,     0,     0,     0,   290,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,     0,     0,   287,     0,     0,     0,   347,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
     747,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
       0,  1165,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
       0,     0,  1180,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
       0,     0,     0,  1509,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
     287,     0,     0,     0,  1635,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
       0,   287,     0,     0,     0,  1796,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
       0,     0,   287,     0,     0,     0,  1799,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,     0,     0,   287,     0,     0,     0,  1814,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,     0,     0,   287,     0,     0,     0,  1905,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,     0,     0,   287,     0,     0,     0,  1977,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
    2005,   272,   273,   274,   275,   276,     0,   277,   278,   279,
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
     285,     0,     0,     0,   286,     0,     0,     0,   649,     0,
     287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,   743,     0,   287,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,   744,     0,   287,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,   745,
       0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,   746,     0,   287,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,   848,     0,     0,     0,   287,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     882,     0,   287,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,  1000,     0,   287,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,  1001,     0,   287,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,  1710,     0,   287,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,  1822,     0,
     287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,  1834,     0,   287,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,  1910,     0,   287,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,  1915,
       0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,  1925,     0,   287,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,  1926,     0,   287,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
    1966,     0,   287,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,  1970,     0,   287,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,  2001,     0,   287,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,     0,     0,   287,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,     0,     0,   917,   918,   919,   920,
     921,   922,     0,     0,   923,     0,     0,     0,  1527,   909,
     910,   911,   912,   913,   914,   915,   916,     0,     0,   917,
     918,   919,   920,   921,   922,     0,     0,   923
};

static const short yycheck[] =
{
       3,   571,   103,   104,    82,   539,   485,   765,    24,  1107,
      82,     3,     3,     5,     5,     3,   550,     5,    21,     5,
       3,   431,     5,   330,   625,     5,   560,   334,    31,     3,
     564,   107,     5,     5,   568,   111,   112,   113,   114,   115,
     116,     5,   173,   606,   607,    61,     5,     5,     5,     5,
     613,     5,     5,     5,   311,   260,     5,    82,    11,    12,
      13,    14,    15,     5,    17,   322,   323,   324,     7,     7,
     599,    96,   482,    64,   331,  1028,    29,     5,    23,   249,
       7,  1034,  1035,    11,    12,    13,    14,    15,   258,    17,
       3,     7,     5,   404,    18,   111,   112,   113,   114,    86,
     116,    29,     0,     5,   107,   181,   237,    75,   111,   112,
     113,   114,   115,   116,   117,    69,     5,    69,   121,   122,
     123,   531,    69,   110,    23,   248,   251,   885,    96,   887,
      23,   249,     5,   258,    81,    23,   226,   117,    11,    12,
     258,    82,   243,  1569,    13,    14,    15,    88,    17,   239,
       5,   251,   248,  1579,    99,    96,    29,     7,   258,  1585,
     250,     5,    64,   264,    88,   181,   297,    69,  1594,     5,
       5,   478,   256,     5,  1600,  1601,    98,   250,   181,    11,
      12,    13,    14,    15,   713,    17,   108,   109,   110,   117,
     118,   119,   120,   121,   295,   256,   251,    29,     5,    23,
      99,    82,    83,   258,    11,    12,    99,   338,     5,     6,
      65,    99,     9,    10,   663,   249,   140,   249,   107,   530,
     256,   250,    29,   534,   258,    69,   258,   230,   117,   256,
     143,   260,   257,    69,    69,    67,   160,   161,   119,   120,
     251,    13,    14,    15,   125,    17,   256,   258,     5,    13,
      14,    15,   240,    17,    11,    12,    13,    14,    15,  1212,
      17,   256,   257,   256,   256,   256,   251,   259,   259,   256,
     257,   259,    29,   258,   260,    99,   259,   257,   256,   253,
     161,   162,   163,   256,   256,    96,   256,    98,   936,   257,
     248,   939,   256,   462,   250,   106,   209,   256,   314,   256,
     378,   253,  1255,   256,   257,   250,   716,   256,   311,   260,
     257,    13,    14,    15,   256,    17,   257,   256,   256,   322,
     323,   324,   256,   250,   240,   248,   404,   250,   331,   257,
       5,   642,   404,   257,   465,   257,    11,    12,    13,    14,
      15,   254,    17,   250,   601,   256,    86,   796,   797,   798,
     799,   253,   453,   260,    29,   256,    96,   250,    98,   260,
     241,   242,   250,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   256,   257,   256,   555,   256,   257,   260,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   409,   256,   715,   253,
      82,   260,   256,   294,    86,   251,   247,   253,   253,  1372,
     423,   250,   253,     8,    96,   257,   250,   256,   225,   251,
     433,   260,   253,   226,   255,   438,   258,   318,   319,   888,
    1866,   444,     6,   446,   256,   257,   257,   450,  1874,   256,
     257,   251,   333,   584,     5,   586,   587,   588,   258,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,  1076,  1077,   926,     7,   256,
       7,   251,   485,   260,   256,   257,   249,    68,   258,   251,
      82,   592,   256,   257,    86,    87,   258,   378,   256,   256,
     257,     7,   260,    18,   673,    86,   251,     5,     6,   610,
       7,     9,    10,   258,   993,    96,    97,   257,   399,  1945,
     251,     7,  1948,   404,   105,   406,   107,   258,   606,   607,
     251,   700,  1958,  1959,     5,   613,   250,   258,  1101,     7,
      11,    12,    13,    14,    15,   251,    17,     5,     6,   856,
     719,  1114,   258,     5,   256,   257,     7,  1983,    29,    11,
      12,    13,    14,    15,   250,    17,   250,   736,   251,   251,
     256,    86,   256,    88,     7,   258,   258,    29,     7,    78,
      79,   256,   257,   250,    99,   257,    13,    14,    15,   256,
      17,   256,  1041,     7,   251,   260,   599,   112,   601,   480,
    1553,   258,  1555,   734,   680,  1175,     7,   251,   739,   257,
     258,   687,   493,   494,   258,   130,   248,   116,   257,   258,
     721,   722,    13,    14,    15,   506,    17,   257,   258,    96,
      18,   130,   513,   514,   515,   651,   258,   259,   519,   520,
     257,   258,   227,   228,   229,   230,   231,   528,   233,   234,
     235,   236,     7,  1223,   239,   240,   241,   242,   243,     7,
     663,     7,   247,   679,   680,   257,    96,   683,   253,    96,
       7,   687,   257,   140,   256,   257,   257,   680,   256,   257,
     696,   188,   112,     7,   687,     7,    13,    14,    15,   248,
      17,  1225,   250,     5,   250,     7,  1794,  1795,   579,   580,
      88,   256,   257,   250,   134,   257,   133,    19,    20,    21,
     713,   256,   257,   140,    13,    14,    15,  1287,    17,   250,
     187,   256,   189,   130,    36,   606,   607,   225,   256,   257,
     611,   612,   613,   614,   256,   257,     6,   235,   754,   620,
     238,   622,   257,  1192,   211,   133,     7,  1004,  1005,  1006,
    1007,     7,   140,   141,   250,   185,   250,  1206,   257,    86,
     250,  1018,   239,   240,   241,   242,   257,   258,  1217,    96,
     257,   258,   160,     7,   943,   163,   164,   250,   659,   257,
     258,   258,   257,   258,     7,   256,   257,   257,   258,   250,
     257,   257,   258,   796,   797,   798,   799,   257,   258,   802,
    1558,  1559,  1560,   250,   256,   257,    86,   134,   135,   136,
     137,   138,   139,   982,   257,   258,    96,   257,   258,   250,
     140,  1078,  1079,   143,   250,   994,   250,   257,   997,   250,
     257,   712,   112,   153,   154,   250,   116,   157,   158,  1008,
    1009,  1010,  1011,  1100,   257,   258,  1015,   257,   258,   257,
     258,   250,   983,   984,   985,   986,   250,   738,   256,   257,
     741,   742,   257,   258,   250,  1818,   256,   257,  1347,   257,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   191,
     250,    80,   250,   140,  1141,   888,   143,    86,   257,   258,
     250,   190,   191,   192,   193,   258,   153,   154,   155,   250,
      99,   904,   905,   257,   258,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   257,   258,   926,   940,  1488,  1489,  1490,     7,  1492,
     257,   257,   258,  1064,   257,   258,   250,   257,   941,    89,
      90,    91,    92,    93,    94,     7,   250,  1510,  1358,   250,
     241,   242,   243,     5,  1123,  1124,   247,   257,   258,     3,
     257,   258,   253,     7,   250,   846,   616,   617,   849,   241,
     242,   243,   244,     7,   250,   247,   250,   257,   257,   258,
    1390,  1934,   257,   258,   257,   258,  1396,   250,  1398,   992,
     993,   250,   250,   258,   256,   876,   250,   250,     5,     5,
     257,  1004,  1005,  1006,  1007,   256,   226,   250,   256,   256,
    1267,   256,  1113,     8,  1115,  1018,  1273,  1186,    62,  1188,
     256,  1431,     5,  1101,    68,   256,  1195,  1437,    11,    12,
      13,    14,    15,   258,    17,   256,  1114,    81,  1041,    83,
     257,  1142,   251,   258,   925,   251,    29,   251,     7,   251,
     226,    95,   226,   226,     5,    99,   256,     5,   257,   256,
       5,  1819,   256,     5,     5,   256,  1069,   111,   256,   256,
     226,   251,  1521,     7,     5,  1078,  1079,     5,   256,   256,
      63,     5,     5,     5,  1533,  1088,   256,    81,   132,    83,
      84,    85,   256,  1096,  1097,   256,     5,  1100,     5,   205,
       5,   256,   256,   256,  1667,   256,  1669,   257,  1111,  1112,
     251,   250,  1369,  1116,   257,   130,     7,   998,  1121,     5,
       7,   257,  1379,     7,     7,     7,   256,     7,   122,   123,
     124,   125,   126,   127,   128,     7,   130,   131,  1141,   250,
     184,   250,   186,     7,     7,     7,  1149,  1150,   239,   240,
     241,   242,   243,  1156,  1717,  1158,   247,     7,   226,  1162,
    1723,     7,   253,     7,     5,   227,   228,   229,   230,   231,
    1173,   233,   234,   235,   236,     7,  1345,   239,   240,   241,
     242,   243,     7,   256,     7,   247,     7,     7,     7,     7,
       7,   253,  1449,   227,   228,   229,   230,   231,   257,   233,
     234,   235,   236,  1206,     5,   239,   240,   241,   242,   243,
     258,     7,   251,   247,  1217,     8,   256,     5,     5,   253,
    1101,   122,   123,   124,   125,   126,   127,   128,  1791,   130,
       5,   256,   256,  1114,   256,     7,     7,     5,     7,    81,
     226,    83,    84,  1500,    86,   253,     7,     5,     7,   258,
       7,     7,     7,  1134,    96,  1136,     7,  1138,     7,   257,
     256,   251,     7,   257,  1267,   235,     6,   256,     7,    66,
    1273,   113,   114,   115,  1443,   796,   797,   798,   799,  1448,
       8,     5,   251,  1452,   250,  1166,  1455,   250,   130,  1852,
     250,  1460,   250,   227,   228,   229,   230,   231,   250,   233,
     234,   235,   236,  1472,  1561,   239,   240,   241,   242,   243,
     250,     3,     5,   247,   250,   250,  1485,     7,  1487,   253,
       7,   258,     5,  1802,   256,   258,   256,   256,   254,  1863,
      96,   256,    98,    99,   100,   101,   102,   103,   104,   256,
     256,   183,   256,   256,  1347,   256,   256,   251,  1911,     5,
    1519,  1520,   250,  1522,     5,   250,   257,   196,   197,   198,
     199,   200,   201,   202,   203,   204,  1369,   888,   235,   239,
     240,   241,   242,   243,   244,   250,  1379,   247,   247,    81,
    1511,    83,  1513,  1514,    86,     3,   257,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,   922,   923,   256,     7,   926,   254,   250,   250,   256,
    1488,  1489,  1490,   250,  1492,   257,   250,   250,   256,   250,
     122,   123,   124,   125,   126,   127,   128,   256,   130,   256,
     256,     7,  1510,     5,   250,   250,  2006,   250,   250,     3,
       4,     5,   233,   234,   235,   236,  1449,   250,   239,   240,
     241,   242,   243,   244,   256,   250,   247,     5,   250,     5,
      24,    25,    26,    27,   250,  1346,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   257,  1373,   256,     5,     5,   250,  1500,     7,   227,
     228,   229,   230,   231,  1673,   233,   234,   235,   236,   250,
    1679,   239,   240,   241,   242,   243,   250,  1686,   250,   247,
    1041,   249,   251,   250,   250,   253,   251,   250,   250,   250,
    1533,   250,   250,  1702,   251,   251,     5,   227,   228,   229,
     230,   231,  1545,   233,   234,   235,   236,   258,   257,   239,
     240,   241,   242,   243,     5,   257,     5,   247,  1561,     5,
       5,   256,  1565,   253,  1567,  1446,     5,     5,     5,  1450,
       5,     5,  1453,  1454,     5,     5,     3,  1458,     7,     5,
    1461,  1462,  1463,  1464,     8,     3,  1467,  1468,  1469,  1667,
    1471,  1669,     5,     7,  1475,  1476,     5,     5,     5,  1480,
    1481,     5,     5,     5,     5,  1706,  1707,  1488,  1489,  1490,
    1491,  1492,  1713,     5,     5,     5,  1497,     5,     5,     3,
       4,     5,     5,     5,  1881,     5,     5,     5,     5,  1510,
       5,   250,   256,   250,   257,     7,   258,   253,     7,  1717,
       7,     7,  1899,     7,     7,  1723,    30,    31,    32,    33,
      34,     7,     7,     7,     7,     7,    81,  1826,    83,    84,
      85,     7,  1831,     7,  1833,     7,     7,     7,     7,   258,
    1801,  1840,     3,   256,   251,   250,   240,   258,     7,     7,
       7,   245,     7,     7,   248,  1206,   256,  1788,     5,  1790,
     250,     7,     7,   257,     7,     7,  1217,   122,   123,   124,
     125,   126,   127,   128,     7,   130,   131,     7,     7,     7,
    1879,     7,     7,  1791,     7,     7,     7,     7,   227,   228,
     229,   230,   231,  1980,   233,   234,   235,   236,     7,     7,
     239,   240,   241,   242,   243,     7,     7,     7,   247,     7,
       7,     5,     5,     5,   253,   250,     7,  1628,   250,     5,
    1631,     5,     7,   251,     7,  1924,     7,     7,     7,     7,
       7,     7,     7,  1644,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,  1852,   251,   239,   240,   241,   242,
     243,   244,   257,   251,   247,   258,  1667,  1668,  1669,     7,
       7,   258,   258,     7,   258,   258,   258,   258,   258,  1802,
     258,   251,   258,   227,   228,   229,   230,   231,   251,   233,
     234,   235,   236,   257,     7,   239,   240,   241,   242,   243,
    1701,     7,   258,   247,  1705,   258,   258,  1708,  1709,   253,
     258,     3,   257,  1911,   256,   258,  1717,   258,   258,   258,
     256,   258,  1723,     7,     7,   251,   258,   258,    81,     7,
      83,    84,    85,  1734,  1735,  1736,  1737,  1738,   258,   257,
     227,   228,   229,   230,   231,   258,   233,   234,   235,   236,
     256,   256,   239,   240,   241,   242,   243,   258,  1881,     7,
     247,   251,   258,   112,   258,   250,   253,     7,     7,   122,
     123,   124,   125,   126,   127,   128,  1899,   130,   131,   227,
     228,   229,   230,   231,   251,   233,   234,   235,   236,   257,
    1791,   239,   240,   241,   242,   243,     7,     3,     7,   247,
       7,    81,     7,    83,     7,   253,    86,     7,     7,     5,
     256,     5,  1813,     5,   256,     8,   256,   256,     5,     7,
       5,     7,  1823,  1824,     7,   256,  1827,   256,  1829,   256,
       5,     5,     5,     5,   256,   256,  1837,  1838,     7,     5,
     257,     5,   122,   123,   124,   125,   126,   127,   128,   251,
     130,  1852,  1853,     5,   251,   251,   251,  1980,   227,   228,
     229,   230,   231,     5,   233,   234,   235,   236,     7,     7,
     239,   240,   241,   242,   243,     7,     7,  1878,   247,   251,
     258,   258,     7,     7,   253,     7,     7,   251,   251,   251,
     251,     7,  1533,   227,   228,   229,   230,   231,   258,   233,
     234,   235,   236,  1904,   257,   239,   240,   241,   242,   243,
    1911,   258,  1913,   247,   227,   228,   229,   230,   231,   253,
     233,   234,   235,   236,   256,   258,   239,   240,   241,   242,
     243,   258,   258,   258,   247,  1936,   258,   251,   258,   251,
     253,   256,   258,   227,   228,   229,   230,   231,   258,   233,
     234,   235,   236,   251,   251,   239,   240,   241,   242,   243,
     251,   257,   251,   247,  1965,     7,   251,  1968,     7,   253,
     257,   257,     3,     4,     5,     7,   135,   257,     7,     7,
       5,     7,     5,     7,   257,     7,     7,     7,  1989,     7,
    1991,     7,     7,     7,     7,   257,   256,   253,  1999,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     3,     4,     5,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,     7,     7,   239,   240,   241,   242,
     243,   244,     7,     7,   247,     5,   111,   258,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       7,   122,     7,     3,     4,     5,     6,   258,   129,     9,
     256,   251,   251,    16,   258,   258,   251,   258,   251,     7,
     258,   258,   256,     5,    24,    25,    26,    27,    28,   256,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     3,     4,     5,     6,   256,
     122,     9,     7,     7,     7,     7,     7,   129,     7,    69,
       7,     7,     5,     5,     5,   250,    24,    25,    26,    27,
      28,   258,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   256,   251,   251,
     251,     5,   233,     5,     5,     3,     4,     5,   239,   240,
     251,   257,     7,     4,   245,     7,   256,   248,     7,     7,
     251,   252,   253,   254,   257,   256,    24,    25,    26,    27,
     257,     7,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     7,     3,     4,
       5,   233,   256,     7,     7,     7,     7,   239,   240,     7,
       7,     7,     7,   245,     7,   256,   248,   256,     7,   257,
       7,   253,   254,   256,   256,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     258,   251,     7,   251,   224,   229,   230,   231,     7,   233,
     234,   235,   236,    62,   256,   239,   240,   241,   242,   243,
     240,     7,     7,   247,     7,   245,     7,     7,   248,   253,
       7,     5,   132,   253,     7,   257,   256,   227,   228,   229,
     230,   231,     0,   233,   234,   235,   236,     0,  1068,   239,
     240,   241,   242,   243,  1199,  1067,   224,   247,   806,   650,
    1652,  1721,  1506,   253,   122,   696,     5,  1333,   258,   574,
      -1,   591,   240,   227,    13,    14,    15,   245,    17,    -1,
     248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,   206,    -1,
      -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,     5,    -1,    -1,
      -1,    -1,     3,     4,     5,    13,    14,    15,    -1,    17,
      -1,    -1,   240,    -1,    -1,    -1,    -1,   245,    -1,    -1,
     248,    -1,    -1,    24,    25,    26,    27,    -1,   256,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,
     245,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   256,    -1,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,    -1,    -1,   156,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,    -1,    -1,    -1,   186,    -1,    -1,
      -1,    -1,   191,    -1,   142,   194,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,    -1,    -1,   156,    -1,
      -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,    -1,    -1,   186,     5,
      -1,    -1,    -1,   191,    -1,    -1,   194,    13,    14,    15,
      -1,    17,    -1,   227,   228,   229,   230,   231,   257,   233,
     234,   235,   236,    -1,    -1,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,   227,   228,   229,   230,   231,   253,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,    -1,    -1,     5,   247,    -1,    -1,    -1,    -1,   240,
     253,    13,    14,    15,   245,    17,    -1,   248,    -1,   257,
     233,   234,   235,   236,    -1,   256,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,     7,   227,   228,   229,   230,   231,    -1,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,    -1,    -1,     5,   247,    -1,    -1,    -1,    -1,    -1,
     253,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,    -1,    -1,
     156,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,    -1,    -1,
     186,    -1,    -1,    -1,    -1,   191,    -1,    -1,   194,    -1,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,    -1,    -1,   186,     5,    -1,    -1,    -1,   191,
      -1,    -1,   194,    13,    14,    15,    -1,    17,    -1,    -1,
     142,   257,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,   191,
       5,    -1,   194,    -1,    -1,   257,    -1,    -1,    13,    14,
      15,    -1,    17,   227,   228,   229,   230,   231,    -1,   233,
     234,   235,   236,    -1,    -1,   239,   240,   241,   242,   243,
      -1,   230,   231,   247,   233,   234,   235,   236,    -1,   253,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,     5,    -1,    -1,   253,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,   257,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,    -1,    -1,   156,    -1,    -1,   159,
      -1,    -1,   162,    -1,     7,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    -1,    -1,    -1,   186,    -1,     5,    -1,
      -1,   191,    -1,    -1,   194,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,    -1,
      -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,    -1,    -1,
      -1,   186,    -1,    -1,    -1,    -1,   191,   257,   142,   194,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
      -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
      -1,    -1,   186,    -1,     5,    -1,    -1,   191,    -1,    -1,
     194,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,    -1,    -1,    -1,   156,
      -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,    -1,    -1,    -1,   186,
      -1,     5,    -1,   257,   191,    -1,    -1,   194,    -1,    13,
      14,    15,    -1,    17,   227,   228,   229,   230,   231,    -1,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
     257,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,    -1,    -1,   156,    -1,     7,   159,    -1,
      -1,   162,    -1,    -1,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    -1,    -1,     7,   186,    -1,     5,    -1,    -1,
     191,    -1,    -1,   194,    -1,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
      -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
      -1,    -1,   186,    -1,    -1,    -1,   257,   191,    -1,   142,
     194,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,    -1,    -1,   156,     7,    -1,   159,    -1,    -1,   162,
      -1,    -1,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,    -1,    -1,   186,     5,    -1,    -1,    -1,   191,    -1,
      -1,   194,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,   257,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,    -1,    -1,   156,    -1,
      -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,    -1,    -1,   186,    -1,
      -1,    -1,    -1,   191,   257,    -1,   194,   227,   228,   229,
     230,   231,    -1,   233,   234,   235,   236,    -1,    -1,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    75,   253,   227,   228,   229,   230,   231,    -1,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,
      -1,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,    -1,    -1,   156,    -1,    -1,   159,    -1,
      -1,   162,    -1,   136,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
     191,    -1,   165,   194,   227,   228,   229,   230,   231,    -1,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    24,    25,    26,    27,    -1,   257,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     3,     4,     5,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,    -1,    -1,   239,
     240,   241,   242,   243,   244,    -1,    -1,   247,    -1,   249,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     3,     4,     5,     6,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
      -1,    -1,   239,   240,   241,   242,   243,   244,    -1,    -1,
     247,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,   230,   231,   232,   233,   234,   235,   236,    -1,
      -1,   239,   240,   241,   242,   243,   244,   240,    -1,   247,
      -1,    -1,   245,    -1,    -1,   248,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,    -1,    -1,   245,    -1,    -1,   248,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     8,    -1,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,     8,    -1,   245,    -1,    -1,   248,
      -1,    -1,    -1,    -1,   227,   228,   229,   230,   231,    -1,
     233,   234,   235,   236,    -1,     8,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,   245,    -1,
      -1,   248,    -1,    -1,    -1,    -1,   227,   228,   229,   230,
     231,    -1,   233,   234,   235,   236,    -1,    -1,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,   227,   228,   229,
     230,   231,   253,   233,   234,   235,   236,   258,    -1,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,   240,    -1,    -1,    -1,
      -1,   245,    -1,    -1,   248,   227,   228,   229,   230,   231,
      -1,   233,   234,   235,   236,    -1,    -1,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,   227,   228,   229,   230,
     231,   253,   233,   234,   235,   236,   258,    -1,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,   240,    -1,
      -1,    -1,   253,   245,    -1,    -1,   248,   258,    -1,    -1,
      -1,   227,   228,   229,   230,   231,    -1,   233,   234,   235,
     236,    -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,   227,   228,   229,   230,   231,   253,   233,   234,
     235,   236,   258,    -1,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,   227,   228,   229,   230,   231,   253,   233,
     234,   235,   236,    -1,    -1,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,   227,   228,   229,   230,   231,   253,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,     5,    -1,    -1,   247,    -1,    -1,    11,    12,    -1,
     253,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
     227,   228,   229,   230,   231,    29,   233,   234,   235,   236,
      -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,   227,   228,   229,   230,   231,   253,   233,   234,   235,
     236,   258,    -1,   239,   240,   241,   242,   243,    62,    -1,
      -1,   247,    -1,    -1,    68,    -1,    -1,   253,    -1,    -1,
      -1,    -1,   258,    -1,    -1,    -1,    -1,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    99,   227,   228,   229,   230,
     231,    -1,   233,   234,   235,   236,    -1,   111,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,   227,   228,   229,
     230,   231,   253,   233,   234,   235,   236,   258,   132,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,   227,   228,
     229,   230,   231,   253,   233,   234,   235,   236,   258,    -1,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,   227,
     228,   229,   230,   231,   253,   233,   234,   235,   236,   258,
      -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
     184,    -1,   186,    -1,    -1,   253,    -1,    -1,    -1,    -1,
     258,   227,   228,   229,   230,   231,    -1,   233,   234,   235,
     236,    -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,   227,   228,   229,   230,   231,   253,   233,   234,
     235,   236,   258,    -1,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,   227,   228,   229,   230,   231,   253,   233,
     234,   235,   236,   258,    -1,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,   227,   228,   229,   230,   231,   253,
     233,   234,   235,   236,   258,    -1,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,   227,   228,   229,   230,   231,
     253,   233,   234,   235,   236,   258,    -1,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,   227,   228,   229,   230,
     231,   253,   233,   234,   235,   236,   258,    -1,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,   227,   228,   229,
     230,   231,   253,   233,   234,   235,   236,   258,    -1,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,   227,   228,
     229,   230,   231,   253,   233,   234,   235,   236,   258,    -1,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,   227,
     228,   229,   230,   231,   253,   233,   234,   235,   236,   258,
      -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
     227,   228,   229,   230,   231,   253,   233,   234,   235,   236,
     258,    -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,   227,   228,   229,   230,   231,   253,   233,   234,   235,
     236,   258,    -1,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,   227,   228,   229,   230,   231,   253,   233,   234,
     235,   236,   258,    -1,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,   227,   228,   229,   230,   231,   253,   233,
     234,   235,   236,   258,    -1,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,   227,   228,   229,   230,   231,   253,
     233,   234,   235,   236,   258,    -1,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,   227,   228,   229,   230,   231,
     253,   233,   234,   235,   236,   258,    -1,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,   227,   228,   229,   230,
     231,   253,   233,   234,   235,   236,   258,    -1,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,   227,   228,   229,
     230,   231,   253,   233,   234,   235,   236,   258,    -1,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,   227,   228,
     229,   230,   231,   253,   233,   234,   235,   236,   258,    -1,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,   257,   227,
     228,   229,   230,   231,    -1,   233,   234,   235,   236,    -1,
      -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,   257,
     227,   228,   229,   230,   231,    -1,   233,   234,   235,   236,
      -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,
     257,   227,   228,   229,   230,   231,    -1,   233,   234,   235,
     236,    -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,
      -1,   257,   227,   228,   229,   230,   231,    -1,   233,   234,
     235,   236,    -1,    -1,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,   257,   227,   228,   229,   230,   231,    -1,   233,
     234,   235,   236,    -1,    -1,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,    -1,   257,   227,   228,   229,   230,   231,    -1,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,   257,   227,   228,   229,   230,   231,
      -1,   233,   234,   235,   236,    -1,    -1,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,    -1,   257,   227,   228,   229,   230,
     231,    -1,   233,   234,   235,   236,    -1,    -1,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,   257,   227,   228,   229,
     230,   231,    -1,   233,   234,   235,   236,    -1,    -1,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,    -1,   257,   227,   228,
     229,   230,   231,    -1,   233,   234,   235,   236,    -1,    -1,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,   257,   227,
     228,   229,   230,   231,    -1,   233,   234,   235,   236,    -1,
      -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,   257,
     227,   228,   229,   230,   231,    -1,   233,   234,   235,   236,
      -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,
     257,   227,   228,   229,   230,   231,    -1,   233,   234,   235,
     236,    -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,   249,    -1,    -1,    -1,   253,   227,   228,
     229,   230,   231,    -1,   233,   234,   235,   236,    -1,    -1,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
     249,    -1,    -1,    -1,   253,   227,   228,   229,   230,   231,
      -1,   233,   234,   235,   236,    -1,    -1,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,
      -1,   253,   227,   228,   229,   230,   231,    -1,   233,   234,
     235,   236,    -1,    -1,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,
     228,   229,   230,   231,    -1,   233,   234,   235,   236,    -1,
      -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,   230,
     231,    -1,   233,   234,   235,   236,    -1,    -1,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     251,    -1,   253,   227,   228,   229,   230,   231,    -1,   233,
     234,   235,   236,    -1,    -1,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,
     227,   228,   229,   230,   231,    -1,   233,   234,   235,   236,
      -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,
     230,   231,    -1,   233,   234,   235,   236,    -1,    -1,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   251,    -1,   253,   227,   228,   229,   230,   231,    -1,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,
     253,   227,   228,   229,   230,   231,    -1,   233,   234,   235,
     236,    -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,
     229,   230,   231,    -1,   233,   234,   235,   236,    -1,    -1,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,   251,    -1,   253,   227,   228,   229,   230,   231,
      -1,   233,   234,   235,   236,    -1,    -1,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,
      -1,   253,   227,   228,   229,   230,   231,    -1,   233,   234,
     235,   236,    -1,    -1,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,
     228,   229,   230,   231,    -1,   233,   234,   235,   236,    -1,
      -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,   230,
     231,    -1,   233,   234,   235,   236,    -1,    -1,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     251,    -1,   253,   227,   228,   229,   230,   231,    -1,   233,
     234,   235,   236,    -1,    -1,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,
     227,   228,   229,   230,   231,    -1,   233,   234,   235,   236,
      -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,
     230,   231,    -1,   233,   234,   235,   236,    -1,    -1,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   251,    -1,   253,   227,   228,   229,   230,   231,    -1,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,
     253,   227,   228,   229,   230,   231,    -1,   233,   234,   235,
     236,    -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,
     229,   230,   231,    -1,   233,   234,   235,   236,    -1,    -1,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,   251,    -1,   253,   227,   228,   229,   230,   231,
      -1,   233,   234,   235,   236,    -1,    -1,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,
      -1,   253,   227,   228,   229,   230,   231,    -1,   233,   234,
     235,   236,    -1,    -1,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,
     228,   229,   230,   231,    -1,   233,   234,   235,   236,    -1,
      -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,   249,    -1,    -1,    -1,   253,   227,   228,   229,   230,
     231,    -1,   233,   234,   235,   236,    -1,    -1,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     251,    -1,   253,   227,   228,   229,   230,   231,    -1,   233,
     234,   235,   236,    -1,    -1,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,
     227,   228,   229,   230,   231,    -1,   233,   234,   235,   236,
      -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,
     230,   231,    -1,   233,   234,   235,   236,    -1,    -1,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   251,    -1,   253,   227,   228,   229,   230,   231,    -1,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,
     253,   227,   228,   229,   230,   231,    -1,   233,   234,   235,
     236,    -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,
     229,   230,   231,    -1,   233,   234,   235,   236,    -1,    -1,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,   251,    -1,   253,   227,   228,   229,   230,   231,
      -1,   233,   234,   235,   236,    -1,    -1,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,
      -1,   253,   227,   228,   229,   230,   231,    -1,   233,   234,
     235,   236,    -1,    -1,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,
     228,   229,   230,   231,    -1,   233,   234,   235,   236,    -1,
      -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,   230,
     231,    -1,   233,   234,   235,   236,    -1,    -1,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     251,    -1,   253,   227,   228,   229,   230,   231,    -1,   233,
     234,   235,   236,    -1,    -1,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,
     227,   228,   229,   230,   231,    -1,   233,   234,   235,   236,
      -1,    -1,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,
     230,   231,    -1,   233,   234,   235,   236,    -1,    -1,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,    -1,    -1,   239,   240,   241,   242,
     243,   244,    -1,    -1,   247,    -1,    -1,    -1,   251,   229,
     230,   231,   232,   233,   234,   235,   236,    -1,    -1,   239,
     240,   241,   242,   243,   244,    -1,    -1,   247
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
#line 3844 "GetDP.y"
{ EquationTerm_S.Type = DISCRETEGEOMETRY ; ;
    break;}
case 344:
#line 3851 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 346:
#line 3862 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 347:
#line 3872 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 348:
#line 3882 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 349:
#line 3896 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 351:
#line 3908 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 352:
#line 3910 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 353:
#line 3912 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 354:
#line 3914 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 355:
#line 3922 "GetDP.y"
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
case 357:
#line 3947 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 358:
#line 3955 "GetDP.y"
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
case 359:
#line 4034 "GetDP.y"
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
case 360:
#line 4080 "GetDP.y"
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
case 361:
#line 4104 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 4113 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 363:
#line 4122 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 364:
#line 4127 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 365:
#line 4136 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 366:
#line 4147 "GetDP.y"
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
case 368:
#line 4176 "GetDP.y"
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
case 369:
#line 4200 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 370:
#line 4208 "GetDP.y"
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
case 371:
#line 4263 "GetDP.y"
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
case 372:
#line 4280 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 373:
#line 4281 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 374:
#line 4282 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 375:
#line 4283 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 376:
#line 4284 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 377:
#line 4285 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 378:
#line 4286 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 379:
#line 4287 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 380:
#line 4294 "GetDP.y"
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
case 381:
#line 4315 "GetDP.y"
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
case 382:
#line 4339 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 384:
#line 4349 "GetDP.y"
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
case 387:
#line 4376 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 389:
#line 4388 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 390:
#line 4395 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 391:
#line 4402 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 392:
#line 4405 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 393:
#line 4407 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 395:
#line 4415 "GetDP.y"
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
case 396:
#line 4430 "GetDP.y"
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
case 397:
#line 4445 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 398:
#line 4455 "GetDP.y"
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
case 400:
#line 4475 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 401:
#line 4478 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 402:
#line 4487 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 403:
#line 4490 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 404:
#line 4495 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 405:
#line 4500 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 406:
#line 4505 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 407:
#line 4510 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 409:
#line 4520 "GetDP.y"
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
case 410:
#line 4557 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 411:
#line 4564 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 412:
#line 4567 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 413:
#line 4579 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 414:
#line 4589 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 415:
#line 4595 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 416:
#line 4598 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 417:
#line 4610 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 418:
#line 4618 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 419:
#line 4631 "GetDP.y"
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
case 420:
#line 4653 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 421:
#line 4660 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 422:
#line 4666 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 423:
#line 4672 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 424:
#line 4678 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 425:
#line 4686 "GetDP.y"
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
case 426:
#line 4708 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 427:
#line 4715 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 428:
#line 4721 "GetDP.y"
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
case 429:
#line 4732 "GetDP.y"
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
case 430:
#line 4743 "GetDP.y"
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
case 431:
#line 4756 "GetDP.y"
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
case 432:
#line 4771 "GetDP.y"
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
case 433:
#line 4786 "GetDP.y"
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
case 434:
#line 4801 "GetDP.y"
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
case 435:
#line 4821 "GetDP.y"
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
case 436:
#line 4842 "GetDP.y"
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
case 437:
#line 4854 "GetDP.y"
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
case 438:
#line 4874 "GetDP.y"
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
case 439:
#line 4891 "GetDP.y"
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
case 440:
#line 4910 "GetDP.y"
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
case 441:
#line 4932 "GetDP.y"
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
#line 4966 "GetDP.y"
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
#line 4979 "GetDP.y"
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
#line 4993 "GetDP.y"
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
#line 5006 "GetDP.y"
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
#line 5018 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 448:
#line 5027 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 450:
#line 5036 "GetDP.y"
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
#line 5047 "GetDP.y"
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
#line 5059 "GetDP.y"
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
#line 5069 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 454:
#line 5077 "GetDP.y"
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
#line 5090 "GetDP.y"
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
#line 5103 "GetDP.y"
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
#line 5117 "GetDP.y"
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
#line 5127 "GetDP.y"
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
#line 5137 "GetDP.y"
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
#line 5151 "GetDP.y"
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
#line 5165 "GetDP.y"
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
#line 5184 "GetDP.y"
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
#line 5202 "GetDP.y"
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
#line 5213 "GetDP.y"
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
#line 5228 "GetDP.y"
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
#line 5243 "GetDP.y"
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
#line 5258 "GetDP.y"
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
#line 5273 "GetDP.y"
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
#line 5288 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 470:
#line 5299 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 471:
#line 5304 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 472:
#line 5314 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 474:
#line 5324 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 475:
#line 5327 "GetDP.y"
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
#line 5337 "GetDP.y"
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
#line 5353 "GetDP.y"
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
#line 5369 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 480:
#line 5373 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 481:
#line 5377 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 482:
#line 5381 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 483:
#line 5386 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 484:
#line 5397 "GetDP.y"
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
#line 5414 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5418 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 488:
#line 5422 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 489:
#line 5426 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 490:
#line 5430 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 491:
#line 5435 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 492:
#line 5446 "GetDP.y"
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
#line 5461 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 495:
#line 5465 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 496:
#line 5469 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 497:
#line 5473 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 498:
#line 5477 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 499:
#line 5488 "GetDP.y"
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
#line 5506 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 502:
#line 5510 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 503:
#line 5514 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 504:
#line 5518 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 505:
#line 5523 "GetDP.y"
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
#line 5533 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 507:
#line 5539 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 508:
#line 5545 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 509:
#line 5555 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 510:
#line 5558 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 511:
#line 5563 "GetDP.y"
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
#line 5581 "GetDP.y"
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
#line 5591 "GetDP.y"
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
#line 5620 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 516:
#line 5623 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 517:
#line 5626 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 518:
#line 5634 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 519:
#line 5651 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 521:
#line 5663 "GetDP.y"
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
#line 5686 "GetDP.y"
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
#line 5700 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 526:
#line 5707 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 527:
#line 5715 "GetDP.y"
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
#line 5761 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 529:
#line 5766 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 530:
#line 5772 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 531:
#line 5775 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 532:
#line 5778 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 533:
#line 5780 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 534:
#line 5786 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 536:
#line 5797 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 537:
#line 5800 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 538:
#line 5806 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 539:
#line 5811 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 540:
#line 5817 "GetDP.y"
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
#line 5831 "GetDP.y"
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
#line 5845 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 544:
#line 5852 "GetDP.y"
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
#line 5880 "GetDP.y"
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
#line 5890 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 547:
#line 5891 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 548:
#line 5897 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 549:
#line 5906 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 550:
#line 5923 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 552:
#line 5935 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 555:
#line 5944 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 557:
#line 5956 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 558:
#line 5963 "GetDP.y"
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
#line 5975 "GetDP.y"
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
#line 5986 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 561:
#line 5991 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 562:
#line 5997 "GetDP.y"
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
#line 6014 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 564:
#line 6024 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 565:
#line 6027 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 566:
#line 6031 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 567:
#line 6044 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 568:
#line 6048 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 569:
#line 6054 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;
    break;}
case 570:
#line 6060 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 571:
#line 6067 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 572:
#line 6075 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 573:
#line 6081 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 574:
#line 6086 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 575:
#line 6091 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 576:
#line 6100 "GetDP.y"
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
#line 6112 "GetDP.y"
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
#line 6135 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 579:
#line 6136 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 580:
#line 6137 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 581:
#line 6138 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 582:
#line 6144 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 583:
#line 6146 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 584:
#line 6152 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 585:
#line 6158 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 6165 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 587:
#line 6174 "GetDP.y"
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
#line 6196 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 589:
#line 6204 "GetDP.y"
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
#line 6215 "GetDP.y"
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
#line 6229 "GetDP.y"
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
#line 6250 "GetDP.y"
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
#line 6277 "GetDP.y"
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
#line 6308 "GetDP.y"
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
#line 6328 "GetDP.y"
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
case 597:
#line 6357 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 598:
#line 6364 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 599:
#line 6371 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 600:
#line 6378 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 601:
#line 6382 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 602:
#line 6386 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 603:
#line 6390 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 604:
#line 6394 "GetDP.y"
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
#line 6404 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 606:
#line 6409 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 607:
#line 6414 "GetDP.y"
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
#line 6434 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 609:
#line 6441 "GetDP.y"
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
#line 6450 "GetDP.y"
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
#line 6459 "GetDP.y"
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
#line 6468 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 613:
#line 6475 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 614:
#line 6483 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 615:
#line 6487 "GetDP.y"
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
#line 6496 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 617:
#line 6500 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 618:
#line 6504 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 619:
#line 6512 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 620:
#line 6518 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 621:
#line 6523 "GetDP.y"
{ 
      PostSubOperation_S.FrequencyLegend[0] = yyvsp[-5].d ;
      PostSubOperation_S.FrequencyLegend[1] = yyvsp[-3].d ;
      PostSubOperation_S.FrequencyLegend[2] = yyvsp[-1].d ;
    ;
    break;}
case 622:
#line 6530 "GetDP.y"
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
#line 6545 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 624:
#line 6551 "GetDP.y"
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
case 625:
#line 6601 "GetDP.y"
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
case 626:
#line 6611 "GetDP.y"
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
case 627:
#line 6621 "GetDP.y"
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
case 628:
#line 6635 "GetDP.y"
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
case 629:
#line 6649 "GetDP.y"
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
case 630:
#line 6675 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 631:
#line 6679 "GetDP.y"
{
    ;
    break;}
case 633:
#line 6695 "GetDP.y"
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
case 634:
#line 6710 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 635:
#line 6716 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 636:
#line 6722 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 637:
#line 6728 "GetDP.y"
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
case 638:
#line 6739 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 639:
#line 6744 "GetDP.y"
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
case 640:
#line 6756 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 641:
#line 6766 "GetDP.y"
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
case 643:
#line 6785 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 644:
#line 6791 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 645:
#line 6797 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 646:
#line 6808 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 647:
#line 6809 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 648:
#line 6810 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 649:
#line 6811 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 650:
#line 6812 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 651:
#line 6813 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 652:
#line 6814 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 653:
#line 6815 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 654:
#line 6816 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 655:
#line 6817 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 656:
#line 6818 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 657:
#line 6819 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 658:
#line 6820 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 659:
#line 6821 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 660:
#line 6822 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 661:
#line 6823 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 662:
#line 6824 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 663:
#line 6825 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 664:
#line 6826 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 665:
#line 6827 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 666:
#line 6828 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 667:
#line 6832 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 668:
#line 6833 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 669:
#line 6834 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 670:
#line 6835 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 671:
#line 6836 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 672:
#line 6837 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 673:
#line 6838 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 674:
#line 6839 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 675:
#line 6840 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 676:
#line 6841 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 677:
#line 6842 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 678:
#line 6843 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 679:
#line 6844 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 680:
#line 6845 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 681:
#line 6846 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 682:
#line 6847 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 683:
#line 6848 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 684:
#line 6849 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 685:
#line 6850 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 686:
#line 6851 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 687:
#line 6852 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 688:
#line 6853 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 689:
#line 6854 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 690:
#line 6855 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 691:
#line 6856 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 692:
#line 6857 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 693:
#line 6858 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 694:
#line 6859 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 695:
#line 6860 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 696:
#line 6861 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 697:
#line 6862 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 698:
#line 6863 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 699:
#line 6864 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 700:
#line 6865 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 701:
#line 6866 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 702:
#line 6867 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 703:
#line 6868 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 704:
#line 6869 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 705:
#line 6870 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 706:
#line 6871 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 707:
#line 6876 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 708:
#line 6877 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 709:
#line 6878 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 710:
#line 6879 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 711:
#line 6880 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 712:
#line 6881 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 713:
#line 6882 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 714:
#line 6901 "GetDP.y"
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
case 715:
#line 6919 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 716:
#line 6922 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 717:
#line 6928 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 718:
#line 6931 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 719:
#line 6938 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 720:
#line 6944 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 721:
#line 6947 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 722:
#line 6950 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 723:
#line 6962 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 724:
#line 6968 "GetDP.y"
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
case 725:
#line 6979 "GetDP.y"
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
case 726:
#line 6995 "GetDP.y"
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
case 727:
#line 7017 "GetDP.y"
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
case 728:
#line 7032 "GetDP.y"
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
case 729:
#line 7070 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 730:
#line 7078 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 731:
#line 7090 "GetDP.y"
{ 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 732:
#line 7098 "GetDP.y"
{
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;
    break;}
case 733:
#line 7110 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 734:
#line 7112 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 735:
#line 7119 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 736:
#line 7122 "GetDP.y"
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
case 737:
#line 7137 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 738:
#line 7142 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 739:
#line 7147 "GetDP.y"
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
case 740:
#line 7166 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 741:
#line 7184 "GetDP.y"
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
#line 7195 "GetDP.y"



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

