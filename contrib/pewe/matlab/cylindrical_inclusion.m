function  [du, dv,du_p, dv_p] = cylindrical_inclusion(X,Y,X_p,Y_p,t,omega,lambda,mu,rho,lambda_p,mu_p,rho_p)
% cylindrical_inclusion This program computes particular solutions to
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

%  [DU,DV,DU_P,DV_P] = CYLINDRICAL_INCLUSION(X,Y,X_P,Y_P,T,OMEGA,LAMBDA,MU,RHO,LAMBDA_P,MU_P,RHO_P) computes the
%  horizontal and vertical displacements outside a cylindrical inclusion, DU and DV, respectively that results from an incoming
%  plane wave of unit amplitude and temporal period OMEGA striking a cylindrical cavity of radius a=1.
%  As well as the resulting horizontal and vertical displacements inside the cylindrical inclusion, DU_P and DV_P, respectively.
%  The displacments DU and DV are computed at points stored in the
%  vectors X and Y and at time T. The displacments DU_P and DV_P are computed at points stored in the
%  vectors X_P and Y_P and at time T.
%  The material surrounding the cylindrical cavity is defined by the first and second Lame
%  paramters LAMBDA and MU and the density RHO. The material inside the
%  cylinder is defined by the first and scond Lame parameters LAMBDA_P
%  and MU_P and the density RHO_P

