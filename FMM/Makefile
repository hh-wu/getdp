# $Id: Makefile,v 1.4 2003-03-18 01:10:14 geuzaine Exp $

include ../variables

LIB     = ../lib/libFMM.a
INCLUDE = -I. -I../Main -I../include -I../DataStr -I../DofData -I../Function\
          -I../GeoData -I../Integration -I../Numeric -I../Post -I../Sparskit
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE}

SRC = FMM_Groups.c FMM_CalDTAmatrices.c FMM_Operations.c Print_FMM.c Cal_FMMAnalyticalIntegral.c

OBJ = $(SRC:.c=.o)

${LIB}: ${OBJ}
	${AR} ${LIB} ${OBJ}
	${RANLIB} ${LIB}
clean:
	rm -f *.o	

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	$(CC) -MM $(CFLAGS) ${SRC} \
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
FMM_Groups.o: FMM_Groups.c ../Main/Data_DefineE.h ../DataStr/Tools.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Integration/Quadrature.h ../Main/Treatment_Formulation.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../Main/Message.h ../GeoData/Data_GeoData.h \
  ../Main/Cal_Quantity.h ../Main/Cal_Value.h Data_FMM.h F_FMM.h \
  ../include/GetDP.h ../DataStr/Malloc.h ../Numeric/Numeric.h \
  ../Main/CurrentData.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../Main/Graph.h ../DofData/Data_DofData.h \
  ../include/Magic.h Truncation.h
FMM_CalDTAmatrices.o: FMM_CalDTAmatrices.c \
  ../Main/Treatment_Formulation.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../DataStr/List.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../Main/Message.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_DefineE.h \
  ../Main/Cal_Value.h ../Main/Cal_Quantity.h ../Function/GF_Function.h \
  Cal_FMMAnalyticalIntegral.h ../include/GetDP.h ../DataStr/Malloc.h \
  ../Main/Get_Geometry.h ../Function/BF_Function.h ../Main/CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Graph.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../DataStr/Tools.h ../Numeric/Numeric.h F_FMM_DTA.h \
  ../Main/Get_DofOfElement.h Data_FMM.h
FMM_Operations.o: FMM_Operations.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_DefineE.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Graph.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../Main/Cal_Value.h Data_FMM.h
Print_FMM.o: Print_FMM.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Numeric/Numeric.h ../Main/Data_Passive.h ../Main/Data_Element.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h \
  ../Main/ExtendedGroup.h Data_FMM.h
Cal_FMMAnalyticalIntegral.o: Cal_FMMAnalyticalIntegral.c \
  ../include/GetDP.h ../Main/Message.h ../DataStr/Malloc.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Graph.h ../DofData/Data_DofData.h ../include/Magic.h \
  Cal_FMMAnalyticalIntegral.h ../Main/Get_Geometry.h \
  ../Function/BF_Function.h ../DataStr/Tools.h ../Numeric/Numeric.h
