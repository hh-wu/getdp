# $Id: Makefile,v 1.19 2003-03-18 01:50:17 geuzaine Exp $

all:
	chmod 644 *
	cd texinfo && ${MAKE} all
	gtar zcvf getdp-doc.tgz\
          FAQ CONTRIBUTORS VERSIONS README.win32 \
          getdp.bib texinfo/getdp.ps texinfo/getdp.pdf \
          texinfo/*.html texinfo/*.jpg \
          texinfo/getdp-info.tgz getdp.1 

clean:
	rm -f getdp.ps getdp.pdf getdp.info*
	cd texinfo && ${MAKE} clean
	cd slides && ${MAKE} clean
