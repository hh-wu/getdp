# $Id: Makefile,v 1.29 2003-04-28 03:54:32 geuzaine Exp $
#
# Copyright (C) 1997-2003 P. Dular, C. Geuzaine
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
# USA.
# 
# Please report all bugs and problems to "getdp@geuz.org".

include ../variables

LIB     = ../lib/libMain.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../Function\
          -I../GeoData -I../Integration -I../Numeric -I../Post\
          -I../Sparskit -I../FMM -I../NR
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE}

SRC = Main.c Message.c \
        SolvingAnalyse.c SolvingOperations.c \
          Treatment_Formulation.c \
              Get_DofOfElement.c \
              Get_ConstraintOfElement.c \
                Get_FunctionValue.c \
                Get_Geometry.c \
                Get_ElementSource.c \
                Get_Cells.c \
              ExtendedGroup.c \
              Pre_TermOfFemEquation.c \
                Generate_Network.c \
              Par_TermOfFemEquation.c \
              Cal_GalerkinTermOfFemEquation.c \
              Cal_deRhamTermOfFemEquation.c \
              Cal_GlobalTermOfFemEquation.c \
                Cal_vBFxDof.c \
                Cal_IntegralQuantity.c \
                Cal_AnalyticIntegration.c \
                Cal_Quantity.c \
                Cal_Value.c \
                Cal_AssembleTerm.c \
                Cal_SolidAngle.c \
      MovingBand2D.c \
      Get_Define.c \
      Graph.c \
      Print_ProblemStructure.c \
      GmshClient.c \
      Pre_GetDofFMMGroup.c

OBJ = ${SRC:.c=.o}

${LIB}: ${OBJ}
	${AR} ${LIB} ${OBJ}
	${RANLIB} ${LIB}


