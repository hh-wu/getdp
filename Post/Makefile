# $Id: Makefile,v 1.16 2001-07-26 10:23:34 geuzaine Exp $
#
# Makefile for 'libPost.a'
# 

.IGNORE:

RANLIB  = /usr/bin/ranlib

SOLVER = -D_SPARSKIT

C_FLAGS = -g

LIB     = ../lib/libPost.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData\
          -I../Main -I../Numeric -I../Sparskit -I../Function

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(SOLVER) $(INCLUDE) 

SRC = Pos_FemInterpolation.c \
      Pos_Interactive.c \
        Pos_ReadLine.c \
      Pos_Formulation.c \
        Pos_Print.c \
        Pos_Quantity.c \
        Pos_Element.c \
        Pos_Iso.c \
        Pos_Search.c \
        Pos_Format.c

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
Pos_FemInterpolation.o: Pos_FemInterpolation.c ../include/GetDP.h \
 ../Main/Message.h ../DataStr/Malloc.h ../Main/Treatment_Formulation.h \
 ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
 ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
 ../DataStr/Tree.h ../DataStr/avl.h ../Main/Get_DofOfElement.h \
 ../Main/Get_Geometry.h ../DofData/DofData.h ../DofData/LinAlg.h \
 ../Sparskit/Solver.h ../Main/Graph.h ../DofData/Data_DofData.h \
 Pos_Search.h ../Main/CurrentData.h ../include/Magic.h \
 ../DataStr/Tools.h
Pos_Interactive.o: Pos_Interactive.c ../include/GetDP.h \
 ../Main/Message.h ../DataStr/Malloc.h ../Main/Treatment_Formulation.h \
 ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
 ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
 ../DataStr/Tree.h ../DataStr/avl.h Pos_Formulation.h \
 Pos_Interactive.h ../Main/CurrentData.h ../DofData/DofData.h \
 ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
 ../DofData/Data_DofData.h ../include/Magic.h
Pos_ReadLine.o: Pos_ReadLine.c
Pos_Formulation.o: Pos_Formulation.c ../include/GetDP.h \
 ../Main/Message.h ../DataStr/Malloc.h ../Main/Data_Passive.h \
 ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
 ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
 ../Main/Data_Numeric.h ../Main/Treatment_Formulation.h \
 ../Main/Data_Active.h ../Main/CurrentData.h ../DofData/DofData.h \
 ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
 ../DofData/Data_DofData.h ../include/Magic.h \
 ../Main/Get_DofOfElement.h Pos_Formulation.h Pos_Print.h Pos_Format.h \
 ../Main/Socket.h
Pos_Print.o: Pos_Print.c ../include/GetDP.h ../Main/Message.h \
 ../DataStr/Malloc.h ../Main/Data_Passive.h ../DataStr/List.h \
 ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
 ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Numeric.h \
 ../Main/Treatment_Formulation.h ../Main/Data_Active.h \
 ../Main/Get_Geometry.h ../Main/CurrentData.h ../DofData/DofData.h \
 ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
 ../DofData/Data_DofData.h ../include/Magic.h \
 ../Main/Get_DofOfElement.h ../Main/Cal_Quantity.h ../Main/Cal_Value.h \
 Pos_Formulation.h Pos_Quantity.h Pos_Element.h Pos_Search.h \
 Pos_Print.h Pos_Format.h ../Numeric/Adapt.h ../DataStr/Tools.h
Pos_Quantity.o: Pos_Quantity.c ../include/GetDP.h ../Main/Message.h \
 ../DataStr/Malloc.h ../Main/Treatment_Formulation.h \
 ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
 ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
 ../DataStr/Tree.h ../DataStr/avl.h Pos_Formulation.h Pos_Quantity.h \
 ../Main/Get_DofOfElement.h ../Main/Cal_Quantity.h ../Main/Cal_Value.h \
 ../Main/Get_Geometry.h ../Main/Data_DefineE.h ../Main/CurrentData.h \
 ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
 ../Main/Graph.h ../DofData/Data_DofData.h ../include/Magic.h \
 ../DataStr/Tools.h
Pos_Element.o: Pos_Element.c ../include/GetDP.h ../Main/Message.h \
 ../DataStr/Malloc.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
 ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h \
 ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Data_Passive.h \
 ../Main/Data_Element.h ../Main/Get_DofOfElement.h Pos_Element.h \
 ../Main/Cal_Value.h
Pos_Iso.o: Pos_Iso.c ../include/GetDP.h ../Main/Message.h \
 ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
 ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
 ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
 ../Main/Data_Numeric.h ../Main/CurrentData.h ../DofData/DofData.h \
 ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
 ../DofData/Data_DofData.h ../include/Magic.h Pos_Iso.h Pos_Element.h
Pos_Search.o: Pos_Search.c ../include/GetDP.h ../Main/Message.h \
 ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
 ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
 ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
 ../Main/Get_Geometry.h Pos_Search.h ../Main/Get_DofOfElement.h \
 ../Main/CurrentData.h ../DofData/DofData.h ../DofData/LinAlg.h \
 ../Sparskit/Solver.h ../Main/Graph.h ../DofData/Data_DofData.h \
 ../include/Magic.h ../DataStr/Tools.h ../Main/Data_Numeric.h
Pos_Format.o: Pos_Format.c ../include/GetDP.h ../Main/Message.h \
 ../DataStr/Malloc.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
 ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h \
 ../Main/Data_Passive.h ../Main/Data_Element.h ../Main/Data_DefineE.h \
 ../Main/Data_Numeric.h ../include/Version.h ../Main/CurrentData.h \
 ../Main/Data_Active.h ../DofData/DofData.h ../DofData/LinAlg.h \
 ../Sparskit/Solver.h ../Main/Graph.h ../DofData/Data_DofData.h \
 ../include/Magic.h Pos_Iso.h Pos_Format.h Pos_Element.h \
 ../Function/F_Function.h ../Main/Cal_Value.h
