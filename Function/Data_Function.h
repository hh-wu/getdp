#ifndef _DADA_FUNCTION_H_
#define _DATA_FUNCTION_H_


#include "F_Function.h"
#include "GF_Function.h"

#define CAST  void(*)()

/* ------------------------------------------------------------------------ */
/*  Keywords, their assigned 3 functions and 1 number                       */
/* ------------------------------------------------------------------------ */

struct StringX3Function1Nbr  BF_Function[] = {

  /* Basis Functions */  

  {"BF_Node"     , (CAST)BF_Node     , (CAST)BF_GradNode  , (CAST)BF_Zero , 1. },
  {"BF_Edge"     , (CAST)BF_Edge     , (CAST)BF_CurlEdge  , (CAST)BF_Zero , 0.5 },
  {"BF_Facet"    , (CAST)BF_Facet    , (CAST)BF_DivFacet  , (CAST)BF_Zero , 0.5 },
  {"BF_Volume"   , (CAST)BF_Volume   , (CAST)BF_Volume    , (CAST)BF_Zero , 0. },

  {"BF_GradNode" , (CAST)BF_GradNode , (CAST)BF_Zero      , (CAST)BF_Node , 0. },
  {"BF_CurlEdge" , (CAST)BF_CurlEdge , (CAST)BF_Zero      , (CAST)BF_Edge , 0. },
  {"BF_DivFacet" , (CAST)BF_DivFacet , (CAST)BF_Zero      , (CAST)BF_Facet, 0. },

  {"BF_NodeX"    , (CAST)BF_NodeX    , (CAST)BF_CurlNodeX , (CAST)BF_DivNodeX , 1. } ,
  {"BF_NodeY"    , (CAST)BF_NodeY    , (CAST)BF_CurlNodeY , (CAST)BF_DivNodeY , 1. } ,
  {"BF_NodeZ"    , (CAST)BF_NodeZ    , (CAST)BF_CurlNodeZ , (CAST)BF_DivNodeZ , 1. } ,

  {"BF_GroupOfNodesX"    , (CAST)BF_GroupOfNodesX , (CAST)BF_DxyGNodesX , (CAST)BF_Zero , 1. } ,
  {"BF_GroupOfNodesY"    , (CAST)BF_GroupOfNodesY , (CAST)BF_DxyGNodesY , (CAST)BF_Zero , 1. } ,
  {"BF_GroupOfNodesZ"    , (CAST)BF_GroupOfNodesZ , (CAST)BF_Zero , (CAST)BF_Zero , 1. } ,

  {"BF_Region"   , (CAST)BF_Region   , (CAST)BF_Zero      , (CAST)BF_Zero , 0. },
  {"BF_RegionX"  , (CAST)BF_RegionX  , (CAST)BF_Zero      , (CAST)BF_Zero , 0. },
  {"BF_RegionY"  , (CAST)BF_RegionY  , (CAST)BF_Zero      , (CAST)BF_Zero , 0. },
  {"BF_RegionZ"  , (CAST)BF_RegionZ  , (CAST)BF_Zero      , (CAST)BF_Zero , 0. },

  {"BF_Global"   , (CAST)BF_Global   , (CAST)BF_dGlobal   , (CAST)BF_Zero , 0. },
  {"BF_dGlobal"  , (CAST)BF_dGlobal  , (CAST)BF_Zero      , (CAST)BF_Global, 0. },

  {"BF_Zero"     , (CAST)BF_Zero     , (CAST)BF_Zero      , (CAST)BF_Zero, 0. },
  {"BF_One"      , (CAST)BF_One      , (CAST)BF_One       , (CAST)BF_One, 0. },

  {"BF_PerpendicularEdge" , (CAST)BF_PerpendicularEdge ,
                            (CAST)BF_CurlPerpendicularEdge , 
                            (CAST)BF_Zero , 1. },

  {"BF_CurlPerpendicularEdge" , (CAST)BF_CurlPerpendicularEdge ,
                                (CAST)BF_Zero , 
                                (CAST)BF_PerpendicularEdge , 0. },

