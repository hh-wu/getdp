# $Id: Makefile,v 1.17 2003-02-07 02:39:02 geuzaine Exp $
#
# Makefile for 'libSolverMisc.a'
#

.IGNORE:

C_FLAGS = -g
F77_FLAGS = -g
RANLIB  = ranlib
AR      = ar ruvs

SOLVER  = -D_SPARSKIT

LIB     = ../lib/libNumeric.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData\
          -I../Main -I../Sparskit

CFLAGS  = $(C_FLAGS) $(SOLVER) $(INCLUDE) 
FFLAGS  = $(F77_FLAGS) $(INCLUDE)

CSRC =  nrutil.c \
        ran3.c \
        hqr.c \
        dsvdcmp.c \
        Analytic_HollowCylLF.c \
        Lanczos.c \
        Adapt.c \
        brent.c \
        mnbrak.c \
	Legendre.c \
	SphBessel.c

FSRC =  Integration_CLT2D.f \
        Analytic_SphCylLF.f \
	Amos_Airy.f \
	Amos_Bessel.f \
	Amos_Lib.f \
	Amos_Mach.f

COBJ  = $(CSRC:.c=.o)
FOBJ  = $(FSRC:.f=.o)

$(LIB): $(COBJ) $(FOBJ)
	$(AR) $(LIB) $(COBJ) $(FOBJ)
	$(RANLIB) $(LIB)

clean:
	$(RM) $(RMFLAGS) *.o

lint:
	lint $(CFLAGS) $(CSRC)

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	$(CC) -MM $(CFLAGS) ${CSRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	$(RM) Makefile.new

nodepend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	$(RM) Makefile.new

# DO NOT DELETE THIS LINE
nrutil.o: nrutil.c ../Main/Message.h
ran3.o: ran3.c
hqr.o: hqr.c nrutil.h nrdefs.h ../Main/Data_Numeric.h
dsvdcmp.o: dsvdcmp.c nrutil.h nrdefs.h ../Main/Data_Numeric.h
Analytic_HollowCylLF.o: Analytic_HollowCylLF.c nrdefs.h \
  ../Main/Data_Numeric.h
Lanczos.o: Lanczos.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../DofData/DofData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../Main/Graph.h ../DofData/Data_DofData.h \
  ../Main/Data_Numeric.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../include/Magic.h nrutil.h
Adapt.o: Adapt.c ../include/GetDP.h ../Main/Message.h ../DataStr/Malloc.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h Adapt.h nrutil.h \
  nrdefs.h ../Main/Data_Numeric.h
brent.o: brent.c nrutil.h nrdefs.h ../Main/Data_Numeric.h
mnbrak.o: mnbrak.c nrutil.h nrdefs.h ../Main/Data_Numeric.h
Legendre.o: Legendre.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h
SphBessel.o: SphBessel.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Numeric.h Amos_F.h ../include/Compat.h
