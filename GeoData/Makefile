# $Id: Makefile,v 1.14 2003-03-17 11:23:40 sabarieg Exp $

include ../variables

LIB     = ../lib/libGeoData.a
INCLUDE = -I. -I../include -I../DataStr -I../Main
CFLAGS  = ${C_FLAGS} ${INCLUDE}

SRC = GeoData.c \
      GeoEntity.c \
      GeoTree.c \
      GeoNormal.c

OBJ = ${SRC:.c=.o}

${LIB}: ${OBJ}
	${AR} ${LIB} ${OBJ}
	${RANLIB} ${LIB}

clean:
	rm -f *.o

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CC} -MM ${CFLAGS} ${SRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

nodepend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

# DO NOT DELETE THIS LINE
GeoData.o: GeoData.c ../include/GetDP.h ../Main/Message.h \
 ../DataStr/Malloc.h GeoData.h Data_GeoData.h ../DataStr/List.h \
 ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Passive.h \
 ../Main/Data_Element.h ../Main/Data_Numeric.h ../include/Magic.h
GeoEntity.o: GeoEntity.c ../include/GetDP.h ../Main/Message.h \
 ../DataStr/Malloc.h GeoData.h Data_GeoData.h ../DataStr/List.h \
 ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Passive.h \
 ../Main/Data_Element.h GeoEntity.h ../include/Magic.h \
 ../DataStr/Tools.h
GeoTree.o: GeoTree.c ../include/GetDP.h ../Main/Message.h \
 ../DataStr/Malloc.h GeoData.h Data_GeoData.h ../DataStr/List.h \
 ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Passive.h \
 ../Main/Data_Element.h ../DataStr/Tools.h
GeoNormal.o: GeoNormal.c ../include/GetDP.h ../Main/Message.h \
 ../DataStr/Malloc.h ../Main/Data_Passive.h ../DataStr/List.h \
 ../Main/Data_Element.h GeoData.h Data_GeoData.h ../DataStr/Tree.h \
 ../DataStr/avl.h ../Main/Data_Numeric.h ../DataStr/Tools.h
