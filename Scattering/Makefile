# $Id: Makefile,v 1.13 2002-04-23 00:42:08 geuzaine Exp $
#
# Makefile for "libScattering.a"
#

.IGNORE:

SOLVER   = -D_SPARSKIT

C_FLAGS = -g -O3 -Wall
#C_FLAGS = -g -Wall -D_PETSC
#include $(PETSC_DIR)/bmake/$(PETSC_ARCH)/variables
#C_FLAGS = -O3 -tpp7 -xW  # pentium 4 specific

CXX      = c++
#CXX     = icpc

F2C     = -lg2c -lm # Linux gcc
#F2C     = -lCEPCF90 -lF90 # Linux with intel compilers
#F2C     = -lftn -lm # IRIX
#F2C     = -lfor -lots -lUfor -lFutil -lm # DEC

AR      = ar ruvs
RM      = rm
RANLIB  = ranlib

LIB     = ../lib/libScattering.a
INCLUDE = -I. -I../include -I../Main -I../DataStr -I../DofData -I../Function\
          -I../GeoData -I../Integration -I../Numeric -I../Post -I../Sparskit\
          -I$(FFTW_DIR)/include

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(SOLVER_FLAGS) $(SOLVER)\
          $(INCLUDE)

SRC = Main.cpp\
      Solve.cpp\
      Nystrom.cpp\
      Function.cpp\
      Scatterer.cpp\
      Patch.cpp\
      Complex.cpp\
      Bessel.cpp\
      FFT.cpp\
      Spline.cpp\
      Newton.cpp\
      Utils.cpp

OBJ = $(SRC:.cpp=.o)

.SUFFIXES: .o .cpp

$(LIB): $(OBJ)
	$(AR) $(LIB) $(OBJ) 
	$(RANLIB) $(LIB)

.cpp.o:
	$(CXX) $(CFLAGS) -c $<

exe:
	$(CXX) $(C_FLAGS) -o hf ../lib/libScattering.a ../lib/libDofData.a\
               ../lib/libSparskit.a ../lib/libNumeric.a ../lib/libDataStr.a $(F2C)

clean:
	$(RM) $(RMFLAGS) *.o

lint:
	$(LINT) $(CFLAGS) $(SRC)

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	$(CXX) -MM $(CFLAGS) ${SRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	$(RM) $(RMFLAGS) Makefile.new

# DO NOT DELETE THIS LINE
Main.o: Main.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../DataStr/List.h Main.h Scatterer.h Function.h \
  Complex.h Solve.h Patch.h FFT.h Spline.h
Solve.o: Solve.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h Solve.h \
  Main.h Scatterer.h Function.h Patch.h FFT.h Spline.h Nystrom.h
Nystrom.o: Nystrom.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Nystrom.h Main.h Scatterer.h \
  ../DataStr/List.h Function.h Complex.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../DataStr/Tools.h ../DataStr/Tree.h \
  ../DataStr/avl.h Bessel.h Patch.h FFT.h Spline.h
Function.o: Function.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Function.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h Patch.h \
  FFT.h Spline.h Main.h Scatterer.h
Scatterer.o: Scatterer.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h ../DataStr/Tools.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h Scatterer.h
Patch.o: Patch.cpp Main.h Scatterer.h ../DataStr/List.h Function.h \
  Complex.h ../DofData/LinAlg.h ../Sparskit/Solver.h Utils.h \
  ../include/GetDP.h ../Main/Message.h ../DataStr/Malloc.h \
  ../Main/Data_Numeric.h Patch.h FFT.h Spline.h
Complex.o: Complex.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h
Bessel.o: Bessel.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h \
  ../Numeric/Amos_F.h ../include/Compat.h
FFT.o: FFT.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h FFT.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h
Spline.o: Spline.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Spline.h Complex.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DataStr/List.h
Utils.o: Utils.cpp Utils.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h
