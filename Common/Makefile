# GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

include ../variables

LIB = ../lib/libGetDPCommon${LIBEXT}

INC = ${DASH}I.

CXXFLAGS = ${OPTIM} ${FLAGS} ${INC} ${SYSTEMINCLUDE}

SRC = ListUtils.cpp \
      TreeUtils.cpp avl.cpp \
      MallocUtils.cpp \
      Message.cpp \
      OS.cpp

OBJ = ${SRC:.cpp=${OBJEXT}}

.SUFFIXES: ${OBJEXT} .cpp

${LIB}: ${OBJ} 
	${AR} ${LIB} ${OBJ} 
	${RANLIB} ${LIB}

.cpp${OBJEXT}:
	${CXX} ${CXXFLAGS} ${DASH}c $<

clean:
	rm -f *.o *.obj

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CXX} -MM -MG ${CXXFLAGS} ${SRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

# DO NOT DELETE THIS LINE
ListUtils.o: ListUtils.cpp MallocUtils.h ListUtils.h TreeUtils.h avl.h \
  Message.h
TreeUtils.o: TreeUtils.cpp MallocUtils.h TreeUtils.h avl.h ListUtils.h
avl.o: avl.cpp avl.h MallocUtils.h
MallocUtils.o: MallocUtils.cpp MallocUtils.h Message.h
Message.o: Message.cpp GetDPConfig.h Message.h GmshSocket.h
OS.o: OS.cpp Message.h