  {"BF_PerpendicularFacet" , (CAST)BF_PerpendicularFacet ,
                             (CAST)BF_DivPerpendicularFacet , 
                             (CAST)BF_Zero , 0.5 },

  {"BF_DivPerpendicularFacet" , (CAST)BF_DivPerpendicularFacet ,
                                (CAST)BF_Zero , 
                                (CAST)BF_PerpendicularFacet , 0. },

  {"BF_GroupOfNodes" , (CAST)BF_GroupOfNodes ,
                       (CAST)BF_GradGroupOfNodes , 
                       (CAST)BF_Zero , 1. },

  {"BF_GradGroupOfNodes" , (CAST)BF_GradGroupOfNodes ,
                           (CAST)BF_Zero , 
                           (CAST)BF_GroupOfNodes , 0. },

  {"BF_GroupOfPerpendicularEdges", (CAST)BF_GroupOfPerpendicularEdges,
                                   (CAST)BF_CurlGroupOfPerpendicularEdges, 
                                   (CAST)BF_Zero , 1. },

  {"BF_CurlGroupOfPerpendicularEdges", (CAST)BF_CurlGroupOfPerpendicularEdges,
                                       (CAST)BF_Zero, 
                                       (CAST)BF_GroupOfPerpendicularEdges , 0. },

  {"BF_GroupOfEdges" , (CAST)BF_GroupOfEdges ,
                       (CAST)BF_CurlGroupOfEdges , 
                       (CAST)BF_Zero , 0.5 },

  {"BF_CurlGroupOfEdges" , (CAST)BF_CurlGroupOfEdges ,
                           (CAST)BF_Zero , 
                           (CAST)BF_GroupOfEdges , 0. },

  /* Nodal Hierarchical Basis Functions */

  {"HBF_Node_1N" , (CAST)BF_Node     , (CAST)BF_GradNode     , (CAST)BF_Zero , 1. },
  {"HBF_Node_2E" , (CAST)HBF_Node_2E , (CAST)HBF_GradNode_2E , (CAST)BF_Zero , 2. }, 
  {"HBF_Node_2F" , (CAST)HBF_Node_2F , (CAST)HBF_GradNode_2F , (CAST)BF_Zero , 2. }, 
  {"HBF_Node_2V" , (CAST)HBF_Node_2V , (CAST)HBF_GradNode_2V , (CAST)BF_Zero , 2. }, 
  {"HBF_Node_3E" , (CAST)HBF_Node_3E , (CAST)HBF_GradNode_3E , (CAST)BF_Zero , 3. }, 
  {"HBF_Node_3F" , (CAST)HBF_Node_3F , (CAST)HBF_GradNode_3F , (CAST)BF_Zero , 3. }, 
  {"HBF_Node_3V" , (CAST)HBF_Node_3V , (CAST)HBF_GradNode_3V , (CAST)BF_Zero , 3. }, 

  {"HBF_GradNode_1N" , (CAST)BF_GradNode     , (CAST)BF_Zero , (CAST)BF_Node     , 0. },
  {"HBF_GradNode_2E" , (CAST)HBF_GradNode_2E , (CAST)BF_Zero , (CAST)HBF_Node_2E , 1. },
  {"HBF_GradNode_2F" , (CAST)HBF_GradNode_2F , (CAST)BF_Zero , (CAST)HBF_Node_2F , 1. },
  {"HBF_GradNode_2V" , (CAST)HBF_GradNode_2V , (CAST)BF_Zero , (CAST)HBF_Node_2V , 1. },
  {"HBF_GradNode_3E" , (CAST)HBF_GradNode_3E , (CAST)BF_Zero , (CAST)HBF_Node_3E , 2. },
  {"HBF_GradNode_3F" , (CAST)HBF_GradNode_3F , (CAST)BF_Zero , (CAST)HBF_Node_3F , 2. },
  {"HBF_GradNode_3V" , (CAST)HBF_GradNode_3V , (CAST)BF_Zero , (CAST)HBF_Node_3V , 2. },

