# $Id: Makefile,v 1.24 2005-07-11 15:00:17 geuzaine Exp $
#
# Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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

LIB      = ../lib/libSparskit.a

INCLUDE  = -I. -I../include -I../DataStr -I../Main -I../Numeric\
           -I../FMM
CFLAGS = ${C_FLAGS} ${SOLVER} ${INCLUDE}
FFLAGS = ${F77_FLAGS} ${SOLVER} ${INCLUDE}


CSRC =  Solver.c \
        Matrix.c \
        Parser.c \
        CSR.c 

FSRC1 = blas1.f \
        blassm.f \
        cmkreord.f \
        flu.f \
        formats.f \
        inout.f \
        iters.f \
        matvec.f \
        reordering.f \
        unary.f

FSRC2 = ilut.F 

FOBJ1 = ${FSRC1:.f=.o}
FOBJ2 = ${FSRC2:.F=.o}
COBJ  = ${CSRC:.c=.o}

.SUFFIXES: .o .c .f .F

${LIB}: ${COBJ} ${FOBJ1} ${FOBJ2}
	${AR} ${LIB} ${COBJ} ${FOBJ1} ${FOBJ2}
	${RANLIB} ${LIB}

.F.o:
	${F77} ${FFLAGS} -c $<

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
# 1 "/Users/geuzaine/.getdp/Sparskit//"
Solver.o: Solver.c Solver.h ../DataStr/List.h Solver_F.h \
  ../include/Compat.h ../Main/Message.h ../DataStr/Malloc.h \
  ../FMM/F_FMMOperations.h
# 1 "/Users/geuzaine/.getdp/Sparskit//"
Matrix.o: Matrix.c Solver.h ../DataStr/List.h Solver_F.h \
  ../include/Compat.h ../Main/Message.h ../DataStr/Malloc.h
# 1 "/Users/geuzaine/.getdp/Sparskit//"
Parser.o: Parser.c Solver.h ../DataStr/List.h ../Main/Message.h \
  ../DataStr/Malloc.h
# 1 "/Users/geuzaine/.getdp/Sparskit//"
CSR.o: CSR.c Solver.h ../DataStr/List.h ../Main/Message.h \
  ../DataStr/Malloc.h
