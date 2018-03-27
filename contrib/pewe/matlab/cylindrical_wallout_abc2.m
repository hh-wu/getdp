function  [A1n,A2n, B1n,B2n] = cylindrical_wallout_abc2(n,kp,ks,eps_p,eps_s,a,b,lambda,mu,rho,omega)

  kpeps = kp +i* eps_p; 
  kseps = ks +i* eps_s; 
  %Amplitude of incomming wave
  phi_0 = 1;
  xip = (1/kp) * ( 1/(sqrt(1-(n/(kpeps*b))^2 ) ));
  xis = (1/ks) * ( 1/(sqrt(1-(n/(kseps*b))^2 ) ));
   
  det = 1 + ((n/b)**2) * xip * xis; 

  D1= lambda+2*mu;
  D2 = (rho*(omega**2)*xip * xis) / det;
  D3 = lambda/b - (i*rho*(omega**2)*xip)/det;
  D4 = -mu/b - (i*rho*(omega**2)*xis)/det;
  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%Series expansion of solution%%%%%%%%%%%
[epsilon,dr_j_p,dr_j_s,dr_h1_p_a,dr_h2_p_a,dr_h1_s_a,dr_h2_s_a,dr_h1_p,dr_h2_p,dr_h1_s,dr_h2_s,dr2_h1_p,dr2_h2_p,dr2_h1_s,dr2_h2_s] =...
 bessel_family(n,kp,ks,a,b);
  
  M(1,1) = dr_h1_p_a;
  M(1,2) = dr_h2_p_a;
  M(1,3) = ( n/a) * besselh(n,1,ks*a);
  M(1,4) = ( n/a) * besselh(n,2,ks*a);

  M(2,1) = -(n/a)  * besselh(n,1,kp*a);
  M(2,2) = -(n/a)  * besselh(n,2,kp*a);
  M(2,3) = -dr_h1_s_a;
  M(2,4) = -dr_h2_s_a;

  M(3,1) = D1*dr2_h1_p + (D1-D2)*(-(n/b)**2)*besselh(n,1,kp*b) + D3*dr_h1_p;
  M(3,2) = D1*dr2_h2_p + (D1-D2)*(-(n/b)**2)*besselh(n,2,kp*b) + D3*dr_h2_p;
  M(3,3) = D1*( -(n/(b**2)) *besselh(n,1,ks*b) + (n/b)*dr_h1_s ) + (D1-D2)*(-n/b)*dr_h1_s + D3*(n/b)*besselh(n,1,ks*b);
  M(3,4) = D1*( -(n/(b**2)) *besselh(n,2,ks*b) + (n/b)*dr_h2_s ) + (D1-D2)*(-n/b)*dr_h2_s + D3*(n/b)*besselh(n,2,ks*b); 

  M(4,1) = -mu* (-(n/(b**2))*besselh(n,1,kp*b) + (n/b)*dr_h1_p) - (D2-mu)* (n/b)*dr_h1_p - D4*(n/b)*besselh(n,1,kp*b);
  M(4,2) = -mu* (-(n/(b**2))*besselh(n,2,kp*b) + (n/b)*dr_h2_p) - (D2-mu)* (n/b)*dr_h2_p - D4*(n/b)*besselh(n,2,kp*b);
  M(4,3) = -mu*dr2_h1_s + (D2-mu)*(-(n/b)**2)*besselh(n,1,ks*b) - D4*dr_h1_s;
  M(4,4) = -mu*dr2_h2_s + (D2-mu)*(-(n/b)**2)*besselh(n,2,ks*b) - D4*dr_h2_s;

  F(1) = -phi_0*epsilon* (-1i)^n * dr_j_p;
  F(2) = (n/a) * phi_0 * epsilon* (-1i)^n *besselj(n,kp*a);
  F(3) = 0;
  F(4) = 0;
    
    % Calculate the inverse determinant of the matrix
    detinv =  1/(M(1,1)*(M(2,2)*(M(3,3)*M(4,4)-M(3,4)*M(4,3))+M(2,3)*(M(3,4)*M(4,2)-M(3,2)*M(4,4))...
    +M(2,4)*(M(3,2)*M(4,3)-M(3,3)*M(4,2))) - M(1,2)*(M(2,1)*(M(3,3)*M(4,4)-M(3,4)*M(4,3))+M(2,3)...
      *(M(3,4)*M(4,1)-M(3,1)*M(4,4))+M(2,4)*(M(3,1)*M(4,3)-M(3,3)*M(4,1)))+...
      M(1,3)*(M(2,1)*(M(3,2)*M(4,4)-M(3,4)*M(4,2))+M(2,2)*(M(3,4)*M(4,1)-M(3,1)*M(4,4))+M(2,4)*(M(3,1)*M(4,2)-M(3,2)*M(4,1)))...
      - M(1,4)*(M(2,1)*(M(3,2)*M(4,3)-M(3,3)*M(4,2))+M(2,2)*(M(3,3)*M(4,1)-M(3,1)*M(4,3))+M(2,3)*(M(3,1)*M(4,2)-M(3,2)*M(4,1))));

    % Calculate the inverse of the matrix B=M^{-1}
    Minv(1,1) = detinv*(M(2,2)*(M(3,3)*M(4,4)-M(3,4)*M(4,3))...
     +M(2,3)*(M(3,4)*M(4,2)-M(3,2)*M(4,4))+M(2,4)*(M(3,2)*M(4,3)-M(3,3)*M(4,2)));
    Minv(2,1) = detinv*(M(2,1)*(M(3,4)*M(4,3)-M(3,3)*M(4,4))...
     +M(2,3)*(M(3,1)*M(4,4)-M(3,4)*M(4,1))+M(2,4)*(M(3,3)*M(4,1)-M(3,1)*M(4,3)));
    Minv(3,1) = detinv*(M(2,1)*(M(3,2)*M(4,4)-M(3,4)*M(4,2))...
     +M(2,2)*(M(3,4)*M(4,1)-M(3,1)*M(4,4))+M(2,4)*(M(3,1)*M(4,2)-M(3,2)*M(4,1)));
    Minv(4,1) = detinv*(M(2,1)*(M(3,3)*M(4,2)-M(3,2)*M(4,3))...
     +M(2,2)*(M(3,1)*M(4,3)-M(3,3)*M(4,1))+M(2,3)*(M(3,2)*M(4,1)-M(3,1)*M(4,2)));
    Minv(1,2) = detinv*(M(1,2)*(M(3,4)*M(4,3)-M(3,3)*M(4,4))...
     +M(1,3)*(M(3,2)*M(4,4)-M(3,4)*M(4,2))+M(1,4)*(M(3,3)*M(4,2)-M(3,2)*M(4,3)));
    Minv(2,2) = detinv*(M(1,1)*(M(3,3)*M(4,4)-M(3,4)*M(4,3))...
     +M(1,3)*(M(3,4)*M(4,1)-M(3,1)*M(4,4))+M(1,4)*(M(3,1)*M(4,3)-M(3,3)*M(4,1)));
    Minv(3,2) = detinv*(M(1,1)*(M(3,4)*M(4,2)-M(3,2)*M(4,4))...
     +M(1,2)*(M(3,1)*M(4,4)-M(3,4)*M(4,1))+M(1,4)*(M(3,2)*M(4,1)-M(3,1)*M(4,2)));
    Minv(4,2) = detinv*(M(1,1)*(M(3,2)*M(4,3)-M(3,3)*M(4,2))...
     +M(1,2)*(M(3,3)*M(4,1)-M(3,1)*M(4,3))+M(1,3)*(M(3,1)*M(4,2)-M(3,2)*M(4,1)));
    Minv(1,3) = detinv*(M(1,2)*(M(2,3)*M(4,4)-M(2,4)*M(4,3))...
     +M(1,3)*(M(2,4)*M(4,2)-M(2,2)*M(4,4))+M(1,4)*(M(2,2)*M(4,3)-M(2,3)*M(4,2)));
    Minv(2,3) = detinv*(M(1,1)*(M(2,4)*M(4,3)-M(2,3)*M(4,4))...
     +M(1,3)*(M(2,1)*M(4,4)-M(2,4)*M(4,1))+M(1,4)*(M(2,3)*M(4,1)-M(2,1)*M(4,3)));
    Minv(3,3) = detinv*(M(1,1)*(M(2,2)*M(4,4)-M(2,4)*M(4,2))...
     +M(1,2)*(M(2,4)*M(4,1)-M(2,1)*M(4,4))+M(1,4)*(M(2,1)*M(4,2)-M(2,2)*M(4,1)));
    Minv(4,3) = detinv*(M(1,1)*(M(2,3)*M(4,2)-M(2,2)*M(4,3))...
     +M(1,2)*(M(2,1)*M(4,3)-M(2,3)*M(4,1))+M(1,3)*(M(2,2)*M(4,1)-M(2,1)*M(4,2)));
    Minv(1,4) = detinv*(M(1,2)*(M(2,4)*M(3,3)-M(2,3)*M(3,4))...
     +M(1,3)*(M(2,2)*M(3,4)-M(2,4)*M(3,2))+M(1,4)*(M(2,3)*M(3,2)-M(2,2)*M(3,3)));
    Minv(2,4) = detinv*(M(1,1)*(M(2,3)*M(3,4)-M(2,4)*M(3,3))...
     +M(1,3)*(M(2,4)*M(3,1)-M(2,1)*M(3,4))+M(1,4)*(M(2,1)*M(3,3)-M(2,3)*M(3,1)));
    Minv(3,4) = detinv*(M(1,1)*(M(2,4)*M(3,2)-M(2,2)*M(3,4))...
     +M(1,2)*(M(2,1)*M(3,4)-M(2,4)*M(3,1))+M(1,4)*(M(2,2)*M(3,1)-M(2,1)*M(3,2)));
    Minv(4,4) = detinv*(M(1,1)*(M(2,2)*M(3,3)-M(2,3)*M(3,2))...
     +M(1,2)*(M(2,3)*M(3,1)-M(2,1)*M(3,3))+M(1,3)*(M(2,1)*M(3,2)-M(2,2)*M(3,1)));

    % Compute AB = M^{-1}F
    A1n = Minv(1,1)*F(1) + Minv(1,2)*F(2) + Minv(1,3)*F(3) + Minv(1,4)*F(4);
    A2n = Minv(2,1)*F(1) + Minv(2,2)*F(2) + Minv(2,3)*F(3) + Minv(2,4)*F(4);
    B1n = Minv(3,1)*F(1) + Minv(3,2)*F(2) + Minv(3,3)*F(3) + Minv(3,4)*F(4);
    B2n = Minv(4,1)*F(1) + Minv(4,2)*F(2) + Minv(4,3)*F(3) + Minv(4,4)*F(4); 

