#!/bin/sh

EXTRA_VERSION=$1
GETDP=${HOME}/src/getdp
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/Windows
CMAKE=cmake

export PETSC_DIR=${HOME}/src/petsc-3.1-p8
export SLEPC_DIR=${HOME}/src/slepc-3.1-p6

#################################################

export CC=/usr/bin/x86_64-w64-mingw32-gcc.exe
export CXX=/usr/bin/x86_64-w64-mingw32-g++.exe
export FC=/usr/bin/x86_64-w64-mingw32-gfortran.exe

LOG=${GETDP}/nightly64.log
rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local;/usr/x86_64-w64-mingw32/sys-root/mingw"\
           -DENABLE_PETSC=0 -DENABLE_SPARSKIT=1\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
FILE=`ls ${GETDP}/bin/getdp-*.zip`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-Win64s.zip
  else
    NAME=`basename ${FILE} .zip`
    scp -C ${FILE} ${WEB_BIN}/${NAME}64s.zip
  fi
fi

export PETSC_ARCH=win64_real_mumps_seq
rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local;/usr/x86_64-w64-mingw32/sys-root/mingw"\
           -DENABLE_PETSC=1 -DENABLE_SPARSKIT=0\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
FILE=`ls ${GETDP}/bin/getdp-*.zip`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-Win64r.zip
  else
    NAME=`basename ${FILE} .zip`
    scp -C ${FILE} ${WEB_BIN}/${NAME}64r.zip
  fi
fi

export PETSC_ARCH=win64_complex_mumps_seq
rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local;/usr/x86_64-w64-mingw32/sys-root/mingw"\
           -DENABLE_PETSC=1 -DENABLE_SPARSKIT=0\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
FILE=`ls ${GETDP}/bin/getdp-*.zip`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-Win64c.zip
  else
    NAME=`basename ${FILE} .zip`
    scp -C ${FILE} ${WEB_BIN}/${NAME}64c.zip
  fi
fi

echo "BUILD END: `date`" >> ${LOG}

scp -C ${LOG} ${WEB_BIN}/

#################################################
# version for Dr. Binde Ingenieure

WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin_nx

LOG=${GETDP}/nightly64_NX.log
rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

export PETSC_ARCH=win64_real_mumps_seq
rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local;/usr/x86_64-w64-mingw32/sys-root/mingw"\
           -DENABLE_PETSC=1 -DENABLE_SPARSKIT=0\
           -DENABLE_NX=1\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
scp -C ${GETDP}/bin/getdp-*.zip ${WEB_BIN}/getdp${EXTRA_VERSION}-NX-Win64r.zip

export PETSC_ARCH=win64_complex_mumps_seq
rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local;/usr/x86_64-w64-mingw32/sys-root/mingw"\
           -DENABLE_PETSC=1 -DENABLE_SPARSKIT=0\
           -DENABLE_NX=1\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
scp -C ${GETDP}/bin/getdp-*.zip ${WEB_BIN}/getdp${EXTRA_VERSION}-NX-Win64c.zip

echo "BUILD END: `date`" >> ${LOG}
scp -C ${LOG} ${WEB_BIN}/
