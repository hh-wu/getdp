# $Id: Makefile,v 1.2 2003-03-17 23:47:09 geuzaine Exp $

include ../variables

LIB     = ../lib/libNR.a
INCLUDE = -I. -I../Main -I../include -I../DataStr
CFLAGS  = ${C_FLAGS} ${INCLUDE} 

CSRC =  nrutil.c \
        ran3.c \
        hqr.c \
        dsvdcmp.c \
        brent.c \
        mnbrak.c

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
nrutil.o: nrutil.c ../Main/Message.h
ran3.o: ran3.c
hqr.o: hqr.c nrutil.h nrdefs.h ../Main/Data_Numeric.h
dsvdcmp.o: dsvdcmp.c nrutil.h nrdefs.h ../Main/Data_Numeric.h
brent.o: brent.c nrutil.h nrdefs.h ../Main/Data_Numeric.h
mnbrak.o: mnbrak.c nrutil.h nrdefs.h ../Main/Data_Numeric.h