  {"HBF_PerpendicularEdge_2E", (CAST)HBF_PerpendicularEdge_2E,
                               (CAST)HBF_CurlPerpendicularEdge_2E, 
                               (CAST)BF_Zero , 2. }, 
  {"HBF_CurlPerpendicularEdge_2E", (CAST)HBF_CurlPerpendicularEdge_2E, 
                                   (CAST)BF_Zero,
                                   (CAST)HBF_PerpendicularEdge_2E , 1. },
  {"HBF_PerpendicularEdge_3E", (CAST)HBF_PerpendicularEdge_3E,
                               (CAST)HBF_CurlPerpendicularEdge_3E, 
                               (CAST)BF_Zero , 3. }, 
  {"HBF_CurlPerpendicularEdge_3E", (CAST)HBF_CurlPerpendicularEdge_3E, 
                                   (CAST)BF_Zero,
                                   (CAST)HBF_PerpendicularEdge_3E , 2. },
  {"HBF_PerpendicularEdge_3F", (CAST)HBF_PerpendicularEdge_3F,
                               (CAST)HBF_CurlPerpendicularEdge_3F, 
                               (CAST)BF_Zero , 3. }, 
  {"HBF_CurlPerpendicularEdge_3F", (CAST)HBF_CurlPerpendicularEdge_3F, 
                                   (CAST)BF_Zero,
                                   (CAST)HBF_PerpendicularEdge_3F , 2. },


  /* Edge Hierarchical Basis Functions */

  {"HBF_Edge_1E"   , (CAST)BF_Edge       , (CAST)BF_CurlEdge       , (CAST)BF_Zero , 0.5 },
  {"HBF_Edge_2E"   , (CAST)HBF_Edge_2E   , (CAST)HBF_CurlEdge_2E   , (CAST)BF_Zero , 1. }, 
  {"HBF_Edge_3F_a" , (CAST)HBF_Edge_3F_a , (CAST)HBF_CurlEdge_3F_a , (CAST)BF_Zero , 1.5 }, 
  {"HBF_Edge_3F_b" , (CAST)HBF_Edge_3F_b , (CAST)HBF_CurlEdge_3F_b , (CAST)BF_Zero , 1.5 }, 
  {"HBF_Edge_3F_c" , (CAST)HBF_Edge_3F_c , (CAST)HBF_CurlEdge_3F_c , (CAST)BF_Zero , 1.5 }, 
  {"HBF_Edge_4E"   , (CAST)HBF_Edge_4E   , (CAST)HBF_CurlEdge_4E   , (CAST)BF_Zero , 2. }, 
  {"HBF_Edge_4F"   , (CAST)HBF_Edge_4F   , (CAST)HBF_CurlEdge_4F   , (CAST)BF_Zero , 2. }, 

  {"HBF_CurlEdge_1E"   , (CAST)BF_CurlEdge       , (CAST)BF_Zero  , (CAST)BF_Edge       , 0. },
  {"HBF_CurlEdge_2E"   , (CAST)HBF_CurlEdge_2E   , (CAST)BF_Zero  , (CAST)HBF_Edge_2E   , 0. },
  {"HBF_CurlEdge_3F_a" , (CAST)HBF_CurlEdge_3F_a , (CAST)BF_Zero  , (CAST)HBF_Edge_3F_a , 1. },
  {"HBF_CurlEdge_3F_b" , (CAST)HBF_CurlEdge_3F_b , (CAST)BF_Zero  , (CAST)HBF_Edge_3F_b , 1. },
  {"HBF_CurlEdge_3F_c" , (CAST)HBF_CurlEdge_3F_c , (CAST)BF_Zero  , (CAST)HBF_Edge_3F_c , 1. },
  {"HBF_CurlEdge_4E"   , (CAST)HBF_CurlEdge_4E   , (CAST)BF_Zero  , (CAST)HBF_Edge_4E   , 1. },
  {"HBF_CurlEdge_4F"   , (CAST)HBF_CurlEdge_4F   , (CAST)BF_Zero  , (CAST)HBF_Edge_4F   , 1. },

