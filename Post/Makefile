# $Id: Makefile,v 1.25 2003-03-18 00:55:30 geuzaine Exp $

include ../variables

LIB     = ../lib/libPost.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData\
          -I../Main -I../Numeric -I../Sparskit -I../Function
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE} 

SRC = Pos_FemInterpolation.c \
      Pos_Interactive.c \
        Pos_ReadLine.c \
      Pos_Formulation.c \
        Pos_Print.c \
        Pos_Quantity.c \
        Pos_Element.c \
        Pos_Iso.c \
        Pos_Search.c \
        Pos_Format.c

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
Pos_FemInterpolation.o: Pos_FemInterpolation.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h ../Main/Treatment_Formulation.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Get_DofOfElement.h \
  ../Main/Get_Geometry.h ../DofData/DofData.h ../DofData/LinAlg.h \
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
  ../DofData/Data_DofData.h Pos_Search.h ../Main/CurrentData.h \
  ../include/Magic.h ../DataStr/Tools.h
Pos_Interactive.o: Pos_Interactive.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Treatment_Formulation.h \
  ../Main/Data_Active.h Pos_Formulation.h \
  ../Main/Print_ProblemStructure.h ../Main/CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h \
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
  ../DofData/Data_DofData.h ../include/Magic.h
Pos_ReadLine.o: Pos_ReadLine.c
Pos_Formulation.o: Pos_Formulation.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Numeric/Numeric.h \
  ../Main/Treatment_Formulation.h ../Main/Data_Active.h \
  ../Main/CurrentData.h ../DofData/DofData.h ../DofData/LinAlg.h \
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
  ../DofData/Data_DofData.h ../include/Magic.h ../Main/Get_DofOfElement.h \
  Pos_Formulation.h Pos_Print.h Pos_Format.h ../Main/GmshClient.h
Pos_Print.o: Pos_Print.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Numeric/Numeric.h \
  ../Main/Treatment_Formulation.h ../Main/Data_Active.h \
  ../Main/Get_Geometry.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h \
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
  ../DofData/Data_DofData.h ../include/Magic.h ../Main/Get_DofOfElement.h \
  ../Main/ExtendedGroup.h ../Main/Cal_Quantity.h ../Main/Cal_Value.h \
  Pos_Formulation.h Pos_Quantity.h Pos_Element.h Pos_Search.h Pos_Print.h \
  Pos_Format.h ../Numeric/Adapt.h ../DataStr/Tools.h
Pos_Quantity.o: Pos_Quantity.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Treatment_Formulation.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h Pos_Formulation.h Pos_Quantity.h \
  ../Main/Get_DofOfElement.h ../Main/Cal_Quantity.h ../Main/Cal_Value.h \
  ../Main/Get_Geometry.h ../Main/Data_DefineE.h ../Main/CurrentData.h \
  ../DofData/DofData.h ../DofData/LinAlg.h \
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
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h
Pos_Element.o: Pos_Element.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../Main/Data_Element.h ../Main/Get_DofOfElement.h Pos_Element.h \
  ../Main/Cal_Value.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h \
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
  ../DofData/Data_DofData.h ../include/Magic.h
Pos_Iso.o: Pos_Iso.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Numeric/Numeric.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h \
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
  ../DofData/Data_DofData.h ../include/Magic.h Pos_Iso.h Pos_Element.h
Pos_Search.o: Pos_Search.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Get_Geometry.h Pos_Search.h ../Main/Get_DofOfElement.h \
  ../Main/CurrentData.h ../DofData/DofData.h ../DofData/LinAlg.h \
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
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h \
  ../Numeric/Numeric.h
Pos_Format.o: Pos_Format.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../include/GetDPVersion.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/List.h ../DataStr/Tree.h \
  ../DataStr/avl.h ../Main/Data_Passive.h ../Main/Data_Element.h \
  ../Main/Data_DefineE.h ../Numeric/Numeric.h ../Main/CurrentData.h \
  ../Main/Data_Active.h ../DofData/DofData.h ../DofData/LinAlg.h \
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
  ../DofData/Data_DofData.h ../include/Magic.h Pos_Iso.h Pos_Format.h \
  Pos_Element.h ../Function/F_Function.h ../Main/Cal_Value.h \
  ../Main/Cal_Quantity.h
