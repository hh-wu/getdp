# $Id: Makefile,v 1.9 2003-02-07 10:26:57 geuzaine Exp $

include ../variables

LIB     = ../lib/libDataStr.a
INCLUDE = -I. -I../include -I../Main
CFLAGS  = ${C_FLAGS} ${INCLUDE}

SRC = List.c \
      Malloc.c \
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
List.o: List.c Malloc.h List.h ../Main/Message.h
Malloc.o: Malloc.c Malloc.h ../Main/Message.h
Tree.o: Tree.c Malloc.h Tree.h avl.h
avl.o: avl.c avl.h Malloc.h
Tools.o: Tools.c Tools.h List.h Tree.h avl.h
