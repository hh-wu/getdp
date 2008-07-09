# GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <getdp@geuz.org>.

include variables

GETDP_MAJOR_VERSION = 2
GETDP_MINOR_VERSION = 0
GETDP_PATCH_VERSION = 0
GETDP_EXTRA_VERSION = 

GETDP_VERSION = ${GETDP_MAJOR_VERSION}.${GETDP_MINOR_VERSION}.${GETDP_PATCH_VERSION}${GETDP_EXTRA_VERSION}

GETDP_SHORT_LICENSE = "GetDP license"

GETDP_VERSION_FILE = Common/GetDPVersion.h
GETDP_DATE = `date "+%Y%m%d"`

all: link

link: compile
	${LINKER} ${OPTIM} -o bin/getdp ${GETDP_LIBS}
	${POSTBUILD}

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
               -o -name "gmon.out" -o -name ".gdb_history" -o -name "debug?.pos"`

clean:
	for i in doc lib ${GETDP_DIRS}; do (cd $$i && ${MAKE} clean); done
	rm -f ${GETDP_VERSION_FILE}

depend: initialtag
	for i in ${GETDP_DIRS};\
        do (cd $$i && ${MAKE} depend "FLAGS=-DHAVE_GSL -DHAVE_FLTK"); done

nodepend:
	for i in ${GETDP_DIRS} ; do \
          (cd $$i && (sed '/^# DO NOT DELETE THIS LINE/q' Makefile) > Makefile.new \
          && cp Makefile Makefile.bak \
          && cp Makefile.new Makefile \
          && rm -f Makefile.new); \
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

