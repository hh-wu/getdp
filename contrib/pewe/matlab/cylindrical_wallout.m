function  [An, Bn] = cylindrical_wallout(n,kp,ks,a)

    %Amplitude of incomming wave
    phi_0 = 1;   
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%Series expansion of solution%%%%%%%%%%%
    if (n == 0)
      dr_j_p = -kp*besselj(1,kp*a);
      dr_h_p = -kp*besselh(1,1,kp*a);
      dr_h_s = -ks*besselh(1,1,ks*a);
      epsilon = 1.d0;
    endif

    if (n > 0)
      dr_j_p = 0.5*kp*(besselj(n-1,kp*a)-besselj(n+1,kp*a));
      dr_h_p = 0.5*kp*(besselh(n-1,1,kp*a)-besselh(n+1,1,kp*a));
      dr_h_s = 0.5*ks*(besselh(n-1,1,ks*a)-besselh(n+1,1,ks*a));
      epsilon = 2.d0;
    endif

    m11 = dr_h_p;
    m12 = (n/a)*besselh(n,1,ks*a);
    m21 =-(n/a)*besselh(n,1,kp*a);
    m22 =-dr_h_s;

    f_1 =-phi_0*epsilon*((-1i)**n) *dr_j_p;
    f_2 = phi_0*epsilon*((-1i)**n) *(n/a)*besselj(n,kp*a);

    An = 1.d0/(m11*m22 - m12*m21)*( m22*f_1-m12*f_2);
    Bn = 1.d0/(m11*m22 - m12*m21)*(-m21*f_1+m11*f_2);      
end      
    
