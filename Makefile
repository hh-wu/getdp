# $Id: Makefile,v 1.58 2001-05-07 07:34:09 geuzaine Exp $
# ----------------------------------------------------------------------
#  Makefile for GetDP
#
#  Optional packages: 
#    * flex and bison to rebuild the parser
#    * cygwin to build on Windows 9x/NT (http://sources.redhat.com/cygwin/) 
#    * PETSc 2.0.29 (you have to define the PETSC_DIR and PETSC_ARCH variables)
#    * METIS 4.0 (you have to define the METIS_DIR variable)
#
# ----------------------------------------------------------------------
#  To build a stand alone executable on Windows, you should install, 
#  in addition to cygwin, the mingw-extra includes and libraries (see
#  ftp://ftp.xraylith.wisc.edu/pub/khan/gnu-win32/cygwin/*extra*) in
#  the /mingw directory, and then compile with 'make mingw'.
#  To check the final dependendies: 'objdump -p getdp-win | grep DLL'
#
# ----------------------------------------------------------------------
#  CVS access with passord:
#  'cvs -d :pserver:username@elap57.montefiore.ulg.ac.be:/usr/users57/cvs-master cmd'
#  where * username is your username (you need an account on elap57)
#        * 'cmd' is first 'login', then 'checkout getdp', and finally 'logout'
#
# ----------------------------------------------------------------------

GETDP_RELEASE         = 0.82

# ----------------------------------------------------------------------
# General definitions 
# ----------------------------------------------------------------------

MAKE                  = make
RM                    = rm
RMFLAGS               = -f
STRIP                 = strip

# ----------------------------------------------------------------------
# GetDP definitions
# ----------------------------------------------------------------------

GETDP_DIR             = .
GETDP_STUFF_DIR       = Main Parser Post Function Integration GeoData\
                        DofData Numeric DataStr
GETDP_LIB_DIR         = lib
GETDP_BIN_DIR         = bin
GETDP_DOC_DIR         = doc/texinfo
GETDP_INCLUDE_DIR     = include
GETDP_ARCHIVE_DIR     = archives
GETDP_MAIN_DIR        = Main
GETDP_PARSER_DIR      = Parser
GETDP_ARCHIVE         = $(GETDP_ARCHIVE_DIR)/getdp-`date "+%Y.%m.%d"`
GETDP_SRCRPM          = getdp-$(GETDP_RELEASE)
GETDP_SOURCES         = `find . \( ! -name "*.tar*" -a ! -name "*.tgz" \
                         -a ! -name "*.o"    -a ! -name "*.a"   -a ! -name "*.cut"   \
                         -a ! -name "*.pos"  -a ! -name "*.pre" -a ! -name "*.res" \
                         -a ! -name "*.bak"  -a ! -name "getdp" -a ! -name "getdp-*" \
                         -a ! -type d       \)`
GETDP_UNAME           = `uname`

# ----------------------------------------------------------------------
# Metis definitions
# ----------------------------------------------------------------------

METIS_INCLUDE         = -I$(METIS_DIR)/Lib
METIS_LIB             = $(METIS_DIR)/libmetis.a

# ----------------------------------------------------------------------
# Sparskit definitions
# ----------------------------------------------------------------------

SPARSKIT_DIR          = Sparskit
GETDP_SPARSKIT_LIBS   = -L$(GETDP_LIB_DIR) -lMain -lParser -lPost -lFunction\
                        -lIntegration -lGeoData -lDofData \
                        -lNumeric -lSparskit -lDataStr

# ----------------------------------------------------------------------
# PETSc definitions
# ----------------------------------------------------------------------

BOPT                  = g
GETDP_PETSC_LIBS      = -L$(GETDP_LIB_DIR) -lMain -lParser -lPost -lFunction\
                        -lIntegration -lGeoData -lDofData \
                        -lNumeric -lDataStr

#include $(PETSC_DIR)/bmake/$(PETSC_ARCH)/base_variables

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

opti:
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
           "C_FLAGS=-O3" \
           "F77_FLAGS=-O3" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done

