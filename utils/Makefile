# $Id: Makefile,v 1.3 2002-02-07 17:19:05 geuzaine Exp $

INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData -I../Main\
          -I../Numeric -I../Sparskit -I../Integration

hf: hf.cpp
	$(CXX) $(INCLUDE) -o hf hf.cpp -L../lib -lNumeric -lm

extrabem: extrabem.c fakecomplex.c
	$(CC) -O3 -o extrabem extrabem.c fakecomplex.c -lm

