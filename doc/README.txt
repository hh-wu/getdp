$Id: README.txt,v 1.11 2003-02-21 16:31:27 geuzaine Exp $

For Windows versions of GetDP only:
===================================

1) About cygwin1.dll:

If you plan to use other programs than GetDP that depend on the
cygwin1.dll library, you should keep only one version of this library
on your system (i.e., move cygwin1.dll to the Windows system
directory--usually C:\Windows\System\--and suppress all other versions
of cygwin1.dll). Failing to do so may result in an incorrect behaviour
of applications sharing the library and running simultaneously.

2) About command-line programs:

GetDP has no integrated graphical user interface. It is a command-line
driven program that reads a problem definition file once at the
beginning of the processing. To launch GetDP on Windows without the
graphical front-end provided by Gmsh (see point 3, below), you have to
first open a DOS command shell. The problem definition files are
regular ASCII text files: you can thus create them with whatever
editor you like (e.g. Notepad, Wordpad or Emacs). Note that
precompiled versions of Emacs for Windows are available at
ftp://ftp.gnu.org/gnu/windows/emacs/.

If you regularly use GetDP with the DOS shell, you will soon want a
more capable shell (with cut-and-paste possibilities, history,
customizable scroll bars, arbitrary geometry specification, file name
completion, wildcards, pipes, scripting, etc.). We recommend to use
the cygwin tools:

1. Go to http://www.cygwin.com/
2. Download and execute setup.exe
3. Answer all questions until the installation is complete. Please
   note that a complete installation can use quite a lot of disk space.
   To get a minimal working installation (approx. 10 Mb), just uncheck
   all undesired packages (e.g. C, C++ and Fortran compilers, TeTeX,
   Perl, networking, etc.) during the installation.
4. Edit the file 'C:\cygwin\cygwin.bat' and replace the line starting
   with 'bash' with 'rxvt -sl 1000 -e ./bash --login -i'
5. Remove the cygwin1.dll file from the GetDP distribution

Instead of launching the DOS command shell, you can now launch cygwin,
and enjoy the particular taste of the Unix way of life under Windows!

3) Using Gmsh as a graphical front-end to GetDP:

Gmsh (http://www.geuz.org/gmsh/) is a 3D CAD, mesh and post-processing
program that can be used as a graphical front-end to GetDP. Just go to
Gmsh's solver module and click on 'GetDP', et voila!

