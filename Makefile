# $Id: Makefile,v 1.154 2004-04-15 02:17:01 geuzaine Exp $
#
# Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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
GETDP_MINOR_VERSION = 0
GETDP_PATCH_VERSION = 0
GETDP_EXTRA_VERSION =

GETDP_VERSION = ${GETDP_MAJOR_VERSION}.${GETDP_MINOR_VERSION}.${GETDP_PATCH_VERSION}${GETDP_EXTRA_VERSION}

GETDP_SHORT_LICENSE = "GNU General Public License"

GETDP_VERSION_FILE = include/GetDPVersion.h
GETDP_DATE = `date "+%Y%m%d"`
GETDP_ARCHIVE = archives/getdp-${GETDP_DATE}
GETDP_SOURCES = `find . \( ! -name "*.tar*" -a ! -name "*.tgz" \
                        -a ! -name "*.o"    -a ! -name "*.a"   -a ! -name "*.cut"   \
                        -a ! -name "*.pos"  -a ! -name "*.pre" -a ! -name "*.res" \
                        -a ! -name "*.bak"  -a ! -name "getdp" -a ! -name "getdp-*" \
                        -a ! -type d       \)`

all: variables initialtag compile link

compile: variables initialtag
	@for i in ${GETDP_DIRS}; do (cd $$i && ${MAKE}); done

link: variables
	${LINKER} -o bin/getdp ${GETDP_LIBS}

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

tag:
	rm -f ${GETDP_VERSION_FILE}
	echo "#define GETDP_MAJOR_VERSION ${GETDP_MAJOR_VERSION}" >  ${GETDP_VERSION_FILE}
	echo "#define GETDP_MINOR_VERSION ${GETDP_MINOR_VERSION}" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_PATCH_VERSION ${GETDP_PATCH_VERSION}" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_EXTRA_VERSION \"${GETDP_EXTRA_VERSION}\"" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_VERSION  \"${GETDP_VERSION}\"" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_DATE     \"`date`\""      >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_HOST     \"`hostname`\""  >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_PACKAGER \"`whoami`\""    >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_OS       \"`uname -sr`\"" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_SHORT_LICENSE \"${GETDP_SHORT_LICENSE}\"" >> ${GETDP_VERSION_FILE}

initialtag:
	@if [ ! -r ${GETDP_VERSION_FILE} ]; then ${MAKE} tag ; fi

tags:
	gtags
	htags

.PHONY: parser
parser:
	cd Parser && ${MAKE} parser

depend:
	for i in ${GETDP_DIRS};\
          do (cd $$i && ${MAKE} depend "SOLVER=-DHAVE_SPARSKIT -DHAVE_GSL");\
        done

nodepend:
	for i in ${GETDP_DIRS}; do (cd $$i && ${MAKE} nodepend); done

clean:
	for i in lib doc/texinfo ${GETDP_DIRS}; do (cd $$i && ${MAKE} clean ); done
	rm -f ${GETDP_VERSION_FILE}

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

tgz:
	if (test -f ${GETDP_ARCHIVE}.tar.gz); \
	  then mv -f ${GETDP_ARCHIVE}.tar.gz ${GETDP_ARCHIVE}.tar.gz~; \
	fi
	tar cvf ${GETDP_ARCHIVE}.tar ${GETDP_SOURCES}
	gzip ${GETDP_ARCHIVE}.tar
	chmod 640 ${GETDP_ARCHIVE}.tar.gz

zip:
	zip ${GETDP_ARCHIVE}.zip ${GETDP_SOURCES}

minizip:
	tar jcvf getdp-`date "+%Y.%m.%d"`.tar.bz2\
            `ls Makefile */Makefile */*.[cfFhyl] */*.cpp */*.txt */*.pro */*.par */*.geo`

