# GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

include ../variables

LIB = ../lib/libGetDPInterface${LIBEXT}

INC = ${DASH}I. ${DASH}I../Common ${DASH}I../Legacy

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
	flex -Pgetdp_yy -oProParser.yy.cpp ProParser.l

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
ProData.o: ProData.cpp ../Common/GetDPConfig.h ProData.h \
  ../Common/ListUtils.h ProDefine.h ProParser.h ../Common/Message.h \
  ../Legacy/Generate_Network.h ProData.h
ProDefine.o: ProDefine.cpp ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ProDefine.h ../Common/Message.h
ProParser.yy.o: ProParser.yy.cpp ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ProParser.h ProParser.tab.hpp \
  ../Common/MallocUtils.h ../Common/Message.h
ProParser.tab.o: ProParser.tab.cpp ProData.h ../Common/GetDPConfig.h \
  ../Common/ListUtils.h ProDefine.h ProDefines.h ../Legacy/Gauss.h \
  ../Legacy/F.h ProData.h ../Legacy/BF.h ../Legacy/GF.h \
  ../Legacy/Cal_Value.h ProParser.h ../Common/MallocUtils.h \
  ../Common/Message.h
