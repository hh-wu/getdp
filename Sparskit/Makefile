# $Id: Makefile,v 1.18 2003-03-17 23:47:11 geuzaine Exp $

include ../variables

LIB      = ../lib/libSparskit.a

INCLUDE  = -I. -I../include -I../DataStr -I../Main -I../Numeric\
           -I../FMM -I../NR
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
Solver.o: Solver.c Solver.h ../DataStr/List.h Solver_F.h \
  ../include/Compat.h ../Main/Message.h ../DataStr/Malloc.h \
  ../FMM/F_FMMOperations.h ../include/GetDP.h
Matrix.o: Matrix.c Solver.h ../DataStr/List.h Solver_F.h \
  ../include/Compat.h ../Main/Message.h ../DataStr/Malloc.h
Parser.o: Parser.c Solver.h ../DataStr/List.h ../Main/Message.h \
  ../DataStr/Malloc.h
CSR.o: CSR.c Solver.h ../DataStr/List.h ../Main/Message.h \
  ../DataStr/Malloc.h ../NR/nrutil.h
