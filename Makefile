# $Id: Makefile,v 1.178 2006-02-17 15:37:23 dular Exp $
#
# Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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
# Please report all bugs and problems to <getdp@geuz.org>.

include variables

GETDP_MAJOR_VERSION = 1
GETDP_MINOR_VERSION = 1
GETDP_PATCH_VERSION = 2
GETDP_EXTRA_VERSION = "-cvs"

GETDP_VERSION = ${GETDP_MAJOR_VERSION}.${GETDP_MINOR_VERSION}.${GETDP_PATCH_VERSION}${GETDP_EXTRA_VERSION}

GETDP_SHORT_LICENSE = "GNU General Public License"

GETDP_VERSION_FILE = include/GetDPVersion.h
GETDP_DATE = `date "+%Y%m%d"`

all: variables initialtag compile link

compile: variables initialtag
	@for i in ${GETDP_DIRS}; do (cd $$i && ${MAKE}); done

link: variables
	${LINKER} -o bin/getdp ${GETDP_LIBS}

blackbox: variables initialtag
	@for i in ${GETDP_DIRS}; \
        do (cd $$i && ${MAKE} \
           "C_FLAGS=${C_FLAGS} -DHAVE_BLACKBOX" \
        ); done
	${LINKER} -o bin/getdp-box ${GETDP_LIBS}

install: variables
	-mkdir -p ${bindir}
	-cp bin/getdp${EXEEXT} ${bindir}
	-chmod 755 ${bindir}/getdp${EXEEXT}
	-mkdir -p ${mandir}/man1
	-cp doc/getdp.1 ${mandir}/man1

variables: configure
	@echo "********************************************************************"
	@echo "Please configure GetDP by running ./configure"
	@echo "For help, type ./configure --help"
	@echo "********************************************************************"
	@exit 1

.PHONY: parser
parser:
	cd Parser && ${MAKE} parser

.PHONY: doc
doc:
	cd doc/texinfo && ${MAKE} all
	cd doc && tar zcvf ../getdp-${GETDP_VERSION}-doc.tgz\
          FAQ CREDITS VERSIONS README.win32 getdp.1\
          texinfo/getdp.ps texinfo/getdp.pdf texinfo/getdp.txt\
          texinfo/*.html texinfo/*.jpg texinfo/getdp-info.tgz

doc-info:
	cd doc/texinfo && ${MAKE} info

purge:
	rm -f `find . -name "*~" -o -name "*~~" -o -name ".gmsh-errors"\
                   -o -name "\#*" -o -name "gmon.out"`

clean:
	for i in lib doc/texinfo ${GETDP_DIRS}; do (cd $$i && ${MAKE} clean ); done
	rm -f ${GETDP_VERSION_FILE}

depend:
	for i in ${GETDP_DIRS};\
          do (cd $$i && ${MAKE} depend "SOLVER=-DHAVE_SPARSKIT -DHAVE_GSL");\
        done

nodepend:
	for i in ${GETDP_DIRS}; do (cd $$i && ${MAKE} nodepend); done

tag:
	rm -f ${GETDP_VERSION_FILE}
	echo "#define GETDP_MAJOR_VERSION ${GETDP_MAJOR_VERSION}" >  ${GETDP_VERSION_FILE}
	echo "#define GETDP_MINOR_VERSION ${GETDP_MINOR_VERSION}" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_PATCH_VERSION ${GETDP_PATCH_VERSION}" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_EXTRA_VERSION \"${GETDP_EXTRA_VERSION}\"" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_VERSION  \"${GETDP_VERSION}\"" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_DATE     \"`date`\""     >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_HOST     \"`hostname`\"" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_PACKAGER \"`whoami`\""   >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_OS       \"${UNAME}\""   >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_SHORT_LICENSE \"${GETDP_SHORT_LICENSE}\"" >> ${GETDP_VERSION_FILE}

initialtag:
	@if [ ! -r ${GETDP_VERSION_FILE} ]; then ${MAKE} tag ; fi

tags:
	gtags
	htags

etags:
	etags `find . \( -o -name "*.c" -o -name "*.h" -o -name "*.y" -o -name "*.l" \)`

# Rules to package the sources

source-common:
	rm -rf getdp-${GETDP_VERSION}
	tar zcvf getdp.tgz `ls README* configure *.in Makefile */Makefile\
                            */*.[chylfF] *.spec` doc demos utils
	mkdir getdp-${GETDP_VERSION}
	cd getdp-${GETDP_VERSION} && tar zxvf ../getdp.tgz
	rm -f getdp.tgz
	cd getdp-${GETDP_VERSION}/demos && ${MAKE} clean
	cd getdp-${GETDP_VERSION}/doc && ${MAKE} clean

source: source-common
	cd getdp-${GETDP_VERSION} && rm -rf CVS */CVS */*/CVS */.globalrc\
          ${GETDP_VERSION_FILE} NR utils/commercial utils/temp doc/slides
	tar zcvf getdp-${GETDP_VERSION}-source.tgz getdp-${GETDP_VERSION}

source-commercial: source-common
	cd getdp-${GETDP_VERSION} && rm -rf CVS */CVS */*/CVS */.globalrc\
          ${GETDP_VERSION_FILE} utils/commercial utils/temp doc/slides\
          TODO *.spec doc/getdp.html doc/FAQ doc/README.cvs
	cp -f utils/commercial/README getdp-${GETDP_VERSION}/README
	cp -f utils/commercial/LICENSE getdp-${GETDP_VERSION}/doc/LICENSE
	cp -f utils/commercial/license.texi getdp-${GETDP_VERSION}/doc/texinfo/license.texi
	cp -f utils/commercial/copying.texi getdp-${GETDP_VERSION}/doc/texinfo/copying.texi
	utils/commercial/sanitize.sh getdp-${GETDP_VERSION}
	tar zcvf getdp-${GETDP_VERSION}-source-commercial.tgz getdp-${GETDP_VERSION}

