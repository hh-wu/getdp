# GetDP - Copyright (C) 1997-2010 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

include variables

GETDP_MAJOR_VERSION = 2
GETDP_MINOR_VERSION = 1
GETDP_PATCH_VERSION = 1
GETDP_EXTRA_VERSION = "-svn-20110411"

GETDP_VERSION =\
  ${GETDP_MAJOR_VERSION}.${GETDP_MINOR_VERSION}.${GETDP_PATCH_VERSION}${GETDP_EXTRA_VERSION}

GETDP_SHORT_LICENSE = "GNU General Public License"

GETDP_VERSION_FILE = Common/GetDPVersion.h
GETDP_DATE = `date "+%Y%m%d"`

all: link

link: compile
	${LINKER} ${OPTIM} -o bin/getdp Main/Main${OBJEXT} ${GETDP_LIBS}

chris: compile
	cd Main && make MainChris${OBJEXT}
	${LINKER} ${OPTIM} -o bin/getdp2 Main/MainChris${OBJEXT} ${GETDP_LIBS}

link-mac-universal: compile
	${LINKER} -arch i386 ${OPTIM} -o bin/getdp_i386 ${GETDP_LIBS}
	${LINKER} -arch ppc ${OPTIM} -o bin/getdp_ppc ${GETDP_LIBS}
	lipo -create bin/getdp_i386 bin/getdp_ppc -output bin/getdp
	rm -f bin/getdp_i386 bin/getdp_ppc

compile: variables initialtag
	@for i in ${GETDP_DIRS}; do (cd $$i && ${MAKE}); done

install: variables
	mkdir -p ${bindir}
	cp -f bin/getdp${EXEEXT} ${bindir}
	chmod 755 ${bindir}/getdp${EXEEXT}
	mkdir -p ${mandir}/man1
	cp -f doc/getdp.1 ${mandir}/man1

variables: configure
	@echo "********************************************************************"
	@echo "Please configure GetDP by running ./configure"
	@echo "For help, type ./configure --help"
	@echo "********************************************************************"
	@exit 1

parser:
	cd Interface && ${MAKE} parser

purge:
	rm -f `find . -name "*~" -o -name "*~~" -o -name ".getdp-errors"\
               -o -name "\#*" -o -name ".\#*" -o -name ".DS_Store"\
               -o -name "gmon.out" -o -name ".gdb_history" -o -name "debug?.pos"\
               -o -name "*.bak"`

clean:
	for i in doc lib demos ${GETDP_DIRS}; do (cd $$i && ${MAKE} clean); done
	rm -f ${GETDP_VERSION_FILE}

depend: initialtag
	mv -f Common/GetDPConfig.h .
	cp -f utils/misc/GetDPConfig.depend Common/GetDPConfig.h
	for i in ${GETDP_DIRS}; do (cd $$i && ${MAKE} depend "CXX=g++"); done
	mv -f GetDPConfig.h Common/

nodepend:
	for i in ${GETDP_DIRS} ; do\
          (cd $$i && (sed '/^# DO NOT DELETE THIS LINE/q' Makefile) > Makefile.new\
          && cp Makefile Makefile.bak\
          && cp Makefile.new Makefile\
          && rm -f Makefile.new);\
        done 

tag:
	rm -f ${GETDP_VERSION_FILE}
	echo "#define GETDP_MAJOR_VERSION ${GETDP_MAJOR_VERSION}" >  ${GETDP_VERSION_FILE}
	echo "#define GETDP_MINOR_VERSION ${GETDP_MINOR_VERSION}" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_PATCH_VERSION ${GETDP_PATCH_VERSION}" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_EXTRA_VERSION \"${GETDP_EXTRA_VERSION}\"" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_VERSION       \"${GETDP_VERSION}\"" >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_DATE          \"`date`\""          >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_HOST          \"${HOSTNAME}\""     >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_PACKAGER      \"`whoami`\""        >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_OS            \"${UNAME}\""        >> ${GETDP_VERSION_FILE}
	echo "#define GETDP_SHORT_LICENSE \"${GETDP_SHORT_LICENSE}\"" >> ${GETDP_VERSION_FILE}

