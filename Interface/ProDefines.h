// GetDP - Copyright (C) 1997-2010 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _PRO_DEFINES_H_
#define _PRO_DEFINES_H_

#include "GetDPConfig.h"
#include "ProDefine.h"

#if defined(HAVE_LEGACY)
#include "Gauss.h"
#include "F.h"
#include "BF.h"
#include "GF.h"
#include "Cal_Value.h"
extern struct CurrentData Current;
#endif

struct StringXDefine  Mesh_Format[] = {
  {"gmsh"  , FORMAT_GMSH}, {"Gmsh"  , FORMAT_GMSH},
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
  {"MovingBand2D"             , MOVINGBAND2D},
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
  {"VolSphShell"       , JACOBIAN_VOL_SPH_SHELL         , -1} ,
  {"VolRectShell"      , JACOBIAN_VOL_RECT_SHELL        , -1} ,
  {"VolPlpdX"          , JACOBIAN_VOL_PLPD_X            , 2} ,

  {"VolAxi"            , JACOBIAN_VOL_AXI               , 0} ,
  {"VolAxiSphShell"    , JACOBIAN_VOL_AXI_SPH_SHELL     , -1} ,
  {"VolAxiRectShell"   , JACOBIAN_VOL_AXI_RECT_SHELL    , -1} ,
  {"VolAxiPlpdX"       , JACOBIAN_VOL_AXI_PLPD_X        , 2} ,

  {"VolAxiSqu"         , JACOBIAN_VOL_AXI_SQU           , 0} ,
  {"VolAxiSquSphShell" , JACOBIAN_VOL_AXI_SQU_SPH_SHELL , -1} ,
  {"VolAxiSquRectShell", JACOBIAN_VOL_AXI_SQU_RECT_SHELL, -1} ,

  {"Sur"               , JACOBIAN_SUR                   , 0} ,
  {"SurSphShell"       , JACOBIAN_SUR_SPH_SHELL         , -1} ,
  {"SurRectShell"      , JACOBIAN_SUR_RECT_SHELL        , -1} ,

  {"SurAxi"            , JACOBIAN_SUR_AXI               , 0} ,

  {"Lin"               , JACOBIAN_LIN                   , 0} ,
  {NULL                , JACOBIAN_VOL                   , 0} 
} ;

struct StringXDefine  Integration_Type[] = {
  {"Gauss"                 , GAUSS},
  {"GaussLegendre"         , GAUSSLEGENDRE},
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
  {"Line2"       , LINE_2},
  {"Triangle2"   , TRIANGLE_2},
  {"Quadrangle2" , QUADRANGLE_2},
  {"Quadrangle2_8N", QUADRANGLE_2_8N},
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
  {"LinkCplx"             , CST_LINKCPLX},
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

  // unused
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
  {"Generate"               , OPERATION_GENERATE},
  {"GenerateOnly"           , OPERATION_GENERATEONLY},
  {"GenerateOnlyJac"        , OPERATION_GENERATEONLYJAC},
  {"Update"                 , OPERATION_UPDATE},
  {"Update_Translation"     , OPERATION_UPDATETRANSLATION},
  {"Solve"                  , OPERATION_SOLVE},
  {"SolveAgain"             , OPERATION_SOLVEAGAIN},
  {"GenerateJac"            , OPERATION_GENERATEJAC},
  {"SolveJac"               , OPERATION_SOLVEJAC},
  {"SolveJacAgain"          , OPERATION_SOLVEJACAGAIN},
  {"GenerateSeparate"       , OPERATION_GENERATESEPARATE},
  {"InitSolution"           , OPERATION_INITSOLUTION},
  {"SaveSolution"           , OPERATION_SAVESOLUTION},
  {"SaveSolutions"          , OPERATION_SAVESOLUTIONS},
  {"ReadSolution"           , OPERATION_READSOLUTION},
  {"TransferSolution"       , OPERATION_TRANSFERSOLUTION},
  {"TransferInitSolution"   , OPERATION_TRANSFERINITSOLUTION},
  {"SolveJac_AdaptRelax"    , OPERATION_SOLVEJACADAPTRELAX}, 
  {"SaveSolutionExtendedMH" , OPERATION_SAVESOLUTIONEXTENDEDMH},
  {"DummyDofs"              , OPERATION_DUMMYDOFS},
  {"InitCorrection"         , OPERATION_INITCORRECTION},
  {NULL                     , OPERATION_NONE}
} ;

struct StringXDefine  ChangeOfState_Type[] = {
  {"ChangeSign"        , CHANGEOFSTATE_CHANGESIGN},
  {"ChangeLevel"       , CHANGEOFSTATE_CHANGELEVEL},
  {"ChangeReference"   , CHANGEOFSTATE_CHANGEREFERENCE},
  {"ChangeReference2"  , CHANGEOFSTATE_CHANGEREFERENCE2},
  {NULL                , CHANGEOFSTATE_CHANGESIGN}
} ;

struct StringXPointer  Current_Value[] = {
#if defined(HAVE_LEGACY)
  {"Time"     , &Current.Time},       {"DTime"    , &Current.DTime},
  {"Theta"    , &Current.Theta},      {"TimeStep" , &Current.TimeStep},
  {"Iteration", &Current.Iteration},  {"Iter"     , &Current.Iteration},
  {"TimeImag" , &Current.TimeImag},   {"Eigenvalue" , &Current.Time},    
  {"EigenvalueReal" , &Current.Time}, {"EigenvalueImag" , &Current.TimeImag},

  {"X"  , &Current.x}, {"Y"  , &Current.y},  {"Z"  , &Current.z},
  {"XS" , &Current.xs},{"YS" , &Current.ys}, {"ZS" , &Current.zs},
  {"XP" , &Current.xp},{"YP" , &Current.yp}, {"ZP" , &Current.zp},

  {"U"  , &Current.x}, {"V"  , &Current.y},  {"W"  , &Current.z},
  {"US" , &Current.xs},{"VS" , &Current.ys}, {"WS" , &Current.zs},

  {"A"  , &Current.a} ,{"B"  , &Current.b} , {"C"  , &Current.c}, 

  {"Val0" , &Current.Val[0]}, {"Val1" , &Current.Val[1]}, {"Val2" , &Current.Val[2]}, 
  {"Val3" , &Current.Val[3]}, {"Val4" , &Current.Val[4]}, {"Val5" , &Current.Val[5]}, 
  {"Val6" , &Current.Val[6]}, {"Val7" , &Current.Val[7]}, {"Val8" , &Current.Val[8]}, 
#endif
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
  {"SimpleTable"         , FORMAT_SIMPLE_SPACE_TABLE }, 
  {"TimeTable"           , FORMAT_TIME_TABLE }, 
  {"RegionTable"         , FORMAT_REGION_TABLE }, 
  {"HarmonicToTimeTable" , FORMAT_TIME_TABLE },   // a supprimer
  {"FrequencyTable"      , FORMAT_FREQUENCY_TABLE }, 
  {"Gmsh"                , FORMAT_GMSH},
  {"GmshParsed"          , FORMAT_GMSH_PARSED},
  {"Unv"                 , FORMAT_UNV},
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

struct StringXDefine  PostSubOperation_AdaptationType[] = {
  {"P1"     , P1},
  {"H1"     , H1},
  {"H2"     , H2},
  {NULL     , P1}
} ;

struct StringXDefine  PostSubOperation_SortType[] = {
  {"Position"     , SORT_BY_POSITION },
  {"Connection"   , SORT_BY_CONNECTIVITY },
  {NULL           , 0 }
} ;

/* ------------------------------------------------------------------------ */
/*  Types (int) and their assigned functions                                */
/* ------------------------------------------------------------------------ */

#define CAST  void(*)()

struct DefineXFunction  FunctionForGauss[] = {
#if defined(HAVE_LEGACY)
  {POINT          , (CAST)Gauss_Point},
  {LINE           , (CAST)Gauss_Line},
  {TRIANGLE       , (CAST)Gauss_Triangle},
  {QUADRANGLE     , (CAST)Gauss_Quadrangle},
  {TETRAHEDRON    , (CAST)Gauss_Tetrahedron},
  {HEXAHEDRON     , (CAST)Gauss_Hexahedron},
  {PRISM          , (CAST)Gauss_Prism},
  {PYRAMID        , (CAST)Gauss_Pyramid},
  {LINE_2         , (CAST)Gauss_Line},
  {TRIANGLE_2     , (CAST)Gauss_Triangle},
  {QUADRANGLE_2   , (CAST)Gauss_Quadrangle},
  {QUADRANGLE_2_8N, (CAST)Gauss_Quadrangle},
#endif
  {0              , 0}
} ;

struct DefineXFunction  FunctionForSingularGauss[] = {
#if defined(HAVE_LEGACY)
  {TRIANGLE       , (CAST)GaussSingularR_Triangle},
  {QUADRANGLE     , (CAST)GaussSingularR_Quadrangle},
#endif
  {0              , 0}
} ;

struct DefineXFunction  FunctionForGaussLegendre[] = {
#if defined(HAVE_LEGACY)
  {POINT          , (CAST)Gauss_Point},
  {LINE           , (CAST)Gauss_Line},
  {TRIANGLE       , (CAST)GaussLegendre_Triangle},
  {QUADRANGLE     , (CAST)GaussLegendre_Quadrangle},
  {TETRAHEDRON    , (CAST)GaussLegendre_Tetrahedron},
  {HEXAHEDRON     , (CAST)GaussLegendre_Hexahedron},
#endif
  {0              , 0}
} ;

#define POI  POINT
#define LIN  LINE | LINE_2
#define TRI  TRIANGLE | TRIANGLE_2
#define QUA  QUADRANGLE | QUADRANGLE_2 | QUADRANGLE_2_8N
#define TET  TETRAHEDRON | TETRAHEDRON_2
#define HEX  HEXAHEDRON | HEXAHEDRON_2
#define PRI  PRISM | PRISM_2
#define PYR  PYRAMID | PYRAMID_2
#define ALL  POI|LIN|TRI|QUA|TET|HEX|PRI|PYR

struct StringX3Function2Nbr  BF_Function[] = {
#if defined(HAVE_LEGACY)
  // H^1 Basis Functions and their gradients
  
