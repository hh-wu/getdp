# $Id: Makefile,v 1.19 2003-03-17 18:41:58 geuzaine Exp $

include ../variables

LIB     = ../lib/libDofData.a
INCLUDE = -I. -I../include -I../DataStr -I../GeoData -I../Main -I../Sparskit -I../FMM
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE}


SRC = DofData.c \
      LinAlg_SPARSKIT.c \
      LinAlg_PETSC.c

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
DofData.o: DofData.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../include/GetDPVersion.h DofData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h LinAlg.h \
  ../Sparskit/Solver.h ../Main/Graph.h Data_DofData.h ../DataStr/Tools.h \
  ../include/Magic.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h
LinAlg_SPARSKIT.o: LinAlg_SPARSKIT.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../include/Magic.h LinAlg.h ../Sparskit/Solver.h \
  ../DataStr/List.h ../DataStr/SafeIO.h ../FMM/F_FMMOperations.h
LinAlg_PETSC.o: LinAlg_PETSC.c
