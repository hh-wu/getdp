# GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

include ../variables

LIB = ../lib/libGetDPMain${LIBEXT}

INC = ${DASH}I. ${DASH}I../Common ${DASH}I../Interface ${DASH}I../Legacy \
      ${DASH}I../contrib

CXXFLAGS = ${OPTIM} ${FLAGS} ${INC} ${SYSTEMINCLUDE}

SRC = Main.cpp

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
Main.o: Main.cpp ../Legacy/MainLegacy.h
