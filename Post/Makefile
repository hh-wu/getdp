#
#  Makefile for 'libPost.a'
# 

.IGNORE:

RANLIB  = /usr/bin/ranlib

SOLVER = -D_SPARSKIT

C_FLAGS = -g

LIB     = ../lib/libPost.a
INCLUDE = -I../include 

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(SOLVER) $(INCLUDE) 

SRC = Pos_FemInterpolation.c \
      Pos_Formulation.c \
        Pos_Print.c \
        Pos_Element.c \
        Pos_Fill.c \
        Pos_Search.c \
      Pos_Interactive.c \
        Pos_ReadLine.c

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
Pos_FemInterpolation.o: Pos_FemInterpolation.c \
 ../include/Treatment_Formulation.h \
 ../include/../Main/Treatment_Formulation.h \
 ../include/../Main/Data_Active.h ../include/../Main/Data_Passive.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/../Main/Message.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/Message.h ../include/../GeoData/Data_GeoData.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h ../include/Get_DofOfElement.h \
 ../include/../Main/Get_DofOfElement.h ../include/Get_Geometry.h \
 ../include/../Main/Get_Geometry.h ../include/DofData.h \
 ../include/../DofData/DofData.h ../include/../DofData/LinAlg.h \
 ../include/Solver.h ../include/../Sparskit/Solver.h \
 ../include/Graph.h ../include/../Main/Graph.h \
 ../include/../DofData/Data_DofData.h Pos_Search.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/Magic.h ../include/outil.h ../include/../DataStr/outil.h
Pos_Formulation.o: Pos_Formulation.c ../include/Data_Passive.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Treatment_Formulation.h \
 ../include/../Main/Treatment_Formulation.h \
 ../include/../Main/Data_Active.h ../include/Get_DofOfElement.h \
 ../include/../Main/Get_DofOfElement.h ../include/Cal_Quantity.h \
 ../include/../Main/Cal_Quantity.h ../include/../Main/Cal_Value.h \
 ../include/Get_Geometry.h ../include/../Main/Get_Geometry.h \
 Pos_Search.h Pos_Formulation.h ../include/Adapt.h \
 ../include/../Numeric/Adapt.h ../include/CurrentData.h \
 ../include/../Main/CurrentData.h ../include/DofData.h \
 ../include/../DofData/DofData.h ../include/../DofData/LinAlg.h \
 ../include/Solver.h ../include/../Sparskit/Solver.h \
 ../include/Graph.h ../include/../Main/Graph.h \
 ../include/../DofData/Data_DofData.h ../include/Magic.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h \
 ../include/ualloc.h ../include/../DataStr/ualloc.h ../include/outil.h \
 ../include/../DataStr/outil.h
Pos_Print.o: Pos_Print.c ../include/Data_Passive.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Data_DefineE.h ../include/../Main/Data_DefineE.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h \
 ../include/Version.h ../include/CurrentData.h \
 ../include/../Main/CurrentData.h ../include/../Main/Data_Active.h \
 ../include/DofData.h ../include/../DofData/DofData.h \
 ../include/../DofData/LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/Graph.h \
 ../include/../Main/Graph.h ../include/../DofData/Data_DofData.h \
 ../include/Magic.h ../include/ualloc.h ../include/../DataStr/ualloc.h
Pos_Element.o: Pos_Element.c ../include/Treatment_Formulation.h \
 ../include/../Main/Treatment_Formulation.h \
 ../include/../Main/Data_Active.h ../include/../Main/Data_Passive.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/../Main/Message.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/Message.h ../include/../GeoData/Data_GeoData.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h Pos_Formulation.h \
 ../include/Get_DofOfElement.h ../include/../Main/Get_DofOfElement.h \
 ../include/Cal_Quantity.h ../include/../Main/Cal_Quantity.h \
 ../include/../Main/Cal_Value.h ../include/Get_Geometry.h \
 ../include/../Main/Get_Geometry.h Pos_Search.h \
 ../include/Data_Passive.h ../include/Data_DefineE.h \
 ../include/../Main/Data_DefineE.h ../include/CurrentData.h \
 ../include/../Main/CurrentData.h ../include/DofData.h \
 ../include/../DofData/DofData.h ../include/../DofData/LinAlg.h \
 ../include/Solver.h ../include/../Sparskit/Solver.h \
 ../include/Graph.h ../include/../Main/Graph.h \
 ../include/../DofData/Data_DofData.h ../include/Magic.h \
 ../include/outil.h ../include/../DataStr/outil.h
Pos_Fill.o: Pos_Fill.c ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../Main/Message.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h ../include/Get_Geometry.h \
 ../include/../Main/Get_Geometry.h ../include/../Main/Data_Active.h \
 ../include/../Main/Data_Passive.h ../include/../Main/Data_Element.h \
 ../include/Data_Active.h Pos_Formulation.h
Pos_Search.o: Pos_Search.c ../include/Data_Active.h \
 ../include/../Main/Data_Active.h ../include/../Main/Data_Passive.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/../Main/Message.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/Message.h ../include/../GeoData/Data_GeoData.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h ../include/Get_Geometry.h \
 ../include/../Main/Get_Geometry.h Pos_Search.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/DofData.h ../include/../DofData/DofData.h \
 ../include/../DofData/LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/Graph.h \
 ../include/../Main/Graph.h ../include/../DofData/Data_DofData.h \
 ../include/Magic.h ../include/outil.h ../include/../DataStr/outil.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h
Pos_Interactive.o: Pos_Interactive.c \
 ../include/Treatment_Formulation.h \
 ../include/../Main/Treatment_Formulation.h \
 ../include/../Main/Data_Active.h ../include/../Main/Data_Passive.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/../Main/Message.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/Message.h ../include/../GeoData/Data_GeoData.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h Pos_Formulation.h \
 ../include/Data_Passive.h ../include/CurrentData.h \
 ../include/../Main/CurrentData.h ../include/DofData.h \
 ../include/../DofData/DofData.h ../include/../DofData/LinAlg.h \
 ../include/Solver.h ../include/../Sparskit/Solver.h \
 ../include/Graph.h ../include/../Main/Graph.h \
 ../include/../DofData/Data_DofData.h ../include/Magic.h
ReadLine.o: ReadLine.c
