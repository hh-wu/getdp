/* $Id: Data_Define.h,v 1.17 2001-03-13 08:47:18 geuzaine Exp $ */
#ifndef _DADA_DEFINE_H_
#define _DATA_DEFINE_H_

#include "Data_DefineE.h"
#include "Data_Function.h"
#include "Cal_Quantity.h"
#include "CurrentData.h"
#include "Adapt.h"

#define CAST  void(*)()

/* ------------------------------------------------------------------------ */
/*  Keywords and their assigned values                                      */
/* ------------------------------------------------------------------------ */

struct StringXDefine  Mesh_Format[] = {
  {"gmsh"  , FORMAT_GMSH}, {"Gmsh"  , FORMAT_GMSH},
  {"unv"   , FORMAT_UNV }, {"Unv"   , FORMAT_UNV }, 
  {"gref"  , FORMAT_GREF}, {"Gref"  , FORMAT_GREF},   
  {NULL    , FORMAT_GMSH}
} ;

struct StringXDefine  Field_Type[] = {
  {"Form0"  , FORM0 }, {"Form1"  , FORM1 }, {"Form2"   , FORM2  }, {"Form3"  , FORM3 },
  {"Form0P" , FORM0P}, {"Form1P" , FORM1P}, {"Form2P"  , FORM2P }, {"Form3P" , FORM3P},
  {"Form0S" , FORM0S}, {"Form1S" , FORM1S}, {"Form2S"  , FORM2S }, {"Form3S" , FORM3S},
  {"Scalar" , SCALAR}, {"Vector" , VECTOR}, {"VectorP" , VECTORP},
  {"Tensor" , TENSOR}, {"TensorSym" , TENSOR_SYM}, {"TensorDiag" , TENSOR_DIAG},
  {NULL     , FORM0}
} ;

struct StringXDefine  FunctionForGroup_Type[] = {
  {"Region"                   , REGION},
  {"Global"                   , GLOBAL},
  {"NodesOf"                  , NODESOF},
  {"EdgesOf"                  , EDGESOF},
  {"FacetsOf"                 , FACETSOF},
  {"VolumesOf"                , VOLUMESOF},
  {"ElementsOf"               , ELEMENTSOF},
  {"GroupsOfNodesOf"          , GROUPSOFNODESOF},
  {"GroupsOfEdgesOnNodesOf"   , GROUPSOFEDGESONNODESOF},
  {"GroupsOfEdgesOf"          , GROUPSOFEDGESOF},
  {"EdgesOfTreeIn"            , EDGESOFTREEIN},
  {"FacetsOfTreeIn"           , FACETSOFTREEIN},
  {"DualNodesOf"              , DUALNODESOF},
  {"DualEdgesOf"              , DUALEDGESOF},
  {"DualFacetsOf"             , DUALFACETSOF},
  {"DualVolumesOf"            , DUALVOLUMESOF},
  {"BoundaryOfDualNodesOf"    , BOUNDARYOFDUALNODESOF},
  {"BoundaryOfDualEdgesOf"    , BOUNDARYOFDUALEDGESOF},
  {"BoundaryOfDualFacetsOf"   , BOUNDARYOFDUALFACETSOF},
  {NULL                       , 0} 
} ;

struct StringXDefine  FunctionForGroup_SuppList[] = {
  {"Not"         , SUPPLIST_NOT},  
  {"StartingOn"  , SUPPLIST_STARTINGON}, 
  {"OnOneSideOf" , SUPPLIST_ONONESIDEOF},
  {"InSupport"   , SUPPLIST_INSUPPORT},
  {"ConnectedTo" , SUPPLIST_CONNECTEDTO},
  {NULL          , 0}
} ;

