# $Id: Makefile,v 1.4 2003-03-18 00:55:29 geuzaine Exp $

include ../variables

LIB     = ../lib/libNR.a
INCLUDE = -I. -I../Main -I../Numeric -I../include -I../DataStr
CFLAGS  = ${C_FLAGS} ${INCLUDE} 

CSRC =  brent.c\
        dpythag.c\
        dsvdcmp.c\
        fdjac.c\
        fmin.c\
        hqr.c\
        lnsrch.c\
        lubksb.c\
        ludcmp.c\
        mnbrak.c\
        newt.c\
        nrutil.c\
        ran3.c


COBJ  = ${CSRC:.c=.o}

${LIB}: ${COBJ}
	${AR} ${LIB} ${COBJ}
	${RANLIB} ${LIB}

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
brent.o: brent.c nrutil.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h
dpythag.o: dpythag.c nrutil.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h
dsvdcmp.o: dsvdcmp.c nrutil.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h
fdjac.o: fdjac.c nrutil.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h
fmin.o: fmin.c nrutil.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h
hqr.o: hqr.c nrutil.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h
lnsrch.o: lnsrch.c nrutil.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h
lubksb.o: lubksb.c
ludcmp.o: ludcmp.c nrutil.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h
mnbrak.o: mnbrak.c nrutil.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h
newt.o: newt.c nrutil.h ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h
nrutil.o: nrutil.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h
ran3.o: ran3.c
