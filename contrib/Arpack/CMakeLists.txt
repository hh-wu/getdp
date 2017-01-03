# GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to the public mailing list <getdp@onelab.info>.

set(SRC
  sgetv0.f slaqrb.f sstqrb.f ssortc.f ssortr.f sstatn.f sstats.f
    snaitr.f snapps.f snaup2.f snaupd.f snconv.f sneigh.f sngets.f
    ssaitr.f ssapps.f ssaup2.f ssaupd.f ssconv.f sseigt.f ssgets.f
    sneupd.f sseupd.f ssesrt.f
  dgetv0.f dlaqrb.f dstqrb.f dsortc.f dsortr.f dstatn.f dstats.f
    dnaitr.f dnapps.f dnaup2.f dnaupd.f dnconv.f dneigh.f dngets.f
    dsaitr.f dsapps.f dsaup2.f dsaupd.f dsconv.f dseigt.f dsgets.f
    dneupd.f dseupd.f dsesrt.f
  cnaitr.f cnapps.f cnaup2.f cnaupd.f cneigh.f cneupd.f cngets.f
    cgetv0.f csortc.f cstatn.f
  znaitr.f znapps.f znaup2.f znaupd.f zneigh.f zneupd.f zngets.f
    zgetv0.f zsortc.f zstatn.f
  cvout.f dmout.f dvout.f icnteq.f icopy.f iset.f iswap.f
    ivout.f second.f smout.f svout.f zmout.f zvout.f cmout.f
)

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
append_getdp_src(contrib/Arpack "${SRC};${HDR}")
