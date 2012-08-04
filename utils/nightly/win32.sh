#!/bin/sh

EXTRA_VERSION=$1
GETDP=${HOME}/src/getdp
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/Windows
CMAKE=cmake

export PETSC_DIR=${HOME}/src/petsc-3.1-p8
export SLEPC_DIR=${HOME}/src/slepc-3.1-p6

#################################################

export CC=/usr/bin/i686-w64-mingw32-gcc.exe
export CXX=/usr/bin/i686-w64-mingw32-g++.exe
export FC=/usr/bin/i686-w64-mingw32-gfortran.exe

LOG=${GETDP}/nightly32.log
rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local;/usr/i686-w64-mingw32/sys-root/mingw"\
           -DENABLE_PETSC=0 -DENABLE_SPARSKIT=1\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
FILE=`ls ${GETDP}/bin/getdp-*.zip`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-Win32s.zip
  else
    NAME=`basename ${FILE} .zip`
    scp -C ${FILE} ${WEB_BIN}/${NAME}32s.zip
  fi
fi

export PETSC_ARCH=win32_real_mumps_seq
rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local;/usr/i686-w64-mingw32/sys-root/mingw"\
           -DENABLE_PETSC=1 -DENABLE_SPARSKIT=0\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
FILE=`ls ${GETDP}/bin/getdp-*.zip`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-Win32r.zip
  else
    NAME=`basename ${FILE} .zip`
    scp -C ${FILE} ${WEB_BIN}/${NAME}32r.zip
  fi
fi

export PETSC_ARCH=win32_complex_mumps_seq
rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local;/usr/i686-w64-mingw32/sys-root/mingw"\
           -DENABLE_PETSC=1 -DENABLE_SPARSKIT=0\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
FILE=`ls ${GETDP}/bin/getdp-*.zip`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-Win32c.zip
  else
    NAME=`basename ${FILE} .zip`
    scp -C ${FILE} ${WEB_BIN}/${NAME}32c.zip
  fi
fi

echo "BUILD END: `date`" >> ${LOG}

scp -C ${LOG} ${WEB_BIN}/

#################################################
# version for Dr. Binde Ingenieure

WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin_nx

LOG=${GETDP}/nightly32_NX.log
rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

export PETSC_ARCH=win32_real_mumps_seq
rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local;/usr/i686-w64-mingw32/sys-root/mingw"\
           -DENABLE_PETSC=1 -DENABLE_SPARSKIT=0\
           -DENABLE_NX=1\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
scp -C ${GETDP}/bin/getdp-*.zip ${WEB_BIN}/getdp${EXTRA_VERSION}-NX-Win32r.zip

export PETSC_ARCH=win32_complex_mumps_seq
rm -rf ${GETDP}/bin
cd ${GETDP} && svn update >> ${LOG} 2>&1
mkdir ${GETDP}/bin
cd ${GETDP}/bin &&\
  ${CMAKE} -DGETDP_EXTRA_VERSION:string="${EXTRA_VERSION}"\
           -DCMAKE_PREFIX_PATH:path="/usr/local;/usr/i686-w64-mingw32/sys-root/mingw"\
           -DENABLE_PETSC=1 -DENABLE_SPARSKIT=0\
           -DENABLE_NX=1\
  ${GETDP} >> ${LOG} 2>&1
cd ${GETDP}/bin && make html >> ${LOG} 2>&1
cd ${GETDP}/bin && make package >> ${LOG} 2>&1
scp -C ${GETDP}/bin/getdp-*.zip ${WEB_BIN}/getdp${EXTRA_VERSION}-NX-Win32c.zip

echo "BUILD END: `date`" >> ${LOG}
scp -C ${LOG} ${WEB_BIN}/
