# GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

pdf:
	texi2pdf getdp.texi 

html:
	makeinfo --html --no-split getdp.texi

info:
	makeinfo --split-size 1000000 getdp.texi

install-info:
	cp getdp.info* /usr/info/
	install-info getdp.info /usr/info/dir

infoz: info
	tar zcvf getdp-info.tgz getdp.info*

txt:
	makeinfo --plaintext -o getdp.txt getdp.texi

all: pdf html info txt

clean:
	rm -f *~ .*~ *.cp* *.fn* *.ky* *.pg* *.tp* *.vr* *.mv* \
              *.log *.toc *.aux *.dvi *.html \
              getdp.pdf getdp.info* getdp-info.tgz getdp.txt