clean:
	rm -f *.o

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CC} -MM ${CFLAGS} ${SRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

nodepend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

# DO NOT DELETE THIS LINE
Main.o: Main.c ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  Init_Problem.h Data_Passive.h ../DataStr/List.h Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/Tree.h \
  ../DataStr/avl.h Print_ProblemStructure.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../include/Magic.h GmshClient.h
Message.o: Message.c ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  ../include/GetDPVersion.h CurrentData.h Data_Active.h Data_Passive.h \
  ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h GmshClient.h
SolvingAnalyse.o: SolvingAnalyse.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h Init_Problem.h Cal_Quantity.h Cal_Value.h \
  ../DataStr/Tools.h Data_DefineE.h ../Numeric/Numeric.h \
  Get_DofOfElement.h CurrentData.h ../include/Magic.h
SolvingOperations.o: SolvingOperations.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h Init_Problem.h Cal_Quantity.h Cal_Value.h \
  ../DataStr/Tools.h Data_DefineE.h ../Numeric/Numeric.h \
  Get_DofOfElement.h CurrentData.h ../include/Magic.h ../FMM/F_FMM.h \
  ../FMM/Data_FMM.h ../FMM/F_FMMOperations.h ../FMM/F_FMM_DTA.h
Treatment_Formulation.o: Treatment_Formulation.c ../include/GetDP.h \
  Message.h ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Get_DofOfElement.h ExtendedGroup.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h CurrentData.h ../include/Magic.h \
  ../DataStr/Tools.h ../FMM/F_FMM.h ../FMM/Data_FMM.h ../FMM/F_FMM_DTA.h \
  Pre_GetDofFMMGroup.h
Get_DofOfElement.o: Get_DofOfElement.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Get_DofOfElement.h Data_Active.h Data_Passive.h \
  ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ExtendedGroup.h Cal_Quantity.h Cal_Value.h CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h
Get_ConstraintOfElement.o: Get_ConstraintOfElement.c ../include/GetDP.h \
  Message.h ../DataStr/Malloc.h Get_DofOfElement.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ExtendedGroup.h Cal_Quantity.h Cal_Value.h CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h
Get_FunctionValue.o: Get_FunctionValue.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Cal_Quantity.h Cal_Value.h Get_Geometry.h CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Numeric/Numeric.h \
  ../DataStr/Tools.h
Get_Geometry.o: Get_Geometry.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Get_Geometry.h Data_Active.h Data_Passive.h \
  ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Function/BF_Function.h ../Numeric/Numeric.h Data_DefineE.h \
  ../Sparskit/Solver.h
Get_ElementSource.o: Get_ElementSource.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ExtendedGroup.h Get_Geometry.h CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h
Get_Cells.o: Get_Cells.c ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  Get_Geometry.h Data_Active.h Data_Passive.h ../DataStr/List.h \
  Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h Get_Cells.h CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Numeric/Numeric.h
ExtendedGroup.o: ExtendedGroup.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h ExtendedGroup.h Data_Active.h Data_Passive.h \
  ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Data_DefineE.h CurrentData.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h Graph.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../DataStr/Tools.h
Pre_TermOfFemEquation.o: Pre_TermOfFemEquation.c ../include/GetDP.h \
  Message.h ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Get_DofOfElement.h ExtendedGroup.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h CurrentData.h ../include/Magic.h \
  ../DataStr/Tools.h
Generate_Network.o: Generate_Network.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Data_Active.h Data_Passive.h ../DataStr/List.h \
  Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h Treatment_Formulation.h \
  ../DataStr/Tools.h
Par_TermOfFemEquation.o: Par_TermOfFemEquation.c ../include/GetDP.h \
  Message.h ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Get_DofOfElement.h CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h
Cal_GalerkinTermOfFemEquation.o: Cal_GalerkinTermOfFemEquation.c \
  ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  Treatment_Formulation.h Data_Active.h Data_Passive.h ../DataStr/List.h \
  Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h Cal_Quantity.h Cal_Value.h \
  Get_DofOfElement.h Get_Geometry.h Data_DefineE.h CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h \
  ../FMM/F_FMM.h ../FMM/Data_FMM.h
Cal_deRhamTermOfFemEquation.o: Cal_deRhamTermOfFemEquation.c \
  ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  Treatment_Formulation.h Data_Active.h Data_Passive.h ../DataStr/List.h \
  Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h Cal_Quantity.h Cal_Value.h \
  Get_DofOfElement.h Get_Geometry.h Get_Cells.h ../Post/Pos_Search.h \
  ../Numeric/Numeric.h Data_DefineE.h CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h
Cal_GlobalTermOfFemEquation.o: Cal_GlobalTermOfFemEquation.c \
  ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  Treatment_Formulation.h Data_Active.h Data_Passive.h ../DataStr/List.h \
  Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h Cal_Quantity.h Cal_Value.h \
  Get_DofOfElement.h Get_Geometry.h CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h
Cal_vBFxDof.o: Cal_vBFxDof.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Cal_Quantity.h Cal_Value.h Get_Geometry.h ../Post/Pos_Search.h \
  CurrentData.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h Graph.h ../DofData/Data_DofData.h \
  ../include/Magic.h Data_DefineE.h
Cal_IntegralQuantity.o: Cal_IntegralQuantity.c ../include/GetDP.h \
  Message.h ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Get_Geometry.h Get_Cells.h ../Function/BF_Function.h CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h Cal_Quantity.h Cal_Value.h \
  Data_DefineE.h ../DataStr/Tools.h ../Post/Pos_Search.h
Cal_AnalyticIntegration.o: Cal_AnalyticIntegration.c ../include/GetDP.h \
  Message.h ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Function/BF_Function.h
Cal_Quantity.o: Cal_Quantity.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Cal_Quantity.h Data_Active.h Data_Passive.h \
  ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Cal_Value.h Treatment_Formulation.h Get_Geometry.h ../Post/Pos_Search.h \
  ../Function/F_Function.h CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Numeric/Numeric.h \
  ../DataStr/Tools.h
Cal_Value.o: Cal_Value.c ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Data_DefineE.h Cal_Value.h CurrentData.h Data_Active.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Numeric/Numeric.h
Cal_AssembleTerm.o: Cal_AssembleTerm.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../Numeric/Numeric.h CurrentData.h \
  ../include/Magic.h
Cal_SolidAngle.o: Cal_SolidAngle.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h Cal_Quantity.h \
  Data_Active.h Data_Passive.h Data_Element.h Cal_Value.h CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Numeric/Numeric.h
MovingBand2D.o: MovingBand2D.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h ExtendedGroup.h Data_Active.h Data_Passive.h \
  ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Data_DefineE.h CurrentData.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h Graph.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../DataStr/Tools.h
Get_Define.o: Get_Define.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Data_Active.h Data_Passive.h ../DataStr/List.h \
  Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Function/BF_Function.h \
  ../Integration/Quadrature.h Data_Define.h Data_DefineE.h \
  ../Function/Data_Function.h ../Function/F_Function.h \
  ../Function/GF_Function.h ../FMM/F_FMM.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../FMM/Data_FMM.h Cal_Quantity.h Cal_Value.h \
  CurrentData.h ../include/Magic.h ../Numeric/Adapt.h
Graph.o: Graph.c ../include/GetDP.h Message.h ../DataStr/Malloc.h Graph.h \
  ../DataStr/List.h ../DofData/DofData.h ../DataStr/Tree.h \
  ../DataStr/avl.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../DofData/Data_DofData.h ../include/Compat.h
Print_ProblemStructure.o: Print_ProblemStructure.c ../include/GetDP.h \
  Message.h ../DataStr/Malloc.h Data_Active.h Data_Passive.h \
  ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Data_DefineE.h Print_ProblemStructure.h Treatment_Formulation.h \
  CurrentData.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h Graph.h ../DofData/Data_DofData.h \
  ../include/Magic.h GmshClient.h
GmshClient.o: GmshClient.c
Pre_GetDofFMMGroup.o: Pre_GetDofFMMGroup.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Get_DofOfElement.h CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h \
  ../FMM/F_FMM.h ../FMM/Data_FMM.h
