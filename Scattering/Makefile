# $Id: Makefile,v 1.31 2003-03-18 00:19:19 geuzaine Exp $

# history of cvs tags:
# scat_0_1 : scat-oscar+andy
# scat_0_2 : scat-oscar+andy-v2
# scat_0_3 : randy
# scat_0_4 : oscar_ieee_aps_jun_2002
# scat_0_5 : scat-combined-ok-old-version-final

C_FLAGS = -g -O3
#C_FLAGS = -g -O3 -Wall
#C_FLAGS = -g -Wall -D_PETSC
#include ${PETSC_DIR}/bmake/${PETSC_ARCH}/variables
#C_FLAGS = -O3 -tpp7 -xW  # pentium 4 specific

CXX      = c++
#CXX     = icpc

F2C     = -lg2c -lm # Linux gcc
#F2C     = -lCEPCF90 -lF90 # Linux with intel compilers
#F2C     = -lftn -lm # IRIX
#F2C     = -lfor -lots -lUfor -lFutil -lm # DEC

AR      = ar ruvs
RANLIB  = ranlib

LIB     = ../lib/libScattering.a
INCLUDE = -I. -I../include -I../Main -I../DataStr -I../DofData -I../Function\
          -I../GeoData -I../Integration -I../Numeric -I../Post -I../Sparskit\
          -I../NR -I${FFTW_PREFIX}/include

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

exe:
	${CXX} ${C_FLAGS} -o hf ../lib/libScattering.a ../lib/libDofData.a\
               ../lib/libSparskit.a ../lib/libNumeric.a ../lib/libDataStr.a ${F2C}

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
Main.o: Main.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../DataStr/List.h Context.h Scatterer.h Function.h \
  Complex.h Patch.h FFT.h Spline.h
Solve.o: Solve.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Context.h Scatterer.h \
  ../DataStr/List.h Function.h Complex.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h Patch.h FFT.h Spline.h Helmholtz2D.h
Helmholtz2D.o: Helmholtz2D.cpp Utils.h ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h ../Main/Data_Numeric.h \
  Helmholtz2D.h Context.h Scatterer.h ../DataStr/List.h Function.h \
  Complex.h ../DofData/LinAlg.h ../Sparskit/Solver.h Patch.h FFT.h \
  Spline.h Bessel.h
Function.o: Function.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Function.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h Scatterer.h \
  Patch.h FFT.h Spline.h ChangeOfVars.h ../Numeric/nrutil.h
Scatterer.o: Scatterer.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h ../DataStr/Tools.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h Scatterer.h \
  Function.h Complex.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Numeric/nrutil.h
Patch.o: Patch.cpp Context.h Scatterer.h ../DataStr/List.h Function.h \
  Complex.h ../DofData/LinAlg.h ../Sparskit/Solver.h Patch.h FFT.h \
  Spline.h Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h ChangeOfVars.h
Complex.o: Complex.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h
Bessel.o: Bessel.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h \
  ../Numeric/Amos_F.h ../include/Compat.h
FFT.o: FFT.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h FFT.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h Spline.h \
  Patch.h
Spline.o: Spline.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Spline.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h
ChangeOfVars.o: ChangeOfVars.cpp Utils.h ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h ../Main/Data_Numeric.h
Utils.o: Utils.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h
