$Id: README.txt,v 1.3 2001-02-26 08:07:50 geuzaine Exp $

For Windows versions of GetDP only:
===================================

1) About command-line programs:

GetDP has no graphical interface. It is a command-line driven program
that reads a problem definition file once at the begining of the
processing. To lauch GetDP on Windows, you have to first open a DOS
command shell. The problem definition files are regular ASCII files:
you can thus create them with whatever editor you like (e.g. Wordpad).

2) About cygwin1.dll:

If you plan to use other programs than GetDP which depend on the
cygwin1.dll library (e.g. Gmsh, http://www.geuz.org/gmsh/), you
should keep only one version of the library on your system. For this
purpose, you should move the file cygwin1.dll from this directory to
the Windows system directory (usually C:\Windows\System\) and suppress
all other versions of cygwin1.dll. Failing to do so may result in
incorrect behaviour of applications sharing the library and running
simultaneously.
