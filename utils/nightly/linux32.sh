#!/bin/sh

EXTRA_VERSION=$1
GETDP=${HOME}/src/getdp
LOG=${GETDP}/nightly32.log
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/Linux

export PETSC_DIR=${HOME}/src/petsc-3.1-p8
export SLEPC_DIR=${HOME}/src/slepc-3.1-p6
export PREFIXES="--with-blas-lapack-prefix=/usr/local --with-gmsh-prefix=/usr/local --with-gsl-prefix=/usr/local"

rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure ${PREFIXES} --enable-sparskit >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-unix${EXTRA_VERSION} >> ${LOG} 2>&1
scp -C ${GETDP}/getdp-*.tgz ${WEB_BIN}/getdp${EXTRA_VERSION}-Linux32s.tgz

export PETSC_ARCH=linux_real_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure ${PREFIXES} >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-unix${EXTRA_VERSION} >> ${LOG} 2>&1
scp -C ${GETDP}/getdp-*.tgz ${WEB_BIN}/getdp${EXTRA_VERSION}-Linux32r.tgz

export PETSC_ARCH=linux_complex_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure ${PREFIXES} >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-unix${EXTRA_VERSION} >> ${LOG} 2>&1
scp -C ${GETDP}/getdp-*.tgz ${WEB_BIN}/getdp${EXTRA_VERSION}-Linux32c.tgz

echo "BUILD END: `date`" >> ${LOG}

scp -C ${LOG} ${WEB_BIN}/
