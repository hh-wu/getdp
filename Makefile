# $Id: Makefile,v 1.14 2000-09-07 18:47:21 geuzaine Exp $
# ----------------------------------------------------------------------
#  Makefile for GetDP
#
#  Optional packages: 
#    * parser: flex and bison
#    * Windows 95/98/NT: cygwin (http://sourceware.cygnus.com/cygwin/) 
#    * PETSc: 2.0.28 (PETSC_DIR and PETSC_ARCH variables must be defined)
#    * METIS: 4.0 (the METIS_DIR variable must be defined)
#
#
#   To build a stand alone executable, you should cygwin plus the mingw
#   includes and libraries gcc-XXX-mingw-extra.tar.gz
#   (ftp://ftp.xraylith.wisc.edu/pub/khan/gnu-win32/cygwin/)
#   and compile with 'make no-cygwin' .
#   To check the final dependendies: objdump -p getdp-win | grep DLL#
#
#  Acces CVS avec mot de passe:
#  cvs -d :pserver:user@elap57.montefiore.ulg.ac.be:/usr/users57/cvs-master login 
#  cvs -d :pserver:user@elap57.montefiore.ulg.ac.be:/usr/users57/cvs-master checkout getdp 
# ----------------------------------------------------------------------

GETDP_RELEASE         = 0.76

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
GETDP_DOC_DIR         = doc
GETDP_DEMO_DIR        = demos
GETDP_INCLUDE_DIR     = include
GETDP_ARCHIVE_DIR     = archives
GETDP_MAIN_DIR        = Main
GETDP_PARSER_DIR      = Parser
GETDP_ARCHIVE         = $(GETDP_ARCHIVE_DIR)/getdp-`date "+%Y.%m.%d"`
GETDP_SOURCES         = `find . \( ! -name "*.tar*" -a ! -name "*.tgz" \
                         -a ! -name "*.o"    -a ! -name "*.a"   -a ! -name "*.cut"   \
                         -a ! -name "*.pos"  -a ! -name "*.pre" -a ! -name "*.res" \
                         -a ! -name "*.bak"  -a ! -name "getdp" -a ! -name "getdp-*" \
                         -a ! -type d       \)`
GETDP_UNAME           = `uname`

# ----------------------------------------------------------------------
# Metis 4.0 definitions
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

# include $(PETSC_DIR)/bmake/$(PETSC_ARCH)/base_variables

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
           "C_FLAGS=-g" \
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

linux2:
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "C_FLAGS=-O3" \
           "F77_FLAGS=-O1" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	g77 -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_SPARSKIT_LIBS) -lm
	$(STRIP) $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME)


## Christophe

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
	echo "#define GETDP_VERSION $(GETDP_RELEASE)" > $(GETDP_INCLUDE_DIR)/Version.h
	echo "#define GETDP_BUILD \"`date` on `hostname` (`logname`)\"" >> $(GETDP_INCLUDE_DIR)/Version.h
	echo "#define GETDP_OS \"`uname -sr`\"" >> $(GETDP_INCLUDE_DIR)/Version.h

initialtag:
	@if [ ! -r $(GETDP_INCLUDE_DIR)/Version.h ]; then \
        $(MAKE) tag ; \
        fi

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

cleandoc:
	cd $(GETDP_DOC_DIR) && $(MAKE) clean "RM=rm" "RMFLAGS=-f"

doc:
	cd $(GETDP_DOC_DIR) && $(MAKE) doc

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

zip:
	zip $(GETDP_ARCHIVE).zip $(GETDP_SOURCES)

tgzdoc:
	tar cvf getdp-texi.tar $(GETDP_DOC_DIR)
	gzip getdp-texi.tar

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

dem:
	gtar zcvf getdp-demos.tar.gz $(GETDP_DEMO_DIR)

help: versions

versions:
	@echo " "
	@echo "The following operating systems are supported."
	@echo "Type 'make os' to build the executable."
	@echo " "
	@echo "========================================================= "
	@echo "  os           notes "
	@echo "--------------------------------------------------------- "
	@echo "  PETSc        All architectures with PETSc and METIS"
	@echo "  dec          DEC OSF "
	@echo "  linux        Linux "
	@echo "  hp           HPUX "
	@echo "  sun          SunOS with gcc "
	@echo "  ibm          AIX without ILU_FLOAT "
	@echo "  cygwin       Windows with cygwin1.dll "
	@echo "  win          Windows stand alone "
	@echo "  sgi          SGI with -mips4 "
	@echo "======================================================== "
	@echo " "

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
	$(FC) -nofor_main -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_SPARSKIT_LIBS) -lm
	$(STRIP) $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME)

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
	g77 -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_SPARSKIT_LIBS) -lm
	$(STRIP) $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME)

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
	fort77 +DAportable -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_MAIN_DIR)/Main.o \
               $(GETDP_SPARSKIT_LIBS) -lm
	$(STRIP) $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME)

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
	$(FC) -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_SPARSKIT_LIBS) -lm
	$(STRIP) $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME)

ibm: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=-O2" \
           "C_PARSER_FLAGS=-O1" \
           "F77_FLAGS=-O2" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_UNDERSCORE" \
        ); done
	$(FC) -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_SPARSKIT_LIBS) -lm
	$(STRIP) $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME)

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
	g77 -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_SPARSKIT_LIBS) -lm
	$(STRIP) $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME)

win: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc -mno-cygwin" \
           "FC=g77 -mno-cygwin" \
           "RANLIB=ls" \
           "C_FLAGS=-g" \
           "C_PARSER_FLAGS=-g" \
           "F77_FLAGS=-g" \
           "OS_FLAGS=-DMSDOS" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	g77 -mno-cygwin -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm

mingw:
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=gcc" \
           "FC=g77" \
           "RANLIB=ls" \
           "C_FLAGS=-O3" \
           "C_PARSER_FLAGS=-O3" \
           "F77_FLAGS=-O1" \
           "OS_FLAGS=-DMSDOS" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	g77 -o $(GETDP_BIN_DIR)/getdp $(GETDP_SPARSKIT_LIBS) -lm

sgi: tag
	@for i in $(GETDP_STUFF_DIR) $(SPARSKIT_DIR); do (cd $$i && $(MAKE) \
           "CC=cc" \
           "FC=f77" \
           "RANLIB=ls" \
           "C_FLAGS=-O3 -mips4" \
           "C_PARSER_FLAGS=-g -mips4 " \
           "F77_FLAGS=-O3 -mips4" \
           "SOLVER=-D_SPARSKIT" \
           "SOLVER_FLAGS=-D_ILU_FLOAT" \
        ); done
	f77 -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_SPARSKIT_LIBS) -lm
	$(STRIP) $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME)

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
	f77 -64 -o $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME) $(GETDP_SPARSKIT_LIBS) -lm
	$(STRIP) $(GETDP_BIN_DIR)/getdp-$(GETDP_UNAME)

