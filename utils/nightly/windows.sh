#!/bin/sh

GETDP=${HOME}/src/getdp
LOG=${GETDP}/nightly.log
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/Windows

rm -f ${LOG}
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*cvs*
echo "BUILD BEGIN: `date`" > ${LOG}
cd ${GETDP} && export CVS_RSH=ssh && cvs update -dPA >> ${LOG} 2>&1
cd ${GETDP} && ./configure\
  --enable-petsc\
  --with-petsc-prefix=${HOME}/src/petsc-3.0.0-p7\
  --with-petsc-arch=umfpack-cxx-opt\
  --with-gsl-prefix=/usr/local >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-win-nightly >> ${LOG} 2>&1
echo "BUILD END: `date`" >> ${LOG}
scp -C ${GETDP}/getdp-*cvs*.zip ${WEB_BIN}/getdp-nightly-Windows.zip
scp -C ${LOG} ${WEB_BIN}/
