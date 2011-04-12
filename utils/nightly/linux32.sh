#!/bin/sh

GETDP=${HOME}/src/getdp
LOG=${GETDP}/nightly32.log
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/Linux

export PETSC_DIR=${HOME}/src/petsc-3.1-p8
export SLEPC_DIR=${HOME}/src/slepc-3.1-p6

rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

export PETSC_ARCH=linux_real_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*svn*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure --with-gsl-prefix=/usr/local >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-unix-nightly >> ${LOG} 2>&1
scp -C ${GETDP}/getdp-*svn*.tgz ${WEB_BIN}/getdp-nightly-Linux32r.tgz

export PETSC_ARCH=linux_complex_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*svn*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure --with-gsl-prefix=/usr/local >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-unix-nightly >> ${LOG} 2>&1
scp -C ${GETDP}/getdp-*svn*.tgz ${WEB_BIN}/getdp-nightly-Linux32c.tgz

echo "BUILD END: `date`" >> ${LOG}

scp -C ${LOG} ${WEB_BIN}/