initialtag:
	@if [ ! -r ${GETDP_VERSION_FILE} ]; then ${MAKE} tag ; fi

tags:
	gtags
	htags

etags:
	etags `find . \( -name "*.cpp" -o -name "*.c" -o -name "*.h"\
                      -o -name "*.y" -o -name "*.l" \)`

# Rules to package the sources

source-common: purge
	rm -rf getdp-${GETDP_VERSION}
	tar zcf getdp.tgz --exclude "*.o" --exclude "*.a" --exclude "getdp"\
          --exclude "variables" --exclude "config.log" --exclude "config.status"\
          --exclude "autom4*" --exclude "Makefile.distrib" --exclude "Makefile.bak"\
          --exclude "benchmarks" --exclude "HTML"\
          --exclude "*TAGS*" --exclude "GSYMS" --exclude "GPATH" --exclude ".svn"\
          *
	mkdir getdp-${GETDP_VERSION}
	cd getdp-${GETDP_VERSION} && tar zxf ../getdp.tgz
	rm -f getdp.tgz
	cd getdp-${GETDP_VERSION}/demos && ${MAKE} clean
	cd getdp-${GETDP_VERSION}/doc && ${MAKE} clean

source: source-common
	cd getdp-${GETDP_VERSION} && rm -rf */.globalrc\
          ${GETDP_VERSION_FILE} contrib/NR contrib/ZITSOL_1
	tar zcf getdp-${GETDP_VERSION}-source.tgz getdp-${GETDP_VERSION}

# Rules to package the binaries

package-unix:
	rm -rf getdp-${GETDP_VERSION}
	mkdir getdp-${GETDP_VERSION}
	strip bin/getdp
	cp bin/getdp getdp-${GETDP_VERSION}
	cp doc/getdp.1 doc/LICENSE.txt doc/VERSIONS.txt doc/CREDITS.txt\
          getdp-${GETDP_VERSION}
	cp -R demos getdp-${GETDP_VERSION}
	rm -rf getdp-${GETDP_VERSION}/*/.svn
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
	cp bin/getdp.exe getdp-${GETDP_VERSION}
	cp doc/README.win32 getdp-${GETDP_VERSION}/README.txt
	cp doc/LICENSE.txt doc/VERSIONS.txt doc/CREDITS.txt\
          getdp-${GETDP_VERSION}
	cd utils/misc && ./unix2dos.bash ../../getdp-${GETDP_VERSION}/*.txt
	cp -R demos getdp-${GETDP_VERSION}
	rm -rf getdp-${GETDP_VERSION}/*/.svn
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

# Rules to distribute official releases

distrib-pre:
	mv -f Makefile Makefile.distrib
	sed -e "s/^GETDP_EXTRA_VERSION.*/GETDP_EXTRA_VERSION =/g"\
          Makefile.distrib > Makefile
	make tag

distrib-pre-svn:
	mv -f Makefile Makefile.distrib
	sed -e "s/^GETDP_EXTRA_VERSION.*/GETDP_EXTRA_VERSION = \"-svn-${GETDP_DATE}\"/g"\
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

distrib-unix-nightly:
	make distrib-pre-svn
	make all
	make package-unix
	make distrib-post

distrib-win: 
	make distrib-pre
	make all
	make package-win
	make distrib-post
	objdump -p bin/getdp.exe | grep DLL

distrib-win-nightly: 
	make distrib-pre-svn
	make all
	make package-win
	make distrib-post

distrib-mac:
	make distrib-pre
	make all
	make package-mac
	make distrib-post
	otool -L bin/getdp

distrib-mac-nightly:
	make distrib-pre-svn
	make all
	make package-mac
	make distrib-post

distrib-source:
	make distrib-pre
	make source
	make distrib-post

distrib-source-nightly:
	make distrib-pre-svn
	make source
	make distrib-post
