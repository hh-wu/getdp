# $Id: Makefile,v 1.116 2003-02-07 02:39:02 geuzaine Exp $

# ----------------------------------------------------------------------
#  Optional packages: 
#    * flex and bison to rebuild the parser
#    * cygwin to build on Windows (http://www.cygwin.com) 
#    * PETSc 2.1.X (you have to define the PETSC_DIR and PETSC_ARCH variables)
#    * METIS 4.0 (you have to define the METIS_DIR variable)
# ----------------------------------------------------------------------

GETDP_MAJOR_VERSION = 0
GETDP_MINOR_VERSION = 86
GETDP_PATCH_VERSION = 1

MAKE = make
RM = rm
RMFLAGS = -f
STRIP = strip

# ----------------------------------------------------------------------
# GetDP definitions
# ----------------------------------------------------------------------

GETDP_DIR = .
GETDP_STUFF_DIR = Main Parser Post Function Integration GeoData\
                  DofData Numeric DataStr
GETDP_LIB_DIR = lib
GETDP_BIN_DIR = bin
GETDP_DOC_DIR = doc/texinfo
GETDP_INCLUDE_DIR = include
GETDP_ARCHIVE_DIR = archives
GETDP_MAIN_DIR = Main
GETDP_PARSER_DIR = Parser
GETDP_VERSION_FILE = include/GetDPVersion.h
GETDP_RELEASE = $(GETDP_MAJOR_VERSION).$(GETDP_MINOR_VERSION).$(GETDP_PATCH_VERSION)
GETDP_ARCHIVE = $(GETDP_ARCHIVE_DIR)/getdp-`date "+%Y.%m.%d"`
GETDP_SRCRPM = getdp-$(GETDP_RELEASE)
GETDP_SOURCES = `find . \( ! -name "*.tar*" -a ! -name "*.tgz" \
                        -a ! -name "*.o"    -a ! -name "*.a"   -a ! -name "*.cut"   \
                        -a ! -name "*.pos"  -a ! -name "*.pre" -a ! -name "*.res" \
                        -a ! -name "*.bak"  -a ! -name "getdp" -a ! -name "getdp-*" \
                        -a ! -type d       \)`
GETDP_UNAME = `uname`

# ----------------------------------------------------------------------
# Metis definitions
# ----------------------------------------------------------------------

METIS_INCLUDE = -I$(METIS_DIR)/Lib
METIS_LIB = $(METIS_DIR)/libmetis.a

# ----------------------------------------------------------------------
# Sparskit definitions
# ----------------------------------------------------------------------

SPARSKIT_DIR = Sparskit
GETDP_SPARSKIT_LIBS = -L$(GETDP_LIB_DIR) -lMain -lParser -lPost -lFunction\
                      -lIntegration -lGeoData -lDofData \
                      -lNumeric -lSparskit -lDataStr

# ----------------------------------------------------------------------
# PETSc definitions
# ----------------------------------------------------------------------

BOPT = O_complex
#BOPT = g_complex
GETDP_PETSC_LIBS = -L$(GETDP_LIB_DIR) -lMain -lParser -lPost -lFunction\
                   -lIntegration -lGeoData -lDofData \
                   -lNumeric -lDataStr

#include ${PETSC_DIR}/bmake/common/variables

# ----------------------------------------------------------------------
# Rules for developpers
# ----------------------------------------------------------------------

# with default solver

default: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE)); \
        done

getdp:
	$(FC) -nofor_main -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm

opti: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
           "C_FLAGS=-O3" \
           "F77_FLAGS=-O3" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done

debug: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
           "C_FLAGS=-g -DUSE_DEBUG" \
           "F77_FLAGS=-g" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done

# Patrick

linux2: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "C_FLAGS=-O3" \
           "F77_FLAGS=-O1" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done
	g77 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm

linux2W: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "C_FLAGS=-O3 -Wall" \
           "F77_FLAGS=-O1" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done
	g77 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm


