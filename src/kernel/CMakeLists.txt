# GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
#
# See the LICENSE.txt file for license information. Please report all
# issues on https://gitlab.onelab.info/getdp/getdp/issues.

set(SRC
  MainKernel.cpp
    Gauss_Point.cpp
      Gauss_Line.cpp
      Gauss_Triangle.cpp Gauss_Quadrangle.cpp
      Gauss_Tetrahedron.cpp Gauss_Hexahedron.cpp
      Gauss_Prism.cpp Gauss_Pyramid.cpp
    GeoData.cpp
      GeoEntity.cpp
      GeoNormal.cpp
      GeoTree.cpp
    DofData.cpp
      LinAlg.cpp LinAlg_PETSC.cpp LinAlg_SPARSKIT.cpp
    SolvingAnalyse.cpp SolvingOperations.cpp
      Cal_SolutionErrorRatio.cpp
      Operation_TimeLoopAdaptive.cpp
      Operation_IterativeLoopN.cpp
      Operation_IterativeLinearSolver.cpp
      Operation_IterativeTimeReduction.cpp
      Operation_Update.cpp Operation_Vector.cpp
      Operation_ChangeOfCoordinates.cpp
      Operation_PostOperation.cpp
      Operation_Debug.cpp
      Operation_Optimizer.cpp
      Operation_Broadcast.cpp
      Treatment_Formulation.cpp
        Get_DofOfElement.cpp
        Get_ConstraintOfElement.cpp
          Get_FunctionValue.cpp
          Get_Geometry.cpp
          Get_ElementSource.cpp
        ExtendedGroup.cpp
        Pre_TermOfFemEquation.cpp
          Generate_Network.cpp
        Cal_GalerkinTermOfFemEquation.cpp
        Cal_SmallFemTermOfFemEquation.cpp
        Cal_GlobalTermOfFemEquation.cpp
          Cal_IntegralQuantity.cpp
          Cal_AnalyticIntegration.cpp
          Cal_AssembleTerm.cpp
          Cal_PostQuantity.cpp
      MovingBand2D.cpp
      EigenSolve.cpp EigenSolve_ARPACK.cpp EigenSolve_SLEPC.cpp
    Pos_FemInterpolation.cpp
    Pos_Formulation.cpp
      Pos_Print.cpp Pos_PrintExternal.cpp PostExternalData.cpp VTUExternalData.cpp EnsightExternalData.cpp
        Pos_Element.cpp Pos_Format.cpp Pos_Iso.cpp Pos_Search.cpp
)

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
append_getdp_src(src/kernel "${SRC};${HDR}")
