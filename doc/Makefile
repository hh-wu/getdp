# $Id: Makefile,v 1.13 2001-03-07 09:27:42 geuzaine Exp $

all:
	cd texinfo && $(MAKE) all
	gtar zcvf getdp-doc.tgz\
          FAQ CONTRIBUTORS BUGS VERSIONS\
          getdp.bib texinfo/getdp.ps texinfo/getdp.pdf \
          texinfo/*.html texinfo/*.jpg \
          texinfo/getdp-info.tgz getdp.1 

clean:
	$(RM) $(RMFLAGS) getdp.ps getdp.pdf getdp.info*
