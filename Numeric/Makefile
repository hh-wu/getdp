# $Id: Makefile,v 1.7 2000-09-09 07:29:41 geuzaine Exp $
#
# Makefile for 'libSolverMisc.a'
#

.IGNORE:

RANLIB  = /usr/bin/ranlib

C_FLAGS = -g
F77_FLAGS = -g
SOLVER  = -D_SPARSKIT

LIB     = ../lib/libNumeric.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData\
          -I../Main -I../Sparskit

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(SOLVER_FLAGS) $(SOLVER)\
          $(INCLUDE) 
FFLAGS = $(F77_FLAGS) $(OS_FLAGS) $(INCLUDE)

CSRC =  nrutil.c \
        ran3.c \
        hqr.c \
        dsvdcmp.c \
        hollowcyl.c \
        Lanczos.c \
        Adapt.c \
        brent.c \
        mnbrak.c

FSRC =  clt2d.f \
        solcyl.f \
        solsph.f \
        bessel.f 

COBJ  = $(CSRC:.c=.o)
FOBJ  = $(FSRC:.f=.o)

$(LIB): $(COBJ) $(FOBJ)
	ar ruvs $(LIB) $(COBJ) $(FOBJ)
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
hollowcyl.o: hollowcyl.c nrdefs.h ../Main/Data_Numeric.h
Lanczos.o: Lanczos.c ../DofData/DofData.h ../DataStr/listman.h \
 ../DataStr/treeman.h ../DataStr/avl.h ../DofData/LinAlg.h \
 ../Sparskit/Solver.h ../Main/Graph.h ../DofData/Data_DofData.h \
 ../Main/Data_Numeric.h ../Main/CurrentData.h ../Main/Data_Active.h \
 ../Main/Data_Passive.h ../Main/Message.h ../Main/Data_Element.h \
 ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../include/Magic.h \
 nrutil.h ../DataStr/ualloc.h
Adapt.o: Adapt.c ../Main/Data_Element.h ../GeoData/GeoData.h \
 ../Main/Message.h ../GeoData/Data_GeoData.h ../DataStr/listman.h \
 ../DataStr/treeman.h ../DataStr/avl.h Adapt.h nrutil.h nrdefs.h \
 ../Main/Data_Numeric.h
brent.o: brent.c nrutil.h nrdefs.h ../Main/Data_Numeric.h
mnbrak.o: mnbrak.c nrutil.h nrdefs.h ../Main/Data_Numeric.h
