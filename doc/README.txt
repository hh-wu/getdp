$Id: README.txt,v 1.8 2001-05-18 08:09:04 geuzaine Exp $

For Windows versions of GetDP only:
===================================

1) About cygwin1.dll:

If you plan to use other programs than GetDP which depend on the
cygwin1.dll library (e.g. Gmsh, http://www.geuz.org/gmsh/), you
should keep only one version of the library on your system. For this
purpose, you should move the file cygwin1.dll from this directory to
the Windows system directory (usually C:\Windows\System\) and suppress
all other versions of cygwin1.dll. Failing to do so may result in
incorrect behaviour of applications sharing the library and running
simultaneously.

2) About command-line programs:

GetDP has no graphical interface. It is a command-line driven program
that reads a problem definition file once at the beginning of the
processing. To launch GetDP on Windows, you have to first open a DOS
command shell. The problem definition files are regular ASCII files:
you can thus create them with whatever editor you like (e.g. Notepad,
Wordpad or Emacs). Note that precompiled versions of Emacs for Windows
are available at ftp://ftp.gnu.org/gnu/windows/emacs/.

If you regularly use GetDP with the DOS shell, you will soon want a
more capable shell (with cut-and-paste possibilities, complete
history, customizable scroll bars, arbitrary geometry specification,
file name completion, wildcards, scripting, etc.). We recommend to use
the cygwin tools:

1. Go to http://sources.redhat.com/cygwin/
2. Download and execute setup.exe
3. Answer all questions until the installation is complete. Please
   note that a complete installation can use quite much disk space
   (approx. 150 Mb). To get a minimal working installation (approx. 15
   Mb), just deselect undesired packages (e.g. C, C++ and Fortran
   compilers, TeTeX, Perl, networking, etc.) during the installation.
4. Edit the file 'C:\cygwin\cygwin.bat' and replace the line starting
   with 'bash' by 'rxvt -sl 1000 -e \cygwin\bin\bash --login'
5. Remove the cygwin1.dll file from the GetDP distribution

Instead of launching the DOS command shell, you should now launch
cygwin, and enjoy the particular taste of the Unix way of life under
Windows!

3) Using Gmsh as a graphical front end to GetDP:

Gmsh (http://www.geuz.org/gmsh/) is an automatic three-dimensional
finite element mesh generator, primarily Delaunay, with built-in pre-
and post-processing facilities. Gmsh can also be used as a graphical
front end to GetDP. The default behaviour of Gmsh is to look for GetDP
in the same directory as the Gmsh executable (i.e. you should copy
getdp.exe in the same directory as gmsh.exe).