  {"BF_Node",    (CAST)BF_Node,    
                 (CAST)BF_GradNode,    (CAST)BF_Zero, 1., ALL },
  {"BF_Node_1N", (CAST)BF_Node,    
                 (CAST)BF_GradNode,    (CAST)BF_Zero, 1., ALL },
  {"BF_Node_2E", (CAST)BF_Node_2E, 
                 (CAST)BF_GradNode_2E, (CAST)BF_Zero, 2., ALL }, 
  {"BF_Node_2F", (CAST)BF_Node_2F, 
                 (CAST)BF_GradNode_2F, (CAST)BF_Zero, 2., QUA|HEX|PRI }, 
  {"BF_Node_2V", (CAST)BF_Node_2V, 
                 (CAST)BF_GradNode_2V, (CAST)BF_Zero, 2., HEX|PRI }, 
  {"BF_Node_3E", (CAST)BF_Node_3E, 
                 (CAST)BF_GradNode_3E, (CAST)BF_Zero, 3., ALL }, 
  {"BF_Node_3F", (CAST)BF_Node_3F, 
                 (CAST)BF_GradNode_3F, (CAST)BF_Zero, 3., TRI|QUA|TET|HEX|PRI }, 
  {"BF_Node_3V", (CAST)BF_Node_3V, 
                 (CAST)BF_GradNode_3V, (CAST)BF_Zero, 3., HEX|PRI }, 

  {"BF_GradNode",    (CAST)BF_GradNode,   
                     (CAST)BF_Zero, (CAST)BF_Node,    0., ALL },
  {"BF_GradNode_1N", (CAST)BF_GradNode,    
                     (CAST)BF_Zero, (CAST)BF_Node,    0., ALL },
  {"BF_GradNode_2E", (CAST)BF_GradNode_2E, 
                     (CAST)BF_Zero, (CAST)BF_Node_2E, 1., ALL },
  {"BF_GradNode_2F", (CAST)BF_GradNode_2F, 
                     (CAST)BF_Zero, (CAST)BF_Node_2F, 1., QUA|HEX|PRI },
  {"BF_GradNode_2V", (CAST)BF_GradNode_2V, 
                     (CAST)BF_Zero, (CAST)BF_Node_2V, 1., HEX|PRI },
  {"BF_GradNode_3E", (CAST)BF_GradNode_3E, 
                     (CAST)BF_Zero, (CAST)BF_Node_3E, 2., ALL },
  {"BF_GradNode_3F", (CAST)BF_GradNode_3F, 
                     (CAST)BF_Zero, (CAST)BF_Node_3F, 2., TRI|QUA|TET|HEX|PRI },
  {"BF_GradNode_3V", (CAST)BF_GradNode_3V, 
                     (CAST)BF_Zero, (CAST)BF_Node_3V, 2., HEX|PRI },

  {"BF_GroupOfNodes",    (CAST)BF_GroupOfNodes,   
                         (CAST)BF_GradGroupOfNodes,    (CAST)BF_Zero, 1., ALL },
  {"BF_GroupOfNodes_1N", (CAST)BF_GroupOfNodes,    
                         (CAST)BF_GradGroupOfNodes,    (CAST)BF_Zero, 1., ALL },
  {"BF_GroupOfNodes_2E", (CAST)BF_GroupOfNodes_2E, 
                         (CAST)BF_GradGroupOfNodes_2E, (CAST)BF_Zero, 2., ALL },
  {"BF_GroupOfNodes_2F", (CAST)BF_GroupOfNodes_2F, 
                         (CAST)BF_GradGroupOfNodes_2F, (CAST)BF_Zero, 2., QUA|HEX|PRI },
  {"BF_GroupOfNodes_2V", (CAST)BF_GroupOfNodes_2V, 
                         (CAST)BF_GradGroupOfNodes_2V, (CAST)BF_Zero, 2., HEX|PRI },
  {"BF_GroupOfNodes_3E", (CAST)BF_GroupOfNodes_3E, 
                         (CAST)BF_GradGroupOfNodes_3E, (CAST)BF_Zero, 3., ALL },
  {"BF_GroupOfNodes_3F", (CAST)BF_GroupOfNodes_3F, 
                         (CAST)BF_GradGroupOfNodes_3F, (CAST)BF_Zero, 3., HEX|PRI|TET|HEX|PRI },
  {"BF_GroupOfNodes_3V", (CAST)BF_GroupOfNodes_3V, 
                         (CAST)BF_GradGroupOfNodes_3V, (CAST)BF_Zero, 3., HEX|PRI },

  {"BF_GradGroupOfNodes",    (CAST)BF_GradGroupOfNodes,    
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes,    0., ALL },
  {"BF_GradGroupOfNodes_1N", (CAST)BF_GradGroupOfNodes,    
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes,    0., ALL },
  {"BF_GradGroupOfNodes_2E", (CAST)BF_GradGroupOfNodes_2E,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_2E, 1., ALL },
  {"BF_GradGroupOfNodes_2F", (CAST)BF_GradGroupOfNodes_2F,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_2F, 1., QUA|HEX|PRI },
  {"BF_GradGroupOfNodes_2V", (CAST)BF_GradGroupOfNodes_2V,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_2V, 1., HEX|PRI },
  {"BF_GradGroupOfNodes_3E", (CAST)BF_GradGroupOfNodes_3E,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_3E, 2., ALL },
  {"BF_GradGroupOfNodes_3F", (CAST)BF_GradGroupOfNodes_3F,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_3F, 2., HEX|PRI|TET|HEX|PRI },
  {"BF_GradGroupOfNodes_3V", (CAST)BF_GradGroupOfNodes_2V,
                             (CAST)BF_Zero, (CAST)BF_GroupOfNodes_3V, 2., HEX|PRI },


  // H(curl) basis Functions and their curls

