# $Id: Makefile,v 1.10 2001-11-22 15:38:36 ledinh Exp $
#
# Makefile for "libDofData.a"
#

.IGNORE:

RANLIB  = ranlib
AR      = ar ruvs

SOLVER = -D_SPARSKIT

C_FLAGS = -g

LIB     = ../lib/libDofData.a
INCLUDE = -I. -I../include -I../DataStr -I../GeoData -I../Main -I../Sparskit

CFLAGS = $(C_FLAGS) $(OS_FLAGS) $(SOLVER) $(INCLUDE)

SRC = DofData.c \
      LinAlg_SPARSKIT.c \
      LinAlg_PETSC.c

OBJ  = $(SRC:.c=.o)

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
	$(RM) -f Makefile.new

nodepend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	$(RM) Makefile.new

# DO NOT DELETE THIS LINE