tgzdoc:
	tar cvf getdp-texi.tar doc/texinfo
	gzip getdp-texi.tar

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
	cd utils && unix2dos ../getdp-${GETDP_VERSION}/*.txt
	cp -R demos getdp-${GETDP_VERSION}
	rm -rf getdp-${GETDP_VERSION}/*/CVS
	rm -f getdp-${GETDP_VERSION}/*/*.pre
	rm -f getdp-${GETDP_VERSION}/*/*.res
	rm -f getdp-${GETDP_VERSION}/*/*.pos
	rm -f getdp-${GETDP_VERSION}/*/*.cut
	rm -f getdp-${GETDP_VERSION}/*/*~
	cd utils && unix2dos ../getdp-${GETDP_VERSION}/demos/*
	cd getdp-${GETDP_VERSION} && zip -r getdp-${GETDP_VERSION}-Windows.zip *
	mv getdp-${GETDP_VERSION}/getdp-${GETDP_VERSION}-Windows.zip .

distrib-msg:
	@echo "********************************************************************"
	@echo "Remember to change -ltermcap, etc. to /usr/lib/libtermcap.a, etc. in"
	@echo "./variables and relink if the list below contains non-standard"
	@echo "dynamic libs and you want to distribute a portable binary:"
	@echo "********************************************************************"

distrib-unix: clean all package-unix distrib-msg
	ldd bin/getdp

distrib-win: clean all package-win distrib-msg
	objdump -p bin/getdp.exe | grep DLL

distrib-mac: clean all package-unix distrib-msg
	mv getdp-${GETDP_VERSION}-${UNAME}.tgz getdp-${GETDP_VERSION}-MacOSX.tgz
	otool -L bin/getdp

source-common:
	rm -rf getdp-${GETDP_VERSION}
	tar zcvf getdp.tgz `ls README* configure *.in Makefile */Makefile\
                            */*.[chylfF] */*.[ch]pp *.spec` doc demos
	mkdir getdp-${GETDP_VERSION}
	cd getdp-${GETDP_VERSION} && tar zxvf ../getdp.tgz
	rm -f getdp.tgz
	cd getdp-${GETDP_VERSION}/demos && ${MAKE} clean
	cd getdp-${GETDP_VERSION}/doc && ${MAKE} clean

source: source-common
	cd getdp-${GETDP_VERSION} && rm -rf NR Scattering utils doc/slides\
                                            ${GETDP_VERSION_FILE} CVS */CVS */*/CVS
	tar zcvf getdp-${GETDP_VERSION}-source.tgz getdp-${GETDP_VERSION}

source-nightly:
	mv -f Makefile Makefile.nightly
	sed -e "s/^GETDP_EXTRA_VERSION.*/GETDP_EXTRA_VERSION = \"-nightly-${GETDP_DATE}\"/g"\
          Makefile.nightly > Makefile
	make source
	mv -f Makefile.nightly Makefile

source-commercial: source-common
	cd getdp-${GETDP_VERSION} && rm -rf Scattering utils doc/slides\
                                            ${GETDP_VERSION_FILE} CVS */CVS */*/CVS
	tar zcvf getdp-${GETDP_VERSION}-source-commercial.tgz getdp-${GETDP_VERSION}

rpm:
	tar zcvf /usr/src/redhat/SOURCES/getdp-${GETDP_VERSION}.tar.gz ${GETDP_SOURCES}
	rpmbuild -bb --define 'getdpversion ${GETDP_VERSION}' getdp.spec
	cp /usr/src/redhat/RPMS/i386/getdp-${GETDP_VERSION}-?.i386.rpm .
	cp /usr/src/redhat/BUILD/getdp-${GETDP_VERSION}/getdp-${GETDP_VERSION}-${UNAME}.tgz .

blackbox: initialtag
	@for i in ${GETDP_DIRS}; \
        do (cd $$i && ${MAKE} \
           "C_FLAGS=${C_FLAGS} -DHAVE_BLACKBOX" \
        ); done
	${LINKER} -o bin/getdp-box ${GETDP_LIBS}

compile-hf: initialtag
	@for i in Scattering DofData Numeric DataStr NR; do (cd $$i && ${MAKE}); done

link-hf:
	${CLINKER} -o bin/hf lib/libScattering.a lib/libDofData.a lib/libNumeric.a\
          lib/libDataStr.a lib/libNR.a  ${PETSC_SLES_LIB} -L${FFTW_DIR}/lib -lfftw -lm

hf: compile-hf link-hf
