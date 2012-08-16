@echo off

C:
chdir C:\cygwin\bin

bash --login ctest -S C:\cygwin\home\Administrator\src\getdp\utils\nightly\getdp_win32_nightly.ctest
