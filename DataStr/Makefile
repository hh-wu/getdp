# $Id: Makefile,v 1.3 2000-09-08 09:51:11 geuzaine Exp $
#
# Makefile for "libDataStr.a"
#

.IGNORE:

C_FLAGS  = -O3
RANLIB   = /usr/bin/ranlib

LIB      = ../lib/libDataStr.a
INCLUDE  = -I. -I../include -I../Main

CFLAGS = $(C_FLAGS) $(OS_FLAGS) $(INCLUDE)

SRC = listman.c \
      ualloc.c \
      treeman.c \
      avl.c \
      outil.c

OBJ = $(SRC:.c=.o)

$(LIB): $(OBJ)
	ar ruvs $(LIB) $(OBJ)
	$(RANLIB) $(LIB)

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
listman.o: listman.c ualloc.h listman.h ../Main/Message.h
ualloc.o: ualloc.c ualloc.h ../Main/Message.h
treeman.o: treeman.c ualloc.h treeman.h avl.h
avl.o: avl.c avl.h ualloc.h
outil.o: outil.c outil.h listman.h treeman.h avl.h
