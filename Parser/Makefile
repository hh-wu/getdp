# $Id: Makefile,v 1.7 2000-10-30 01:05:46 geuzaine Exp $
#
# Makefile for 'libParser.a'
# 

.IGNORE:

RANLIB  = /usr/bin/ranlib
YACC    = bison
LEX     = flex

C_PARSER_FLAGS = -g

LIB     = ../lib/libParser.a
INCLUDE = -I. -I../include -I../DataStr -I../GeoData -I../Function\
          -I../Integration -I../Main

CFLAGS  = $(C_PARSER_FLAGS) $(OS_FLAGS) $(INCLUDE) 

SRC = lex.yy.c yacc.tab.c

OBJ = $(SRC:.c=.o)

$(LIB): $(OBJ)
	ar ruvs $(LIB) $(OBJ)
	$(RANLIB) $(LIB)

parser: yacc.y lex.l
	$(YACC) -d yacc.y 
	$(LEX) lex.l 

clean:
	$(RM) $(RMFLAGS) *.o

lint:
	lint $(CFLAGS) $(SRC)

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	$(CC) -MM $(CFLAGS) ${SRC} \
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
lex.yy.o: lex.yy.c ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../Main/Message.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h Constant.h \
  ../DataStr/Malloc.h yacc.tab.h
yacc.tab.o: yacc.tab.c ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../Main/Message.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_Active.h ../Main/Data_DefineE.h ../DataStr/Malloc.h \
  ../DataStr/Tools.h ../Main/Init_Problem.h ../Function/BF_Function.h \
  ../Integration/Quadrature.h ../Main/Cal_Value.h Constant.h \
  ../include/Magic.h
