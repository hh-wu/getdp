#
# Makefile for "libFunction.a"
#

.IGNORE:

C_FLAGS = -g
RANLIB  = /usr/bin/ranlib

LIB     = ../lib/libFunction.a
INCLUDE = -I../include

SOLVER = -D_SPARSKIT

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(SOLVER_FLAGS) $(SOLVER) $(INCLUDE)

SRC = F_Analytic.c \
      F_Coord.c \
      F_Math.c \
      F_ExtMath.c \
      F_Misc.c \
      F_Type.c \
      BF_Node.c \
      BF_Edge.c \
      BF_Facet.c \
      BF_Volume.c \
      BF_GroupOfEntities.c \
      BF_Region.c \
      HBF_Node_2.c \
      HBF_Node_3.c \
      HBF_Edge_2.c \
      HBF_Edge_3.c \
      HBF_Edge_4.c \
      HBF_GroupOfEntities_2.c \
      GF_Laplace.c \
      GF_LaplacexForm.c \
      GF_Helmholtz.c

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
F_Analytic.o: F_Analytic.c ../include/Data_DefineE.h \
 ../include/../Main/Data_DefineE.h F_Function.h \
 ../include/Data_Active.h ../include/../Main/Data_Active.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Numeric.h ../include/../Numeric/Numeric.h \
 ../include/../Numeric/nrutil.h ../include/Numeric_F.h \
 ../include/../Numeric/Numeric_F.h ../include/Compat.h \
 ../include/Get_Geometry.h ../include/../Main/Get_Geometry.h \
 ../include/Cal_Value.h ../include/../Main/Cal_Value.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/DofData.h ../include/../DofData/DofData.h \
 ../include/../DofData/LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/Graph.h \
 ../include/../Main/Graph.h ../include/../DofData/Data_DofData.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h
F_Coord.o: F_Coord.c ../include/Data_DefineE.h \
 ../include/../Main/Data_DefineE.h F_Function.h \
 ../include/Data_Active.h ../include/../Main/Data_Active.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Get_Geometry.h ../include/../Main/Get_Geometry.h \
 ../include/Cal_Value.h ../include/../Main/Cal_Value.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/DofData.h ../include/../DofData/DofData.h \
 ../include/../DofData/LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/Graph.h \
 ../include/../Main/Graph.h ../include/../DofData/Data_DofData.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h
F_Math.o: F_Math.c ../include/Data_DefineE.h \
 ../include/../Main/Data_DefineE.h F_Function.h \
 ../include/Data_Active.h ../include/../Main/Data_Active.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Get_Geometry.h ../include/../Main/Get_Geometry.h \
 ../include/Cal_Value.h ../include/../Main/Cal_Value.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/DofData.h ../include/../DofData/DofData.h \
 ../include/../DofData/LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/Graph.h \
 ../include/../Main/Graph.h ../include/../DofData/Data_DofData.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h
F_ExtMath.o: F_ExtMath.c ../include/Data_DefineE.h \
 ../include/../Main/Data_DefineE.h F_Function.h \
 ../include/Data_Active.h ../include/../Main/Data_Active.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Get_Geometry.h ../include/../Main/Get_Geometry.h \
 ../include/Cal_Value.h ../include/../Main/Cal_Value.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/DofData.h ../include/../DofData/DofData.h \
 ../include/../DofData/LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/Graph.h \
 ../include/../Main/Graph.h ../include/../DofData/Data_DofData.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h
F_Misc.o: F_Misc.c ../include/Data_DefineE.h \
 ../include/../Main/Data_DefineE.h F_Function.h \
 ../include/Data_Active.h ../include/../Main/Data_Active.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Get_Geometry.h ../include/../Main/Get_Geometry.h \
 ../include/Cal_Value.h ../include/../Main/Cal_Value.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/DofData.h ../include/../DofData/DofData.h \
 ../include/../DofData/LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/Graph.h \
 ../include/../Main/Graph.h ../include/../DofData/Data_DofData.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h \
 ../include/outil.h ../include/../DataStr/outil.h ../include/ualloc.h \
 ../include/../DataStr/ualloc.h
F_Type.o: F_Type.c ../include/Data_DefineE.h \
 ../include/../Main/Data_DefineE.h F_Function.h \
 ../include/Data_Active.h ../include/../Main/Data_Active.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Get_Geometry.h ../include/../Main/Get_Geometry.h \
 ../include/Cal_Value.h ../include/../Main/Cal_Value.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/DofData.h ../include/../DofData/DofData.h \
 ../include/../DofData/LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/Graph.h \
 ../include/../Main/Graph.h ../include/../DofData/Data_DofData.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h
BF_Node.o: BF_Node.c BF_Function.h ../include/Message.h \
 ../include/../Main/Message.h ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h HBF_Function.h ../include/Data_Numeric.h \
 ../include/../Main/Data_Numeric.h ../include/Get_Geometry.h \
 ../include/../Main/Get_Geometry.h ../include/../Main/Data_Active.h \
 ../include/../Main/Data_Passive.h