# Rules to package the binaries

package-unix:
	rm -rf getdp-${GETDP_VERSION}
	mkdir getdp-${GETDP_VERSION}
	strip bin/getdp
	cp bin/getdp getdp-${GETDP_VERSION}
	cp doc/getdp.1 doc/LICENSE doc/VERSIONS doc/FAQ doc/CREDITS getdp-${GETDP_VERSION}
	cp -R demos getdp-${GETDP_VERSION}
	rm -rf getdp-${GETDP_VERSION}/*/CVS
	rm -f getdp-${GETDP_VERSION}/*/*.pre
	rm -f getdp-${GETDP_VERSION}/*/*.res
	rm -f getdp-${GETDP_VERSION}/*/*.pos
	rm -f getdp-${GETDP_VERSION}/*/*.cut
	rm -f getdp-${GETDP_VERSION}/*/*~
	tar cvf getdp-${GETDP_VERSION}-${UNAME}.tar getdp-${GETDP_VERSION}
	gzip getdp-${GETDP_VERSION}-${UNAME}.tar
	mv getdp-${GETDP_VERSION}-${UNAME}.tar.gz getdp-${GETDP_VERSION}-${UNAME}.tgz

package-win:
	rm -rf getdp-${GETDP_VERSION}
	mkdir getdp-${GETDP_VERSION}
	strip bin/getdp.exe
	cp /usr/bin/cygwin1.dll getdp-${GETDP_VERSION}
	cp bin/getdp.exe getdp-${GETDP_VERSION}
	cp doc/README.win32 getdp-${GETDP_VERSION}/README.txt
	cp doc/VERSIONS getdp-${GETDP_VERSION}/VERSIONS.txt
	cp doc/FAQ getdp-${GETDP_VERSION}/FAQ.txt
	cp doc/CREDITS getdp-${GETDP_VERSION}/CREDITS.txt
	cp doc/LICENSE getdp-${GETDP_VERSION}/LICENSE.txt
	cd utils/misc && ./unix2dos.bash ../../getdp-${GETDP_VERSION}/*.txt
	cp -R demos getdp-${GETDP_VERSION}
	rm -rf getdp-${GETDP_VERSION}/*/CVS
	rm -f getdp-${GETDP_VERSION}/*/*.pre
	rm -f getdp-${GETDP_VERSION}/*/*.res
	rm -f getdp-${GETDP_VERSION}/*/*.pos
	rm -f getdp-${GETDP_VERSION}/*/*.cut
	rm -f getdp-${GETDP_VERSION}/*/*~
	cd utils/misc && ./unix2dos.bash ../../getdp-${GETDP_VERSION}/demos/*
	cd getdp-${GETDP_VERSION} && zip -r getdp-${GETDP_VERSION}-Windows.zip *
	mv getdp-${GETDP_VERSION}/getdp-${GETDP_VERSION}-Windows.zip .

package-mac: package-unix
	mv getdp-${GETDP_VERSION}-${UNAME}.tgz getdp-${GETDP_VERSION}-MacOSX.tgz

package-rpm:
	tar zcvf /usr/src/redhat/SOURCES/getdp-${GETDP_VERSION}.tar.gz .
	rpmbuild -bb --define 'getdpversion ${GETDP_VERSION}' getdp.spec
	mv /usr/src/redhat/RPMS/i386/getdp-${GETDP_VERSION}-?.i386.rpm .
	mv /usr/src/redhat/BUILD/getdp-${GETDP_VERSION}/getdp-${GETDP_VERSION}-${UNAME}.tgz .
	rm -f /usr/src/redhat/SOURCES/getdp-${GETDP_VERSION}.tar.gz
	rm -rf /usr/src/redhat/BUILD/getdp-${GETDP_VERSION}

# Rules to distribute official releases

distrib-pre:
	mv -f Makefile Makefile.distrib
	sed -e "s/^GETDP_EXTRA_VERSION.*/GETDP_EXTRA_VERSION =/g"\
          Makefile.distrib > Makefile
	make tag

distrib-post:
	mv -f Makefile.distrib Makefile
	rm -f ${GETDP_VERSION_FILE}

distrib-unix:
	make distrib-pre
	make all
	make package-unix
	make distrib-post
	ldd bin/getdp

distrib-win: 
	make distrib-pre
	make all
	make package-win
	make distrib-post
	objdump -p bin/getdp.exe | grep DLL

distrib-mac:
	make distrib-pre
	make all
	make package-mac
	make distrib-post
	otool -L bin/getdp

distrib-rpm:
	make distrib-pre
	make package-rpm
	make distrib-post

distrib-source:
	make distrib-pre
	make source
	make distrib-post

distrib-source-commercial:
	make distrib-pre
	make source-commercial
	make distrib-post

distrib-source-nightly:
	mv -f Makefile Makefile.distrib
	sed -e "s/^GETDP_EXTRA_VERSION.*/GETDP_EXTRA_VERSION = \"-nightly-${GETDP_DATE}\"/g"\
          Makefile.distrib > Makefile
	make source
	make distrib-post
