# $Id: Makefile,v 1.3 2000-09-08 09:51:11 geuzaine Exp $
#
#  Makefile for 'libSparskit.a'
#

.IGNORE:

C_FLAGS   = -g
F77_FLAGS = -O3
RANLIB    = /usr/bin/ranlib

SOLVER_FLAGS = -D_SPARSKIT

LIB      = ../lib/libSparskit.a
INCLUDE  = -I. -I../include -I../DataStr -I../Main -I../Numeric

CFLAGS = $(C_FLAGS) $(OS_FLAGS) $(SOLVER_FLAGS) $(INCLUDE)
FFLAGS = $(F77_FLAGS) $(OS_FLAGS) $(SOLVER_FLAGS) $(INCLUDE)

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

FOBJ1 = $(FSRC1:.f=.o)
FOBJ2 = $(FSRC2:.F=.o)
COBJ  = $(CSRC:.c=.o)

.SUFFIXES: .o .c .f .F

$(LIB): $(COBJ) $(FOBJ1) $(FOBJ2)
	ar ruvs $(LIB) $(COBJ) $(FOBJ1) $(FOBJ2)
	$(RANLIB) $(LIB)

.F.o:
	$(FC) $(FFLAGS) -c $<

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
Solver.o: Solver.c ../DataStr/ualloc.h Solver.h ../DataStr/listman.h \
 Solver_F.h ../include/Compat.h ../Main/Message.h
Matrix.o: Matrix.c ../DataStr/ualloc.h Solver.h ../DataStr/listman.h \
 Solver_F.h ../include/Compat.h ../Main/Message.h
Parser.o: Parser.c Solver.h ../DataStr/listman.h ../DataStr/ualloc.h \
 ../Main/Message.h
CSR.o: CSR.c Solver.h ../DataStr/listman.h ../DataStr/ualloc.h \
 ../Numeric/nrutil.h
