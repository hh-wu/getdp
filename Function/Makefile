# $Id: Makefile,v 1.15 2001-11-22 15:38:36 ledinh Exp $
#
# Makefile for "libFunction.a"
#

.IGNORE:

C_FLAGS = -g
RANLIB  = ranlib
AR      = ar ruvs

LIB     = ../lib/libFunction.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData -I../Main\
          -I../Numeric -I../Sparskit -I../Integration

SOLVER = -D_SPARSKIT

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(SOLVER_FLAGS) $(SOLVER) $(INCLUDE)

SRC = F_Analytic.c \
      F_Coord.c \
      F_Math.c \
      F_ExtMath.c \
      F_Misc.c \
      F_Type.c \
      F_MultiHar.c \
      BF_Node.c \
      BF_Node_2.c \
      BF_Node_3.c \
      BF_Edge.c \
      BF_Edge_2.c \
      BF_Edge_3.c \
      BF_Edge_4.c \
      BF_Facet.c \
      BF_Volume.c \
      BF_Perpendicular.c \
      BF_GroupOfEntities.c \
      BF_NodeXYZ.c \
      BF_Region.c \
      GF_Laplace.c \
      GF_LaplacexForm.c \
      GF_Helmholtz.c \
      GF_HelmholtzxForm.c 

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