debug:
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
           "C_FLAGS=-g -DUSE_DEBUG" \
           "F77_FLAGS=-g" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done


## with PETSc and Metis

petsc:
	@for i in $(GETDP_STUFF_DIR); do (cd $$i && $(MAKE) \
           "CC=$(CC)" \
           "FC=$(FC)" \
           "F77=$(FC)" \
           "RANLIB=$(RANLIB)" \
           "C_FLAGS=$(COPTFLAGS)" \
           "F77_FLAGS=$(FOPTFLAGS)" \
           "SOLVER=-D_PETSC $(PETSCFLAGS) $(PETSC_INCLUDE) -D_METIS $(METIS_INCLUDE)" \
        ); done

getdp-petsc:
	$(CLINKER) -o $(GETDP_BIN_DIR)/getdp-petsc-$(PETSC_ARCH)-$(BOPT)\
                      $(GETDP_PETSC_LIBS) $(METIS_LIB) $(PETSC_SLES_LIB)

## with PETSc alone

petsc-simple:
	@for i in $(GETDP_STUFF_DIR); do (cd $$i && $(MAKE) \
           "CC=$(CC)" \
           "FC=$(FC)" \
           "F77=$(FC)" \
           "RANLIB=$(RANLIB)" \
           "C_FLAGS=$(COPTFLAGS)" \
           "F77_FLAGS=$(FOPTFLAGS)" \
           "SOLVER=-D_PETSC $(PETSCFLAGS) $(PETSC_INCLUDE)" \
        ); done

getdp-petsc-simple:
	$(CLINKER) -o $(GETDP_BIN_DIR)/getdp-petsc-$(PETSC_ARCH)-$(BOPT)\
                      $(GETDP_PETSC_LIBS) $(PETSC_SLES_LIB)

## Patrick

linux2: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "C_FLAGS=-O3" \
           "F77_FLAGS=-O1" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	g77 -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_SPARSKIT_LIBS) -lm

linux2W: initialtag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "C_FLAGS=-O3 -Wall" \
           "F77_FLAGS=-O1" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	g77 -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_SPARSKIT_LIBS) -lm


## Christophe

