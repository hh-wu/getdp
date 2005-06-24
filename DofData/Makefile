# $Id: Makefile,v 1.26 2005-06-24 17:51:53 geuzaine Exp $
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

LIB     = ../lib/libDofData.a
INCLUDE = -I. -I../include -I../DataStr -I../GeoData -I../Main\
          -I../Sparskit -I../FMM -I../Numeric
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE}


SRC = DofData.c \
      LinAlg_SPARSKIT.c \
      LinAlg_PETSC.c

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
# 1 "/Users/geuzaine/.getdp/DofData//"
DofData.o: DofData.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../include/GetDPVersion.h DofData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h LinAlg.h \
  ../Sparskit/Solver.h ../Main/Graph.h Data_DofData.h ../DataStr/Tools.h \
  ../DataStr/List.h ../DataStr/Tree.h ../include/Magic.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../Main/Data_Element.h DofData.h ../Numeric/Numeric.h
# 1 "/Users/geuzaine/.getdp/DofData//"
LinAlg_SPARSKIT.o: LinAlg_SPARSKIT.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../include/Magic.h LinAlg.h ../Sparskit/Solver.h \
  ../DataStr/List.h ../DataStr/SafeIO.h ../FMM/F_FMMOperations.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../Main/Data_Element.h DofData.h LinAlg.h ../Main/Graph.h \
  Data_DofData.h
# 1 "/Users/geuzaine/.getdp/DofData//"
LinAlg_PETSC.o: LinAlg_PETSC.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h
