# $Id: Makefile,v 1.5 2003-02-07 10:27:01 geuzaine Exp $

INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData -I../Main\
          -I../Numeric -I../Sparskit -I../Integration

extrabem: extrabem.c fakecomplex.c
	${CC} -O3 -o extrabem extrabem.c fakecomplex.c -lm