# Christophe

gnu: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
           "C_FLAGS=-g -Wall" \
           "F77_FLAGS=-g -Wall" \
        ); done

efence: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
        ); done
	$(FC) -nofor_main -o $(GETDP_BIN_DIR)/getdp-efence $(GETDP_SPARSKIT_LIBS) -lefence -lm

profile: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
           "C_FLAGS=-O3 -pg" \
           "F77_FLAGS=-O3 -pg" \
        ); done
	$(FC) -pg -nofor_main -o $(GETDP_BIN_DIR)/getdpp $(GETDP_SPARSKIT_LIBS) -lm

getdp-oldsolver:
	$(FC) -nofor_main -o $(GETDP_BIN_DIR)/getdp-oldsolver \
              -L$(GETDP_LIB_DIR) -lMain -lParser -lPost -lFunction -lIntegration -lGeoData \
              -lDofData -lNumeric ../solver-getdp-old/libOldSolver.a -lDataStr -lm

getdp-asm:
	$(FC) -nofor_main -o $(GETDP_BIN_DIR)/getdp-asmodeesolver \
              -L$(GETDP_LIB_DIR) -lMain -lParser -lPost -lFunction -lIntegration -lGeoData \
              -lDofData -lNumeric ../solver-asmodee/libAsmodeeSolver.a -lDataStr -lm

getdp-cclink:
	$(CC) -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) \
              -lfor -lots -lUfor -lFutil -lm

# ----------------------------------------------------------------------
# Utilities
# ----------------------------------------------------------------------

parser:
	cd $(GETDP_PARSER_DIR) && $(MAKE) parser

tag:
	$(RM) $(RMFLAGS) $(GETDP_VERSION_FILE)
	echo "#define GETDP_MAJOR_VERSION $(GETDP_MAJOR_VERSION)" >  $(GETDP_VERSION_FILE)
	echo "#define GETDP_MINOR_VERSION $(GETDP_MINOR_VERSION)" >> $(GETDP_VERSION_FILE)
	echo "#define GETDP_PATCH_VERSION $(GETDP_PATCH_VERSION)" >> $(GETDP_VERSION_FILE)
	echo "#define GETDP_VERSION  ((double)GETDP_MAJOR_VERSION + \\" >> $(GETDP_VERSION_FILE)
	echo "                 0.01 * (double)GETDP_MINOR_VERSION + \\" >> $(GETDP_VERSION_FILE)
	echo "               0.0001 * (double)GETDP_PATCH_VERSION)"     >> $(GETDP_VERSION_FILE)
	echo "#define GETDP_DATE     \"`date`\""      >> $(GETDP_VERSION_FILE)
	echo "#define GETDP_HOST     \"`hostname`\""  >> $(GETDP_VERSION_FILE)
	echo "#define GETDP_PACKAGER \"`whoami`\""    >> $(GETDP_VERSION_FILE)
	echo "#define GETDP_OS       \"`uname -sr`\"" >> $(GETDP_VERSION_FILE)

initialtag:
	@if [ ! -r $(GETDP_VERSION_FILE) ]; then \
        $(MAKE) tag ; \
        fi

tags:
	gtags
	htags

depend:
	for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do \
          (cd $$i && $(MAKE) depend); \
        done

nodepend:
	for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do \
          (cd $$i && $(MAKE) nodepend); \
        done

clean:
	for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR) $(GETDP_LIB_DIR) $(GETDP_DOC_DIR); \
        do (cd $$i && $(MAKE) clean "RM=rm" "RMFLAGS=-f" ); done
	$(RM) $(RMFLAGS) $(GETDP_VERSION_FILE)

cleanlib:
	cd $(GETDP_LIB_DIR) && $(MAKE) clean "RM=rm" "RMFLAGS=-f"

cleandoc:
	cd $(GETDP_DOC_DIR) && $(MAKE) clean "RM=rm" "RMFLAGS=-f"

