# $Id: Makefile,v 1.15 2003-02-07 02:39:02 geuzaine Exp $
#
# Makefile for "libDofData.a"
#

.IGNORE:

C_FLAGS = -g
RANLIB  = ranlib
AR      = ar ruvs

SOLVER = -D_SPARSKIT

LIB     = ../lib/libDofData.a
INCLUDE = -I. -I../include -I../DataStr -I../GeoData -I../Main -I../Sparskit

CFLAGS = $(C_FLAGS) $(SOLVER) $(INCLUDE)

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
  ../DataStr/Malloc.h ../include/GetDPVersion.h DofData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h LinAlg.h \
  ../Sparskit/Solver.h ../Main/Graph.h Data_DofData.h ../DataStr/Tools.h \
  ../include/Magic.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h
LinAlg_SPARSKIT.o: LinAlg_SPARSKIT.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../include/Magic.h LinAlg.h ../Sparskit/Solver.h \
  ../DataStr/List.h
LinAlg_PETSC.o: LinAlg_PETSC.c
