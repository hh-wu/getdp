#!/bin/sh

GETDP=${HOME}/src/getdp
LOG=${GETDP}/nightly.log
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/Windows

CC=/usr/bin/i686-w64-mingw32-gcc.exe
CXX=/usr/bin/i686-w64-mingw32-g++.exe
FC=/usr/bin/i686-w64-mingw32-gfortran.exe
PETSC_DIR=${HOME}/src/petsc-3.1-p5
SLEPC_DIR=${HOME}/src/slepc-3.1-p6
PETSC_ARCH=win32_complex_umfpack

rm -f ${LOG}
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*svn*
echo "BUILD BEGIN: `date`" > ${LOG}
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure --with-gsl-prefix=/usr/local >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-win-nightly >> ${LOG} 2>&1
echo "BUILD END: `date`" >> ${LOG}
scp -C ${GETDP}/getdp-*svn*.zip ${WEB_BIN}/getdp-nightly-Windows.zip
scp -C ${LOG} ${WEB_BIN}/
