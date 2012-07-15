#!/bin/sh

EXTRA_VERSION=$1
GETDP=${HOME}/src/getdp
LOG=${GETDP}/nightly32.log
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/MacOSX

export CC=/usr/bin/gcc
export CXX=/usr/bin/g++
export FC=/usr/local/bin/gfortran
export PETSC_DIR=${HOME}/src/petsc-3.1-p8
export SLEPC_DIR=${HOME}/src/slepc-3.1-p4
export PREFIXES="--with-blas-lapack-prefix=/usr/local --with-gmsh-prefix=/usr/local --with-gsl-prefix=/usr/local"

rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure ${PREFIXES} --enable-sparskit >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-mac${EXTRA_VERSION} >> ${LOG} 2>&1
FILE=`ls ${GETDP}/getdp-*.tgz`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-MacOSX32s.tgz
  else
    NAME=`basename ${FILE} .tgz`
    scp -C ${FILE} ${WEB_BIN}/${NAME}32s.tgz
  fi
fi

export PETSC_ARCH=macosx_real_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure ${PREFIXES} >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-mac${EXTRA_VERSION} >> ${LOG} 2>&1
FILE=`ls ${GETDP}/getdp-*.tgz`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-MacOSX32r.tgz
  else
    NAME=`basename ${FILE} .tgz`
    scp -C ${FILE} ${WEB_BIN}/${NAME}32r.tgz
  fi
fi

export PETSC_ARCH=macosx_complex_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure ${PREFIXES} >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-mac${EXTRA_VERSION} >> ${LOG} 2>&1
FILE=`ls ${GETDP}/getdp-*.tgz`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-MacOSX32c.tgz
  else
    NAME=`basename ${FILE} .tgz`
    scp -C ${FILE} ${WEB_BIN}/${NAME}32c.tgz
  fi
fi

echo "BUILD END: `date`" >> ${LOG}

scp -C ${LOG} ${WEB_BIN}/

#################################################

GETDP=${HOME}/src/getdp
LOG=${GETDP}/nightly64.log
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin/MacOSX

export CC="/usr/bin/gcc -m64"
export CXX="/usr/bin/g++ -m64"
export FC="/usr/local/bin/gfortran -m64"
export PETSC_DIR=${HOME}/src/petsc-3.1-p8
export SLEPC_DIR=${HOME}/src/slepc-3.1-p4
export PREFIXES="--with-blas-lapack-prefix=/usr/local --with-gmsh-prefix=/usr/local --with-gsl-prefix=/usr/local"

rm -f ${LOG}

echo "BUILD BEGIN: `date`" > ${LOG}

rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure ${PREFIXES} --enable-sparskit >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-mac${EXTRA_VERSION} >> ${LOG} 2>&1
FILE=`ls ${GETDP}/getdp-*.tgz`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-MacOSX64s.tgz
  else
    NAME=`basename ${FILE} .tgz`
    scp -C ${FILE} ${WEB_BIN}/${NAME}64s.tgz
  fi
fi

export PETSC_ARCH=macosx64_real_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure ${PREFIXES} >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-mac${EXTRA_VERSION} >> ${LOG} 2>&1
FILE=`ls ${GETDP}/getdp-*.tgz`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-MacOSX64r.tgz
  else
    NAME=`basename ${FILE} .tgz`
    scp -C ${FILE} ${WEB_BIN}/${NAME}64r.tgz
  fi
fi

export PETSC_ARCH=macosx64_complex_mumps_seq
rm -f ${GETDP}/Makefile*
rm -rf ${GETDP}/getdp-*
cd ${GETDP} && svn update >> ${LOG} 2>&1
cd ${GETDP} && ./configure ${PREFIXES} >> ${LOG} 2>&1
cd ${GETDP} && make clean >> ${LOG} 2>&1
cd ${GETDP} && make distrib-mac${EXTRA_VERSION} >> ${LOG} 2>&1
FILE=`ls ${GETDP}/getdp-*.tgz`
if [ -f ${FILE} ]; then
  if [[ ${EXTRA_VERSION} == "-svn" ]]; then
    scp -C ${FILE} ${WEB_BIN}/getdp-svn-MacOSX64c.tgz
  else
    NAME=`basename ${FILE} .tgz`
    scp -C ${FILE} ${WEB_BIN}/${NAME}64c.tgz
  fi
fi

echo "BUILD END: `date`" >> ${LOG}

scp -C ${LOG} ${WEB_BIN}/
