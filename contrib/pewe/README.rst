.. -*- rst -*- -*- restructuredtext -*-

.. This file should be written using the restructure text
.. conventions.  It will be displayed on the bitbucket source page and
.. serves as the documentation of the directory.

.. default-role:: math

########################################################
PeWe - Particular solutions to the elastic wave equation
########################################################

This software provides Matlab and Fortran routines that compute 
particular solutions to the elastic wave equation.

Currently we provide solutions for the following problems:

 1. Scattering by a circular cylindrical cavity in an elastic medium,
 2. Scattering and diffraction by a circular cylindrical inclusion in an elastic medium,
 3. Surface waves on the convex boundary of an elastic circular cylinder,
 4. Surface waves on the concave boundary of a circular cylindrical cavity in an elastic medium. 

Below we describe how to use the provided routines and briefly explain
the solutions, more comprehensive derivation of the solutions can be
found in the paper `Formulae and Software for Particular Solutions to the Elastic Wave Equation in Curved Geometries`__. 


The Elastic Wave Equation in Cylindrical Geometries
---------------------------------------------------

The radius of the cylinder is `a>0` and its axis is parallel to one of
the coordinate axes, say :math:`z`.
We consider the case when the material properties of the cylinder and
the surrounding medium are different and we allow for either to be a
vacuum.
The displacement in the direction of the cylindrical axis is omitted,
the remaining radial and azimuthal components of the displacement, `p(r,\theta,t)` and `q(r,\theta,t)`, are functions of the cylindrical coordinates, `r` and `\theta` and can be expressed as

.. math::
 
  p = \phi_r + \frac{1}{r} \psi_\theta,\\
  q = \frac{1}{r}\phi_\theta - \psi_r, 

The functions `\phi` and `\psi`  represent pressure and shear waves
propagating with phase velocities `c_p` and `c_s`, which can be
expressed in terms of the density, `\rho` of the elastic medium,
Lame\'s first parameter, `\lambda` and the shear modulus `\mu`

.. math::

  c_p = \sqrt{\frac{\lambda + 2 \mu}{\rho}}, c_s = \sqrt{\frac{\mu}{\rho}}, 

In Cartesian coordinates `x = r \cos(\theta)` and `y = r \sin(\theta)` and the horizontal and vertical displacement components `u(x,y,t)` and `v(x,y,t)` are given by

.. math::

  u(x,y,t) = \cos(\theta) p(r,\theta,t) - \sin(\theta) q(r,\theta,t),\\
  v(x,y,t) = \sin(\theta) p(r,\theta,t) + \cos(\theta) q(r,\theta,t).

These displacements are output by the routines outlined below. For
examples of how the routines are called within Matlab see
``usage_example.m`` and for Fortran, see the files starting with
``main_`` in the fortran directory. 

Scattering by a circular cylindrical cavity in an elastic medium
----------------------------------------------------------------
Particular solutions that represent a plane wave impinging on a cylidrical cavity and the resulting scattered wave fields are given by 

.. math::

		p(r,\theta,t) = e^{i\omega t}\sum_{n=0}^{\infty} \left(\phi_0 \epsilon_n (-i)^n \frac{d}{dr} J_n(\gamma_p r)+ A_n \frac{d}{dr} H_n^{(2)} (\gamma_p r) + B_n\frac{n}{r} H_n^{(2)} (\gamma_s r) \right) \cos(n \theta),\\
		q(r,\theta,t) = e^{i\omega t}\sum_{n=0}^\infty  \left(\frac{-n}{r}\phi_0 \epsilon_n (-i)^n J_n(\gamma_p r) + A_n\frac{-n}{r} H_n^{(2)}(\gamma_p r)-B_n \frac{d}{dr} H_n^{(2)} (\gamma_s r)\right)  \sin(n\theta).

Here `J_n` and `H^{(2)}_n` are the Bessel function of order `n` and the Hankel function of the second kind of order `n`, respectively. The amplitude of the incoming plane wave is `\phi_0` and its temporal frequency is `\omega`. The remaining quantities `\gamma_p,\gamma_s, \epsilon_n,A_n,B_n` are determined so that the solution satisfies the elastic wave equation and the boundary conditions at the cylindrical cavity, for details se the references below. The routine ``[du, dv] = cylindrical_cavity(X,Y,t,omega,lambda,mu,rho)`` returns the real part of the resulting vertical and horizontal displacements in Cartesian coordinates. The routine is called in the following way

.. code-block::

	function [du, dv] = cylindrical_cavity(X,Y,t,omega,lambda,mu,rho)
	subroutine cylindrical_cavity(du,dv,X,Y,t,omega,lambda,mu,rho)

Here ``X,Y`` are the location(s) where the solution is to be computed.
In the Matlab implementation ``X,Y`` can be either scalars or ``nx``
by ``ny`` matrices, in the Fortran implementation they are assumed to
be scalars. 

Scattering and diffraction by a circular cylindrical inclusion in an elastic medium
-----------------------------------------------------------------------------------
Particular solutions that represent the resulting diffacted wave field inside a cylindrical inclusion resulting from the incoming plane wave described above are given by

