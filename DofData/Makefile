# $Id: Makefile,v 1.4 2000-09-08 09:51:11 geuzaine Exp $
#
# Makefile for "libDofData.a"
#

.IGNORE:

RANLIB  = /usr/bin/ranlib

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
	$(RM) -f Makefile.new

nodepend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	$(RM) Makefile.new

# DO NOT DELETE THIS LINE
DofData.o: DofData.c DofData.h ../DataStr/listman.h \
 ../DataStr/treeman.h ../DataStr/avl.h LinAlg.h ../Sparskit/Solver.h \
 ../Main/Graph.h Data_DofData.h ../Main/Message.h ../include/Version.h \
 ../DataStr/outil.h ../DataStr/ualloc.h ../include/Magic.h \
 ../Main/CurrentData.h ../Main/Data_Active.h ../Main/Data_Passive.h \
 ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h
LinAlg_SPARSKIT.o: LinAlg_SPARSKIT.c LinAlg.h ../Sparskit/Solver.h \
 ../DataStr/listman.h ../Main/Message.h ../DataStr/ualloc.h
LinAlg_PETSC.o: LinAlg_PETSC.c