doc-info:
	cd $(GETDP_DOC_DIR) && $(MAKE) info
	cp $(GETDP_DOC_DIR)/getdp.info* doc/

doc-ps:
	cd $(GETDP_DOC_DIR) && $(MAKE) ps
	cp $(GETDP_DOC_DIR)/getdp.ps doc/

doc-pdf:
	cd $(GETDP_DOC_DIR) && $(MAKE) pdf
	cp $(GETDP_DOC_DIR)/getdp.pdf doc/

purge:
	for i in $(GETDP_DIR) $(GETDP_STUFF_DIR) $(SPARSKIT_DIR) \
                 $(GETDP_LIB_DIR) $(GETDP_INCLUDE_DIR) $(GETDP_ARCHIVE_DIR); \
        do (cd $$i && $(RM) $(RMFLAGS) *~ *~~ \#*\#); done

tgz:
	if (test -f $(GETDP_ARCHIVE).tar.gz); \
	then mv -f $(GETDP_ARCHIVE).tar.gz $(GETDP_ARCHIVE).tar.gz~; \
	fi
	tar cvf $(GETDP_ARCHIVE).tar $(GETDP_SOURCES)
	gzip $(GETDP_ARCHIVE).tar
	chmod 640 $(GETDP_ARCHIVE).tar.gz

fulltgz:
	tar cvf $(GETDP_SRCRPM).tar $(GETDP_SOURCES)
	gzip $(GETDP_SRCRPM).tar

zip:
	zip $(GETDP_ARCHIVE).zip $(GETDP_SOURCES)

minizip:
	tar jcvf getdp-`date "+%Y.%m.%d"`.tar.bz2\
            `ls Makefile */Makefile */*.[cfFhyl] */*.cpp */*.txt */*.pro */*.par */*.geo`

tgzdoc:
	tar cvf getdp-texi.tar $(GETDP_DOC_DIR)
	gzip getdp-texi.tar

distrib:
	$(STRIP) $(GETDP_BIN_DIR)/getdp
	mkdir getdp-$(GETDP_RELEASE)
	cp $(GETDP_BIN_DIR)/getdp getdp-$(GETDP_RELEASE)
	cp doc/VERSIONS doc/FAQ doc/BUGS doc/CONTRIBUTORS getdp-$(GETDP_RELEASE)
	cp -R demos getdp-$(GETDP_RELEASE)
	rm -rf getdp-$(GETDP_RELEASE)/*/CVS
	rm -f getdp-$(GETDP_RELEASE)/*/*.pre
	rm -f getdp-$(GETDP_RELEASE)/*/*.res
	rm -f getdp-$(GETDP_RELEASE)/*/*.pos
	rm -f getdp-$(GETDP_RELEASE)/*/*.cut
	rm -f getdp-$(GETDP_RELEASE)/*/*~
	tar cvf getdp-$(GETDP_RELEASE)-$(GETDP_UNAME).tar getdp-$(GETDP_RELEASE)
	gzip getdp-$(GETDP_RELEASE)-$(GETDP_UNAME).tar
	mv getdp-$(GETDP_RELEASE)-$(GETDP_UNAME).tar.gz getdp-$(GETDP_RELEASE)-$(GETDP_UNAME).tgz
	rm -rf getdp-$(GETDP_RELEASE)

distrib-win:
	$(STRIP) $(GETDP_BIN_DIR)/getdp.exe
	cp $(GETDP_BIN_DIR)/getdp.exe ../getdp-distrib
	cp doc/README.txt ../getdp-distrib
	cp doc/VERSIONS ../getdp-distrib/VERSIONS.txt
	cp doc/FAQ ../getdp-distrib/FAQ.txt
	cp doc/CONTRIBUTORS ../getdp-distrib/CONTRIBUTORS.txt
	cd utils && unix2dos ../../getdp-distrib/*.txt
	cp -R demos ../getdp-distrib
	rm -rf ../getdp-distrib/*/CVS
	rm -f ../getdp-distrib/*/*.pre
	rm -f ../getdp-distrib/*/*.res
	rm -f ../getdp-distrib/*/*.pos
	rm -f ../getdp-distrib/*/*.cut
	rm -f ../getdp-distrib/*/*~
	cd utils && unix2dos ../../getdp-distrib/demos/*
	cd ../getdp-distrib && zip -r getdp-$(GETDP_RELEASE)-Windows.zip *
	mv ../getdp-distrib/getdp-$(GETDP_RELEASE)-Windows.zip .
	rm -rf ../getdp-distrib/*.txt
	rm -rf ../getdp-distrib/demos

# ----------------------------------------------------------------------
# Black Box version (with embedded formulation and reduced interface)
# ----------------------------------------------------------------------

bb: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
           "C_FLAGS=-g -D_BLACKBOX" \
           "F77_FLAGS=-g" \
        ); done
	$(FC) -nofor_main -o $(GETDP_BIN_DIR)/getdp-box $(GETDP_SPARSKIT_LIBS) -lm

# ----------------------------------------------------------------------
# "Ready to compile" rules for somes platforms
# ----------------------------------------------------------------------

#
# Source distribution
#
source:
	rm -rf getdp-$(GETDP_RELEASE)
	tar zcvf getdp.tgz `ls Makefile */Makefile */*.[chylfF] */*.[ch]pp\
                           */*.opt */*.spec` doc demos
	mkdir getdp-$(GETDP_RELEASE)
	cd getdp-$(GETDP_RELEASE) && tar zxvf ../getdp.tgz
	rm -f getdp.tgz
	cd getdp-$(GETDP_RELEASE) && rm -rf Scattering trash utils doc/slides\
                                            $(GETDP_VERSION_FILE) CVS */CVS */*/CVS
#	cd getdp-$(GETDP_RELEASE) && zip -r getdp-$(GETDP_RELEASE)-source.zip *
#	mv getdp-$(GETDP_RELEASE)/getdp-$(GETDP_RELEASE)-source.zip .
	tar zcvf getdp-$(GETDP_RELEASE)-source.tgz getdp-$(GETDP_RELEASE)

#
# Digital (Compaq) OSF1/Tru64
#
compile-osf1: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "C_FLAGS=-O3" \
           "C_PARSER_FLAGS=-O3" \
           "F77_FLAGS=-O3" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done
link-osf1:
	$(FC) -nofor_main -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm
osf1: compile-osf1 link-osf1
distrib-osf1: clean tag osf1 distrib

#
# Linux
#
compile-linux: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "C_FLAGS=-O3 -Wall -Wno-uninitialized" \
           "C_PARSER_FLAGS=-O3 -Wall -Wno-uninitialized" \
           "F77_FLAGS=-O1 -Wall -Wno-uninitialized" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done
link-linux:
	g77 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm
linux: compile-linux link-linux
distrib-linux : clean tag linux distrib
rpm: fulltgz
	mv $(GETDP_SRCRPM).tar.gz /usr/src/redhat/SOURCES
	rpm -bb --define 'getdpversion $(GETDP_RELEASE)' utils/getdp.spec
	cp /usr/src/redhat/RPMS/i386/$(GETDP_SRCRPM)-1.i386.rpm .
	cp /usr/src/redhat/BUILD/$(GETDP_SRCRPM)/getdp-$(GETDP_RELEASE)-$(GETDP_UNAME).tgz .

#
# HP-UX
#
compile-hpux: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=+O2 +Onolimit -Ae +DAportable" \
           "C_PARSER_FLAGS=+O1 -Ae +DAportable" \
           "F77_FLAGS=+O2 +DAportable" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT -D_UNDERSCORE" \
        ); done
link-hpux:
	f77 +DAportable -o $(GETDP_BIN_DIR)/getdp $(GETDP_MAIN_DIR)/Main.o \
            $(GETDP_SPARSKIT_LIBS) -lm
hpux: compile-hpux link-hpux
distrib-hpux: clean tag hpux distrib

#
# Sun SunOS
#
compile-sunos: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "RANLIB=ls" \
           "C_FLAGS=-O3" \
           "C_PARSER_FLAGS=-O3" \
           "F77_FLAGS=-O3" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done
link-sunos:
	g77 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lsocket -lm
sunos: compile-sunos link-sunos
distrib-sunos: clean tag sunos distrib

#
# IBM AIX
#
compile-aix: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=-O2 -D_BSD -qMAXMEM=10000" \
           "C_PARSER_FLAGS=-O2" \
           "F77_FLAGS=-O2" \
           "SOLVER=-D_SPARSKIT -D_UNDERSCORE" \
        ); done
link-aix:
	$(FC) -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm
aix: compile-aix link-aix
distrib-aix: clean tag aix distrib

#
# Cygwin (recent versions of Cygwin limit the size of the stack to a
# value too small to handle our recursive Cal_WholeQuantity -> this is
# the reason for the '-Wl,--stack,8388608' gcc flag. Thanks Dave!)
#
compile-cygwin: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "RANLIB=ls" \
           "C_FLAGS=-O3 -Wall -Wno-uninitialized" \
           "C_PARSER_FLAGS=-O1 -Wall -Wno-uninitialized" \
           "F77_FLAGS=-O1 -Wall -Wno-uninitialized" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done
link-cygwin:
	g77 -Wl,--stack,8388608 -o $(GETDP_BIN_DIR)/getdp.exe $(GETDP_SPARSKIT_LIBS) -lm
cygwin: compile-cygwin link-cygwin
distrib-cygwin: clean tag cygwin distrib-win

#
# Mingw (don't add -lm : the math functions are in msvcrt.dll)
# To check the final dependendies, do 'objdump -p getdp.exe | grep DLL'
#
compile-mingw: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc -mno-cygwin" \
           "FC=g77 -mno-cygwin" \
           "RANLIB=ls" \
           "C_FLAGS=-g -O3 -DMSDOS" \
           "F77_FLAGS=-g -O1 -DMSDOS" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done
link-mingw:
	g77 -Wl,--stack,8388608 -mno-cygwin -o $(GETDP_BIN_DIR)/getdp.exe $(GETDP_SPARSKIT_LIBS)
mingw: compile-mingw link-mingw

#
# SGI Irix (32 bits, portable) - ILU_FLOAT does NOT work with -mips3. Why ?
#
compile-irix: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=-O3 -n32 -mips3" \
           "C_PARSER_FLAGS=-g -n32 -mips3" \
           "F77_FLAGS=-O3 -n32 -mips3" \
           "SOLVER=-D_SPARSKIT" \
        ); done
link-irix:
	f77 -n32 -mips3 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm
irix: compile-irix link-irix
distrib-irix: clean tag irix distrib

#
# SGI Irix (64 bits)
#
compile-irix64: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=-O3 -mips4 -64" \
           "C_PARSER_FLAGS=-g -mips4 -64" \
           "F77_FLAGS=-O3 -mips4 -64" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done
link-irix64:
	f77 -64 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm
irix64: compile-irix64 link-irix64

#
# PETSc with Metis
#
compile-petsc: initialtag
	@for i in $(GETDP_STUFF_DIR); do (cd $$i && $(MAKE) \
           "CC=$(CC)" \
           "FC=$(FC)" \
           "F77=$(FC)" \
           "RANLIB=$(RANLIB)" \
           "C_FLAGS=$(COPTFLAGS)" \
           "C_PARSER_FLAGS=$(COPTFLAGS)" \
           "F77_FLAGS=$(FOPTFLAGS)" \
           "SOLVER=-D_PETSC $(PETSCFLAGS) $(PETSC_INCLUDE) -D_METIS $(METIS_INCLUDE)" \
        ); done
link-petsc:
	$(CLINKER) -o $(GETDP_BIN_DIR)/getdp-petsc-$(PETSC_ARCH)-$(BOPT)\
                      $(GETDP_PETSC_LIBS) $(METIS_LIB) $(PETSC_SLES_LIB)
petsc: compile-petsc link-petsc

#
# PETSc without Metis
#
compile-petsc-simple: initialtag
	@for i in $(GETDP_STUFF_DIR); do (cd $$i && $(MAKE) \
           "CC=$(CC)" \
           "FC=$(FC)" \
           "F77=$(FC)" \
           "RANLIB=$(RANLIB)" \
           "C_FLAGS=$(COPTFLAGS)" \
           "F77_FLAGS=$(FOPTFLAGS)" \
           "SOLVER=-D_PETSC $(PETSCFLAGS) $(PETSC_INCLUDE)" \
        ); done
link-petsc-simple:
	$(CLINKER) -o $(GETDP_BIN_DIR)/getdp-petsc-$(PETSC_ARCH)-$(BOPT)\
                      $(GETDP_PETSC_LIBS) $(PETSC_SLES_LIB)
petsc-simple: compile-petsc-simple link-petsc-simple

#
# MacOS X
#
compile-macosx: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "C_FLAGS=-O3 -Wall -Wno-uninitialized -D_BSD" \
           "C_PARSER_FLAGS=-O3" \
           "F77_FLAGS=-O1" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done
link-macosx:
	g77 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm
macosx: compile-macosx link-macosx
distrib-macosx: clean tag macosx distrib

#
# Linux, Pentium 4 with Intel compiler
#   -xW : generate code for P4 (this _really_ increases perf)
#
compile-linux-intelp4: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR) Scattering; do (cd $$i && $(MAKE) \
           "CC=icc -Kc++" \
           "CXX=icc -Kc++" \
           "FC=ifc -w90 -w" \
           "C_FLAGS=-O3 -xW" \
           "C_PARSER_FLAGS=-O3 -xW" \
           "F77_FLAGS=-O3 -xW" \
           "SOLVER=-D_SPARSKIT -D_ILU_FLOAT" \
        ); done
link-linux-intelp4:
	icc -Kc++ -o $(GETDP_BIN_DIR)/getdp\
               lib/libMain.a lib/libParser.a lib/libPost.a lib/libFunction.a\
               lib/libIntegration.a lib/libGeoData.a lib/libDofData.a\
               lib/libNumeric.a lib/libSparskit.a lib/libDataStr.a\
               -lCEPCF90 -lF90 -lsvml
link-linux-intelp4-scat:
	icc -Kc++ -o bin/hf lib/libScattering.a lib/libDofData.a\
               lib/libSparskit.a lib/libNumeric.a lib/libDataStr.a\
               -lCEPCF90 -lF90 -lsvml
linux-intelp4: compile-p4 link-p4 link-p4-scat

#
# PETSc Scattering
#
compile-petsc-scat: initialtag
	@for i in $(GETDP_STUFF_DIR) Scattering; do (cd $$i && $(MAKE) \
           "CC=$(CC)" \
           "CXX=$(CC)" \
           "FC=$(FC)" \
           "F77=$(FC)" \
           "RANLIB=$(RANLIB)" \
           "C_FLAGS=$(COPTFLAGS) -I$(FFTW_PREFIX)/include -Wall -Wno-uninitialized" \
           "F77_FLAGS=$(FOPTFLAGS)" \
           "SOLVER=-D_PETSC $(PETSCFLAGS) $(PETSC_INCLUDE)" \
        ); done
link-petsc-scat:
	$(CLINKER) -o bin/hf lib/libScattering.a lib/libDofData.a\
               lib/libNumeric.a lib/libDataStr.a $(PETSC_SLES_LIB)\
               -L$(FFTW_PREFIX)/lib -lfftw -lm
petsc-scat: compile-petsc-scat link-petsc-scat
