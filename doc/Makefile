# $Id: Makefile,v 1.18 2003-03-17 19:53:16 geuzaine Exp $

all:
	chmod 644 *
	cd texinfo && ${MAKE} all
	gtar zcvf getdp-doc.tgz\
          FAQ CONTRIBUTORS VERSIONS README.txt \
          getdp.bib texinfo/getdp.ps texinfo/getdp.pdf \
          texinfo/*.html texinfo/*.jpg \
          texinfo/getdp-info.tgz getdp.1 

clean:
	rm -f getdp.ps getdp.pdf getdp.info*
	cd texinfo && ${MAKE} clean
	cd slides && ${MAKE} clean
