# $Id: Makefile,v 1.2 2002-02-09 19:52:41 geuzaine Exp $
#
# Makefile for "libScattering.a"
#

.IGNORE:

CXX     = c++ -Wall
AR      = ar ruvs
RM      = rm
RANLIB  = ranlib

F2C     = -lg2c # Linux (sometimes also called f2c)
#F2C     = -lftn # IRIX
#F2C     = -lfor -lots -lUfor -lFutil # DEC


LIB     = ../lib/libScattering.a
INCLUDE = -I. -I../include -I../Main -I../DataStr -I../DofData -I../Function\
          -I../GeoData -I../Integration -I../Numeric -I../Post -I../Sparskit

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(SOLVER_FLAGS) $(SOLVER)\
          $(INCLUDE)

SRC = Nystrom.cpp\
      CriticalPoints.cpp\
      Bessel.cpp

OBJ = $(SRC:.cpp=.o)

.SUFFIXES: .o .cpp

$(LIB): $(OBJ)
	$(AR) $(LIB) $(OBJ) 
	$(RANLIB) $(LIB)
	$(CXX) $(C_FLAGS) -o hf -L../lib -lScattering -lNumeric $(F2C) -lm

.cpp.o:
	$(CXX) $(CFLAGS) -c $<

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