dll:
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
           "C_FLAGS=-g -Wall -D_DLL" \
           "F77_FLAGS=-g -Wall -D_DLL" \
        ); done
	ar ruvs getdp.a */*.o

gnu:
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
           "C_FLAGS=-g -Wall" \
           "F77_FLAGS=-g -Wall" \
        ); done

efence:
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
        ); done
	$(FC) -nofor_main -o $(GETDP_BIN_DIR)/getdp-efence $(GETDP_SPARSKIT_LIBS) -lefence -lm

profile:
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
	$(RM) $(RMFLAGS) $(GETDP_INCLUDE_DIR)/Version.h
	echo "#define GETDP_VERSION  $(GETDP_RELEASE)" > $(GETDP_INCLUDE_DIR)/Version.h
	echo "#define GETDP_DATE     \"`date`\""      >> $(GETDP_INCLUDE_DIR)/Version.h
	echo "#define GETDP_HOST     \"`hostname`\""  >> $(GETDP_INCLUDE_DIR)/Version.h
	echo "#define GETDP_PACKAGER \"`whoami`\""    >> $(GETDP_INCLUDE_DIR)/Version.h
	echo "#define GETDP_OS       \"`uname -sr`\"" >> $(GETDP_INCLUDE_DIR)/Version.h

initialtag:
	@if [ ! -r $(GETDP_INCLUDE_DIR)/Version.h ]; then \
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
        do (cd $$i && $(MAKE) clean \
           "RM=rm" \
           "RMFLAGS=-f" \
        ); \
        done

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

src:
	tar cvf $(GETDP_SRCRPM).tar $(GETDP_SOURCES)
	gzip $(GETDP_SRCRPM).tar

zip:
	zip $(GETDP_ARCHIVE).zip $(GETDP_SOURCES)

tgzdoc:
	tar cvf getdp-texi.tar $(GETDP_DOC_DIR)
	gzip getdp-texi.tar

distrib:
	$(STRIP) $(GETDP_BIN_DIR)/getdp
	mkdir getdp-$(GETDP_RELEASE)
	cp $(GETDP_BIN_DIR)/getdp getdp-$(GETDP_RELEASE)
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

# ----------------------------------------------------------------------
# Black Box version (with embedded formulation and reduced interface)
# ----------------------------------------------------------------------

bb:
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); \
        do (cd $$i && $(MAKE) \
           "C_FLAGS=-g -D_BLACKBOX" \
           "F77_FLAGS=-g" \
        ); done
	$(FC) -nofor_main -o $(GETDP_BIN_DIR)/getdp-box $(GETDP_SPARSKIT_LIBS) -lm

# ----------------------------------------------------------------------
# "Ready to compile" rules for somes platforms
# ----------------------------------------------------------------------

PETSc: tag
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
	$(CLINKER) -o $(GETDP_BIN_DIR)/getdp-petsc-$(PETSC_ARCH)-$(BOPT)\
                      $(GETDP_PETSC_LIBS) $(METIS_LIB) $(PETSC_SLES_LIB)

dec: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "C_FLAGS=-O3" \
           "C_PARSER_FLAGS=-O3" \
           "F77_FLAGS=-O3" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	$(FC) -nofor_main -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm

linux: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "C_FLAGS=-O3" \
           "C_PARSER_FLAGS=-O3" \
           "F77_FLAGS=-O1" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	g77 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm

rpm: src
	mv $(GETDP_SRCRPM).tar.gz /usr/src/redhat/SOURCES
	rpm -bb utils/getdp.spec
	cp /usr/src/redhat/RPMS/i386/$(GETDP_SRCRPM)-1.i386.rpm .
	cp /usr/src/redhat/BUILD/$(GETDP_SRCRPM)/getdp-$(GETDP_RELEASE)-$(GETDP_UNAME).tgz .

hp: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=+O2 +Onolimit -Ae +DAportable" \
           "C_PARSER_FLAGS=+O1 -Ae +DAportable" \
           "F77_FLAGS=+O2 +DAportable" \
           "OS_FLAGS=-D_HP" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT -D_UNDERSCORE" \
        ); done
	fort77 +DAportable -o $(GETDP_BIN_DIR)/getdp $(GETDP_MAIN_DIR)/Main.o \
               $(GETDP_SPARSKIT_LIBS) -lm

sun: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=-O3" \
           "C_PARSER_FLAGS=-O3" \
           "F77_FLAGS=-O3" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	$(FC) -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lsocket -lm

ibm: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=-O2 -D_BSD" \
           "C_PARSER_FLAGS=-O2" \
           "F77_FLAGS=-O2" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_UNDERSCORE" \
        ); done
	$(FC) -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm

cygwin: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "RANLIB=ls" \
           "C_FLAGS=-O3" \
           "C_PARSER_FLAGS=-O1" \
           "F77_FLAGS=-O1" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	g77 -o $(GETDP_BIN_DIR)/getdp.exe $(GETDP_SPARSKIT_LIBS) -lm

mingw: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc -mno-cygwin -I/mingw/include" \
           "FC=g77 -mno-cygwin -I/mingw/include" \
           "RANLIB=ls" \
           "C_FLAGS=-O3" \
           "F77_FLAGS=-O1" \
           "OS_FLAGS=-DMSDOS" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	g77 -o $(GETDP_BIN_DIR)/getdp.exe\
            -mno-cygwin -L/mingw/lib $(GETDP_SPARSKIT_LIBS) -lm

# Warning: ILU_FLOAT does NOT work with -mips3. Why ?
sgi: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=-O3 -n32 -mips3" \
           "C_PARSER_FLAGS=-g -n32 -mips3" \
           "F77_FLAGS=-O3 -n32 -mips3" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=" \
        ); done
	f77 -n32 -mips3 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm

sgi64: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=-O3 -mips4 -64" \
           "C_PARSER_FLAGS=-g -mips4 -64" \
           "F77_FLAGS=-O3 -mips4 -64" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	f77 -64 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm


