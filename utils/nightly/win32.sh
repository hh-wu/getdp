#!/bin/sh

EXTRA_VERSION=$1
GETDP=${HOME}/src/getdp
LOG=${GETDP}/nightly32.log
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/Windows

export CC=/usr/bin/i686-w64-mingw32-gcc.exe
export CXX=/usr/bin/i686-w64-mingw32-g++.exe
export FC=/usr/bin/i686-w64-mingw32-gfortran.exe
export PETSC_DIR=${HOME}/src/petsc-3.1-p8
export SLEPC_DIR=${HOME}/src/slepc-3.1-p6

rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure --with-gsl-prefix=/usr/local --enable-sparskit >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-win${EXTRA_VERSION} >> ${LOG} 2>&1
scp -C ${GETDP}/getdp-*.zip ${WEB_BIN}/getdp${EXTRA_VERSION}-Win32s.zip

export PETSC_ARCH=win32_real_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure --with-gsl-prefix=/usr/local >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-win${EXTRA_VERSION} >> ${LOG} 2>&1
scp -C ${GETDP}/getdp-*.zip ${WEB_BIN}/getdp${EXTRA_VERSION}-Win32r.zip

export PETSC_ARCH=win32_complex_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure --with-gsl-prefix=/usr/local >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-win${EXTRA_VERSION} >> ${LOG} 2>&1
scp -C ${GETDP}/getdp-*.zip ${WEB_BIN}/getdp${EXTRA_VERSION}-Win32c.zip

echo "BUILD END: `date`" >> ${LOG}

scp -C ${LOG} ${WEB_BIN}/
