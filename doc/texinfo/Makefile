# $Id: Makefile,v 1.1 2001-03-07 11:38:05 geuzaine Exp $

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

infoz: info
	gtar zcvf getdp-info.tgz getdp.info*

all: ps pdf html infoz

clean:
	$(RM) $(RMFLAGS) *.cp* *.fn* *.ky* *.pg* *.tp* *.vr* *.mv* \
                         *.log *.toc *.aux *.dvi *.html \
                         getdp.ps getdp.pdf getdp.info* \
                         getdp-info.tgz getdp-doc.tgz

