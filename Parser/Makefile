# $Id: Makefile,v 1.20 2005-06-23 01:45:06 geuzaine Exp $
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

YACC    = bison
LEX     = flex
LIB     = ../lib/libParser.a
INCLUDE = -I. -I../include -I../DataStr -I../GeoData -I../Function\
          -I../Integration -I../Main
CFLAGS  = ${C_PARSER_FLAGS} ${INCLUDE} 

SRC = GetDP.yy.c \
      GetDP.tab.c

OBJ = ${SRC:.c=.o}

${LIB}: ${OBJ}
	${AR} ${LIB} ${OBJ}
	${RANLIB} ${LIB}

parser: GetDP.y GetDP.l
	${YACC} --output GetDP.tab.c -d GetDP.y 
	${LEX} -oGetDP.yy.c GetDP.l 

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
GetDP.yy.o: GetDP.yy.c ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../Main/Message.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h Constant.h \
  ../DataStr/Malloc.h GetDP.tab.h
GetDP.tab.o: GetDP.tab.c ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../Main/Message.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_Active.h ../Main/Data_DefineE.h ../DataStr/Malloc.h \
  ../DataStr/Tools.h ../Main/Init_Problem.h \
  ../Main/Print_ProblemStructure.h ../Function/BF_Function.h \
  ../Integration/Quadrature.h ../Main/Cal_Value.h Constant.h \
  ../include/Magic.h
