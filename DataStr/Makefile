# $Id: Makefile,v 1.6 2001-11-22 15:38:35 ledinh Exp $
#
# Makefile for "libDataStr.a"
#

.IGNORE:

C_FLAGS  = -O3
RANLIB   = ranlib
AR       = ar ruvs

LIB      = ../lib/libDataStr.a
INCLUDE  = -I. -I../include -I../Main

CFLAGS = $(C_FLAGS) $(OS_FLAGS) $(INCLUDE)

SRC = List.c \
      Malloc.c \
      Tree.c \
      avl.c \
      Tools.c

OBJ = $(SRC:.c=.o)

$(LIB): $(OBJ)
	$(AR) $(LIB) $(OBJ)
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
