# $Id: Makefile,v 1.21 2003-04-15 05:17:29 geuzaine Exp $
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

all:
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
