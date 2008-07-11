# GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

include ../../variables

LIB = ../../lib/libGetDPSparskit${LIBEXT}

INC = ${DASH}I. ${DASH}I../../Common

CFLAGS = ${FLAGS} ${OPTIM} ${INC}
FFLAGS = ${FLAGS} ${OPTIM} ${INC}

CSRC =  Sparskit.cpp

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

FOBJ1 = ${FSRC1:.f=${OBJEXT}}
FOBJ2 = ${FSRC2:.F=${OBJEXT}}
COBJ  = ${CSRC:.cpp=${OBJEXT}}

.SUFFIXES: ${OBJEXT} .cpp .f .F

${LIB}: ${COBJ} ${FOBJ1} ${FOBJ2}
	${AR} ${ARFLAGS}${LIB} ${COBJ} ${FOBJ1} ${FOBJ2}
	${RANLIB} ${LIB}

.F${OBJEXT}:
	${F77} ${FFLAGS} ${DASH}c $<

.f${OBJEXT}:
	${F77} ${FFLAGS} ${DASH}c $<

.cpp${OBJEXT}:
	${CXX} ${CFLAGS} ${DASH}c $<

clean:
	rm -f *.o *.obj

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CXX} -MM -MG ${CFLAGS} ${CSRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

# DO NOT DELETE THIS LINE
Sparskit.o: Sparskit.cpp Sparskit.h ../../Common/ListUtils.h \
  ../../Common/MallocUtils.h ../../Common/Message.h