%Compute radius r and angle theta outside cylinder
    r = sqrt(X.^2+Y.^2);
    theta = atan2(Y,X);

    %Compute radius r and angle theta inside cylinder
    r_p = sqrt(X_p.^2+Y_p.^2);
    theta_p = atan2(Y_p,X_p);

    %P and S wave speeds outside cylinder
    cp = sqrt((lambda+2*mu)/rho);
    cs = sqrt(mu/rho);

    %P and S wave speeds inside cylinder
    cp_p = sqrt((lambda_p+2*mu_p)/rho_p);
    cs_p = sqrt(mu_p/rho_p);

    %To satisfy elastic wave equation outside cylinder
    gamma = omega/cp;
    eta = omega/cs;

    %To satisfy elastic wave equation inside cylinder
    gamma_p = omega/cp_p;
    eta_p = omega/cs_p;

    %Radius of cylinder
    a = 1;
    %Amplitude of incoming wave
    phi_0 = 1;

    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%Series expansion of solution%%%%%%%%%%%
    disp('COMPUTING COEFICIENTS')
    %n=0

    f_01 = -gamma*besselj(1,gamma*a);
    f_02 = 0;
    f_03 = (lambda+2*mu)*(-gamma^2/2*(besselj(0,gamma*a)-besselj(2,gamma*a))) + lambda*(1/a*(-gamma*besselj(1,gamma*a)));
    f_04 = 0;

    a_01 = -gamma*besselh(1,2,gamma*a);
    a_02 = 0;
    a_03 = (lambda+2*mu)*(-gamma^2/2*(besselh(0,2,gamma*a)-besselh(2,2,gamma*a))) + lambda*(1/a*(-gamma*besselh(1,2,gamma*a)));
    a_04 = 0;

    b_01 = 0;
    b_02 = eta*besselh(1,2,eta*a);
    b_03 = 0;
    b_04 = mu*(1/a*(-eta)*besselh(1,2,eta*a) + eta^2/2*(besselh(0,2,eta*a)-besselh(2,2,eta*a)));

    c_01 = gamma_p*besselj(1,gamma_p*a);
    c_02 = 0;
    c_03 = -(lambda_p+2*mu_p)*(-gamma_p^2/2*(besselj(0,gamma_p*a)-besselj(2,gamma_p*a)))-lambda_p*(1/a*(-gamma_p*besselj(1,gamma_p*a)));
    c_04 = 0;

    d_01 = 0;
    d_02 = -eta_p*besselj(1,eta_p*a);
    d_03 = 0;
    d_04 = -mu_p*(1/a*(-eta_p)*besselj(1,eta_p*a) + eta_p^2/2*(besselj(0,eta_p*a) - besselj(2,eta_p*a)));

    epsilon_n = 1;
    F = phi_0*(-1i)^0*epsilon_n;

    M = [a_01, b_01, c_01, d_01;...
         a_02, b_02, c_02, d_02;...
         a_03, b_03, c_03, d_03;...
         a_04, b_04, c_04, d_04];

    b = -F*[f_01;f_02;f_03;f_04];

    ABCD = M\b;

    p = F*(-gamma)*besselj(1,gamma*r) + ABCD(1)*(-gamma)*(besselh(1,2,gamma*r));
    q = 0;

    p_p = ABCD(3)*(-gamma_p)*besselj(1,gamma_p*r_p);
    q_p = 0;

    n = 1;
    f_n1 = besselj_p(n,gamma,gamma*a);
    f_n2 = -n./a*besselj(n,gamma*a);
    f_n3 = (lambda+2*mu)*besselj_pp(n,gamma,gamma*a)+lambda*(1/a*besselj_p(n,gamma,gamma*a)-(n/a)^2*besselj(n,gamma*a));
    f_n4 = 2*mu*(n/a^2*besselj(n,gamma*a)-n/a*besselj_p(n,gamma,gamma*a));

    a_n1 = besselh_p(n,gamma,gamma*a);
    a_n2 = -n/a*besselh(n,2,gamma*a);
    a_n3 = (lambda+2*mu)*besselh_pp(n,gamma,gamma*a)+lambda*(1/a*besselh_p(n,gamma,gamma*a)-(n/a)^2*besselh(n,2,gamma*a));
    a_n4 = 2*mu*(n/a^2*besselh(n,2,gamma*a)-n/a*besselh_p(n,gamma,gamma*a));

    b_n1 = n/a*besselh(n,2,eta*a);
    b_n2 = -besselh_p(n,eta,eta*a);
    b_n3 = (lambda+2*mu)*(n/a*besselh_p(n,eta,eta*a)-n/a^2*besselh(n,2,eta*a))+lambda*(n/a^2*besselh(n,2,eta*a)-n/a*besselh_p(n,eta,eta*a));
    b_n4 = mu*(1/a*besselh_p(n,eta,eta*a)-besselh_pp(n,eta,eta*a)-n^2/a*besselh(n,2,eta*a));

    c_n1 = -besselj_p(n,gamma_p,gamma_p*a);
    c_n2 = n/a*besselj(n,gamma_p*a);
    c_n3 = -(lambda_p+2*mu_p)*besselj_pp(n,gamma_p,gamma_p*a)-lambda_p*(1/a*besselj_p(n,gamma_p,gamma_p*a)-(n/a)^2*besselj(n,gamma_p*a));
    c_n4 = -2*mu_p*(n/a^2*besselj(n,gamma_p*a)-n/a*besselj_p(n,gamma_p,gamma_p*a));

    d_n1 = -n/a*besselj(n,eta_p*a);
    d_n2 = besselj_p(n,eta_p,eta_p*a);
    d_n3 = -(lambda_p+2*mu_p)*(n/a*besselj_p(n,eta_p,eta_p*a)-n/a^2*besselj(n,eta_p*a))-lambda_p*(n/a^2*besselj(n,eta_p*a)-n/a*besselj_p(n,eta_p,eta_p*a));
    d_n4 = -mu_p*(1/a*besselj_p(n,eta_p,eta_p*a)-besselj_pp(n,eta_p,eta_p*a)-n^2/a*besselj(n,eta_p*a));


    epsilon_n = 2;
    F = phi_0*(-1i)^n*epsilon_n;

    M = [a_n1, b_n1, c_n1, d_n1;...
         a_n2, b_n2, c_n2, d_n2;...
         a_n3, b_n3, c_n3, d_n3;...
         a_n4, b_n4, c_n4, d_n4];

    b = -F*[f_n1;f_n2;f_n3;f_n4];

    ABCD = M\b;

    p = p + (F*besselj_p(n,gamma,gamma*r) + ABCD(1)*besselh_p(n,gamma,gamma*r) + ABCD(2)*n./r.*besselh(n,2,eta*r)).*cos(n*theta);
    q = q + (-F*n./r.*besselj(n,gamma*r) - n./r.*ABCD(1).*besselh(n,2,gamma*r) - ABCD(2)*besselh_p(n,eta,eta*r)).*sin(n*theta);

    p_p = p_p + (ABCD(3)*besselj_p(n,gamma_p,gamma_p*r_p) + ABCD(4)*n./(r_p).*besselj(n,eta_p*r_p)).*cos(n*theta_p);
    q_p = q_p + (-n./(r_p).*ABCD(3).*besselj(n,gamma_p*r_p) - ABCD(4)*besselj_p(n,eta_p,eta_p*r_p)).*sin(n*theta_p);

    for n = 2:24

        f_n1 = besselj_p(n,gamma,gamma*a);
        f_n2 = -n./a*besselj(n,gamma*a);
        f_n3 = (lambda+2*mu)*besselj_pp(n,gamma,gamma*a)+lambda*(1/a*besselj_p(n,gamma,gamma*a)-(n/a)^2*besselj(n,gamma*a));
        f_n4 = 2*mu*(n/a^2*besselj(n,gamma*a)-n/a*besselj_p(n,gamma,gamma*a));

        a_n1 = besselh_p(n,gamma,gamma*a);
        a_n2 = -n/a*besselh(n,2,gamma*a);
        a_n3 = (lambda+2*mu)*besselh_pp(n,gamma,gamma*a)+lambda*(1/a*besselh_p(n,gamma,gamma*a)-(n/a)^2*besselh(n,2,gamma*a));
        a_n4 = 2*mu*(n/a^2*besselh(n,2,gamma*a)-n/a*besselh_p(n,gamma,gamma*a));

        b_n1 = n/a*besselh(n,2,eta*a);
        b_n2 = -besselh_p(n,eta,eta*a);
        b_n3 = (lambda+2*mu)*(n/a*besselh_p(n,eta,eta*a)-n/a^2*besselh(n,2,eta*a))+lambda*(n/a^2*besselh(n,2,eta*a)-n/a*besselh_p(n,eta,eta*a));
        b_n4 = mu*(1/a*besselh_p(n,eta,eta*a)-besselh_pp(n,eta,eta*a)-n^2/a*besselh(n,2,eta*a));

        c_n1 = -besselj_p(n,gamma_p,gamma_p*a);
        c_n2 = n/a*besselj(n,gamma_p*a);
        c_n3 = -(lambda_p+2*mu_p)*besselj_pp(n,gamma_p,gamma_p*a)-lambda_p*(1/a*besselj_p(n,gamma_p,gamma_p*a)-(n/a)^2*besselj(n,gamma_p*a));
        c_n4 = -2*mu_p*(n/a^2*besselj(n,gamma_p*a)-n/a*besselj_p(n,gamma_p,gamma_p*a));

        d_n1 = -n/a*besselj(n,eta_p*a);
        d_n2 = besselj_p(n,eta_p,eta_p*a);
        d_n3 = -(lambda_p+2*mu_p)*(n/a*besselj_p(n,eta_p,eta_p*a)-n/a^2*besselj(n,eta_p*a))-lambda_p*(n/a^2*besselj(n,eta_p*a)-n/a*besselj_p(n,eta_p,eta_p*a));
        d_n4 = -mu_p*(1/a*besselj_p(n,eta_p,eta_p*a)-besselj_pp(n,eta_p,eta_p*a)-n^2/a*besselj(n,eta_p*a));


        epsilon_n = 2;
        F = phi_0*(-1i)^n*epsilon_n;

        M = [a_n1, b_n1, c_n1, d_n1;...
             a_n2, b_n2, c_n2, d_n2;...
             a_n3, b_n3, c_n3, d_n3;...
             a_n4, b_n4, c_n4, d_n4];

        b = -F*[f_n1;f_n2;f_n3;f_n4];

        ABCD = M\b;

        %max(abs(ABCD))

        p = p + (F*besselj_p(n,gamma,gamma*r) + ABCD(1)*besselh_p(n,gamma,gamma*r) + ABCD(2)*n./r.*besselh(n,2,eta*r)).*cos(n*theta);
        q = q + (-F*n./r.*besselj(n,gamma*r) - n./r.*ABCD(1).*besselh(n,2,gamma*r) - ABCD(2)*besselh_p(n,eta,eta*r)).*sin(n*theta);

        p_p = p_p + (ABCD(3)*besselj_p(n,gamma_p,gamma_p*r_p) + ABCD(4)*n./(r_p).*besselj(n,eta_p*r_p)).*cos(n*theta_p);
        q_p = q_p + (-n./(r_p).*ABCD(3).*besselj(n,gamma_p*r_p) - ABCD(4)*besselj_p(n,eta_p,eta_p*r_p)).*sin(n*theta_p);

    end
    disp('DONE COMPUTING COEFICIENTS')
    du = real((cos(theta).*p-sin(theta).*q)*exp(1i*omega*t));
    dv = real((sin(theta).*p+cos(theta).*q)*exp(1i*omega*t));

    du_p = real((cos(theta_p).*p_p-sin(theta_p).*q_p)*exp(1i*omega*t));
    dv_p = real((sin(theta_p).*p_p+cos(theta_p).*q_p)*exp(1i*omega*t));
end

function dJ = besselj_p(n,xi,x)
    dJ = xi/2*(besselj(n-1,x)-besselj(n+1,x));
end

function ddJ = besselj_pp(n,xi,x)
    if n == 1
        ddJ= -xi^2/2*besselj(1,x) - xi^2/4*(besselj(1,x)-besselj(3,x));
    else
        ddJ = xi^2/4*(besselj(n-2,x)-2*besselj(n,x)+besselj(n+2,x));
    end
end

function dH = besselh_p(n,xi,x)
    dH = xi/2*(besselh(n-1,2,x)-besselh(n+1,2,x));
end

function ddH = besselh_pp(n,xi,x)
    if n == 1
        ddH = -xi^2/2*besselh(1,2,x) - xi^2/4*(besselh(1,2,x)-besselh(3,2,x));
    else
        ddH = xi^2/4*(besselh(n-2,2,x)-2*besselh(n,2,x)+besselh(n+2,2,x));
    end
end
