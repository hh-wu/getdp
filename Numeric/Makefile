# $Id: Makefile,v 1.25 2003-03-18 01:10:14 geuzaine Exp $

include ../variables

LIB     = ../lib/libNumeric.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData\
          -I../Main -I../Sparskit -I../NR
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE} 
FFLAGS  = ${F77_FLAGS} ${INCLUDE}

CSRC =  Analytic_HollowCylLF.c \
        Lanczos.c \
        Adapt.c \
	Legendre.c \
	SphBessel.c

FSRC =  Integration_CLT2D.f \
        Analytic_SphCylLF.f \
	Amos_Airy.f \
	Amos_Bessel.f \
	Amos_Lib.f \
	Amos_Mach.f

COBJ  = ${CSRC:.c=.o}
FOBJ  = ${FSRC:.f=.o}

${LIB}: ${COBJ} ${FOBJ}
	${AR} ${LIB} ${COBJ} ${FOBJ}
	${RANLIB} ${LIB}

.f.o:
	${F77} ${FFLAGS} -c $<

clean:
	rm -f *.o

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CC} -MM ${CFLAGS} ${CSRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

nodepend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

# DO NOT DELETE THIS LINE
Analytic_HollowCylLF.o: Analytic_HollowCylLF.c Numeric.h
Lanczos.o: Lanczos.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../DofData/DofData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../Main/Graph.h ../DofData/Data_DofData.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../include/Magic.h Numeric.h ../NR/nrutil.h
Adapt.o: Adapt.c ../include/GetDP.h ../Main/Message.h ../DataStr/Malloc.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h Adapt.h Numeric.h
Legendre.o: Legendre.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Numeric.h
SphBessel.o: SphBessel.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Numeric.h Amos_F.h ../include/Compat.h
