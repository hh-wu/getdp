# $Id: Makefile,v 1.20 2003-03-18 00:55:26 geuzaine Exp $

include ../variables

LIB     = ../lib/libDofData.a
INCLUDE = -I. -I../include -I../DataStr -I../GeoData -I../Main -I../Sparskit -I../FMM
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE}


SRC = DofData.c \
      LinAlg_SPARSKIT.c \
      LinAlg_PETSC.c

OBJ = ${SRC:.c=.o}

${LIB}: ${OBJ}
	${AR} ${LIB} ${OBJ}
	${RANLIB} ${LIB}

clean:
	rm -f *.o

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CC} -MM ${CFLAGS} ${SRC} \
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
DofData.o: DofData.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../include/GetDPVersion.h DofData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h LinAlg.h \
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
  Data_DofData.h ../DataStr/Tools.h ../include/Magic.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h
LinAlg_SPARSKIT.o: LinAlg_SPARSKIT.c
LinAlg_PETSC.o: LinAlg_PETSC.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h LinAlg.h \
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
  /home/geuzaine/SOURCES/petsc-2.1.1/include/petscksp.h \
  ../FMM/F_FMMOperations.h ../DataStr/SafeIO.h
