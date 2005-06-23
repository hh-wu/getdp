# $Id: Makefile,v 1.8 2005-06-23 01:45:01 geuzaine Exp $
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
        lubksb.c lubksb1.c\
        ludcmp.c ludcmp1.c\
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
