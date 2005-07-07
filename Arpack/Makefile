# $Id: Makefile,v 1.3 2005-07-07 13:08:48 geuzaine Exp $
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

LIB      = ../lib/libArpack.a

INCLUDE  = 
FFLAGS = ${F77_FLAGS} ${INCLUDE}

SOBJ  = sgetv0.o slaqrb.o sstqrb.o ssortc.o ssortr.o sstatn.o sstats.o \
	snaitr.o snapps.o snaup2.o snaupd.o snconv.o sneigh.o sngets.o \
	ssaitr.o ssapps.o ssaup2.o ssaupd.o ssconv.o sseigt.o ssgets.o \
	sneupd.o sseupd.o ssesrt.o

DOBJ  = dgetv0.o dlaqrb.o dstqrb.o dsortc.o dsortr.o dstatn.o dstats.o \
	dnaitr.o dnapps.o dnaup2.o dnaupd.o dnconv.o dneigh.o dngets.o \
	dsaitr.o dsapps.o dsaup2.o dsaupd.o dsconv.o dseigt.o dsgets.o \
	dneupd.o dseupd.o dsesrt.o

COBJ  = cnaitr.o cnapps.o cnaup2.o cnaupd.o cneigh.o cneupd.o cngets.o \
        cgetv0.o csortc.o cstatn.o

ZOBJ  = znaitr.o znapps.o znaup2.o znaupd.o zneigh.o zneupd.o zngets.o \
        zgetv0.o zsortc.o zstatn.o

UTILS = cvout.o dmout.o dvout.o icnteq.o icopy.o iset.o iswap.o \
        ivout.o second.o smout.o svout.o zmout.o zvout.o

.SUFFIXES: .o .f

${LIB}: ${SOBJ} ${DOBJ} ${COBJ} ${ZOBJ} ${UTILS}
	${AR} ${LIB} ${SOBJ} ${DOBJ} ${COBJ} ${ZOBJ} ${UTILS}
	${RANLIB} ${LIB}

.f.o:
	${F77} ${FFLAGS} -c $<

clean:
	rm -f *.o


depend:
	true

nodepend:
	true

# DO NOT DELETE THIS LINE
