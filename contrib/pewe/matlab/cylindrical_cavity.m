function  [du, dv] = cylindrical_cavity(X,Y,t,omega,lambda,mu,rho)
% cylindrical_cavity This program computes particular solutions to
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

%
%  [DU,DV] = CYLINDRICAL_CAVITY(X,Y,T,OMEGA,LAMBDA,MU) computes the
%  horizontal and vertical displacements DU and DV, respectively,
%  at points stored in the vectors X and Y and at time T that
%  results from an incoming plane wave of unit amplitude and temporal period OMEGA striking a cylindrical cavity of
%  radius a=1.
%
%  The material surrounding the cylindrical cavity is defined by the first and second Lame
%  paramters LAMBDA and MU and the density RHO.
%

%Compute radius r and angle theta
    r = sqrt(X.^2+Y.^2);
    theta = atan2(Y,X);

    %P and S wave speeds
    cp = sqrt((lambda+2*mu)/rho);
    cs = sqrt(mu/rho);

    %To satisfy elastic wave equation
    gamma = omega/cp;
    eta = omega/cs;

    %Radius of cylinder
    a = 1;

    %Amplitude of incomming wave
    phi_0 = 1;

    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%Series expansion of solution%%%%%%%%%%%
    disp('COMPUTING COEFICIENTS')
    %n=0
    f_00 = -gamma*besselj(1,gamma*a);
    f_02 = -gamma^2/2*(besselj(0,gamma*a)-besselj(2,gamma*a));

    a_00 = -gamma*besselh(1,2,gamma*a);
    a_02 = -gamma^2/2*(besselh(0,2,gamma*a)-besselh(2,2,gamma*a));

    b_01 = eta*besselh(1,2,eta*a);
    b_04 = eta^2/2*(besselh(0,2,eta*a)-besselh(2,2,eta*a));

    epsilon_0 = 1;
    m11 = (lambda+2*mu)*a_02+lambda/a*a_00;
    m12 = 0;
    m21 = 0;
    m22 =mu*(b_04-1/a*b_01);

    c01 = -phi_0*epsilon_0*((lambda+2*mu)*f_02+lambda/a*f_00);
    c02 = 0;

    AB0 = 1/(m11*m22 - m12*m21)*([m22 -m12; -m21 m11]*[c01;c02]);
    q = phi_0*epsilon_0*(-gamma)*besselj(1,gamma*r) + AB0(1)*(-gamma)*(besselh(1,2,gamma*r));

    %n = 1;
    f_10 = gamma/2*(besselj(0,gamma*a)-besselj(2,gamma*a));
    f_11 = -1/a*besselj(1,gamma*a);
    f_12 = -gamma^2/2*besselj(1,gamma*a)-gamma^2/4*(besselj(1,gamma*a)-besselj(3,gamma*a));
    f_13 = -gamma/2*(besselj(0,gamma*a)-besselj(2,gamma*a));
    f_14 = -1/a*gamma/2*(besselj(0,gamma*a)-besselj(2,gamma*a)) + 1/a/a*besselj(1,gamma*a);
    f_15 = -1/a*besselj(1,gamma*a);

    a_10 = gamma/2*(besselh(0,2,gamma*a)-besselh(2,2,gamma*a));
    a_11 = -1/a*besselh(1,2,gamma*a);
    a_12 = -gamma^2/2*besselh(1,2,gamma*a)-gamma^2/4*(besselh(1,2,gamma*a)-besselh(3,2,gamma*a));
    a_13 = -1*gamma/2*(besselh(0,2,gamma*a)-besselh(2,2,gamma*a));
    a_14 = -1/a*gamma/2*(besselh(0,2,gamma*a)-besselh(2,2,gamma*a)) + 1/a/a*besselh(1,2,gamma*a);
    a_15 = -1/a*besselh(1,2,gamma*a);

    b_10 = 1/a*besselh(1,2,eta*a);
    b_11 = -eta/2*(besselh(0,2,eta*a)-besselh(2,2,eta*a));
    b_12 = 1/a*eta/2*(besselh(0,2,eta*a)-besselh(2,2,eta*a))-1/a/a*besselh(1,2,eta*a);
    b_13 = -1/a*besselh(1,2,eta*a);
    b_14 = -(-eta^2/2*besselh(1,2,eta*a)-eta^2/4*(besselh(1,2,eta*a)-besselh(3,2,eta*a)));
    b_15 = -eta/2*(besselh(0,2,eta*a)-besselh(2,2,eta*a));

    epsilon_1 = 2;
    m11 = (lambda+2*mu)*a_12+lambda/a*(a_10+a_15);
    m12 = (lambda+2*mu)*b_12+lambda/a*(b_10+b_15);
    m21 = mu*(1/a*a_13+a_14-1/a*a_11);
    m22 = mu*(1/a*b_13+b_14-1/a*b_11);

    c11 = -phi_0*epsilon_1*(-1i)*((lambda+2*mu)*f_12+lambda/a*(f_10+f_15));
    c12 = mu*(-phi_0*epsilon_1*(-1i)*(1/a*f_13+f_14-1/a*f_11));

    AB1 = 1/(m11*m22 - m12*m21)*([m22 -m12; -m21 m11]*[c11;c12]);

    q = q + (phi_0*epsilon_1*(-1i)*gamma/2*(besselj(0,gamma*r)-besselj(2,gamma*r)) + AB1(1)*gamma/2*(besselh(0,2,gamma*r)-besselh(2,2,gamma*r)) + AB1(2)*besselh(1,2,eta*r)./r).*cos(theta);
    v = (-phi_0*epsilon_1*(-1i)*besselj(1,gamma*r)./r - AB1(1)*besselh(1,2,gamma*r)./r - AB1(2)*eta/2*(besselh(0,2,eta*r)-besselh(2,2,eta*r))).*sin(theta);

    for n = 2:100
        f_n0 = gamma/2*(besselj(n-1,gamma*a)-besselj(n+1,gamma*a));
        f_n1 = -n/a*besselj(n,gamma*a);
        f_n2 = gamma^2/4*(besselj(n-2,gamma*a)-2*besselj(n,gamma*a)+besselj(n+2,gamma*a));
        f_n3 = -n*gamma/2*(besselj(n-1,gamma*a)-besselj(n+1,gamma*a));
        f_n4 = -n/a*gamma/2*(besselj(n-1,gamma*a)-besselj(n+1,gamma*a)) + n/a/a*besselj(n,gamma*a);
        f_n5 = -n^2/a*besselj(n,gamma*a);

        a_n0 = gamma/2*(besselh(n-1,2,gamma*a)-besselh(n+1,2,gamma*a));
        a_n1 = -n/a*besselh(n,2,gamma*a);
        a_n2 = gamma^2/4*(besselh(n-2,2,gamma*a)-2*besselh(n,2,gamma*a)+besselh(n+2,2,gamma*a));
        a_n3 = -n*gamma/2*(besselh(n-1,2,gamma*a)-besselh(n+1,2,gamma*a));
        a_n4 = -n/a*gamma/2*(besselh(n-1,2,gamma*a)-besselh(n+1,2,gamma*a)) + n/a/a*besselh(n,2,gamma*a);
        a_n5 = -n^2/a*besselh(n,2,gamma*a);

        b_n0 = n/a*besselh(n,2,eta*a);
        b_n1 = -eta/2*(besselh(n-1,2,eta*a)-besselh(n+1,2,eta*a));
        b_n2 = n/a*eta/2*(besselh(n-1,2,eta*a)-besselh(n+1,2,eta*a))-n/a/a*besselh(n,2,eta*a);
        b_n3 = -n^2/a*besselh(n,2,eta*a);
        b_n4 = -eta^2/4*(besselh(n-2,2,eta*a)-2*besselh(n,2,eta*a)+besselh(n+2,2,eta*a));
        b_n5 = -n*eta/2*(besselh(n-1,2,eta*a)-besselh(n+1,2,eta*a));

        epsilon_n = 2;
        m11 = (lambda+2*mu)*a_n2+lambda/a*(a_n0+a_n5);
        m12 = (lambda+2*mu)*b_n2+lambda/a*(b_n0+b_n5);
        m21 = mu*(1/a*a_n3+a_n4-1/a*a_n1);
        m22 = mu*(1/a*b_n3+b_n4-1/a*b_n1);

        cn1 = -phi_0*epsilon_n*(-1i)^n*((lambda+2*mu)*f_n2+lambda/a*(f_n0+f_n5));
        cn2 = mu*(-phi_0)*epsilon_n*(-1i)^n*(1/a*f_n3+f_n4-1/a*f_n1);

        ABn = 1/(m11*m22 - m12*m21)*([m22 -m12; -m21 m11]*[cn1;cn2]);

        q = q+(phi_0*epsilon_n*(-1i)^n*gamma/2*(besselj(n-1,gamma*r)-besselj(n+1,gamma*r)) + ABn(1)*gamma/2*(besselh(n-1,2,gamma*r)-besselh(n+1,2,gamma*r)) + ABn(2)*(n).*besselh(n,2,eta*r)./r).*cos(n*theta);
        v = v + (-n*phi_0*epsilon_n*(-1i)^n*besselj(n,gamma*r)./r - ABn(1)*n*besselh(n,2,gamma*r)./r - ABn(2)*eta/2*(besselh(n-1,2,eta*r)-besselh(n+1,2,eta*r))).*sin(n*theta);
    end
    disp('DONE COMPUTING COEFICIENTS')
    du = real((cos(theta).*q-sin(theta).*v)*exp(1i*omega*t));
    dv = real((sin(theta).*q+cos(theta).*v)*exp(1i*omega*t));
end