struct StringXDefine1Nbr  Jacobian_Type[] = {
  {"Vol"               , JACOBIAN_VOL                   , 0} ,
  {"VolAxi"            , JACOBIAN_VOL_AXI               , 0} ,
  {"VolAxiSqu"         , JACOBIAN_VOL_AXI_SQU           , 0} ,
  {"VolSphShell"       , JACOBIAN_VOL_SPH_SHELL         , 2} ,
  {"VolSphFiniteShell" , JACOBIAN_VOL_SPH_FINITE_SHELL  , 3} ,
  {"VolAxiSphShell"    , JACOBIAN_VOL_AXI_SPH_SHELL     , 2} ,
  {"VolAxiSquSphShell" , JACOBIAN_VOL_AXI_SQU_SPH_SHELL , 2} ,

  {"VolRectShell"      , JACOBIAN_VOL_RECT_SHELL        , 6} ,
  {"VolAxiRectShell"   , JACOBIAN_VOL_AXI_RECT_SHELL    , 6} ,

  {"VolPlpdX"          , JACOBIAN_VOL_PLPD              , 2} ,
  {"VolAxiPlpdX"       , JACOBIAN_VOL_AXI_PLPD          , 2} ,
  {"Sur"               , JACOBIAN_SUR                   , 0} ,
  {"SurAxi"            , JACOBIAN_SUR_AXI               , 0} ,
  {"SurSphShell"       , JACOBIAN_SUR_SPH_SHELL         , 2} ,
  {"Lin"               , JACOBIAN_LIN                   , 0} ,
  {NULL                , JACOBIAN_VOL                   , 0} 
} ;

struct StringXDefine  Integration_Type[] = {
  {"Gauss"                 , GAUSS},
  {"GaussLegendre"         , GAUSSLEGENDRE},
  {"NewtonCotes"           , NEWTONCOTES},
  {"Patterson"             , PATTERSON},
  {"Analytic"              , ANALYTIC},
  {NULL                    , GAUSS}
} ;

struct StringXDefine  Integration_SubType[] = {
  {"Standard"              , STANDARD},
  {"Singular"              , SINGULAR},
  {"Adaptative"            , ADAPTATIVE},
  {NULL                    , STANDARD}
} ;

struct StringXDefine  Element_Type[] = {
  {"Point"       , POINT},
  {"Line"        , LINE},
  {"Triangle"    , TRIANGLE},
  {"Quadrangle"  , QUADRANGLE},
  {"Tetrahedron" , TETRAHEDRON},
  {"Hexahedron"  , HEXAHEDRON},
  {"Prism"       , PRISM},
  {"Pyramid"     , PYRAMID},
  {NULL          , TRIANGLE}
 } ;

struct StringXDefine  GlobalQuantity_Type[] = {
  {"AliasOf"             , ALIASOF},
  {"AssociatedWith"      , ASSOCIATEDWITH},
  {NULL                  , ALIASOF}
 } ;

struct StringXDefine  Constraint_Type[] = {
  {"Assign"               , ASSIGN},
  {"Init"                 , INIT},
  {"AssignFromResolution" , ASSIGNFROMRESOLUTION},
  {"InitFromResolution"   , INITFROMRESOLUTION},
  {"Network"              , NETWORK},
  {"Link"                 , CST_LINK},
  {NULL                   , ASSIGN}
 } ;

struct StringXDefine  Formulation_Type[] = {
  {"FemEquation"    , FEMEQUATION},
  {"BemEquation"    , BEMEQUATION},
  {"GlobalEquation" , GLOBALEQUATION},
  {NULL             , FEMEQUATION}
 } ;

struct StringXDefine  DefineQuantity_Type[] = {
  /* a supprimer */
  {"LocalQuantity"    , LOCALQUANTITY},
  {"GlobalQuantity"   , GLOBALQUANTITY},
  {"IntegralQuantity" , INTEGRALQUANTITY},

  {"Local"            , LOCALQUANTITY},
  {"Global"           , GLOBALQUANTITY},
  {"Integral"         , INTEGRALQUANTITY},
  {NULL               , LOCALQUANTITY}
 } ;

struct StringXDefine  Operator_Type[] = {
  {"NoOp"    , NOOP   } , 
  {"d"       , EXTDER } , {"dInv"    , EXTDERINV} ,
  {"Grad"    , GRAD   } , {"GradInv" , GRADINV  } , 
  {"Curl"    , CURL   } , {"CurlInv" , CURLINV  } , 
  {"Rot"     , CURL   } , {"RotInv"  , CURLINV  } , 
  {"Div"     , DIV    } , {"DivInv"  , DIVINV   } ,

