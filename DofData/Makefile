# $Id: Makefile,v 1.9 2001-11-20 12:21:08 geuzaine Exp $
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
DofData.o: DofData.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h DofData.h ../DataStr/List.h ../DataStr/Tree.h \
  ../DataStr/avl.h LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  Data_DofData.h ../include/Version.h ../DataStr/Tools.h \
  ../include/Magic.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h
LinAlg_SPARSKIT.o: LinAlg_SPARSKIT.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../include/Magic.h LinAlg.h ../Sparskit/Solver.h \
  ../DataStr/List.h
LinAlg_PETSC.o: LinAlg_PETSC.c
