# $Id: Makefile,v 1.12 2001-07-29 12:34:44 geuzaine Exp $
#
# Makefile for "libIntegration.a"
#

.IGNORE:

C_FLAGS = -g
RANLIB  = /usr/bin/ranlib

LIB     = ../lib/libIntegration.a
INCLUDE = -I. -I../include -I../DataStr -I../Main

CFLAGS  = $(C_FLAGS) $(OS_FLAGS) $(INCLUDE)

SRC = Gauss_Point.c \
      Gauss_Line.c \
      Gauss_Triangle.c \
      Gauss_Quadrangle.c \
      Gauss_Tetrahedron.c \
      Gauss_Hexahedron.c \
      Gauss_Prism.c \
      Gauss_Pyramid.c \
      NewtonCotes_Line.c \
      NewtonCotes_Quadrangle.c 

OBJ = $(SRC:.c=.o)

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
	$(RM) Makefile.new

nodepend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	$(RM) Makefile.new

# DO NOT DELETE THIS LINE
Gauss_Point.o: Gauss_Point.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h
Gauss_Line.o: Gauss_Line.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Quadrature.h Gauss_Line.h
Gauss_Triangle.o: Gauss_Triangle.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Quadrature.h Gauss_Triangle.h
Gauss_Quadrangle.o: Gauss_Quadrangle.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h Quadrature.h Gauss_Quadrangle.h
Gauss_Tetrahedron.o: Gauss_Tetrahedron.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h Quadrature.h Gauss_Tetrahedron.h
Gauss_Hexahedron.o: Gauss_Hexahedron.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h Quadrature.h Gauss_Hexahedron.h
Gauss_Prism.o: Gauss_Prism.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Gauss_Prism.h
Gauss_Pyramid.o: Gauss_Pyramid.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h Gauss_Pyramid.h
NewtonCotes_Line.o: NewtonCotes_Line.c
NewtonCotes_Quadrangle.o: NewtonCotes_Quadrangle.c