  /* ne sert pas */
  {"NSx"     , NSx      } , 
  {"NSxd"    , NSxEXTDER} ,
  {"NSxGrad" , NSxGRAD  } ,
  {"NPxGrad" , NPxGRAD  } ,
  
  {"D1"      , _D1 } ,
  {"D2"      , _D2 } ,
  
  {NULL      , NOOP }
} ;

struct StringXDefine  QuantityFromFS_Type[] = {
  {"Dof"   , QUANTITY_DOF } ,
  {"BF"    , QUANTITY_BF } ,
  {"NoDof" , QUANTITY_NODOF } ,
  {NULL    , QUANTITY_SIMPLE }
} ;

struct StringXDefine  DefineSystem_Type[] = {
  {"RealValue"    , VAL_REAL},  
  {"Real"         , VAL_REAL},  
  {"ComplexValue" , VAL_COMPLEX},
  {"Complex"      , VAL_COMPLEX},
  {NULL           , VAL_REAL}
} ;

struct StringXDefine  Operation_Type[] = {
  {"Generate"             , OPERATION_GENERATE},
  {"Update"               , OPERATION_UPDATE},
  {"Solve"                , OPERATION_SOLVE},
  {"Lanczos"              , OPERATION_LANCZOS},
  {"GenerateJac"          , OPERATION_GENERATEJAC},
  {"SolveJac"             , OPERATION_SOLVEJAC},
  {"GenerateSeparate"     , OPERATION_GENERATESEPARATE},
  {"InitSolution"         , OPERATION_INITSOLUTION},
  {"SaveSolution"         , OPERATION_SAVESOLUTION},
  {"SaveSolutions"        , OPERATION_SAVESOLUTIONS},
  {"ReadSolution"         , OPERATION_READSOLUTION},
  {"TransferSolution"     , OPERATION_TRANSFERSOLUTION},
  {"TransferInitSolution" , OPERATION_TRANSFERINITSOLUTION},
  {NULL                   , OPERATION_NONE}
} ;

struct StringXDefine  ChangeOfState_Type[] = {
  {"ChangeSign"        , CHANGEOFSTATE_CHANGESIGN},
  {"ChangeLevel"       , CHANGEOFSTATE_CHANGELEVEL},
  {"ChangeReference"   , CHANGEOFSTATE_CHANGEREFERENCE},
  {"ChangeReference2"  , CHANGEOFSTATE_CHANGEREFERENCE2},
  {NULL                , CHANGEOFSTATE_CHANGESIGN}
} ;

struct StringXPointer  Current_Value[] = {
  {"Time"     , &Current.Time},       {"DTime"    , &Current.DTime},
  {"Theta"    , &Current.Theta},      {"TimeStep" , &Current.TimeStep},
  {"Iteration", &Current.Iteration},  {"Iter"     , &Current.Iteration},  

  {"X"  , &Current.x}, {"Y"  , &Current.y},  {"Z"  , &Current.z},
  {"XS" , &Current.xs},{"YS" , &Current.ys}, {"ZS" , &Current.zs},
  {"XP" , &Current.xp},{"YP" , &Current.yp}, {"ZP" , &Current.zp},
  {"U"  , &Current.x}, {"V"  , &Current.y},  {"W"  , &Current.z},
  {"US" , &Current.xs},{"VS" , &Current.ys}, {"WS" , &Current.zs},
  {"S"  , &Current.s} ,{"T"  , &Current.t}, 

  {NULL       , NULL}
} ;

struct StringXDefine  PostQuantityTerm_EvaluationType[] = {
  {"Local"    , LOCAL},
  {"Term"     , LOCAL},
  {"Integral" , INTEGRAL},
  {NULL       , LOCAL}
} ;

struct StringXDefine  PostSubOperation_CombinationType[] = {
  {"*"   , MULTIPLICATION},
  {"/"   , DIVISION},
  {"+"   , ADDITION},
  {"-"   , SOUSTRACTION},
  {NULL  , MULTIPLICATION}
} ;

