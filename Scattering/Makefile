# $Id: Makefile,v 1.5 2002-02-25 22:06:37 geuzaine Exp $
#
# Makefile for "libScattering.a"
#

.IGNORE:

CXX     = icc -Kc++ -Kc++eh -O0 -xW -D_SPARSKIT # pentium 4 specific
#CXX     = c++ -O3 -march=i686 -D_SPARSKIT
#CXX     = c++ -g -Wall -D_SPARSKIT
#CXX     = c++ -Wall -D_PETSC
#include $(PETSC_DIR)/bmake/$(PETSC_ARCH)/variables

F2C     = -lCEPCF90 -lF90 # Linux with intel compilers
#F2C     = -lg2c -lm # Linux gcc
#F2C     = -lftn -lm # IRIX
#F2C     = -lfor -lots -lUfor -lFutil -lm # DEC

AR      = ar ruvs
RM      = rm
RANLIB  = ranlib

LIB     = ../lib/libScattering.a
INCLUDE = -I. -I../include -I../Main -I../DataStr -I../DofData -I../Function\
          -I../GeoData -I../Integration -I../Numeric -I../Post -I../Sparskit

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(SOLVER_FLAGS) $(SOLVER)\
          $(INCLUDE)

SRC = Nystrom.cpp\
      CriticalPoints.cpp\
      Bessel.cpp\
      Utils.cpp

OBJ = $(SRC:.cpp=.o)

.SUFFIXES: .o .cpp

$(LIB): $(OBJ)
	$(AR) $(LIB) $(OBJ) 
	$(RANLIB) $(LIB)
	make exe

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
Nystrom.o: Nystrom.cpp ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Amos_F.h ../include/Compat.h \
  ../Main/Data_Numeric.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../DataStr/List.h ../DataStr/Tools.h ../DataStr/Tree.h ../DataStr/avl.h \
  Utils.h Bessel.h CriticalPoints.h
CriticalPoints.o: CriticalPoints.cpp ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h ../DataStr/Tools.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h
Bessel.o: Bessel.cpp ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Amos_F.h ../include/Compat.h
Utils.o: Utils.cpp ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Amos_F.h ../include/Compat.h \
  ../Main/Data_Numeric.h ../DataStr/Tools.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h Bessel.h CriticalPoints.h