BF_Edge.o: BF_Edge.c BF_Function.h ../include/Message.h \
 ../include/../Main/Message.h ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h HBF_Function.h
BF_Facet.o: BF_Facet.c BF_Function.h ../include/Message.h \
 ../include/../Main/Message.h ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h HBF_Function.h
BF_Volume.o: BF_Volume.c BF_Function.h ../include/Message.h \
 ../include/../Main/Message.h ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h HBF_Function.h
BF_GroupOfEntities.o: BF_GroupOfEntities.c BF_Function.h \
 ../include/Message.h ../include/../Main/Message.h \
 ../include/Data_Element.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/../GeoData/Data_GeoData.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 HBF_Function.h ../include/Get_Geometry.h \
 ../include/../Main/Get_Geometry.h ../include/../Main/Data_Active.h \
 ../include/../Main/Data_Passive.h
BF_Region.o: BF_Region.c BF_Function.h ../include/Message.h \
 ../include/../Main/Message.h ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h HBF_Function.h \
 ../include/Get_DofOfElement.h ../include/../Main/Get_DofOfElement.h \
 ../include/../Main/Data_Active.h ../include/../Main/Data_Passive.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/DofData.h ../include/../DofData/DofData.h \
 ../include/../DofData/LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/Graph.h \
 ../include/../Main/Graph.h ../include/../DofData/Data_DofData.h \
 ../include/Treatment_Formulation.h \
 ../include/../Main/Treatment_Formulation.h ../include/ualloc.h \
 ../include/../DataStr/ualloc.h
HBF_Node_2.o: HBF_Node_2.c BF_Function.h ../include/Message.h \
 ../include/../Main/Message.h ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h HBF_Function.h
HBF_Node_3.o: HBF_Node_3.c BF_Function.h ../include/Message.h \
 ../include/../Main/Message.h ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h HBF_Function.h
HBF_Edge_2.o: HBF_Edge_2.c BF_Function.h ../include/Message.h \
 ../include/../Main/Message.h ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h HBF_Function.h
HBF_Edge_3.o: HBF_Edge_3.c BF_Function.h ../include/Message.h \
 ../include/../Main/Message.h ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h HBF_Function.h
HBF_Edge_4.o: HBF_Edge_4.c BF_Function.h ../include/Message.h \
 ../include/../Main/Message.h ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h HBF_Function.h
HBF_GroupOfEntities_2.o: HBF_GroupOfEntities_2.c BF_Function.h \
 ../include/Message.h ../include/../Main/Message.h \
 ../include/Data_Element.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/../GeoData/Data_GeoData.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 HBF_Function.h
GF_Laplace.o: GF_Laplace.c ../include/Data_Active.h \
 ../include/../Main/Data_Active.h ../include/../Main/Data_Passive.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/../Main/Message.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/Message.h ../include/../GeoData/Data_GeoData.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h ../include/CurrentData.h \
 ../include/../Main/CurrentData.h ../include/DofData.h \
 ../include/../DofData/DofData.h ../include/../DofData/LinAlg.h \
 ../include/Solver.h ../include/../Sparskit/Solver.h \
 ../include/Graph.h ../include/../Main/Graph.h \
 ../include/../DofData/Data_DofData.h ../include/Data_Numeric.h \
 ../include/../Main/Data_Numeric.h
GF_LaplacexForm.o: GF_LaplacexForm.c ../include/Data_Active.h \
 ../include/../Main/Data_Active.h ../include/../Main/Data_Passive.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/../Main/Message.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/Message.h ../include/../GeoData/Data_GeoData.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h BF_Function.h ../include/Data_Element.h \
 HBF_Function.h ../include/CurrentData.h \
 ../include/../Main/CurrentData.h ../include/DofData.h \
 ../include/../DofData/DofData.h ../include/../DofData/LinAlg.h \
 ../include/Solver.h ../include/../Sparskit/Solver.h \
 ../include/Graph.h ../include/../Main/Graph.h \
 ../include/../DofData/Data_DofData.h ../include/Data_Numeric.h \
 ../include/../Main/Data_Numeric.h ../include/Data_DefineE.h \
 ../include/../Main/Data_DefineE.h ../include/Numeric_F.h \
 ../include/../Numeric/Numeric_F.h ../include/Compat.h
GF_Helmholtz.o: GF_Helmholtz.c ../include/Data_Active.h \
 ../include/../Main/Data_Active.h ../include/../Main/Data_Passive.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/../Main/Message.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/Message.h ../include/../GeoData/Data_GeoData.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h ../include/Cal_Value.h \
 ../include/../Main/Cal_Value.h ../include/CurrentData.h \
 ../include/../Main/CurrentData.h ../include/DofData.h \
 ../include/../DofData/DofData.h ../include/../DofData/LinAlg.h \
 ../include/Solver.h ../include/../Sparskit/Solver.h \
 ../include/Graph.h ../include/../Main/Graph.h \
 ../include/../DofData/Data_DofData.h ../include/Data_Numeric.h \
 ../include/../Main/Data_Numeric.h
