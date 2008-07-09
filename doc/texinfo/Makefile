# GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

dvi:
	texi2dvi getdp.texi 

ps: dvi
	dvips getdp -o

pdf:
	texi2pdf getdp.texi 

html:
	perl texi2html -init_file getdp.t2h getdp.texi
	rm -f index.html
	ln -s getdp.html index.html

html1:
	perl texi2html -prefix getdp-full -init_file getdp-full.t2h getdp.texi

html2:
	makeinfo --html getdp.texi

info:
	makeinfo getdp.texi

install-info:
	cp getdp.info* /usr/info/
	install-info getdp.info /usr/info/dir

infoz: info
	tar zcvf getdp-info.tgz getdp.info*

txt:
	makeinfo --no-headers getdp.texi -o getdp.txt

all: ps pdf html html1 infoz txt

clean:
	rm -f *~ .*~ *.cp* *.fn* *.ky* *.pg* *.tp* *.vr* *.mv* \
              *.log *.toc *.aux *.dvi *.html \
              getdp.ps getdp.pdf getdp.info* getdp-info.tgz getdp.txt
