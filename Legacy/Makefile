# GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

include ../variables

LIB = ../lib/libGetDPLegacy${LIBEXT}

INC = ${DASH}I. ${DASH}I../Common ${DASH}I../Interface ${DASH}I../Numeric \
      ${DASH}I../contrib/NR ${DASH}I../contrib/Sparskit 

CFLAGS = ${OPTIM} ${FLAGS} ${INC} ${SYSINCLUDE}

SRC = MainLegacy.cpp \
      F_Analytic.cpp F_BiotSavart.cpp F_Coord.cpp F_ExtMath.cpp \
        F_Geometry.cpp F_Interpolation.cpp F_Hysteresis.cpp F_Math.cpp \
        F_Misc.cpp F_MultiHar.cpp F_Raytracing.cpp \
        F_Gmsh.cpp F_DiffGeom.cpp \
      BF_Node.cpp BF_NodeXYZ.cpp BF_Node_2.cpp BF_Node_3.cpp \
        BF_Edge.cpp BF_Edge_2.cpp BF_Edge_3.cpp BF_Edge_4.cpp \
        BF_Facet.cpp BF_Volume.cpp BF_Region.cpp \
        BF_Perpendicular.cpp BF_GroupOfEntities.cpp \
      GF_Helmholtz.cpp GF_HelmholtzxForm.cpp \
        GF_Laplace.cpp GF_LaplacexForm.cpp \
      Gauss_Point.cpp \
        Gauss_Line.cpp \
        Gauss_Triangle.cpp Gauss_Quadrangle.cpp \
        Gauss_Tetrahedron.cpp Gauss_Hexahedron.cpp \
        Gauss_Prism.cpp Gauss_Pyramid.cpp \
      GeoData.cpp \
        GeoEntity.cpp \
        GeoNormal.cpp \
        GeoTree.cpp \
      DofData.cpp \
        LinAlg.cpp LinAlg_PETSC.cpp LinAlg_SPARSKIT.cpp \
      SolvingAnalyse.cpp SolvingOperations.cpp \
        Treatment_Formulation.cpp \
            Get_DofOfElement.cpp \
            Get_ConstraintOfElement.cpp \
              Get_FunctionValue.cpp \
              Get_Geometry.cpp \
              Get_ElementSource.cpp \
            ExtendedGroup.cpp \
            Pre_TermOfFemEquation.cpp \
              Generate_Network.cpp \
            Cal_GalerkinTermOfFemEquation.cpp \
            Cal_GlobalTermOfFemEquation.cpp \
              Cal_IntegralQuantity.cpp \
              Cal_AnalyticIntegration.cpp \
              Cal_Quantity.cpp \
              Cal_Value.cpp \
              Cal_AssembleTerm.cpp \
              Cal_PostQuantity.cpp \
        MovingBand2D.cpp \
        IterativeLinearSolver.cpp \
        EigenSolve.cpp EigenSolve_ARPACK.cpp EigenSolve_SLEPC.cpp \
      Pos_FemInterpolation.cpp \
      Pos_Formulation.cpp \
        Pos_Print.cpp \
          Pos_Element.cpp Pos_Format.cpp Pos_Iso.cpp Pos_Search.cpp

OBJ = ${SRC:.cpp=${OBJEXT}}

.SUFFIXES: ${OBJEXT} .cpp

${LIB}: ${OBJ}
	${AR} ${ARFLAGS}${LIB} ${OBJ}
	${RANLIB} ${LIB}

.cpp${OBJEXT}:
	${CXX} ${CFLAGS} ${DASH}c $<

