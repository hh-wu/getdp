# $Id: Makefile,v 1.9 2003-07-23 18:41:11 geuzaine Exp $
#
# Copyright (C) 1997-2003 P. Dular, C. Geuzaine
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
# USA.
# 
# Please report all bugs and problems to "getdp@geuz.org".

dvi:
	texi2dvi getdp.texi 

ps: dvi
	dvips getdp -o

pdf:
	texi2pdf getdp.texi 

html:
	./texi2html -init_file getdp.t2h getdp.texi
	rm -f index.html
	ln -s getdp.html index.html

html1:
	./texi2html -prefix getdp-full -init_file getdp-full.t2h getdp.texi

html2:
	makeinfo --html getdp.texi

info:
	makeinfo getdp.texi

install-info:
	cp getdp.info* /usr/info/
	install-info getdp.info /usr/info/dir

infoz: info
	gtar zcvf getdp-info.tgz getdp.info*

txt:
	makeinfo --no-headers getdp.texi |\
        sed -n '/...Table of Contents.../,$$p' |\
        sed 's/...Table of Contents...//' > getdp.txt

all: ps pdf html html1 infoz txt

clean:
	rm -f *~ .*~ *.cp* *.fn* *.ky* *.pg* *.tp* *.vr* *.mv* \
              *.log *.toc *.aux *.dvi *.html \
              getdp.ps getdp.pdf getdp.info* getdp-info.tgz getdp.txt