  {"BF_Edge",      (CAST)BF_Edge,      
                   (CAST)BF_CurlEdge,      (CAST)BF_Zero, 0.5, ALL },
  {"BF_Edge_1E",   (CAST)BF_Edge,     
                   (CAST)BF_CurlEdge,      (CAST)BF_Zero, 0.5, ALL },
  {"BF_Edge_2E",   (CAST)BF_Edge_2E,  
                   (CAST)BF_CurlEdge_2E,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_Edge_2F",   (CAST)BF_Edge_2F,   
                   (CAST)BF_CurlEdge_2F,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_Edge_2V",   (CAST)BF_Edge_2V,   
                   (CAST)BF_CurlEdge_2V,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_Edge_3E",   (CAST)BF_Edge_3E,   
                   (CAST)BF_CurlEdge_3E,   (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_3F_a", (CAST)BF_Edge_3F_a, 
                   (CAST)BF_CurlEdge_3F_a, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_3F_b", (CAST)BF_Edge_3F_b, 
                   (CAST)BF_CurlEdge_3F_b, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_3F_c", (CAST)BF_Edge_3F_c,
                   (CAST)BF_CurlEdge_3F_c, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_3V",   (CAST)BF_Edge_3V,  
                   (CAST)BF_CurlEdge_3V,   (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_4E",   (CAST)BF_Edge_4E,  
                   (CAST)BF_CurlEdge_4E,   (CAST)BF_Zero, 2.,  ALL }, 
  {"BF_Edge_4F",   (CAST)BF_Edge_4F,  
                   (CAST)BF_CurlEdge_4F,   (CAST)BF_Zero, 2.,  TRI|QUA|TET|HEX|PRI }, 
  {"BF_Edge_4V",   (CAST)BF_Edge_4V,   
                   (CAST)BF_CurlEdge_4V,   (CAST)BF_Zero, 2.,  TRI|QUA|TET|HEX|PRI }, 

  {"BF_CurlEdge",      (CAST)BF_CurlEdge,      
                       (CAST)BF_Zero, (CAST)BF_Edge,      0., ALL },
  {"BF_CurlEdge_1E",   (CAST)BF_CurlEdge,      
                       (CAST)BF_Zero, (CAST)BF_Edge,      0., ALL },
  {"BF_CurlEdge_2E",   (CAST)BF_CurlEdge_2E,  
                       (CAST)BF_Zero, (CAST)BF_Edge_2E,   0., ALL },
  {"BF_CurlEdge_2F",   (CAST)BF_CurlEdge_2F,   
                       (CAST)BF_Zero, (CAST)BF_Edge_2F,   0., ALL },
  {"BF_CurlEdge_2V",   (CAST)BF_CurlEdge_2V,  
                       (CAST)BF_Zero, (CAST)BF_Edge_2V,   0., ALL },
  {"BF_CurlEdge_3E",   (CAST)BF_CurlEdge_3E,  
                       (CAST)BF_Zero, (CAST)BF_Edge_3E,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_3F_a", (CAST)BF_CurlEdge_3F_a,
                       (CAST)BF_Zero, (CAST)BF_Edge_3F_a, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_3F_b", (CAST)BF_CurlEdge_3F_b,
                       (CAST)BF_Zero, (CAST)BF_Edge_3F_b, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_3F_c", (CAST)BF_CurlEdge_3F_c, 
                       (CAST)BF_Zero, (CAST)BF_Edge_3F_c, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_3V",   (CAST)BF_CurlEdge_3V,  
                       (CAST)BF_Zero, (CAST)BF_Edge_3V,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_4E",   (CAST)BF_CurlEdge_4E,   
                       (CAST)BF_Zero, (CAST)BF_Edge_4E,   1., ALL },
  {"BF_CurlEdge_4F",   (CAST)BF_CurlEdge_4F,   
                       (CAST)BF_Zero, (CAST)BF_Edge_4F,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlEdge_4V",   (CAST)BF_CurlEdge_4V,  
                       (CAST)BF_Zero, (CAST)BF_Edge_4V,   1., TRI|QUA|TET|HEX|PRI },

  {"BF_GroupOfEdges",      (CAST)BF_GroupOfEdges,     
                           (CAST)BF_CurlGroupOfEdges,      (CAST)BF_Zero, 0.5, ALL },
  {"BF_GroupOfEdges_1E",   (CAST)BF_GroupOfEdges,      
                           (CAST)BF_CurlGroupOfEdges,      (CAST)BF_Zero, 0.5, ALL },
  {"BF_GroupOfEdges_2E",   (CAST)BF_GroupOfEdges_2E,   
                           (CAST)BF_CurlGroupOfEdges_2E,   (CAST)BF_Zero, 1.,  ALL },
  {"BF_GroupOfEdges_2F",   (CAST)BF_GroupOfEdges_2F,  
                           (CAST)BF_CurlGroupOfEdges_2F,   (CAST)BF_Zero, 1.,  ALL },
  {"BF_GroupOfEdges_2V",   (CAST)BF_GroupOfEdges_2V,  
                           (CAST)BF_CurlGroupOfEdges_2V,   (CAST)BF_Zero, 1.,  ALL },
  {"BF_GroupOfEdges_3E",   (CAST)BF_GroupOfEdges_3E,   
                           (CAST)BF_CurlGroupOfEdges_3E,   (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_3F_a", (CAST)BF_GroupOfEdges_3F_a, 
                           (CAST)BF_CurlGroupOfEdges_3F_a, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_3F_b", (CAST)BF_GroupOfEdges_3F_b, 
                           (CAST)BF_CurlGroupOfEdges_3F_b, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_3F_c", (CAST)BF_GroupOfEdges_3F_c,
                           (CAST)BF_CurlGroupOfEdges_3F_c, (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_3V",   (CAST)BF_GroupOfEdges_3V,   
                           (CAST)BF_CurlGroupOfEdges_3V,   (CAST)BF_Zero, 1.5, TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_4E",   (CAST)BF_GroupOfEdges_4E,   
                           (CAST)BF_CurlGroupOfEdges_4E,   (CAST)BF_Zero, 2.,  ALL },
  {"BF_GroupOfEdges_4F",   (CAST)BF_GroupOfEdges_4F,  
                           (CAST)BF_CurlGroupOfEdges_4F,   (CAST)BF_Zero, 2.,  TRI|QUA|TET|HEX|PRI },
  {"BF_GroupOfEdges_4V",   (CAST)BF_GroupOfEdges_4V,  
                           (CAST)BF_CurlGroupOfEdges_4V,   (CAST)BF_Zero, 2.,  TRI|QUA|TET|HEX|PRI },

  {"BF_CurlGroupOfEdges",      (CAST)BF_CurlGroupOfEdges,      
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges,      0., ALL },
  {"BF_CurlGroupOfEdges_1E",   (CAST)BF_CurlGroupOfEdges,      
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges,      0., ALL },
  {"BF_CurlGroupOfEdges_2E",   (CAST)BF_CurlGroupOfEdges_2E,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_2E,   0., ALL },
  {"BF_CurlGroupOfEdges_2F",   (CAST)BF_CurlGroupOfEdges_2F,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_2F,   0., ALL },
  {"BF_CurlGroupOfEdges_2V",   (CAST)BF_CurlGroupOfEdges_2V,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_2V,   0., ALL },
  {"BF_CurlGroupOfEdges_3E",   (CAST)BF_CurlGroupOfEdges_3E,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_3E,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_3F_a", (CAST)BF_CurlGroupOfEdges_3F_a, 
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_3F_a, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_3F_b", (CAST)BF_CurlGroupOfEdges_3F_b, 
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_3F_b, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_3F_c", (CAST)BF_CurlGroupOfEdges_3F_c, 
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_3F_c, 1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_3V",   (CAST)BF_CurlGroupOfEdges_3V,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_3V,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_4E",   (CAST)BF_CurlGroupOfEdges_4E,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_4E,   1., ALL },
  {"BF_CurlGroupOfEdges_4F",   (CAST)BF_CurlGroupOfEdges_4F,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_4F,   1., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfEdges_4V",   (CAST)BF_CurlGroupOfEdges_4V,   
                               (CAST)BF_Zero, (CAST)BF_GroupOfEdges_4V,   1., TRI|QUA|TET|HEX|PRI },


  // H(curl, perp) basis Functions and their curls

  {"BF_PerpendicularEdge",    (CAST)BF_PerpendicularEdge,    
                              (CAST)BF_CurlPerpendicularEdge,    (CAST)BF_Zero, 1., ALL },
  {"BF_PerpendicularEdge_1N", (CAST)BF_PerpendicularEdge,    
                              (CAST)BF_CurlPerpendicularEdge,    (CAST)BF_Zero, 1., ALL }, 
  {"BF_PerpendicularEdge_2E", (CAST)BF_PerpendicularEdge_2E, 
                              (CAST)BF_CurlPerpendicularEdge_2E, (CAST)BF_Zero, 2., ALL }, 
  {"BF_PerpendicularEdge_2F", (CAST)BF_PerpendicularEdge_2F, 
                              (CAST)BF_CurlPerpendicularEdge_2F, (CAST)BF_Zero, 2., QUA|HEX|PRI }, 
  {"BF_PerpendicularEdge_2V", (CAST)BF_PerpendicularEdge_2V, 
                              (CAST)BF_CurlPerpendicularEdge_2V, (CAST)BF_Zero, 2., QUA|HEX }, 
  {"BF_PerpendicularEdge_3E", (CAST)BF_PerpendicularEdge_3E, 
                              (CAST)BF_CurlPerpendicularEdge_3E, (CAST)BF_Zero, 3., ALL }, 
  {"BF_PerpendicularEdge_3F", (CAST)BF_PerpendicularEdge_3F, 
                              (CAST)BF_CurlPerpendicularEdge_3F, (CAST)BF_Zero, 3., TRI|QUA|TET|HEX|PRI }, 
  {"BF_PerpendicularEdge_3V", (CAST)BF_PerpendicularEdge_3V, 
                              (CAST)BF_CurlPerpendicularEdge_3V, (CAST)BF_Zero, 3., HEX|PRI }, 

  {"BF_CurlPerpendicularEdge",    (CAST)BF_CurlPerpendicularEdge,    
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge,    0., ALL },
  {"BF_CurlPerpendicularEdge_1N", (CAST)BF_CurlPerpendicularEdge,   
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge,    0., ALL },
  {"BF_CurlPerpendicularEdge_2E", (CAST)BF_CurlPerpendicularEdge_2E,
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_2E, 1., ALL },
  {"BF_CurlPerpendicularEdge_2F", (CAST)BF_CurlPerpendicularEdge_2F, 
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_2F, 1., QUA|HEX|PRI },
  {"BF_CurlPerpendicularEdge_2V", (CAST)BF_CurlPerpendicularEdge_2V,
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_2V, 1., QUA|HEX },
  {"BF_CurlPerpendicularEdge_3E", (CAST)BF_CurlPerpendicularEdge_3E, 
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_3E, 2., ALL },
  {"BF_CurlPerpendicularEdge_3F", (CAST)BF_CurlPerpendicularEdge_3F, 
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_3F, 2., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlPerpendicularEdge_3V", (CAST)BF_CurlPerpendicularEdge_3V, 
                                  (CAST)BF_Zero, (CAST)BF_PerpendicularEdge_3V, 2., HEX|PRI },

  {"BF_GroupOfPerpendicularEdges",    (CAST)BF_GroupOfPerpendicularEdges,   
                                      (CAST)BF_CurlGroupOfPerpendicularEdges,    (CAST)BF_Zero, 1., ALL },
  {"BF_GroupOfPerpendicularEdges_1N", (CAST)BF_GroupOfPerpendicularEdges,    
                                      (CAST)BF_CurlGroupOfPerpendicularEdges,    (CAST)BF_Zero, 1., ALL }, 
  {"BF_GroupOfPerpendicularEdges_2E", (CAST)BF_GroupOfPerpendicularEdges_2E, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_2E, (CAST)BF_Zero, 2., ALL }, 
  {"BF_GroupOfPerpendicularEdges_2F", (CAST)BF_GroupOfPerpendicularEdges_2F, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_2F, (CAST)BF_Zero, 2., QUA|HEX|PRI }, 
  {"BF_GroupOfPerpendicularEdges_2V", (CAST)BF_GroupOfPerpendicularEdges_2V, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_2V, (CAST)BF_Zero, 2., QUA|HEX }, 
  {"BF_GroupOfPerpendicularEdges_3E", (CAST)BF_GroupOfPerpendicularEdges_3E, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_3E, (CAST)BF_Zero, 3., ALL }, 
  {"BF_GroupOfPerpendicularEdges_3F", (CAST)BF_GroupOfPerpendicularEdges_3F, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_3F, (CAST)BF_Zero, 3., TRI|QUA|TET|HEX|PRI }, 
  {"BF_GroupOfPerpendicularEdges_3V", (CAST)BF_GroupOfPerpendicularEdges_3V, 
                                      (CAST)BF_CurlGroupOfPerpendicularEdges_3V, (CAST)BF_Zero, 3., HEX|PRI }, 

  {"BF_CurlGroupOfPerpendicularEdges",    (CAST)BF_CurlGroupOfPerpendicularEdges,    
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges,    0., ALL },
  {"BF_CurlGroupOfPerpendicularEdges_1N", (CAST)BF_CurlGroupOfPerpendicularEdges,   
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges,    0., ALL },
  {"BF_CurlGroupOfPerpendicularEdges_2E", (CAST)BF_CurlGroupOfPerpendicularEdges_2E, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_2E, 1., ALL },
  {"BF_CurlGroupOfPerpendicularEdges_2F", (CAST)BF_CurlGroupOfPerpendicularEdges_2F, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_2F, 1., QUA|HEX|PRI },
  {"BF_CurlGroupOfPerpendicularEdges_2V", (CAST)BF_CurlGroupOfPerpendicularEdges_2V, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_2V, 1., QUA|HEX },
  {"BF_CurlGroupOfPerpendicularEdges_3E", (CAST)BF_CurlGroupOfPerpendicularEdges_3E, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_3E, 2., ALL },
  {"BF_CurlGroupOfPerpendicularEdges_3F", (CAST)BF_CurlGroupOfPerpendicularEdges_3F, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_3F, 2., TRI|QUA|TET|HEX|PRI },
  {"BF_CurlGroupOfPerpendicularEdges_3V", (CAST)BF_CurlGroupOfPerpendicularEdges_3V, 
                                          (CAST)BF_Zero, (CAST)BF_GroupOfPerpendicularEdges_3V, 2., HEX|PRI },


  // H(div) basis Functions and their divergences

  {"BF_Facet", (CAST)BF_Facet, (CAST)BF_DivFacet, (CAST)BF_Zero, 0.5, ALL },

  {"BF_DivFacet", (CAST)BF_DivFacet, (CAST)BF_Zero, (CAST)BF_Facet, 0., ALL },

  // Current along wire
  {"BF_Wire",    (CAST)BF_Wire, (CAST)BF_DivWire, (CAST)BF_Zero, 1., LIN },   
  {"BF_DivWire", (CAST)BF_DivWire, (CAST)BF_Zero, (CAST)BF_Wire, 0., LIN },        

  // H(div, perp) basis Functions and their divergences

  {"BF_PerpendicularFacet",      (CAST)BF_PerpendicularFacet,    
                                 (CAST)BF_DivPerpendicularFacet,      (CAST)BF_Zero, 0.5, ALL },
  {"BF_PerpendicularFacet_1E",   (CAST)BF_PerpendicularFacet,    
                                 (CAST)BF_DivPerpendicularFacet,      (CAST)BF_Zero, 0.5, ALL }, 
  {"BF_PerpendicularFacet_2E",   (CAST)BF_PerpendicularFacet_2E, 
                                 (CAST)BF_DivPerpendicularFacet_2E,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_PerpendicularFacet_2F",   (CAST)BF_PerpendicularFacet_2F, 
                                 (CAST)BF_DivPerpendicularFacet_2F,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_PerpendicularFacet_2V",   (CAST)BF_PerpendicularFacet_2V, 
                                 (CAST)BF_DivPerpendicularFacet_2V,   (CAST)BF_Zero, 1.,  ALL }, 
  {"BF_PerpendicularFacet_3E",   (CAST)BF_PerpendicularFacet_3E, 
                                 (CAST)BF_DivPerpendicularFacet_3E,   (CAST)BF_Zero, 1.5,  ALL }, 
  {"BF_PerpendicularFacet_3F_a", (CAST)BF_PerpendicularFacet_3F_a, 
                                 (CAST)BF_DivPerpendicularFacet_3F_a, (CAST)BF_Zero, 1.5,  ALL }, 
  {"BF_PerpendicularFacet_3F_b", (CAST)BF_PerpendicularFacet_3F_b, 
                                 (CAST)BF_DivPerpendicularFacet_3F_b, (CAST)BF_Zero, 1.5,  ALL }, 
  {"BF_PerpendicularFacet_3F_c", (CAST)BF_PerpendicularFacet_3F_c,
                                 (CAST)BF_DivPerpendicularFacet_3F_c, (CAST)BF_Zero, 1.5,  ALL }, 
  {"BF_PerpendicularFacet_3V",   (CAST)BF_PerpendicularFacet_3V, 
                                 (CAST)BF_DivPerpendicularFacet_3V,   (CAST)BF_Zero, 1.5,  ALL }, 
  {"BF_PerpendicularFacet_4E",   (CAST)BF_PerpendicularFacet_4E, 
                                 (CAST)BF_DivPerpendicularFacet_4E,   (CAST)BF_Zero, 2.,  ALL }, 
  {"BF_PerpendicularFacet_4F",   (CAST)BF_PerpendicularFacet_4F, 
                                 (CAST)BF_DivPerpendicularFacet_4F,   (CAST)BF_Zero, 2.,  ALL }, 
  {"BF_PerpendicularFacet_4V",   (CAST)BF_PerpendicularFacet_4V, 
                                 (CAST)BF_DivPerpendicularFacet_4V,   (CAST)BF_Zero, 2.,  ALL }, 

  {"BF_DivPerpendicularFacet",      (CAST)BF_DivPerpendicularFacet,      
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet,      0., ALL },
  {"BF_DivPerpendicularFacet_1E",   (CAST)BF_DivPerpendicularFacet,      
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet,      0., ALL },
  {"BF_DivPerpendicularFacet_2E",   (CAST)BF_DivPerpendicularFacet_2E,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_2E,   0., ALL },
  {"BF_DivPerpendicularFacet_2F",   (CAST)BF_DivPerpendicularFacet_2F,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_2F,   0., ALL },
  {"BF_DivPerpendicularFacet_2V",   (CAST)BF_DivPerpendicularFacet_2V,  
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_2V,   0., ALL },
  {"BF_DivPerpendicularFacet_3E",   (CAST)BF_DivPerpendicularFacet_3E,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_3E,   1., ALL },
  {"BF_DivPerpendicularFacet_3F_a", (CAST)BF_DivPerpendicularFacet_3F_a, 
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_3F_a, 1., ALL },
  {"BF_DivPerpendicularFacet_3F_b", (CAST)BF_DivPerpendicularFacet_3F_b, 
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_3F_b, 1., ALL },
  {"BF_DivPerpendicularFacet_3F_c", (CAST)BF_DivPerpendicularFacet_3F_c, 
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_3F_c, 1., ALL },
  {"BF_DivPerpendicularFacet_3V",   (CAST)BF_DivPerpendicularFacet_3V,  
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_3V,   1., ALL },
  {"BF_DivPerpendicularFacet_4E",   (CAST)BF_DivPerpendicularFacet_4E,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_4E,   1., ALL },
  {"BF_DivPerpendicularFacet_4F",   (CAST)BF_DivPerpendicularFacet_4F,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_4F,   1., ALL },
  {"BF_DivPerpendicularFacet_4V",   (CAST)BF_DivPerpendicularFacet_4V,   
                                    (CAST)BF_Zero, (CAST)BF_PerpendicularFacet_4V,   1., ALL },


  // L^2 basis Functions

  {"BF_Volume",  (CAST)BF_Volume,  (CAST)BF_Volume,  (CAST)BF_Zero, 0., ALL },
  {"BF_VolumeX", (CAST)BF_VolumeX, (CAST)BF_VolumeX, (CAST)BF_Zero, 0., ALL },
  {"BF_VolumeY", (CAST)BF_VolumeY, (CAST)BF_VolumeY, (CAST)BF_Zero, 0., ALL },
  {"BF_VolumeZ", (CAST)BF_VolumeZ, (CAST)BF_VolumeZ, (CAST)BF_Zero, 0., ALL },

  // (H^1)^3 Basis Functions

  {"BF_NodeX" , (CAST)BF_NodeX , (CAST)BF_NodeX_D1 , (CAST)BF_NodeX_D2 , 1. , ALL },
  {"BF_NodeY" , (CAST)BF_NodeY , (CAST)BF_NodeY_D1 , (CAST)BF_NodeY_D2 , 1. , ALL },
  {"BF_NodeZ" , (CAST)BF_NodeZ , (CAST)BF_NodeZ_D1 , (CAST)BF_NodeZ_D2 , 1. , ALL },

  {"BF_NodeX_2E" , (CAST)BF_NodeX_2E , (CAST)BF_NodeX_D1_2E , (CAST)BF_NodeX_D2_2E , 2. , ALL },
  {"BF_NodeY_2E" , (CAST)BF_NodeY_2E , (CAST)BF_NodeY_D1_2E , (CAST)BF_NodeY_D2_2E , 2. , ALL },
  {"BF_NodeZ_2E" , (CAST)BF_NodeZ_2E , (CAST)BF_NodeZ_D1_2E , (CAST)BF_NodeZ_D2_2E , 2. , ALL },

  {"BF_NodeX_2F" , (CAST)BF_NodeX_2F , (CAST)BF_NodeX_D1_2F , (CAST)BF_NodeX_D2_2F , 2. , QUA|HEX|PRI },
  {"BF_NodeY_2F" , (CAST)BF_NodeY_2F , (CAST)BF_NodeY_D1_2F , (CAST)BF_NodeY_D2_2F , 2. , QUA|HEX|PRI },
  {"BF_NodeZ_2F" , (CAST)BF_NodeZ_2F , (CAST)BF_NodeZ_D1_2F , (CAST)BF_NodeZ_D2_2F , 2. , QUA|HEX|PRI },

  {"BF_NodeX_2V" , (CAST)BF_NodeX_2V , (CAST)BF_NodeX_D1_2V , (CAST)BF_NodeX_D2_2V , 2. , HEX|PRI },
  {"BF_NodeY_2V" , (CAST)BF_NodeY_2V , (CAST)BF_NodeY_D1_2V , (CAST)BF_NodeY_D2_2V , 2. , HEX|PRI },
  {"BF_NodeZ_2V" , (CAST)BF_NodeZ_2V , (CAST)BF_NodeZ_D1_2V , (CAST)BF_NodeZ_D2_2V , 2. , HEX|PRI },

  {"BF_NodeX_3E" , (CAST)BF_NodeX_3E , (CAST)BF_NodeX_D1_3E , (CAST)BF_NodeX_D2_3E , 3. , ALL },
  {"BF_NodeY_3E" , (CAST)BF_NodeY_3E , (CAST)BF_NodeY_D1_3E , (CAST)BF_NodeY_D2_3E , 3. , ALL },
  {"BF_NodeZ_3E" , (CAST)BF_NodeZ_3E , (CAST)BF_NodeZ_D1_3E , (CAST)BF_NodeZ_D2_3E , 3. , ALL },

  {"BF_NodeX_3F" , (CAST)BF_NodeX_3F , (CAST)BF_NodeX_D1_3F , (CAST)BF_NodeX_D2_3F , 3. , TRI|QUA|TET|HEX|PRI },
  {"BF_NodeY_3F" , (CAST)BF_NodeY_3F , (CAST)BF_NodeY_D1_3F , (CAST)BF_NodeY_D2_3F , 3. , TRI|QUA|TET|HEX|PRI },
  {"BF_NodeZ_3F" , (CAST)BF_NodeZ_3F , (CAST)BF_NodeZ_D1_3F , (CAST)BF_NodeZ_D2_3F , 3. , TRI|QUA|TET|HEX|PRI },

  {"BF_NodeX_3V" , (CAST)BF_NodeX_3V , (CAST)BF_NodeX_D1_3V , (CAST)BF_NodeX_D2_3V , 3. , HEX|PRI },
  {"BF_NodeY_3V" , (CAST)BF_NodeY_3V , (CAST)BF_NodeY_D1_3V , (CAST)BF_NodeY_D2_3V , 3. , HEX|PRI },
  {"BF_NodeZ_3V" , (CAST)BF_NodeZ_3V , (CAST)BF_NodeZ_D1_3V , (CAST)BF_NodeZ_D2_3V , 3. , HEX|PRI },


  {"BF_NodeX_D1" , (CAST)BF_NodeX_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_NodeY_D1" , (CAST)BF_NodeY_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_NodeZ_D1" , (CAST)BF_NodeZ_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },

  {"BF_NodeX_D1_2E" , (CAST)BF_NodeX_D1_2E , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_NodeY_D1_2E" , (CAST)BF_NodeY_D1_2E , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_NodeZ_D1_2E" , (CAST)BF_NodeZ_D1_2E , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },

  {"BF_NodeX_D1_2F" , (CAST)BF_NodeX_D1_2F , (CAST)BF_Zero , (CAST)BF_Zero , 1. , QUA|HEX|PRI },
  {"BF_NodeY_D1_2F" , (CAST)BF_NodeY_D1_2F , (CAST)BF_Zero , (CAST)BF_Zero , 1. , QUA|HEX|PRI },
  {"BF_NodeZ_D1_2F" , (CAST)BF_NodeZ_D1_2F , (CAST)BF_Zero , (CAST)BF_Zero , 1. , QUA|HEX|PRI },

  {"BF_NodeX_D1_2V" , (CAST)BF_NodeX_D1_2V , (CAST)BF_Zero , (CAST)BF_Zero , 1. , HEX|PRI },
  {"BF_NodeY_D1_2V" , (CAST)BF_NodeY_D1_2V , (CAST)BF_Zero , (CAST)BF_Zero , 1. , HEX|PRI },
  {"BF_NodeZ_D1_2V" , (CAST)BF_NodeZ_D1_2V , (CAST)BF_Zero , (CAST)BF_Zero , 1. , HEX|PRI },

  {"BF_NodeX_D1_3E" , (CAST)BF_NodeX_D1_3E , (CAST)BF_Zero , (CAST)BF_Zero , 2. , ALL },
  {"BF_NodeY_D1_3E" , (CAST)BF_NodeY_D1_3E , (CAST)BF_Zero , (CAST)BF_Zero , 2. , ALL },
  {"BF_NodeZ_D1_3E" , (CAST)BF_NodeZ_D1_3E , (CAST)BF_Zero , (CAST)BF_Zero , 2. , ALL },

  {"BF_NodeX_D1_3F" , (CAST)BF_NodeX_D1_3F , (CAST)BF_Zero , (CAST)BF_Zero , 2. , TRI|QUA|TET|HEX|PRI },
  {"BF_NodeY_D1_3F" , (CAST)BF_NodeY_D1_3F , (CAST)BF_Zero , (CAST)BF_Zero , 2. , TRI|QUA|TET|HEX|PRI },
  {"BF_NodeZ_D1_3F" , (CAST)BF_NodeZ_D1_3F , (CAST)BF_Zero , (CAST)BF_Zero , 2. , TRI|QUA|TET|HEX|PRI },

  {"BF_NodeX_D1_3V" , (CAST)BF_NodeX_D1_3V , (CAST)BF_Zero , (CAST)BF_Zero , 2. , HEX|PRI },
  {"BF_NodeY_D1_3V" , (CAST)BF_NodeY_D1_3V , (CAST)BF_Zero , (CAST)BF_Zero , 2. , HEX|PRI },
  {"BF_NodeZ_D1_3V" , (CAST)BF_NodeZ_D1_3V , (CAST)BF_Zero , (CAST)BF_Zero , 2. , HEX|PRI },


  {"BF_NodeX_D2" , (CAST)BF_NodeX_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_NodeY_D2" , (CAST)BF_NodeY_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_NodeZ_D2" , (CAST)BF_NodeZ_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },

  {"BF_NodeX_D2_2E" , (CAST)BF_NodeX_D2_2E , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_NodeY_D2_2E" , (CAST)BF_NodeY_D2_2E , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },
  {"BF_NodeZ_D2_2E" , (CAST)BF_NodeZ_D2_2E , (CAST)BF_Zero , (CAST)BF_Zero , 1. , ALL },

  {"BF_NodeX_D2_2F" , (CAST)BF_NodeX_D2_2F , (CAST)BF_Zero , (CAST)BF_Zero , 1. , QUA|HEX|PRI },
  {"BF_NodeY_D2_2F" , (CAST)BF_NodeY_D2_2F , (CAST)BF_Zero , (CAST)BF_Zero , 1. , QUA|HEX|PRI },
  {"BF_NodeZ_D2_2F" , (CAST)BF_NodeZ_D2_2F , (CAST)BF_Zero , (CAST)BF_Zero , 1. , QUA|HEX|PRI },

  {"BF_NodeX_D2_2V" , (CAST)BF_NodeX_D2_2V , (CAST)BF_Zero , (CAST)BF_Zero , 1. , HEX|PRI },
  {"BF_NodeY_D2_2V" , (CAST)BF_NodeY_D2_2V , (CAST)BF_Zero , (CAST)BF_Zero , 1. , HEX|PRI },
  {"BF_NodeZ_D2_2V" , (CAST)BF_NodeZ_D2_2V , (CAST)BF_Zero , (CAST)BF_Zero , 1. , HEX|PRI },

  {"BF_NodeX_D2_3E" , (CAST)BF_NodeX_D2_3E , (CAST)BF_Zero , (CAST)BF_Zero , 2. , ALL },
  {"BF_NodeY_D2_3E" , (CAST)BF_NodeY_D2_3E , (CAST)BF_Zero , (CAST)BF_Zero , 2. , ALL },
  {"BF_NodeZ_D2_3E" , (CAST)BF_NodeZ_D2_3E , (CAST)BF_Zero , (CAST)BF_Zero , 2. , ALL },

  {"BF_NodeX_D2_3F" , (CAST)BF_NodeX_D2_3F , (CAST)BF_Zero , (CAST)BF_Zero , 2. , TRI|QUA|TET|HEX|PRI },
  {"BF_NodeY_D2_3F" , (CAST)BF_NodeY_D2_3F , (CAST)BF_Zero , (CAST)BF_Zero , 2. , TRI|QUA|TET|HEX|PRI },
  {"BF_NodeZ_D2_3F" , (CAST)BF_NodeZ_D2_3F , (CAST)BF_Zero , (CAST)BF_Zero , 2. , TRI|QUA|TET|HEX|PRI },

  {"BF_NodeX_D2_3V" , (CAST)BF_NodeX_D2_3V , (CAST)BF_Zero , (CAST)BF_Zero , 2. , HEX|PRI },
  {"BF_NodeY_D2_3V" , (CAST)BF_NodeY_D2_3V , (CAST)BF_Zero , (CAST)BF_Zero , 2. , HEX|PRI },
  {"BF_NodeZ_D2_3V" , (CAST)BF_NodeZ_D2_3V , (CAST)BF_Zero , (CAST)BF_Zero , 2. , HEX|PRI },


  {"BF_NodeX_D12" , (CAST)BF_NodeX_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_NodeY_D12" , (CAST)BF_NodeY_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_NodeZ_D12" , (CAST)BF_NodeZ_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },

  {"BF_NodeX_D12_2E" , (CAST)BF_NodeX_D12_2E , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_NodeY_D12_2E" , (CAST)BF_NodeY_D12_2E , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_NodeZ_D12_2E" , (CAST)BF_NodeZ_D12_2E , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },


  {"BF_GroupOfNodesX" , (CAST)BF_GroupOfNodesX , (CAST)BF_GroupOfNodesX_D1 , (CAST)BF_GroupOfNodesX_D2 , 1. , ALL },
  {"BF_GroupOfNodesY" , (CAST)BF_GroupOfNodesY , (CAST)BF_GroupOfNodesY_D1 , (CAST)BF_GroupOfNodesY_D2 , 1. , ALL },
  {"BF_GroupOfNodesZ" , (CAST)BF_GroupOfNodesZ , (CAST)BF_GroupOfNodesZ_D1 , (CAST)BF_GroupOfNodesZ_D2 , 1. , ALL },

  {"BF_GroupOfNodesX_D1" , (CAST)BF_GroupOfNodesX_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_GroupOfNodesY_D1" , (CAST)BF_GroupOfNodesY_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_GroupOfNodesZ_D1" , (CAST)BF_GroupOfNodesZ_D1 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },

  {"BF_GroupOfNodesX_D2" , (CAST)BF_GroupOfNodesX_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_GroupOfNodesY_D2" , (CAST)BF_GroupOfNodesY_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_GroupOfNodesZ_D2" , (CAST)BF_GroupOfNodesZ_D2 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },

  {"BF_GroupOfNodesX_D12" , (CAST)BF_GroupOfNodesX_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_GroupOfNodesY_D12" , (CAST)BF_GroupOfNodesY_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },
  {"BF_GroupOfNodesZ_D12" , (CAST)BF_GroupOfNodesZ_D12 , (CAST)BF_Zero , (CAST)BF_Zero , 0. , ALL },


  // Special basis Functions

  {"BF_Zero", (CAST)BF_Zero, (CAST)BF_Zero, (CAST)BF_Zero, 0., ALL },
  {"BF_One",  (CAST)BF_One,  (CAST)BF_One,  (CAST)BF_One,  0., ALL },

  {"BF_Region"  , (CAST)BF_Region   , (CAST)BF_dRegion  , (CAST)BF_Zero , 0. , ALL },
  {"BF_RegionX" , (CAST)BF_RegionX  , (CAST)BF_dRegionX , (CAST)BF_Zero , 0. , ALL },
  {"BF_RegionY" , (CAST)BF_RegionY  , (CAST)BF_dRegionY , (CAST)BF_Zero , 0. , ALL },
  {"BF_RegionZ" , (CAST)BF_RegionZ  , (CAST)BF_dRegionZ , (CAST)BF_Zero , 0. , ALL },

  {"BF_Global"  , (CAST)BF_Global   , (CAST)BF_dGlobal , (CAST)BF_Zero , 0. , ALL },
  {"BF_dGlobal" , (CAST)BF_dGlobal  , (CAST)BF_Zero    , (CAST)BF_Global, 0. , ALL },
#endif

  {NULL , NULL , NULL , NULL , 0. , ALL }
} ;

#undef POI
#undef LIN
#undef TRI
#undef QUA
#undef TET
#undef HEX
#undef PRI
#undef PYR
#undef ALL

struct StringXFunction2Nbr  F_Function[] = {    /* #Par #Arg */

  /* #Par = -1 => free number of Parameters ; = -2 free even number */
  /* #Arg ... same */

#if defined(HAVE_LEGACY)
  // F_Math

  {"Exp"               , (CAST)F_Exp              ,   0,   1 },
  {"Log"               , (CAST)F_Log              ,   0,   1 },
  {"Log10"             , (CAST)F_Log10            ,   0,   1 },
  {"Sqrt"              , (CAST)F_Sqrt             ,   0,   1 },
  {"Sin"               , (CAST)F_Sin              ,   0,   1 },
  {"Asin"              , (CAST)F_Asin             ,   0,   1 },
  {"Cos"               , (CAST)F_Cos              ,   0,   1 },
  {"Acos"              , (CAST)F_Acos             ,   0,   1 },
  {"Tan"               , (CAST)F_Tan              ,   0,   1 },
  {"Atan"              , (CAST)F_Atan             ,   0,   1 },
  {"Sinh"              , (CAST)F_Sinh             ,   0,   1 },
  {"Cosh"              , (CAST)F_Cosh             ,   0,   1 },
  {"Tanh"              , (CAST)F_Tanh             ,   0,   1 },
  {"Fabs"              , (CAST)F_Fabs             ,   0,   1 },
  {"Floor"             , (CAST)F_Floor            ,   0,   1 },
  {"Ceil"              , (CAST)F_Ceil             ,   0,   1 },
  {"Atan2"             , (CAST)F_Atan2            ,   0,   2 },
  {"Fmod"              , (CAST)F_Fmod             ,   0,   2 },
  {"Sign"              , (CAST)F_Sign             ,   0,   1 },
  {"Jn"                , (CAST)F_Jn               ,   0,   2 },
  {"Yn"                , (CAST)F_Yn               ,   0,   2 },
  {"dJn"               , (CAST)F_dJn              ,   0,   2 },
  {"dYn"               , (CAST)F_dYn              ,   0,   2 },

  // F_ExtMath

  {"Hypot"             , (CAST)F_Hypot            ,   0,   2 },
  {"TanhC2"            , (CAST)F_TanhC2           ,   0,   1 },
  {"Transpose"         , (CAST)F_Transpose        ,   0,   1 },
  {"TTrace"            , (CAST)F_Trace            ,   0,   1 },
  {"Rotate"            , (CAST)F_RotateXYZ        ,   0,   4 },
  {"Norm"              , (CAST)F_Norm             ,   0,   1 },
  {"SquNorm"           , (CAST)F_SquNorm          ,   0,   1 },
  {"Unit"              , (CAST)F_Unit             ,   0,   1 },
  {"ScalarUnit"        , (CAST)F_ScalarUnit       ,   0,   1 },
  {"Normalized"        , (CAST)F_Unit             ,   0,   1 },
  {"F_Cos_wt_p"        , (CAST)F_Cos_wt_p         ,   2,   0 },
  {"F_Sin_wt_p"        , (CAST)F_Sin_wt_p         ,   2,   0 },
  {"F_Period"          , (CAST)F_Period           ,   1,   1 },
  {"Interval"          , (CAST)F_Interval         ,   3,   3 },

  // F_Type

  {"Complex"           , (CAST)F_Complex          ,   0,  -2 },
  {"Complex_MH"        , (CAST)F_Complex_MH       ,  -1,  -2 },
  {"Re"                , (CAST)F_Re               ,   0,   1 },
  {"Im"                , (CAST)F_Im               ,   0,   1 },
  {"Conj"              , (CAST)F_Conj             ,   0,   1 },
  {"Cart2Pol"          , (CAST)F_Cart2Pol         ,   0,   1 },
  {"Vector"            , (CAST)F_Vector           ,   0,   3 },
  {"Tensor"            , (CAST)F_Tensor           ,   0,   9 },
  {"TensorV"           , (CAST)F_TensorV          ,   0,   3 },
  {"TensorSym"         , (CAST)F_TensorSym        ,   0,   6 },
  {"TensorDiag"        , (CAST)F_TensorDiag       ,   0,   3 },
  {"SquDyadicProduct"  , (CAST)F_SquDyadicProduct ,   0,   1 },
  {"CompX"             , (CAST)F_CompX            ,   0,   1 },
  {"CompY"             , (CAST)F_CompY            ,   0,   1 },
  {"CompZ"             , (CAST)F_CompZ            ,   0,   1 },
  {"CompXX"            , (CAST)F_CompXX           ,   0,   1 },
  {"CompXY"            , (CAST)F_CompXY           ,   0,   1 },
  {"CompXZ"            , (CAST)F_CompXZ           ,   0,   1 },
  {"CompYX"            , (CAST)F_CompYX           ,   0,   1 },
  {"CompYY"            , (CAST)F_CompYY           ,   0,   1 },
  {"CompYZ"            , (CAST)F_CompYZ           ,   0,   1 },
  {"CompZX"            , (CAST)F_CompZX           ,   0,   1 },
  {"CompZY"            , (CAST)F_CompZY           ,   0,   1 },
  {"CompZZ"            , (CAST)F_CompZZ           ,   0,   1 },
  {"Cart2Sph"          , (CAST)F_Cart2Sph         ,   0,   1 },
  {"Cart2Cyl"          , (CAST)F_Cart2Cyl         ,   0,   1 },
  {"UnitVectorX"       , (CAST)F_UnitVectorX      ,   0,   0 },
  {"UnitVectorY"       , (CAST)F_UnitVectorY      ,   0,   0 },
  {"UnitVectorZ"       , (CAST)F_UnitVectorZ      ,   0,   0 },

  // F_Coord

  {"CoordX"            , (CAST)F_CoordX           ,   0,   0 },
  {"CoordY"            , (CAST)F_CoordY           ,   0,   0 },
  {"CoordZ"            , (CAST)F_CoordZ           ,   0,   0 },
  {"CoordXYZ"          , (CAST)F_CoordXYZ         ,   0,   0 },
  {"X"                 , (CAST)F_CoordX           ,   0,   0 },
  {"Y"                 , (CAST)F_CoordY           ,   0,   0 },
  {"Z"                 , (CAST)F_CoordZ           ,   0,   0 },
  {"XYZ"               , (CAST)F_CoordXYZ         ,   0,   0 },
  {"F_aX_bY_cZ"        , (CAST)F_aX_bY_cZ         ,   3,   0 },
  {"F_aX21_bY21_cZ21"  , (CAST)F_aX21_bY21_cZ21   ,   3,   0 },
  {"XS"                , (CAST)F_CoordXS          ,   0,   0 },
  {"YS"                , (CAST)F_CoordYS          ,   0,   0 },
  {"ZS"                , (CAST)F_CoordZS          ,   0,   0 },
  {"XYZS"              , (CAST)F_CoordXYZS        ,   0,   0 },

  // F_Misc

  {"Printf"            , (CAST)F_Printf           ,   0,   1 },
  {"Rand"              , (CAST)F_Rand             ,   0,   1 },
  {"Normal"            , (CAST)F_Normal           ,   0,   0 },
  {"NormalSource"      , (CAST)F_NormalSource     ,   0,   0 },
  {"Tangent"           , (CAST)F_Tangent          ,   0,   0 },
  {"CompElementNum"    , (CAST)F_CompElementNum   ,   0,   0 },
  {"ElementVol"        , (CAST)F_ElementVol       ,   0,   0 },
  {"SurfaceArea"       , (CAST)F_SurfaceArea      ,  -1,   0 },
  {"InterpolationLinear"   , (CAST)F_InterpolationLinear   ,  -2,   1 },
  {"dInterpolationLinear"  , (CAST)F_dInterpolationLinear  ,  -2,   1 },
  {"dInterpolationLinear2" , (CAST)F_dInterpolationLinear2 ,  -2,   1 },
  {"InterpolationAkima"    , (CAST)F_InterpolationAkima    ,  -2,   1 },
  {"dInterpolationAkima"   , (CAST)F_dInterpolationAkima   ,  -2,   1 },

  {"InterpolationMatrix"   , (CAST)F_InterpolationMatrix   ,  -1,   1 },

  {"ValueFromIndex"        , (CAST)F_ValueFromIndex        ,  -1,   0 },
  {"VectorFromIndex"       , (CAST)F_VectorFromIndex       ,  -1,   0 },

  {"TransformTensor"       , (CAST)F_TransformTensor       ,   4,   4 },
  {"TransformPerm"         , (CAST)F_TransformPerm         ,   3,   1 },
  {"TransformPiezo"        , (CAST)F_TransformPiezo        ,   4,   2 },
  {"TransformPiezoT"       , (CAST)F_TransformPiezoT       ,   4,   2 },

  {"VirtualWork"           , (CAST)F_VirtualWork           ,   0,   1 },

  {"dhdb_Jiles"            , (CAST)F_dhdb_Jiles            ,   1,   3 },
  {"dbdh_Jiles"            , (CAST)F_dbdh_Jiles            ,   1,   3 },
  {"h_Jiles"               , (CAST)F_h_Jiles               ,   1,   3 },
  {"b_Jiles"               , (CAST)F_b_Jiles               ,   1,   3 },

  // F_MultiHar

  {"MHToTime"          , (CAST)F_MHToTime         ,   0,   2 },

  // F_Analytic

  {"JFIE_ZPolAnalyticOnCyl",      (CAST)F_JFIE_ZPolCyl     ,   4,   1 },
  {"RCS_ZPolAnalyticCyl",         (CAST)F_RCS_ZPolCyl      ,   3,   1 }, 
  {"JFIE_TransZPolAnalyticOnCyl", (CAST)F_JFIE_TransZPolCyl,   3,   1 },
  {"JFIE_OnSphCutTheta",          (CAST)F_JFIE_SphTheta,       4,   1 },
  {"RCS_SphTheta",                (CAST)F_RCS_SphTheta,        4,   1 },
  {"JFIE_OnSphCutPhi",            (CAST)F_JFIE_SphPhi,         4,   1 },
  {"RCS_SphPhi",                  (CAST)F_RCS_SphPhi,          4,   1 },

  {"CurrentPerfectlyConductingSphere",(CAST)F_CurrentPerfectlyConductingSphere,  3, 1 },

  {"AcousticFieldSoftSphere",         (CAST)F_AcousticFieldSoftSphere,  2, 1 },
  {"DrAcousticFieldSoftSphere",       (CAST)F_DrAcousticFieldSoftSphere, 2, 1 },
  {"RCSSoftSphere",                   (CAST)F_RCSSoftSphere,  2, 1 },

  {"AcousticFieldHardSphere",         (CAST)F_AcousticFieldHardSphere,  2, 1 },
  {"RCSHardSphere",                   (CAST)F_RCSHardSphere,  2, 1 },

  {"AcousticFieldSoftCylinder",       (CAST)F_AcousticFieldSoftCylinder, 2, 1 },
  {"AcousticFieldSoftCylinderABC",    (CAST)F_AcousticFieldSoftCylinderABC, 5, 1 },
  {"DrAcousticFieldSoftCylinder",     (CAST)F_DrAcousticFieldSoftCylinder, 2, 1 },
  {"RCSSoftCylinder",                 (CAST)F_RCSSoftCylinder,  2, 1 },

  {"AcousticFieldHardCylinder",       (CAST)F_AcousticFieldHardCylinder, 2, 1 },
  {"AcousticFieldHardCylinderABC",    (CAST)F_AcousticFieldHardCylinderABC, 5, 1 },
  {"DthetaAcousticFieldHardCylinder", (CAST)F_DthetaAcousticFieldHardCylinder, 2, 1 },
  {"RCSHardCylinder",                 (CAST)F_RCSHardCylinder,  2, 1 },

  {"OSRC_C0",   (CAST)F_OSRC_C0, 2, 0},
  {"OSRC_Aj",   (CAST)F_OSRC_Aj, 3, 0},
  {"OSRC_Bj",   (CAST)F_OSRC_Bj, 3, 0},

  // F_Geometry
  {"ProjectPointOnEllipse", (CAST)F_ProjectPointOnEllipse,  2, 1 },

  // F_Raytracing: ray tracing functions
  {"CylinderPhase",         (CAST)F_CylinderPhase,  0, 1 },
  {"DiamondPhase",          (CAST)F_DiamondPhase,  0, 1 },

  // GF_XXX : Green Functions
  {"Laplace"           , (CAST)GF_Laplace          ,   1,   0 },
  {"GradLaplace"       , (CAST)GF_GradLaplace      ,   1,   0 },
  {"NPxGradLaplace"    , (CAST)GF_NPxGradLaplace   ,   1,   0 },
  {"NSxGradLaplace"    , (CAST)GF_NSxGradLaplace   ,   1,   0 },
  {"ApproximateLaplace", (CAST)GF_ApproximateLaplace,  2,   0 },

  {"Helmholtz"         , (CAST)GF_Helmholtz        ,   2,   0 },
  {"HelmholtzThinWire" , (CAST)GF_HelmholtzThinWire,   3,   0 },
  {"GradHelmholtz"     , (CAST)GF_GradHelmholtz    ,   2,   0 },
  {"NPxGradHelmholtz"  , (CAST)GF_NPxGradHelmholtz ,   2,   0 },
  {"NSxGradHelmholtz"  , (CAST)GF_NSxGradHelmholtz ,   2,   0 },

  // Biot Savart law
  {"BiotSavart"        , (CAST)F_BiotSavart        ,   1,   0 },

  // Pocklintong's integral equation
  {"Pocklington"       , (CAST)F_Pocklington       ,   2,   0 },

#endif

  {NULL                , NULL                      ,   0,   0 } 

} ;

struct FunctionXFunction  GF_Function[] = {
#if defined(HAVE_LEGACY)
  {(CAST)GF_Laplace         , (CAST)GF_LaplacexForm        } ,
  {(CAST)GF_GradLaplace     , (CAST)GF_GradLaplacexForm    } ,
  {(CAST)GF_NPxGradLaplace  , (CAST)GF_NPxGradLaplacexForm } ,
  {(CAST)GF_NSxGradLaplace  , (CAST)GF_NSxGradLaplacexForm } ,
  {(CAST)GF_ApproximateLaplace  , (CAST)GF_ApproximateLaplacexForm  } ,
  {(CAST)GF_Helmholtz         , (CAST)GF_HelmholtzxForm        } ,
#endif
  {NULL                       , NULL }  
} ;

#undef CAST

#endif
