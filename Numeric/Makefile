# $Id: Makefile,v 1.24 2003-03-18 00:55:30 geuzaine Exp $

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
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscsles.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscpc.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscmat.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscvec.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscis.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petsc.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscversion.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/bmake/linux/petscconf.h \
  /home/geuzaine/SOURCES/mpich-1.2.3/include/mpi.h \
  /home/geuzaine/SOURCES/mpich-1.2.3/include/mpidefs.h \
  /home/geuzaine/SOURCES/mpich-1.2.3/include/mpi_fortdefs.h \
  /home/geuzaine/SOURCES/mpich-1.2.3/include/mpio.h \
  /home/geuzaine/SOURCES/mpich-1.2.3/include/mpi_errno.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscmath.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscviewer.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscoptions.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscerror.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscdraw.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petschead.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petsclog.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscengine.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscsys.h \
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscksp.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../include/Magic.h Numeric.h ../NR/nrutil.h
Adapt.o: Adapt.c ../include/GetDP.h ../Main/Message.h ../DataStr/Malloc.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h Adapt.h Numeric.h
Legendre.o: Legendre.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Numeric.h
SphBessel.o: SphBessel.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Numeric.h Amos_F.h ../include/Compat.h
