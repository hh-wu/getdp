# $Id: Makefile,v 1.22 2006-02-25 15:00:24 geuzaine Exp $
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

LIB     = ../lib/libIntegration.a
INCLUDE = -I. -I../include -I../DataStr -I../Main
CFLAGS  = ${C_FLAGS} ${INCLUDE}

SRC = Gauss_Point.c \
      Gauss_Line.c \
      Gauss_Triangle.c \
      Gauss_Quadrangle.c \
      Gauss_Tetrahedron.c \
      Gauss_Hexahedron.c \
      Gauss_Prism.c \
      Gauss_Pyramid.c

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
# 1 "/Users/geuzaine/.getdp/Integration//"
Gauss_Point.o: Gauss_Point.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h
# 1 "/Users/geuzaine/.getdp/Integration//"
Gauss_Line.o: Gauss_Line.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Quadrature.h Gauss_Line.h
# 1 "/Users/geuzaine/.getdp/Integration//"
Gauss_Triangle.o: Gauss_Triangle.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Quadrature.h Gauss_Triangle.h
# 1 "/Users/geuzaine/.getdp/Integration//"
Gauss_Quadrangle.o: Gauss_Quadrangle.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h Quadrature.h Gauss_Quadrangle.h
# 1 "/Users/geuzaine/.getdp/Integration//"
Gauss_Tetrahedron.o: Gauss_Tetrahedron.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h Quadrature.h Gauss_Tetrahedron.h
# 1 "/Users/geuzaine/.getdp/Integration//"
Gauss_Hexahedron.o: Gauss_Hexahedron.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h Quadrature.h Gauss_Hexahedron.h
# 1 "/Users/geuzaine/.getdp/Integration//"
Gauss_Prism.o: Gauss_Prism.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Gauss_Prism.h
# 1 "/Users/geuzaine/.getdp/Integration//"
Gauss_Pyramid.o: Gauss_Pyramid.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Gauss_Pyramid.h
