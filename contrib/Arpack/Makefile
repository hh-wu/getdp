# GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

include ../../variables

LIB = ../../lib/libGetDPArpack${LIBEXT}

INC = 

FFLAGS = ${OPTIM} ${FLAGS} ${INC}

SSRC  = sgetv0.f slaqrb.f sstqrb.f ssortc.f ssortr.f sstatn.f sstats.f \
	snaitr.f snapps.f snaup2.f snaupd.f snconv.f sneigh.f sngets.f \
	ssaitr.f ssapps.f ssaup2.f ssaupd.f ssconv.f sseigt.f ssgets.f \
	sneupd.f sseupd.f ssesrt.f

DSRC  = dgetv0.f dlaqrb.f dstqrb.f dsortc.f dsortr.f dstatn.f dstats.f \
	dnaitr.f dnapps.f dnaup2.f dnaupd.f dnconv.f dneigh.f dngets.f \
	dsaitr.f dsapps.f dsaup2.f dsaupd.f dsconv.f dseigt.f dsgets.f \
	dneupd.f dseupd.f dsesrt.f

CSRC  = cnaitr.f cnapps.f cnaup2.f cnaupd.f cneigh.f cneupd.f cngets.f \
        cgetv0.f csortc.f cstatn.f

ZSRC  = znaitr.f znapps.f znaup2.f znaupd.f zneigh.f zneupd.f zngets.f \
        zgetv0.f zsortc.f zstatn.f

UTILS = cvout.f dmout.f dvout.f icnteq.f icopy.f iset.f iswap.f \
        ivout.f second.f smout.f svout.f zmout.f zvout.f

OBJ = ${SSRC:.f=${OBJEXT}} ${DSRC:.f=${OBJEXT}} ${ZSRC:.f=${OBJEXT}} ${UTILS:.f=${OBJEXT}}

.SUFFIXES: .${OBJEXT} .f

${LIB}: ${OBJ}
	${AR} ${ARFLAGS}${LIB} ${OBJ}
	${RANLIB} ${LIB}

.f${OBJEXT}:
	${FC} ${FFLAGS} ${DASH}c $<

clean:
	rm -f *.o *.obj


depend:
	true

# DO NOT DELETE THIS LINE
