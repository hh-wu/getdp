#!/bin/sh

GETDP=${HOME}/src/getdp
LOG=${GETDP}/nightly64.log
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/Windows

export CC=/usr/bin/x86_64-w64-mingw32-gcc.exe
export CXX=/usr/bin/x86_64-w64-mingw32-g++.exe
export FC=/usr/bin/x86_64-w64-mingw32-gfortran.exe
export PETSC_DIR=${HOME}/src/petsc-3.1-p8
export SLEPC_DIR=${HOME}/src/slepc-3.1-p6

rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

export PETSC_ARCH=win64_real_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*svn*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure --with-gsl-prefix=/usr/local >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-win-nightly >> ${LOG} 2>&1
scp -C ${GETDP}/getdp-*svn*.zip ${WEB_BIN}/getdp-real-nightly-Win64.zip

export PETSC_ARCH=win64_complex_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*svn*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure --with-gsl-prefix=/usr/local >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-win-nightly >> ${LOG} 2>&1
scp -C ${GETDP}/getdp-*svn*.zip ${WEB_BIN}/getdp-complex-nightly-Win64.zip

echo "BUILD END: `date`" >> ${LOG}

scp -C ${LOG} ${WEB_BIN}/
