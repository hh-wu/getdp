# GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

include ../variables

LIB = ../lib/libGetDPNumeric${LIBEXT}

INC = ${DASH}I. ${DASH}I../Common ${DASH}I../contrib/NR

CFLAGS = ${OPTIM} ${FLAGS} ${INC} ${SYSINCLUDE}

SRC = Numeric.cpp \
      Adapt.cpp \
      Bessel.cpp \
      Legendre.cpp \
      gsl_brent.cpp gsl_newt.cpp gsl_min.cpp \

ifneq (${FC},disabled)
FSRC = BesselLib.f
else
FSRC = 
endif

OBJ = ${SRC:.cpp=${OBJEXT}}
FOBJ = ${FSRC:.f=.o}

.SUFFIXES: ${OBJEXT} .cpp .f

${LIB}: ${OBJ} ${FOBJ}
	${AR} ${ARFLAGS}${LIB} ${OBJ} ${FOBJ}
	${RANLIB} ${LIB}

.cpp${OBJEXT}:
	${CXX} ${CFLAGS} ${DASH}c $<

.f${OBJEXT}:
	${FC} ${FFLAGS} -c $<

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
Numeric.o: Numeric.cpp ../Common/GetDPConfig.h ../Common/Message.h
Adapt.o: Adapt.cpp Adapt.h Numeric.h ../Common/Message.h
Bessel.o: Bessel.cpp ../Common/GetDPConfig.h ../Common/Message.h Bessel.h
Legendre.o: Legendre.cpp ../Common/Message.h
gsl_brent.o: gsl_brent.cpp ../Common/GetDPConfig.h ../Common/Message.h \
  Numeric.h
gsl_newt.o: gsl_newt.cpp ../Common/GetDPConfig.h ../Common/Message.h \
  Numeric.h
gsl_min.o: gsl_min.cpp ../Common/GetDPConfig.h ../Common/Message.h \
  Numeric.h
