Summary: A General environment for the treatment of Discrete Problems
Name: getdp
# Version: 1.0
Version: %{getdpversion}
Source: getdp-%{version}.tar.gz
Release: 1
Copyright: GPL
Group: Applications/Engineering
URL: http://www.geuz.org/getdp/
Packager: geuz@geuz.org
Prereq: /sbin/install-info
Buildroot: /var/tmp/%{name}-buildroot
Prefix: /usr

%description 
GetDP is a scientific software environment for the numerical solution
of integro-differential equations, open to the coupling of physical
problems (electromagnetic, thermal, mechanical, etc) as well as of
numerical methods (finite element method, integral methods, etc). It
can deal with such problems of various dimensions (1D, 2D, 2D
axisymmetric or 3D) and time states (static, transient or
harmonic). The main feature of GetDP is the closeness between the
organization of data defining discrete problems (written by the user
in ASCII data files) and the symbolic mathematical expressions of
these problems.

Install GetDP if you need a finite element solver for multiphysic
problems.

%prep

%setup -c -q

%build
make distrib-unix
make doc-pdf
make doc-info
rm -rf CVS */CVS */*/CVS

%install
rm -rf $RPM_BUILD_ROOT
mkdir -p $RPM_BUILD_ROOT/usr/bin
mkdir -p $RPM_BUILD_ROOT/usr/share/man/man1
mkdir -p $RPM_BUILD_ROOT/usr/share/info

install -m 755 bin/getdp $RPM_BUILD_ROOT/usr/bin/getdp
install -m 644 doc/getdp.1 $RPM_BUILD_ROOT/usr/share/man/man1/getdp.1
install -m 644 doc/texinfo/getdp.info* $RPM_BUILD_ROOT/usr/share/info/

%post
/sbin/install-info /usr/share/info/getdp.info /usr/share/info/dir

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
%doc doc/getdp.pdf doc/COPYING doc/VERSIONS doc/FAQ doc/BUGS doc/CONTRIBUTORS demos
/usr/bin/getdp
/usr/share/man/man1/getdp*
/usr/share/info/getdp*
