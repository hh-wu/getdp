# $Id: Makefile,v 1.10 2001-03-02 20:49:11 geuzaine Exp $
#
# Makefile for 'libMain.a'
# 

.IGNORE:

RANLIB  = /usr/bin/ranlib

C_FLAGS = -g -DUSE_DEBUG
SOLVER  = -D_SPARSKIT

LIB     = ../lib/libMain.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../Function\
          -I../GeoData -I../Integration -I../Numeric -I../Post -I../Sparskit

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(SOLVER_FLAGS) $(SOLVER)\
          $(INCLUDE)

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
      Get_Define.c \
      Graph.c \
      Print_ProblemStructure.c

OBJ = $(SRC:.c=.o)

$(LIB): $(OBJ)
	ar ruvs $(LIB) $(OBJ)
	$(RANLIB) $(LIB)

clean:
	$(RM) $(RMFLAGS) *.o

lint:
	lint $(CFLAGS) $(SRC)

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	$(CC) -MM $(CFLAGS) ${SRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	$(RM) Makefile.new

nodepend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	$(RM) Makefile.new

# DO NOT DELETE THIS LINE
Main.o: Main.c ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  Init_Problem.h Data_Passive.h ../DataStr/List.h Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/Tree.h \
  ../DataStr/avl.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../include/Magic.h
Message.o: Message.c ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  CurrentData.h Data_Active.h Data_Passive.h ../DataStr/List.h \
  Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../include/Version.h
SolvingAnalyse.o: SolvingAnalyse.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h Init_Problem.h Cal_Quantity.h Cal_Value.h \
  ../DataStr/Tools.h Data_DefineE.h Data_Numeric.h Get_DofOfElement.h \
  CurrentData.h ../include/Magic.h
SolvingOperations.o: SolvingOperations.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h Init_Problem.h Cal_Quantity.h Cal_Value.h \
  ../DataStr/Tools.h Data_DefineE.h Data_Numeric.h Get_DofOfElement.h \
  CurrentData.h ../include/Magic.h
Treatment_Formulation.o: Treatment_Formulation.c ../include/GetDP.h \
  Message.h ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Get_DofOfElement.h ExtendedGroup.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h CurrentData.h ../include/Magic.h \
  ../DataStr/Tools.h
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
  ../DofData/Data_DofData.h ../include/Magic.h Data_Numeric.h \
  ../DataStr/Tools.h
Get_Geometry.o: Get_Geometry.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Get_Geometry.h Data_Active.h Data_Passive.h \
  ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Function/BF_Function.h Data_Numeric.h Data_DefineE.h \
  ../Sparskit/Solver.h ../Numeric/Numeric.h ../Numeric/nrutil.h
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
  ../DofData/Data_DofData.h ../include/Magic.h Data_Numeric.h
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
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h
Cal_deRhamTermOfFemEquation.o: Cal_deRhamTermOfFemEquation.c \
  ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  Treatment_Formulation.h Data_Active.h Data_Passive.h ../DataStr/List.h \
  Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h Cal_Quantity.h Cal_Value.h \
  Get_DofOfElement.h Get_Geometry.h Get_Cells.h ../Post/Pos_Search.h \
  Data_Numeric.h Data_DefineE.h CurrentData.h ../DofData/DofData.h \
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
  ../DofData/Data_DofData.h ../include/Magic.h Data_Numeric.h \
  ../DataStr/Tools.h
Cal_Value.o: Cal_Value.c ../include/GetDP.h Message.h ../DataStr/Malloc.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Data_DefineE.h Cal_Value.h CurrentData.h Data_Active.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h Data_Numeric.h
Cal_AssembleTerm.o: Cal_AssembleTerm.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Treatment_Formulation.h Data_Active.h \
  Data_Passive.h ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h Data_Numeric.h CurrentData.h \
  ../include/Magic.h
Cal_SolidAngle.o: Cal_SolidAngle.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h Cal_Quantity.h \
  Data_Active.h Data_Passive.h Data_Element.h Cal_Value.h CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h Data_Numeric.h
Get_Define.o: Get_Define.c ../include/GetDP.h Message.h \
  ../DataStr/Malloc.h Data_Active.h Data_Passive.h ../DataStr/List.h \
  Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Function/BF_Function.h \
  ../Integration/Quadrature.h Data_Define.h Data_DefineE.h \
  ../Function/Data_Function.h ../Function/F_Function.h \
  ../Function/GF_Function.h Cal_Quantity.h Cal_Value.h CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Numeric/Adapt.h
Graph.o: Graph.c ../include/GetDP.h Message.h ../DataStr/Malloc.h Graph.h \
  ../DataStr/List.h ../DofData/DofData.h ../DataStr/Tree.h \
  ../DataStr/avl.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../DofData/Data_DofData.h ../include/Compat.h ../Numeric/nrutil.h
Print_ProblemStructure.o: Print_ProblemStructure.c ../include/GetDP.h \
  Message.h ../DataStr/Malloc.h Init_Problem.h Data_Passive.h \
  ../DataStr/List.h Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  Data_Active.h Data_DefineE.h Treatment_Formulation.h
