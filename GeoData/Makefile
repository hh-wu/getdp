# $Id: Makefile,v 1.10 2001-11-22 15:38:36 ledinh Exp $
#
# Makefile for "libGeoData.a"
#

.IGNORE:

C_FLAGS = -g
RANLIB  = ranlib
AR      = ar ruvs

LIB     = ../lib/libGeoData.a
INCLUDE = -I. -I../include -I../DataStr -I../Main

CFLAGS = $(C_FLAGS) $(OS_FLAGS) $(INCLUDE)

SRC = GeoData.c \
      GeoEntity.c \
      GeoTree.c \
      GeoNormal.c

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
