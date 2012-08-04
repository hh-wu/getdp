#!/bin/sh

EXTRA_VERSION=$1
GETDP=${HOME}/src/getdp
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/Linux

export PETSC_DIR=${HOME}/src/petsc-3.1-p8
export SLEPC_DIR=${HOME}/src/slepc-3.1-p4

#################################################

LOG=${GETDP}/nightly64.log
rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local"\
           -DENABLE_PETSC=0 -DENABLE_SPARSKIT=1\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
FILE=`ls ${GETDP}/bin/getdp-*.tar.gz`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-Linux64s.tgz
  else
    NAME=`basename ${FILE} .tar.gz`
    scp -C ${FILE} ${WEB_BIN}/${NAME}64s.tgz
  fi
fi

export PETSC_ARCH=linux64_real_mumps_seq
rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local"\
           -DENABLE_PETSC=1 -DENABLE_SPARSKIT=0\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
FILE=`ls ${GETDP}/bin/getdp-*.tar.gz`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-Linux64r.tgz
  else
    NAME=`basename ${FILE} .tar.gz`
    scp -C ${FILE} ${WEB_BIN}/${NAME}64r.tgz
  fi
fi

export PETSC_ARCH=linux64_complex_mumps_seq
rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local"\
           -DENABLE_PETSC=1 -DENABLE_SPARSKIT=0\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
FILE=`ls ${GETDP}/bin/getdp-*.tar.gz`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-Linux64c.tgz
  else
    NAME=`basename ${FILE} .tar.gz`
    scp -C ${FILE} ${WEB_BIN}/${NAME}64c.tgz
  fi
fi

echo "BUILD END: `date`" >> ${LOG}

scp -C ${LOG} ${WEB_BIN}/