.. math::

	p'(r,\theta,t) = e^{i\omega t}\sum_{n=0}^{\infty} \left(C_n \frac{d}{dr} J_n (\gamma_p' r) + D_n\frac{n}{r} J_n (\gamma_s' r) \right) \cos(n \theta),\\
	q'(r,\theta,t) = e^{i\omega t}\sum_{n=0}^\infty  \left(C_n\frac{-n}{r} H_n^{(2)}(\gamma_p' r)-D_n \frac{d}{dr} J_n(\gamma_s' r)\right) \sin(n\theta).  

The quantities `C_n,D_n,\gamma_P',\gamma_S'` are determined by the material parameters and so that both `p,q` above and `p',q'` satisfies the conditions at the interface between the cylinrdical inclusion and the surrounding medium, for details see the references below. The routine ``[du, dv,du_p, dv_p] = cylindrical_inclusion(X,Y,X_p,Y_p,t,omega,lambda,mu,rho,lambda_p,mu_p,rho_p)``  returns the real part of the resulting vertical and horizontal displacements both outside and inside the cylindrical inclusion and in Cartesian coordinates. The routine is called in the following way

.. code-block::

	function [du, dv,du_p,dv_p] = cylindrical_inclusion(X,Y,X_p,Y_p,t,omega,lambda,mu,rho)
	subroutine cylindrical_inclusion(du,dv,du_p,dv_p,X,Y,t,omega,lambda,mu,rho)

Here ``X,Y`` and ``X_p,Y_p`` are the location(s) outside and inside
the cylindrical inclusion, respectively,  where the solution is to be
computed. In the Matlab implementation both ``X,Y`` and ``X_p,Y_p``
can be either scalars or ``nx`` by ``ny`` matrices. The Fortran
implementation requires the coordinates to be scalars. 
    
Surface waves on the convex boundary of an elastic circular cylinder
--------------------------------------------------------------------

Particular solutions that represent time - harmonic circumferential
waves that travel in the tangential direction along boundary of the
cylinder with phase velocity `c` are (expressed as radial and azimuthal displacements)

.. math::

   p(r,\theta,t) = \left(A \frac{d J_{ka}(c \eta_p r)}{dr} + B \frac{i ka}{r} J_{ka}(c\eta_s r)\right) e^{i ka(c t + \theta)},\\
   q(r,\theta,t) = \left(A\frac{ik a}{r} J_{ka}(c \eta_p r) - B \frac{dJ_{ka}(c\eta_s r)}{dr} \right) e^{i ka(c t + \theta)}. 

The routine ``surface_waves_convex(X,Y,t,n,c,B)`` returns these
waves. The routine is called in the following way 


.. code-block:: 

   function [du, dv] = surface_waves_convex(X,Y,t,n,c,B)
   subroutine surface_waves_convex(du,dv,X,Y,nx,ny,t,n,c,B) 
   

Here ``X,Y`` are the location(s) where the solution is to be
computed. In the Matlab implementation ``X,Y`` can be either scalars
or ``nx`` by ``ny`` matrices. In the Fortran implementation they are
required to be scalars.


Surface waves on the concave boundary of a circular cylindrical cavity in an elastic medium
-------------------------------------------------------------------------------------------


Particular solutions that represent time - harmonic circumferential
waves that travel in the tangential direction along boundary of the
cylinder with phase velocity `c` are (expressed as radial and azimuthal displacements)

.. math::

   p(r,\theta,t) = \left(A \frac{d H^{(2)}_{ka}(c \eta_p r)}{dr} + B \frac{i ka}{r} H^{(2)}_{ka}(c\eta_s r)\right) e^{i ka(c t + \theta)},\\
   q(r,\theta,t) = \left(A\frac{ik a}{r} H^{(2)}_{ka}(c \eta_p r) - B \frac{dH^{(2)}_{ka}(c\eta_s r)}{dr} \right) e^{i ka(c t + \theta)}. 

The routine ``surface_waves_concave(X,Y,t,n,c,B)`` returns these
waves. The routine is called in the following way 


.. code-block:: 

   function [du, dv] = surface_waves_concave(X,Y,t,n,c,B)
   subroutine surface_waves_concave(du,dv,X,Y,nx,ny,t,n,c,B) 
   

Here ``X,Y`` are the location(s) where the solution is to be
computed. In the Matlab implementation ``X,Y`` can be either scalars
or ``nx`` by ``ny`` matrices. In the Fortran implementation they are
required to be scalars.

For this solution the Fortran routines makes use of the subroutine
``ZBESH`` which can be obtained from Netlib or from
``https://github.com/JuliaLang/openspecfun.git``. 


Licence
-------
PeWe is written by Kristoffer Virta, and Daniel Appelo
and released under the GNU General Public Licence version 3 (or later).

__ https://bitbucket.org/appelo/pewe/raw/51b7c354bd5120686a66a4bae8b63086feb01be4/documentation/part_sol.pdf
