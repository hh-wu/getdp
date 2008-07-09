# GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
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
        F_Geometry.cpp F_Interpolation.cpp F_Jiles.cpp F_Math.cpp \
        F_Misc.cpp F_MultiHar.cpp F_Raytracing.cpp F_Type.cpp \
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
