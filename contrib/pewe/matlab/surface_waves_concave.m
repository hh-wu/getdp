function [du, dv] = surface_waves_concave(X,Y,t,n,c,B)
% surface_waves_concave This program computes particular solutions to
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

% Returns horizontal displacement du(x,y,t) and vertical displacement dv(x,y,t)
% that solves the elastic wave equation with a traction free boundary condition on the boundary of a cylinder.
% First version by Kristoffer Virta Uppsala University, October 2014
    
%Compute radius r and angle sigma
    r = sqrt(X.^2+Y.^2);
    sigma = atan2(Y,X);
    
    %Lame parameters and density
    lambda = 1;
    mu = 1;
    rho=1;
    omega = n*c;

    alpha = sqrt((lambda+2.*mu)/rho); %P-wave speed
    beta = sqrt(mu/rho); %S-wave speed
    Ka = omega/alpha;
    Kb = omega/beta;
    A = 1;

    %Construct solution
    q1 = A*Ka/2*(besselh(n-1,2,Ka*r)-besselh(n+1,2,Ka*r));
    q2 = B*1i*(n./r).*besselh(n,2,Kb*r);
    v1 = A*1i*(n./r).*besselh(n,2,Ka*r);
    v2 = -B*Kb/2*(besselh(n-1,2,Kb*r)-besselh(n+1,2,Kb*r));

    Q = (q1+q2);
    V = (v1+v2);

    du = real((cos(sigma).*Q-sin(sigma).*V).*exp(1i*(omega*t+n*sigma)));
    dv = real((sin(sigma).*Q+cos(sigma).*V).*exp(1i*(omega*t+n*sigma)));

end