clean:
	rm -f *.o *.obj

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CXX} -MM -MG ${CFLAGS} ${SRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

# DO NOT DELETE THIS LINE
MainLegacy.o: MainLegacy.cpp ../Common/GetDPConfig.h \
  ../Common/GetDPVersion.h ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h SolvingAnalyse.h ../Numeric/NumericUtils.h \
  LinAlg.h ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h \
  ../Common/OS.h ../Common/MallocUtils.h ../Common/Message.h
F_Analytic.o: F_Analytic.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h F.h ../Numeric/Legendre.h \
  ../Numeric/Bessel.h ../Common/MallocUtils.h ../Common/Message.h
F_BiotSavart.o: F_BiotSavart.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h F.h ../Common/Message.h
F_Coord.o: F_Coord.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h GeoData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h F.h \
  Get_Geometry.h ../Common/Message.h
F_ExtMath.o: F_ExtMath.cpp F.h ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h Cal_Value.h \
  ../Common/Message.h
F_Geometry.o: F_Geometry.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ../Interface/ProDefine.h \
  ../Interface/ProData.h GeoData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h \
  Get_Geometry.h F.h ../Numeric/NumericUtils.h ../Common/MallocUtils.h \
  ../Common/Message.h
F_Interpolation.o: F_Interpolation.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h F.h \
  ../Common/MallocUtils.h ../Common/Message.h
F_Hysteresis.o: F_Hysteresis.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h F.h ../Common/Message.h
F_Math.o: F_Math.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h F.h ../Common/MallocUtils.h ../Common/Message.h
F_Misc.o: F_Misc.cpp ../Common/GetDPConfig.h ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ../Interface/ProDefine.h \
  ../Interface/ProData.h F.h ../Common/Message.h Cal_Value.h
F_MultiHar.o: F_MultiHar.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ../Interface/ProDefine.h \
  ../Interface/ProData.h DofData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h LinAlg.h \
  ../Common/GetDPConfig.h ../contrib/Sparskit/Sparskit.h \
  ../Common/ListUtils.h F.h Get_Geometry.h Get_FunctionValue.h \
  Cal_Quantity.h ../Common/MallocUtils.h ../Common/Message.h
F_Raytracing.o: F_Raytracing.cpp ../Common/GetDPConfig.h \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  F.h ../Common/Message.h
F_Gmsh.o: F_Gmsh.cpp ../Common/GetDPConfig.h ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h F.h ../Common/Message.h
F_DiffGeom.o: F_DiffGeom.cpp ../Common/GetDPConfig.h ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h F.h ../Common/Message.h
BF_Node.o: BF_Node.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ../Common/Message.h
BF_NodeXYZ.o: BF_NodeXYZ.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h BF.h Get_Geometry.h \
  ../Common/Message.h
BF_Node_2.o: BF_Node_2.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ../Common/Message.h
BF_Node_3.o: BF_Node_3.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ../Common/Message.h
BF_Edge.o: BF_Edge.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ../Common/Message.h
BF_Edge_2.o: BF_Edge_2.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ../Common/Message.h
BF_Edge_3.o: BF_Edge_3.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h GeoData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h \
  ../Common/Message.h
BF_Edge_4.o: BF_Edge_4.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ../Common/Message.h
BF_Facet.o: BF_Facet.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ../Common/Message.h
BF_Volume.o: BF_Volume.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ../Common/Message.h
BF_Region.o: BF_Region.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h BF.h Get_DofOfElement.h Pos_FemInterpolation.h \
  Cal_Quantity.h ../Common/ListUtils.h ../Common/MallocUtils.h \
  ../Common/Message.h
BF_Perpendicular.o: BF_Perpendicular.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h BF.h
BF_GroupOfEntities.o: BF_GroupOfEntities.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h BF.h Get_Geometry.h
GF_Helmholtz.o: GF_Helmholtz.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GF.h Cal_Value.h \
  GeoData.h ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h ../Common/Message.h
GF_HelmholtzxForm.o: GF_HelmholtzxForm.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ../Interface/ProDefine.h \
  ../Interface/ProData.h BF.h GF.h Gauss.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h ../Common/Message.h
GF_Laplace.o: GF_Laplace.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GF.h ../Common/Message.h
GF_LaplacexForm.o: GF_LaplacexForm.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ../Interface/ProDefine.h \
  ../Interface/ProData.h BF.h GF.h GeoData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h \
  ../Common/Message.h
Gauss_Point.o: Gauss_Point.cpp
Gauss_Line.o: Gauss_Line.cpp Gauss.h Gauss_Line.h ../Common/Message.h \
  ../Common/MallocUtils.h
Gauss_Triangle.o: Gauss_Triangle.cpp Gauss.h Gauss_Triangle.h \
  ../Common/Message.h ../Common/MallocUtils.h
Gauss_Quadrangle.o: Gauss_Quadrangle.cpp Gauss.h Gauss_Quadrangle.h \
  ../Common/Message.h ../Common/MallocUtils.h
Gauss_Tetrahedron.o: Gauss_Tetrahedron.cpp Gauss.h Gauss_Tetrahedron.h \
  ../Common/Message.h ../Common/MallocUtils.h
Gauss_Hexahedron.o: Gauss_Hexahedron.cpp Gauss.h Gauss_Hexahedron.h \
  ../Common/Message.h ../Common/MallocUtils.h
Gauss_Prism.o: Gauss_Prism.cpp Gauss_Prism.h ../Common/Message.h
Gauss_Pyramid.o: Gauss_Pyramid.cpp Gauss_Pyramid.h ../Common/Message.h
GeoData.o: GeoData.cpp GeoData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  ../Common/MallocUtils.h ../Common/Message.h
GeoEntity.o: GeoEntity.cpp GeoData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  GeoEntity.h ../Common/MallocUtils.h ../Common/Message.h
GeoNormal.o: GeoNormal.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h GeoData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h \
  ../Common/MallocUtils.h ../Common/Message.h
GeoTree.o: GeoTree.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h GeoData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h
DofData.o: DofData.cpp ../Common/GetDPVersion.h ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h DofData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h GeoData.h \
  ExtendedGroup.h ../Common/MallocUtils.h ../Common/Message.h
LinAlg.o: LinAlg.cpp ../Common/GetDPConfig.h LinAlg.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h \
  ../Common/Message.h
LinAlg_PETSC.o: LinAlg_PETSC.cpp ../Common/GetDPConfig.h LinAlg.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h \
  ../Common/MallocUtils.h ../Common/Message.h ../Common/OS.h \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  DofData.h ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h
LinAlg_SPARSKIT.o: LinAlg_SPARSKIT.cpp ../Common/GetDPConfig.h LinAlg.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  DofData.h ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h ../Common/MallocUtils.h ../Common/Message.h
SolvingAnalyse.o: SolvingAnalyse.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h \
  Treatment_Formulation.h Cal_Quantity.h Get_DofOfElement.h \
  Pos_Formulation.h SolvingOperations.h ../Common/MallocUtils.h \
  ../Common/Message.h
SolvingOperations.o: SolvingOperations.cpp ../Common/GetDPConfig.h \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  ../Interface/ProDefine.h ../Interface/ProData.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../contrib/Sparskit/Sparskit.h \
  ../Common/ListUtils.h BF.h Cal_Quantity.h Cal_Value.h \
  Get_DofOfElement.h ExtendedGroup.h MovingBand2D.h Pos_Search.h \
  EigenSolve.h Treatment_Formulation.h SolvingAnalyse.h \
  SolvingOperations.h ../Common/MallocUtils.h ../Common/OS.h \
  ../Common/Message.h
Treatment_Formulation.o: Treatment_Formulation.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h Get_DofOfElement.h \
  Get_ElementSource.h Pre_TermOfFemEquation.h \
  Cal_GalerkinTermOfFemEquation.h Cal_GlobalTermOfFemEquation.h \
  Cal_AssembleTerm.h Generate_Network.h ExtendedGroup.h \
  ../Common/Message.h
Get_DofOfElement.o: Get_DofOfElement.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h Get_DofOfElement.h \
  Get_ConstraintOfElement.h ExtendedGroup.h Cal_Quantity.h \
  ../Common/Message.h
Get_ConstraintOfElement.o: Get_ConstraintOfElement.cpp \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  GeoData.h ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h Get_DofOfElement.h Get_ConstraintOfElement.h \
  ExtendedGroup.h Cal_Quantity.h Cal_Value.h ../Common/MallocUtils.h \
  ../Common/Message.h
Get_FunctionValue.o: Get_FunctionValue.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h Cal_Quantity.h \
  Get_Geometry.h ../Common/Message.h
Get_Geometry.o: Get_Geometry.cpp ../Common/GetDPConfig.h \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  ../Interface/ProDefine.h ../Interface/ProData.h Get_Geometry.h \
  GeoData.h ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h BF.h ../Common/Message.h
Get_ElementSource.o: Get_ElementSource.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h ExtendedGroup.h Get_Geometry.h \
  ../Common/Message.h
ExtendedGroup.o: ExtendedGroup.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ../Interface/ProDefine.h \
  ../Interface/ProData.h ExtendedGroup.h ../Common/ListUtils.h GeoData.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h \
  ../Common/Message.h
Pre_TermOfFemEquation.o: Pre_TermOfFemEquation.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h DofData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h Get_DofOfElement.h \
  ExtendedGroup.h BF.h ../Common/Message.h
Generate_Network.o: Generate_Network.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ../Common/ListUtils.h \
  ../Common/MallocUtils.h ../Common/Message.h
Cal_GalerkinTermOfFemEquation.o: Cal_GalerkinTermOfFemEquation.cpp \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  ../Interface/ProDefine.h ../Interface/ProData.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h Cal_Quantity.h \
  Cal_Value.h Cal_IntegralQuantity.h Cal_AnalyticIntegration.h \
  Cal_AssembleTerm.h Cal_GalerkinTermOfFemEquation.h Get_DofOfElement.h \
  Get_ElementSource.h Get_Geometry.h Get_FunctionValue.h Pos_Search.h \
  ../Common/Message.h
Cal_GlobalTermOfFemEquation.o: Cal_GlobalTermOfFemEquation.cpp \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  GeoData.h ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h Cal_Quantity.h \
  Cal_Value.h Cal_AssembleTerm.h Get_DofOfElement.h Get_Geometry.h \
  ../Common/Message.h
Cal_IntegralQuantity.o: Cal_IntegralQuantity.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ../Interface/ProDefine.h \
  ../Interface/ProData.h BF.h Cal_Quantity.h ../Common/ListUtils.h \
  Cal_Value.h Get_Geometry.h Get_FunctionValue.h ../Common/Message.h
Cal_AnalyticIntegration.o: Cal_AnalyticIntegration.cpp \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  BF.h ../Common/Message.h
Cal_Quantity.o: Cal_Quantity.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h F.h Cal_Quantity.h \
  Cal_Value.h Get_Geometry.h Pos_FemInterpolation.h Pos_Search.h \
  Get_FunctionValue.h ../Common/MallocUtils.h ../Common/Message.h
Cal_Value.o: Cal_Value.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ../Interface/ProDefine.h ../Interface/ProData.h \
  Cal_Value.h ../Common/Message.h
Cal_AssembleTerm.o: Cal_AssembleTerm.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h DofData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h \
  ../Common/Message.h
Cal_PostQuantity.o: Cal_PostQuantity.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ../Interface/ProDefine.h \
  ../Interface/ProData.h GeoData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h \
  Get_DofOfElement.h Cal_Quantity.h Cal_Value.h Get_Geometry.h \
  Get_FunctionValue.h ExtendedGroup.h Pos_Formulation.h \
  ../Common/MallocUtils.h ../Common/Message.h
MovingBand2D.o: MovingBand2D.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ExtendedGroup.h \
  ../Common/ListUtils.h GeoData.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h ../Common/MallocUtils.h ../Common/Message.h
EigenSolve.o: EigenSolve.cpp ../Common/GetDPConfig.h ../Common/Message.h \
  EigenSolve.h DofData.h ../Common/ListUtils.h ../Common/TreeUtils.h \
  ../Common/avl.h ../Common/ListUtils.h LinAlg.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h
EigenSolve_ARPACK.o: EigenSolve_ARPACK.cpp ../Common/GetDPConfig.h \
  ../Common/Message.h ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h DofData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h LinAlg.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h \
  ../Common/MallocUtils.h
EigenSolve_SLEPC.o: EigenSolve_SLEPC.cpp ../Common/GetDPConfig.h
Pos_FemInterpolation.o: Pos_FemInterpolation.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h Get_DofOfElement.h \
  Get_ElementSource.h Get_Geometry.h Get_FunctionValue.h \
  Cal_IntegralQuantity.h Pos_Search.h ../Common/Message.h
Pos_Formulation.o: Pos_Formulation.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h DofData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h Get_DofOfElement.h \
  Pos_Print.h Pos_Format.h ../Common/Message.h
Pos_Print.o: Pos_Print.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h GeoData.h ../Common/ListUtils.h \
  ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h \
  Cal_PostQuantity.h Get_Geometry.h Get_DofOfElement.h \
  Get_FunctionValue.h ExtendedGroup.h Cal_Quantity.h Cal_Value.h \
  Pos_Formulation.h Pos_Element.h Pos_Search.h Pos_Print.h Pos_Format.h \
  ../Numeric/Adapt.h ../Common/MallocUtils.h ../Common/Message.h
Pos_Element.o: Pos_Element.cpp Pos_Element.h ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h ../Common/ListUtils.h \
  GeoData.h ../Common/TreeUtils.h ../Common/avl.h ../Common/ListUtils.h \
  Get_Geometry.h Get_DofOfElement.h Cal_Value.h ../Common/MallocUtils.h \
  ../Common/Message.h
Pos_Format.o: Pos_Format.cpp ../Common/GetDPVersion.h \
  ../Interface/ProData.h ../Common/GetDPConfig.h ../Common/ListUtils.h \
  ../Interface/ProDefine.h ../Interface/ProData.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h DofData.h LinAlg.h ../Common/GetDPConfig.h \
  ../contrib/Sparskit/Sparskit.h ../Common/ListUtils.h Pos_Iso.h \
  Pos_Element.h Pos_Format.h Pos_Formulation.h F.h Cal_Value.h \
  Cal_Quantity.h ../Common/MallocUtils.h ../Common/Message.h
Pos_Iso.o: Pos_Iso.cpp ../Interface/ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h Pos_Element.h ../Common/ListUtils.h \
  ../Common/Message.h
Pos_Search.o: Pos_Search.cpp ../Interface/ProData.h \
  ../Common/GetDPConfig.h ../Common/ListUtils.h GeoData.h \
  ../Common/ListUtils.h ../Common/TreeUtils.h ../Common/avl.h \
  ../Common/ListUtils.h Get_Geometry.h Pos_Search.h Get_DofOfElement.h \
  ../Common/Message.h
