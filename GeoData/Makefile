# $Id: Makefile,v 1.4 2000-09-08 09:51:11 geuzaine Exp $
#
# Makefile for "libGeoData.a"
#

.IGNORE:

C_FLAGS = -g
RANLIB  = /usr/bin/ranlib

LIB     = ../lib/libGeoData.a
INCLUDE = -I. -I../include -I../DataStr -I../Main

CFLAGS = $(C_FLAGS) $(OS_FLAGS) $(INCLUDE)

SRC = GeoData.c \
      GeoEntity.c \
      GeoTree.c \
      GeoNormal.c

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
GeoData.o: GeoData.c GeoData.h ../Main/Message.h Data_GeoData.h \
 ../DataStr/listman.h ../DataStr/treeman.h ../DataStr/avl.h \
 ../Main/Data_Passive.h ../Main/Data_Element.h ../DataStr/ualloc.h \
 ../include/Magic.h
GeoEntity.o: GeoEntity.c GeoData.h ../Main/Message.h Data_GeoData.h \
 ../DataStr/listman.h ../DataStr/treeman.h ../DataStr/avl.h \
 ../Main/Data_Passive.h ../Main/Data_Element.h GeoEntity.h \
 ../DataStr/ualloc.h ../DataStr/outil.h ../include/Magic.h
GeoTree.o: GeoTree.c GeoData.h ../Main/Message.h Data_GeoData.h \
 ../DataStr/listman.h ../DataStr/treeman.h ../DataStr/avl.h \
 ../Main/Data_Passive.h ../Main/Data_Element.h ../DataStr/ualloc.h \
 ../DataStr/outil.h
GeoNormal.o: GeoNormal.c ../Main/Data_Passive.h ../DataStr/listman.h \
 ../Main/Message.h ../Main/Data_Element.h GeoData.h Data_GeoData.h \
 ../DataStr/treeman.h ../DataStr/avl.h ../Main/Data_Numeric.h \
 ../DataStr/ualloc.h ../DataStr/outil.h