struct StringXDefine  PostSubOperation_Format[] = {
  {"Table"               , FORMAT_SPACE_TABLE }, 
  {"TimeTable"           , FORMAT_TIME_TABLE }, 
  {"FrequencyTable"      , FORMAT_FREQUENCY_TABLE }, 
  {"HarmonicToTimeTable" , FORMAT_HARMONICTOTIME_TABLE }, 
  {"Gmsh"                , FORMAT_GMSH},
  {"GmshParsed"          , FORMAT_GMSH_PARSED},
  {"Gnuplot"             , FORMAT_GNUPLOT }, 
  {"Matlab"              , FORMAT_MATLAB }, 
  {"Adaptation"          , FORMAT_ADAPT }, 
  {NULL                  , FORMAT_GMSH}
} ;

struct StringXDefine  PostSubOperation_FormatTag[] = {
  {"Time"     , TAG_TIME},
  {"TimeStep" , TAG_TIMESTEP},
  {"Value"    , TAG_VALUE},
  {"X"        , TAG_X},
  {"Y"        , TAG_Y},
  {"Z"        , TAG_Z},
  {"Nodes"    , TAG_NODES},
  {"Type"     , TAG_TYPE},
  {"Version"  , TAG_VERSION},
  {"Date"     , TAG_DATE},
  {"Host"     , TAG_HOST},
  {"Filename" , TAG_FILENAME},
  {"User"     , TAG_USER},
  {"Abscissa" , TAG_ABSCISSA},
  {"Normal"   , TAG_NORMAL},
  {"Command"  , TAG_COMMAND},
  {NULL       , 0}
} ;

struct StringXDefine  Adaption_Type[] = {
  {"P1"     , P1},
  {"H1"     , H1},
  {"H2"     , H2},
  {NULL     , P1}
} ;

struct StringXDefine  Sort_Type[] = {
  {"Position"     , SORT_BY_POSITION },
  {"Connection"   , SORT_BY_CONNECTIVITY },
  {NULL           , 0 }
} ;

/* ------------------------------------------------------------------------ */
/*  Types (int) and their assigned functions                                */
/* ------------------------------------------------------------------------ */

struct DefineXFunction  FunctionForGauss[] = {
  {POINT          , (CAST)Gauss_Point},
  {LINE           , (CAST)Gauss_Line},
  {TRIANGLE       , (CAST)Gauss_Triangle},
  {QUADRANGLE     , (CAST)Gauss_Quadrangle},
  {TETRAHEDRON    , (CAST)Gauss_Tetrahedron},
  {HEXAHEDRON     , (CAST)Gauss_Hexahedron},
  {PRISM          , (CAST)Gauss_Prism},
  {PYRAMID        , (CAST)Gauss_Pyramid},
  {0              , (CAST)Gauss_Triangle}
} ;

struct DefineXFunction  FunctionForSingularGauss[] = {
  {TRIANGLE       , (CAST)GaussSingularR_Triangle},
  {QUADRANGLE     , (CAST)GaussSingularR_Quadrangle},
  {0              , (CAST)GaussSingularR_Triangle}
} ;

struct DefineXFunction  FunctionForNewtonCotes[] = {
  {LINE           , (CAST)NewtonCotes_Line},
  {QUADRANGLE     , (CAST)NewtonCotes_Quadrangle},
  {0              , NULL} 
} ;

struct DefineXFunction  FunctionForGaussLegendre[] = {
  {POINT          , (CAST)Gauss_Point},
  {LINE           , (CAST)Gauss_Line},
  {TRIANGLE       , (CAST)GaussLegendre_Triangle},
  {QUADRANGLE     , (CAST)GaussLegendre_Quadrangle},
  {TETRAHEDRON    , (CAST)GaussLegendre_Tetrahedron},
  {HEXAHEDRON     , (CAST)GaussLegendre_Hexahedron},
  {0              , (CAST)GaussLegendre_Triangle}
} ;

/* ------------------------------------------------------------------------ */

#undef CAST

#endif
