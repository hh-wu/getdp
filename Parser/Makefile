# $Id: Makefile,v 1.3 2000-09-07 18:47:27 geuzaine Exp $
#
#  Makefile for 'libParser.a'
# 

.IGNORE:

RANLIB  = /usr/bin/ranlib
YACC    = bison
LEX     = flex

C_PARSER_FLAGS = -g

LIB     = ../lib/libParser.a
INCLUDE = -I../include 

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
lex.yy.o: lex.yy.c ../include/Data_Passive.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 Constant.h ../include/ualloc.h ../include/../DataStr/ualloc.h \
 yacc.tab.h
yacc.tab.o: yacc.tab.c ../include/Data_Passive.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Data_Active.h ../include/../Main/Data_Active.h \
 ../include/Data_DefineE.h ../include/../Main/Data_DefineE.h \
 ../include/ualloc.h ../include/../DataStr/ualloc.h ../include/outil.h \
 ../include/../DataStr/outil.h ../include/Init_Problem.h \
 ../include/../Main/Init_Problem.h ../include/Data_GeoData.h \
 ../include/BF_Function.h ../include/../Function/BF_Function.h \
 ../include/Data_Element.h ../include/../Function/HBF_Function.h \
 ../include/Quadrature.h ../include/../Integration/Quadrature.h \
 ../include/Cal_Value.h ../include/../Main/Cal_Value.h Constant.h \
 ../include/Magic.h
