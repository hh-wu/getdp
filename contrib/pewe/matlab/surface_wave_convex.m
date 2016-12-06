function [du0,dv0] = surface_wave_convex(X0,Y0,t,mu,c,B)
% surface_wave_convex This program computes particular solutions to
% the elastic wave equation in cylindrical geometries,
% see: https://bitbucket.org/appelo/pewe
%
% Copyright (C) 2015 Kristoffer Virta & Daniel Appelo
%
%
%  This program is free software: you can redistribute it and/or modify
%  it under the terms of the GNU General Public License as published by
%  the Free Software Foundation, either version 3 of the License, or
%  (at your option) any later version.
%
%  This program is distributed in the hope that it will be useful,
%  but WITHOUT ANY WARRANTY; without even the implied warranty of
%  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
%  GNU General Public License for more details.
%
%  You should have received a copy of the GNU General Public License
%  along with this program.  If not, see <http://www.gnu.org/licenses/>.


    r0 = sqrt(X0.^2+Y0.^2);
    sigma0 = atan2(Y0,X0);
    n=6;
    omega = n*c;
    lambda = 1;
    rho=1;

    alpha = sqrt((lambda+2.*mu)/rho);
    beta = sqrt(mu/rho);
    Ka = omega/alpha;
    Kb = omega/beta;
    A = 1;

    q10 = A*Ka/2*(besselj(n-1,Ka*r0)-besselj(n+1,Ka*r0));
    q20 = B*1i*(n./(r0+eps)).*besselj(n,Kb*r0);
    v10 = A*1i*(n./(r0+eps)).*besselj(n,Ka*r0);
    v20 = -B*Kb/2*(besselj(n-1,Kb*r0)-besselj(n+1,Kb*r0));

    Q0 = (q10+q20);
    V0 = (v10+v20);

    du0 = real((cos(sigma0).*Q0-sin(sigma0).*V0).*exp(1i*(omega*t+n*sigma0)));
    dv0 = real((sin(sigma0).*Q0+cos(sigma0).*V0).*exp(1i*(omega*t+n*sigma0)));
end