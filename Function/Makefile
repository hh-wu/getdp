# $Id: Makefile,v 1.9 2001-03-02 20:49:11 geuzaine Exp $
#
# Makefile for "libFunction.a"
#

.IGNORE:

C_FLAGS = -g -DUSE_DEBUG
RANLIB  = /usr/bin/ranlib

LIB     = ../lib/libFunction.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData -I../Main\
          -I../Numeric -I../Sparskit

SOLVER = -D_SPARSKIT

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(SOLVER_FLAGS) $(SOLVER) $(INCLUDE)

SRC = F_Analytic.c \
      F_Coord.c \
      F_Math.c \
      F_ExtMath.c \
      F_Misc.c \
      F_Type.c \
      F_MultiHar.c \
      BF_Node.c \
      BF_Node_2.c \
      BF_Node_3.c \
      BF_Edge.c \
      BF_Edge_2.c \
      BF_Edge_3.c \
      BF_Edge_4.c \
      BF_Facet.c \
      BF_Volume.c \
      BF_Perpendicular.c \
      BF_GroupOfEntities.c \
      BF_NodeXYZ.c \
      BF_Region.c \
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
F_Analytic.o: F_Analytic.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Numeric/Numeric.h \
  ../Numeric/nrutil.h ../Numeric/Numeric_F.h ../include/Compat.h \
  ../Main/Get_Geometry.h ../Main/Cal_Value.h ../Main/CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Graph.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../Main/Data_Numeric.h
F_Coord.o: F_Coord.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Get_Geometry.h \
  ../Main/Cal_Value.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Main/Data_Numeric.h
F_Math.o: F_Math.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Get_Geometry.h \
  ../Main/Cal_Value.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Main/Data_Numeric.h
F_ExtMath.o: F_ExtMath.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Get_Geometry.h \
  ../Main/Cal_Value.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Main/Data_Numeric.h
F_Misc.o: F_Misc.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Get_Geometry.h \
  ../Main/Cal_Value.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Main/Data_Numeric.h \
  ../DataStr/Tools.h
F_Type.o: F_Type.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Get_Geometry.h \
  ../Main/Cal_Value.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Main/Data_Numeric.h
F_MultiHar.o: F_MultiHar.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Get_Geometry.h \
  ../Main/Cal_Value.h ../Main/Cal_Quantity.h ../Main/CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Graph.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../Main/Data_Numeric.h ../DataStr/Tools.h
BF_Node.o: BF_Node.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Numeric.h
BF_Node_2.o: BF_Node_2.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
BF_Node_3.o: BF_Node_3.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
BF_Edge.o: BF_Edge.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
BF_Edge_2.o: BF_Edge_2.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
BF_Edge_3.o: BF_Edge_3.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h BF_Function.h
BF_Edge_4.o: BF_Edge_4.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
BF_Facet.o: BF_Facet.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
BF_Volume.o: BF_Volume.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
BF_Perpendicular.o: BF_Perpendicular.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h BF_Function.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h
BF_GroupOfEntities.o: BF_GroupOfEntities.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h BF_Function.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Data_Passive.h
BF_NodeXYZ.o: BF_NodeXYZ.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Get_Geometry.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../DataStr/List.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/Tree.h \
  ../DataStr/avl.h BF_Function.h
BF_Region.o: BF_Region.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Get_DofOfElement.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../Main/CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Graph.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../Main/Treatment_Formulation.h
GF_Laplace.o: GF_Laplace.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/CurrentData.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../Main/Graph.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Main/Data_Numeric.h
GF_LaplacexForm.o: GF_LaplacexForm.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  BF_Function.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Main/Data_Numeric.h \
  ../Main/Data_DefineE.h ../Numeric/Numeric_F.h ../include/Compat.h
GF_Helmholtz.o: GF_Helmholtz.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Cal_Value.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Main/Data_Numeric.h
