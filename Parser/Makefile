# $Id: Makefile,v 1.5 2000-09-09 07:29:41 geuzaine Exp $
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
lex.yy.o: lex.yy.c ../Main/Data_Passive.h ../DataStr/listman.h \
 ../Main/Message.h ../Main/Data_Element.h ../GeoData/GeoData.h \
 ../GeoData/Data_GeoData.h ../DataStr/treeman.h ../DataStr/avl.h \
 Constant.h ../DataStr/ualloc.h yacc.tab.h
yacc.tab.o: yacc.tab.c ../Main/Data_Passive.h ../DataStr/listman.h \
 ../Main/Message.h ../Main/Data_Element.h ../GeoData/GeoData.h \
 ../GeoData/Data_GeoData.h ../DataStr/treeman.h ../DataStr/avl.h \
 ../Main/Data_Active.h ../Main/Data_DefineE.h ../DataStr/ualloc.h \
 ../DataStr/outil.h ../Main/Init_Problem.h ../Function/BF_Function.h \
 ../Function/HBF_Function.h ../Integration/Quadrature.h \
 ../Main/Cal_Value.h Constant.h ../include/Magic.h
