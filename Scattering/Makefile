# $Id: Makefile,v 1.33 2003-05-05 23:02:52 geuzaine Exp $

# history of cvs tags:
# scat_0_1 : scat-oscar+andy
# scat_0_2 : scat-oscar+andy-v2
# scat_0_3 : randy
# scat_0_4 : oscar_ieee_aps_jun_2002
# scat_0_5 : scat-combined-ok-old-version-final

#CXX     = icpc
#C_FLAGS = -O3 -tpp7 -xW  # pentium 4 specific
#F2C     = -lg2c -lm # Linux gcc
#F2C     = -lCEPCF90 -lF90 # Linux with intel compilers
#F2C     = -lftn -lm # IRIX
#F2C     = -lfor -lots -lUfor -lFutil -lm # DEC

include ../variables

LIB     = ../lib/libScattering.a
INCLUDE = -I. -I../include -I../Main -I../DataStr -I../DofData -I../Function\
          -I../GeoData -I../Integration -I../Numeric -I../Post -I../Sparskit\
          -I../NR -I${FFTW_DIR}/include
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE}

AR      = ar ruvs
RANLIB  = ranlib

LIB     = ../lib/libScattering.a
INCLUDE = -I. -I../include -I../Main -I../DataStr -I../DofData -I../Function\
          -I../GeoData -I../Integration -I../Numeric -I../Post -I../Sparskit\
          -I../NR -I${FFTW_DIR}/include

CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE}

SRC = Main.cpp\
      Solve.cpp\
      Helmholtz2D.cpp\
      Function.cpp\
      Scatterer.cpp\
      Patch.cpp\
      Complex.cpp\
      Bessel.cpp\
      FFT.cpp\
      Spline.cpp\
      ChangeOfVars.cpp\
      Utils.cpp

OBJ = ${SRC:.cpp=.o}

.SUFFIXES: .o .cpp

${LIB}: ${OBJ}
	${AR} ${LIB} ${OBJ} 
	${RANLIB} ${LIB}

.cpp.o:
	${CXX} ${CFLAGS} -c $<

clean:
	rm -f *.o

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CXX} -MM ${CFLAGS} ${SRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

# DO NOT DELETE THIS LINE
