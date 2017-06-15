@echo off

C:
chdir C:\cygwin64\bin

bash --login -c "cd ${HOME}/src/getdp/contrib/NX && git pull 2>&1"

bash --login -c "cd ${HOME}/src/getdp/utils/nightly && ctest -S getdp_win64_nightly.ctest -VV > ${HOME}/src/getdp/nightly.log 2>&1"
