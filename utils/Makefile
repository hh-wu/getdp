# $Id: Makefile,v 1.4 2002-02-07 22:14:54 geuzaine Exp $

INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData -I../Main\
          -I../Numeric -I../Sparskit -I../Integration

extrabem: extrabem.c fakecomplex.c
	$(CC) -O3 -o extrabem extrabem.c fakecomplex.c -lm