  {"HBF_PerpendicularFacet_2E", (CAST)HBF_PerpendicularFacet_2E,
                                (CAST)HBF_DivPerpendicularFacet_2E, 
                                (CAST)BF_Zero , 1. }, 

  {"HBF_DivPerpendicularFacet_2E", (CAST)HBF_DivPerpendicularFacet_2E, 
                                   (CAST)BF_Zero,
                                   (CAST)HBF_PerpendicularFacet_2E , 0. },

  /* Group Of Entities Hierarchical Basis Functions */


  {"HBF_GroupOfNodes_2E"    , (CAST)HBF_GroupOfNodes_2E, 
                              (CAST)HBF_GradGroupOfNodes_2E, 
                              (CAST)BF_Zero , 2. },

  {"HBF_GroupOfNodes_2F"    , (CAST)HBF_GroupOfNodes_2F, 
                              (CAST)HBF_GradGroupOfNodes_2F, 
                              (CAST)BF_Zero, 2. },

  {"HBF_GroupOfNodes_2V"    , (CAST)HBF_GroupOfNodes_2V, 
                              (CAST)HBF_GradGroupOfNodes_2V, 
                              (CAST)BF_Zero, 2. },

  {"HBF_GradGroupOfNodes_2E", (CAST)HBF_GradGroupOfNodes_2E, 
                              (CAST)BF_Zero, 
                              (CAST)HBF_GroupOfNodes_2E, 1. },

  {"HBF_GradGroupOfNodes_2F", (CAST)HBF_GradGroupOfNodes_2F, 
                              (CAST)BF_Zero, 
                              (CAST)HBF_GroupOfNodes_2F, 1. },

  {"HBF_GradGroupOfNodes_2V", (CAST)HBF_GradGroupOfNodes_2V, 
                              (CAST)BF_Zero, 
                              (CAST)HBF_GroupOfNodes_2V, 1. },

  {"HBF_GroupOfEdges_2E"    , (CAST)HBF_GroupOfEdges_2E, 
                              (CAST)HBF_CurlGroupOfEdges_2E, 
                              (CAST)BF_Zero , 1. },

  {"HBF_CurlGroupOfEdges_2E", (CAST)BF_CurlGroupOfEdges, 
                              (CAST)BF_Zero, 
                              (CAST)HBF_GroupOfEdges_2E, 0. },

  {NULL , NULL , NULL , NULL , 0. }
} ;





/* ------------------------------------------------------------------------ */
/*  Keywords, their assigned functions and 2 numbers                        */
/* ------------------------------------------------------------------------ */


struct StringXFunction2Nbr  F_Function[] = {    /* #Par #Arg */

  /* #Par = -1 => free number of Parameters ; = -2 free even number */
  /* #Arg ... same */

  /* F_Math */

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

  /* F_ExtMath */

  {"Hypot"             , (CAST)F_Hypot            ,   0,   2 },
  {"TanhC2"            , (CAST)F_TanhC2           ,   0,   1 },
  {"Transpose"         , (CAST)F_Transpose        ,   0,   1 },
  {"TTrace"            , (CAST)F_Trace            ,   0,   1 },
  {"Rotate"            , (CAST)F_RotateXYZ        ,   0,   4 },
  {"Norm"              , (CAST)F_Norm             ,   0,   1 },
  {"SquNorm"           , (CAST)F_SquNorm          ,   0,   1 },
  {"Unit"              , (CAST)F_Unit             ,   0,   1 },
  {"Normalized"        , (CAST)F_Unit             ,   0,   1 },
  {"F_Cos_wt_p"        , (CAST)F_Cos_wt_p         ,   2,   0 },
  {"F_Sin_wt_p"        , (CAST)F_Sin_wt_p         ,   2,   0 },
  {"F_Period"          , (CAST)F_Period           ,   1,   1 },
  {"Interval"          , (CAST)F_Interval         ,   3,   3 },

