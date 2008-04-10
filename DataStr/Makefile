# $Id: Makefile,v 1.17 2008-04-10 20:49:44 geuzaine Exp $
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

LIB     = ../lib/libDataStr.a
INCLUDE = -I. -I../include -I../Main
CFLAGS  = ${C_FLAGS} ${INCLUDE}

SRC = List.c \
      Malloc.c \
      SafeIO.c \
      Tree.c \
      avl.c \
      Tools.c

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
List.o: List.c Malloc.h List.h ../Main/Message.h SafeIO.h
Malloc.o: Malloc.c Malloc.h ../Main/Message.h
SafeIO.o: SafeIO.c SafeIO.h ../Main/Message.h
Tree.o: Tree.c Malloc.h Tree.h avl.h
avl.o: avl.c avl.h Malloc.h
Tools.o: Tools.c Tools.h List.h Tree.h avl.h
