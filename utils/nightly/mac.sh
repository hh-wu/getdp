#!/bin/sh

GETDP=${HOME}/src/getdp
LOG=${GETDP}/nightly.log
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/MacOSX

export PETSC_DIR=${HOME}/src/petsc-3.0.0-p7
export SLEPC_DIR=${HOME}/src/slepc-3.0.0-p7
export PETSC_ARCH=umfpack-cxx-opt

rm -f ${LOG}
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*svn*
echo "BUILD BEGIN: `date`" > ${LOG}
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure --with-gsl-prefix=/usr/local >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-mac-nightly >> ${LOG} 2>&1
echo "BUILD END: `date`" >> ${LOG}
scp -C ${GETDP}/getdp-*svn*.tgz ${WEB_BIN}/getdp-nightly-MacOSX.tgz
scp -C ${LOG} ${WEB_BIN}/
