#
# Makefile for "libIntegration.a"
#

.IGNORE:

C_FLAGS = -g
RANLIB  = /usr/bin/ranlib

LIB     = ../lib/libIntegration.a
INCLUDE = -I../include 

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
Gauss_Point.o: Gauss_Point.c
Gauss_Line.o: Gauss_Line.c ../include/Message.h \
 ../include/../Main/Message.h Gauss_Line.h
Gauss_Triangle.o: Gauss_Triangle.c ../include/Message.h \
 ../include/../Main/Message.h Quadrature.h Gauss_Triangle.h \
 ../include/ualloc.h ../include/../DataStr/ualloc.h
Gauss_Quadrangle.o: Gauss_Quadrangle.c ../include/Message.h \
 ../include/../Main/Message.h Quadrature.h Gauss_Quadrangle.h \
 ../include/ualloc.h ../include/../DataStr/ualloc.h
Gauss_Tetrahedron.o: Gauss_Tetrahedron.c ../include/Message.h \
 ../include/../Main/Message.h Quadrature.h Gauss_Tetrahedron.h \
 ../include/ualloc.h ../include/../DataStr/ualloc.h
Gauss_Hexahedron.o: Gauss_Hexahedron.c ../include/Message.h \
 ../include/../Main/Message.h Quadrature.h Gauss_Hexahedron.h \
 ../include/ualloc.h ../include/../DataStr/ualloc.h
Gauss_Prism.o: Gauss_Prism.c ../include/Message.h \
 ../include/../Main/Message.h Gauss_Prism.h
Gauss_Pyramid.o: Gauss_Pyramid.c ../include/Message.h \
 ../include/../Main/Message.h Gauss_Pyramid.h
NewtonCotes_Line.o: NewtonCotes_Line.c
NewtonCotes_Quadrangle.o: NewtonCotes_Quadrangle.c
