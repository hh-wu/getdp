# GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

include ../variables

LIB = ../lib/libGetDPInterface${LIBEXT}

INC = ${DASH}I../Interface ${DASH}I../Common ${DASH}I../Legacy

CFLAGS = ${OPTIM} ${FLAGS} ${INC} ${SYSTEMINCLUDE}

SRC = ProData.cpp\
      ProDefine.cpp\
      ProParser.yy.cpp \
      ProParser.tab.cpp

OBJ = ${SRC:.cpp=${OBJEXT}}

.SUFFIXES: ${OBJEXT} .cpp

${LIB}: ${OBJ}
	${AR} ${LIB} ${OBJ}
	${RANLIB} ${LIB}

.cpp${OBJEXT}:
	${CXX} ${CFLAGS} ${DASH}c $<

parser: ProParser.y ProParser.l
	bison -p getdp_yy --output ProParser.tab.cpp -d ProParser.y 
	if [ -r ProParser.tab.cpp.h ]; then mv ProParser.tab.cpp.h ProParser.tab.hpp ; fi
	flex -P getdp_yy -oProParser.yy.cpp ProParser.l

clean:
	rm -f *.o *.obj

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CXX} -MM -MG ${CFLAGS} ${SRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

# DO NOT DELETE THIS LINE
