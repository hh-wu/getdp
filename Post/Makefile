# $Id: Makefile,v 1.6 2000-09-09 07:29:41 geuzaine Exp $
#
# Makefile for 'libPost.a'
# 

.IGNORE:

RANLIB  = /usr/bin/ranlib

SOLVER = -D_SPARSKIT

C_FLAGS = -g

LIB     = ../lib/libPost.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData\
          -I../Main -I../Numeric -I../Sparskit

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
 ../Main/Treatment_Formulation.h ../Main/Data_Active.h \
 ../Main/Data_Passive.h ../DataStr/listman.h ../Main/Message.h \
 ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
 ../DataStr/treeman.h ../DataStr/avl.h ../Main/Get_DofOfElement.h \
 ../Main/Get_Geometry.h ../DofData/DofData.h ../DofData/LinAlg.h \
 ../Sparskit/Solver.h ../Main/Graph.h ../DofData/Data_DofData.h \
 Pos_Search.h ../Main/CurrentData.h ../include/Magic.h \
 ../DataStr/outil.h
Pos_Formulation.o: Pos_Formulation.c ../Main/Data_Passive.h \
 ../DataStr/listman.h ../Main/Message.h ../Main/Data_Element.h \
 ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/treeman.h \
 ../DataStr/avl.h ../Main/Treatment_Formulation.h \
 ../Main/Data_Active.h ../Main/Get_DofOfElement.h \
 ../Main/Cal_Quantity.h ../Main/Cal_Value.h ../Main/Get_Geometry.h \
 Pos_Search.h Pos_Formulation.h ../Numeric/Adapt.h \
 ../Main/CurrentData.h ../DofData/DofData.h ../DofData/LinAlg.h \
 ../Sparskit/Solver.h ../Main/Graph.h ../DofData/Data_DofData.h \
 ../include/Magic.h ../Main/Data_Numeric.h ../DataStr/ualloc.h \
 ../DataStr/outil.h
Pos_Print.o: Pos_Print.c ../Main/Data_Passive.h ../DataStr/listman.h \
 ../Main/Message.h ../Main/Data_Element.h ../GeoData/GeoData.h \
 ../GeoData/Data_GeoData.h ../DataStr/treeman.h ../DataStr/avl.h \
 ../Main/Data_DefineE.h ../Main/Data_Numeric.h ../include/Version.h \
 ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
 ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
 ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/ualloc.h
Pos_Element.o: Pos_Element.c ../Main/Treatment_Formulation.h \
 ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/listman.h \
 ../Main/Message.h ../Main/Data_Element.h ../GeoData/GeoData.h \
 ../GeoData/Data_GeoData.h ../DataStr/treeman.h ../DataStr/avl.h \
 Pos_Formulation.h ../Main/Get_DofOfElement.h ../Main/Cal_Quantity.h \
 ../Main/Cal_Value.h ../Main/Get_Geometry.h Pos_Search.h \
 ../Main/Data_DefineE.h ../Main/CurrentData.h ../DofData/DofData.h \
 ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
 ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/outil.h
Pos_Fill.o: Pos_Fill.c ../GeoData/GeoData.h ../Main/Message.h \
 ../GeoData/Data_GeoData.h ../DataStr/listman.h ../DataStr/treeman.h \
 ../DataStr/avl.h ../Main/Get_Geometry.h ../Main/Data_Active.h \
 ../Main/Data_Passive.h ../Main/Data_Element.h \
 ../Main/Get_DofOfElement.h Pos_Formulation.h
Pos_Search.o: Pos_Search.c ../Main/Data_Active.h \
 ../Main/Data_Passive.h ../DataStr/listman.h ../Main/Message.h \
 ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
 ../DataStr/treeman.h ../DataStr/avl.h ../Main/Get_Geometry.h \
 Pos_Search.h ../Main/CurrentData.h ../DofData/DofData.h \
 ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
 ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/outil.h \
 ../Main/Data_Numeric.h
Pos_Interactive.o: Pos_Interactive.c ../Main/Treatment_Formulation.h \
 ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/listman.h \
 ../Main/Message.h ../Main/Data_Element.h ../GeoData/GeoData.h \
 ../GeoData/Data_GeoData.h ../DataStr/treeman.h ../DataStr/avl.h \
 Pos_Formulation.h ../Main/CurrentData.h ../DofData/DofData.h \
 ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
 ../DofData/Data_DofData.h ../include/Magic.h
Pos_ReadLine.o: Pos_ReadLine.c