  /* F_Type */

  {"Complex"           , (CAST)F_Complex          ,   0,  -2 },
  {"Re"                , (CAST)F_Re               ,   0,   1 },
  {"Im"                , (CAST)F_Im               ,   0,   1 },
  {"Conj"              , (CAST)F_Conj             ,   0,   1 },
  {"Vector"            , (CAST)F_Vector           ,   0,   3 },
  {"Tensor"            , (CAST)F_Tensor           ,   0,   9 },
  {"TensorV"           , (CAST)F_TensorV          ,   0,   3 },
  {"TensorSym"         , (CAST)F_TensorSym        ,   0,   6 },
  {"TensorDiag"        , (CAST)F_TensorDiag       ,   0,   3 },
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

  /* F_Coord */

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


  /* F_Misc */

  {"Printf"            , (CAST)F_Printf           ,   0,   1 },
  {"Normal"            , (CAST)F_Normal           ,   0,   0 },
  {"NormalSource"      , (CAST)F_NormalSource     ,   0,   0 },
  {"Tangent"           , (CAST)F_Tangent          ,   0,   0 },
  {"CompElementNum"    , (CAST)F_CompElementNum   ,   0,   0 },
  {"SurfaceArea"       , (CAST)F_SurfaceArea      ,  -1,   0 },
  {"InterpolationLinear"   , (CAST)F_InterpolationLinear   ,  -2,   1 },
  {"dInterpolationLinear"  , (CAST)F_dInterpolationLinear  ,  -2,   1 },
  {"dInterpolationLinear2" , (CAST)F_dInterpolationLinear2 ,  -2,   1 },
  {"InterpolationAkima"    , (CAST)F_InterpolationAkima    ,  -2,   1 },
  {"dInterpolationAkima"   , (CAST)F_dInterpolationAkima   ,  -2,   1 },


  /* F_Analytic */

  {"F_Sphere"          , (CAST)F_Sphere           ,   6,   0 },
  {"F_Cylinder"        , (CAST)F_Cylinder         ,   7,   0 },


  /* GF_XXX : Green Functions */

  {"Laplace"           , (CAST)GF_Laplace          ,   1,   0 },
  {"GradLaplace"       , (CAST)GF_GradLaplace      ,   1,   0 },
  {"NPxGradLaplace"    , (CAST)GF_NPxGradLaplace   ,   1,   0 },
  {"NSxGradLaplace"    , (CAST)GF_NSxGradLaplace   ,   1,   0 },
  {"ApproximateLaplace", (CAST)GF_ApproximateLaplace,  2,   0 },

  {"Helmholtz"         , (CAST)GF_Helmholtz        ,   2,   0 },
  {"GradHelmholtz"     , (CAST)GF_GradHelmholtz    ,   2,   0 },
  {"NPxGradHelmholtz"  , (CAST)GF_NPxGradHelmholtz ,   2,   0 },


  {NULL                , NULL                      ,   0,   0 } 

} ;




/* ------------------------------------------------------------------------ */
/*  The Green Function and its associated Analytical Integration function   */
/* ------------------------------------------------------------------------ */


struct FunctionXFunction  GF_Function[] = {

  {(CAST)GF_Laplace         , (CAST)GF_LaplacexForm        } ,
  {(CAST)GF_GradLaplace     , (CAST)GF_GradLaplacexForm    } ,
  {(CAST)GF_NPxGradLaplace  , (CAST)GF_NPxGradLaplacexForm } ,
  {(CAST)GF_NSxGradLaplace  , (CAST)GF_NSxGradLaplacexForm } ,

  {(CAST)GF_ApproximateLaplace  , (CAST)GF_ApproximateLaplacexForm  } ,

  {NULL                    , NULL }  

} ;


#undef CAST

#endif
