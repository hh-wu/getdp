#
# Makefile for "libGeoData.a"
#

.IGNORE:

C_FLAGS = -g
RANLIB  = /usr/bin/ranlib

LIB     = ../lib/libGeoData.a
INCLUDE = -I../include

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
GeoData.o: GeoData.c GeoData.h ../include/Message.h \
 ../include/../Main/Message.h Data_GeoData.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Data_Element.h ../include/../Main/Data_Element.h \
 ../include/GeoData.h ../include/../GeoData/GeoData.h \
 ../include/ualloc.h ../include/../DataStr/ualloc.h ../include/Magic.h
GeoEntity.o: GeoEntity.c GeoData.h ../include/Message.h \
 ../include/../Main/Message.h Data_GeoData.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Data_Passive.h ../include/../Main/Data_Passive.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h GeoEntity.h ../include/ualloc.h \
 ../include/../DataStr/ualloc.h ../include/outil.h \
 ../include/../DataStr/outil.h ../include/Magic.h
GeoTree.o: GeoTree.c GeoData.h ../include/Message.h \
 ../include/../Main/Message.h Data_GeoData.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Data_Passive.h ../include/../Main/Data_Passive.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/ualloc.h \
 ../include/../DataStr/ualloc.h ../include/outil.h \
 ../include/../DataStr/outil.h
GeoNormal.o: GeoNormal.c ../include/Data_Passive.h \
 ../include/../Main/Data_Passive.h ../include/listman.h \
 ../include/../DataStr/listman.h ../include/../Main/Message.h \
 ../include/../Main/Data_Element.h ../include/GeoData.h \
 ../include/../GeoData/GeoData.h ../include/Message.h \
 ../include/../GeoData/Data_GeoData.h ../include/treeman.h \
 ../include/../DataStr/treeman.h ../include/../DataStr/avl.h \
 ../include/Data_Numeric.h ../include/../Main/Data_Numeric.h GeoData.h \
 ../include/ualloc.h ../include/../DataStr/ualloc.h ../include/outil.h \
 ../include/../DataStr/outil.h
