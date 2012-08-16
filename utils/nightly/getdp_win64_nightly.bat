@echo off

C:
chdir C:\cygwin\bin

bash --login ctest -S C:\cygwin\home\geuzaine\src\getdp\utils\nightly\getdp_win64_nightly.ctest
