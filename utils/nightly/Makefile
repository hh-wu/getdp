#
# makefile to create the nightly builds
#

# finish the rules even if we encounter errors?
# .IGNORE:

# be quiet?
.SILENT: getdp-update getdp-windows-nightly getdp-linux-nightly getdp-mac-nightly

GETDP=${HOME}/src/getdp
LOG=${GETDP}/nightly.log
WEB_BIN=geuzaine@geuz.org:/home/www/geuz.org/getdp/bin

getdp-update:
	rm -f ${LOG}
	rm -f ${GETDP}/Makefile*
	rm -rf ${GETDP}/getdp-*cvs*
	echo "BUILD BEGIN: `date`" > ${LOG}
	cd ${GETDP} && export CVS_RSH=ssh && cvs update -dPA >> ${LOG} 2>&1
	cd ${GETDP} && ./configure\
          --enable-petsc\
          --with-petsc-prefix=${HOME}/src/petsc-2.3.3-p1\
          --with-petsc-arch=umfpack-cxx-opt\
          --with-gsl-prefix=/usr/local >> ${LOG} 2>&1
	cd ${GETDP} && make clean >> ${LOG} 2>&1

getdp-windows-nightly: getdp-update
	cd ${GETDP} && make distrib-win-nightly >> ${LOG} 2>&1
	echo "BUILD END: `date`" >> ${LOG}
	scp -C ${GETDP}/getdp-*cvs*.zip ${WEB_BIN}/Windows/getdp-nightly-Windows.zip
	scp -C ${LOG} ${WEB_BIN}/Windows/

getdp-linux-nightly: getdp-update
	cd ${GETDP} && make distrib-unix-nightly >> ${LOG} 2>&1
	echo "BUILD END: `date`" >> ${LOG}
	scp ${GETDP}/getdp-*cvs*.tgz ${WEB_BIN}/Linux/getdp-nightly-Linux.tgz
	scp ${LOG} ${WEB_BIN}/Linux/

getdp-mac-nightly: getdp-update
	cd ${GETDP} && make distrib-mac-nightly >> ${LOG} 2>&1
	echo "BUILD END: `date`" >> ${LOG}
	scp ${GETDP}/getdp-*cvs*.tgz ${WEB_BIN}/MacOSX/getdp-nightly-MacOSX.tgz
	scp ${LOG} ${WEB_BIN}/MacOSX/
