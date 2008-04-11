# $Id: Makefile,v 1.43 2008-04-11 06:01:04 geuzaine Exp $
#
# Copyright (C) 1997-2006 P. Dular, C. Geuzaine
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
# USA.
# 
# Please report all bugs and problems to <getdp@geuz.org>.

include ../variables

LIB     = ../lib/libNumeric.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData\
          -I../Main -I../contrib/Sparskit -I../contrib/NR
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE} 
FFLAGS  = ${F77_FLAGS} ${INCLUDE}

CSRC =  Analytic_HollowCylLF.c \
        EigenPar.c \
        Lanczos.c \
        Arpack.c \
        Adapt.c \
        Legendre.c \
        SphBessel.c \
        Numeric.c \
        gsl_newt.c \
        gsl_brent.c

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
Analytic_HollowCylLF.o: Analytic_HollowCylLF.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h Numeric.h ../DataStr/List.h \
  ../DofData/Data_DofData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/LinAlg.h ../contrib/Sparskit/Solver.h
EigenPar.o: EigenPar.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../DataStr/List.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/Tree.h \
  ../DataStr/avl.h ../Main/Data_Element.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../contrib/Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h EigenPar.h
Lanczos.o: Lanczos.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../DofData/DofData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../DofData/LinAlg.h \
  ../contrib/Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../Main/Data_Passive.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DofData/Data_DofData.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../include/Magic.h \
  Numeric.h EigenPar.h ../include/Compat.h
Arpack.o: Arpack.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../DofData/DofData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../DofData/LinAlg.h \
  ../contrib/Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../Main/Data_Passive.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DofData/Data_DofData.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../include/Magic.h \
  Numeric.h EigenPar.h Arpack_F.h ../include/Compat.h
Adapt.o: Adapt.c ../include/GetDP.h ../Main/Message.h ../DataStr/Malloc.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h Adapt.h Numeric.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h \
  ../contrib/Sparskit/Solver.h
Legendre.o: Legendre.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Numeric.h ../DataStr/List.h \
  ../DofData/Data_DofData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/LinAlg.h ../contrib/Sparskit/Solver.h
SphBessel.o: SphBessel.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Numeric.h ../DataStr/List.h \
  ../DofData/Data_DofData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/LinAlg.h ../contrib/Sparskit/Solver.h Amos_F.h \
  ../include/Compat.h
Numeric.o: Numeric.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Numeric.h ../DataStr/List.h \
  ../DofData/Data_DofData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/LinAlg.h ../contrib/Sparskit/Solver.h
gsl_newt.o: gsl_newt.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Numeric.h ../DataStr/List.h \
  ../DofData/Data_DofData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/LinAlg.h ../contrib/Sparskit/Solver.h
gsl_brent.o: gsl_brent.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Numeric.h ../DataStr/List.h \
  ../DofData/Data_DofData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/LinAlg.h ../contrib/Sparskit/Solver.h
