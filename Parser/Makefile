# $Id: Makefile,v 1.13 2003-02-07 02:39:03 geuzaine Exp $
#
# Makefile for 'libParser.a'
# 

.IGNORE:

C_PARSER_FLAGS = -g

RANLIB  = ranlib
AR      = ar ruvs
YACC    = bison
LEX     = flex

LIB     = ../lib/libParser.a
INCLUDE = -I. -I../include -I../DataStr -I../GeoData -I../Function\
          -I../Integration -I../Main

CFLAGS  = $(C_PARSER_FLAGS) $(INCLUDE) 

SRC = GetDP.yy.c GetDP.tab.c

OBJ = $(SRC:.c=.o)

$(LIB): $(OBJ)
	$(AR) $(LIB) $(OBJ)
	$(RANLIB) $(LIB)

parser: GetDP.y GetDP.l
	$(YACC) --output GetDP.tab.c -d GetDP.y 
	$(LEX) -oGetDP.yy.c GetDP.l 

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
