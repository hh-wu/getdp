# $Id: Makefile,v 1.7 2000-09-07 18:47:29 geuzaine Exp $

dvi:
	texi2dvi getdp.texi 

ps: dvi
	dvips getdp -o

pdf:
	texi2pdf getdp.texi 

html:
	./texi2html -init_file getdp.t2h getdp.texi

html2:
	makeinfo --html getdp.texi

info:
	makeinfo getdp.texi

install-info:
	cp getdp.info* /usr/local/info/
	install-info getdp.info /usr/local/info/dir

infoz:
	gtar zcvf getdp-info.tgz getdp.info*

all: ps pdf html info


clean:
	$(RM) $(RMFLAGS) *.cp* *.fn* *.ky* *.pg* *.tp* *.vr* *.mv* \
                         *.log *.toc *.aux \
                         *.dvi *.ps getdp.pdf \
                         *.html *.info* getdp-info.tgz*


