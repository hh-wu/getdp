#
#  Makefile for 'libSolverMisc.a'
#

.IGNORE:

RANLIB  = /usr/bin/ranlib

C_FLAGS = -g
F77_FLAGS = -g
SOLVER  = -D_SPARSKIT

LIB     = ../lib/libNumeric.a
INCLUDE = -I../include 

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
        mnbrak.c \

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
nrutil.o: nrutil.c ../include/Message.h ../include/../Main/Message.h
ran3.o: ran3.c
hqr.o: hqr.c nrutil.h nrdefs.h ../include/Data_Numeric.h \
 ../include/../Main/Data_Numeric.h
dsvdcmp.o: dsvdcmp.c nrutil.h nrdefs.h ../include/Data_Numeric.h \
 ../include/../Main/Data_Numeric.h
hollowcyl.o: hollowcyl.c nrdefs.h ../include/Data_Numeric.h \
 ../include/../Main/Data_Numeric.h
Lanczos.o: Lanczos.c ../include/DofData.h \
 ../include/../DofData/DofData.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/../DofData/LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/Graph.h \
 ../include/../Main/Graph.h ../include/../DofData/Data_DofData.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/../Main/Data_Active.h ../include/../Main/Data_Passive.h \
 ../include/../Main/Message.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/Message.h ../include/../GeoData/Data_GeoData.h \
 ../include/Magic.h nrutil.h ../include/ualloc.h \
 ../include/../DataStr/ualloc.h
Adapt.o: Adapt.c ../include/Data_Element.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../Main/Message.h ../include/../GeoData/Data_GeoData.h \
 ../include/listman.h ../include/../DataStr/listman.h \
 ../include/treeman.h ../include/../DataStr/treeman.h \
 ../include/../DataStr/avl.h Adapt.h nrutil.h nrdefs.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h
brent.o: brent.c nrutil.h nrdefs.h ../include/Data_Numeric.h \
 ../include/../Main/Data_Numeric.h
mnbrak.o: mnbrak.c nrutil.h nrdefs.h ../include/Data_Numeric.h \
 ../include/../Main/Data_Numeric.h
