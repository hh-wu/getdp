# $Id: Makefile,v 1.14 2001-03-11 10:20:25 geuzaine Exp $

all:
	chmod 755 *
	cd texinfo && $(MAKE) all
	gtar zcvf getdp-doc.tgz\
          FAQ CONTRIBUTORS BUGS VERSIONS README.txt \
          getdp.bib texinfo/getdp.ps texinfo/getdp.pdf \
          texinfo/*.html texinfo/*.jpg \
          texinfo/getdp-info.tgz getdp.1 

clean:
	$(RM) $(RMFLAGS) getdp.ps getdp.pdf getdp.info*
