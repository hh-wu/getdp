#
# Makefile for "libDofData.a"
#

.IGNORE:

RANLIB  = /usr/bin/ranlib

SOLVER = -D_SPARSKIT

C_FLAGS = -g

LIB     = ../lib/libDofData.a
INCLUDE = -I../include

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
DofData.o: DofData.c DofData.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h LinAlg.h \
 ../include/Solver.h ../include/../Sparskit/Solver.h \
 ../include/Graph.h ../include/../Main/Graph.h Data_DofData.h \
 ../include/Message.h ../include/../Main/Message.h \
 ../include/Version.h ../include/outil.h ../include/../DataStr/outil.h \
 ../include/ualloc.h ../include/../DataStr/ualloc.h ../include/Magic.h \
 ../include/CurrentData.h ../include/../Main/CurrentData.h \
 ../include/../Main/Data_Active.h ../include/../Main/Data_Passive.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/../GeoData/Data_GeoData.h \
 ../include/DofData.h ../include/../DofData/DofData.h
LinAlg_SPARSKIT.o: LinAlg_SPARSKIT.c LinAlg.h ../include/Solver.h \
 ../include/../Sparskit/Solver.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/Message.h \
 ../include/../Main/Message.h ../include/ualloc.h \
 ../include/../DataStr/ualloc.h
LinAlg_PETSC.o: LinAlg_PETSC.c
