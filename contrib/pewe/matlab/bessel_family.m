function [epsilon,dr_j_p,dr_j_s,dr_h1_p_a,dr_h2_p_a,dr_h1_s_a,dr_h2_s_a,dr_h1_p,dr_h2_p,dr_h1_s,dr_h2_s,dr2_h1_p,dr2_h2_p,dr2_h1_s,dr2_h2_s]=bessel_family(n,kp,ks,a,b)

  if (n==0)
    epsilon = 1;
    dr_j_p = -kp*besselj(1,kp*a); 
    dr_j_s = -ks*besselj(1,ks*a);  
    
    dr_h1_p_a = -kp*besselh(1,1,kp*a);
    dr_h2_p_a = -kp*besselh(1,2,kp*a); 
    dr_h1_s_a = -ks*besselh(1,1,ks*a);
    dr_h2_s_a = -ks*besselh(1,2,ks*a);
    
    dr_h1_p = -kp*besselh(1,1,kp*b);
    dr_h2_p = -kp*besselh(1,2,kp*b);
    dr_h1_s = -ks*besselh(1,1,ks*b);
    dr_h2_s = -ks*besselh(1,2,ks*b);
    
    dr2_h1_p = -0.5*(kp**2) * (besselh(0,1,kp*b) - besselh(2,1,kp*b) );
    dr2_h2_p = -0.5*(kp**2) * (besselh(0,2,kp*b) - besselh(2,2,kp*b) );
    dr2_h1_s = -0.5*(ks**2) * (besselh(0,1,ks*b) - besselh(2,1,ks*b) );
    dr2_h2_s = -0.5*(ks**2) * (besselh(0,2,ks*b) - besselh(2,2,ks*b) );
  end 
  
  if(n>0)
    epsilon = 2;
    dr_j_p  = 0.5*kp * (besselj(n-1,kp*a)-besselj(n+1,kp*a));
    dr_j_s  = 0.5*ks * (besselj(n-1,ks*a)-besselj(n+1,ks*a));
    
    dr_h1_p_a = 0.5*kp *(besselh(n-1,1,kp*a)-besselh(n+1,1,kp*a));
    dr_h2_p_a = 0.5*kp *(besselh(n-1,2,kp*a)-besselh(n+1,2,kp*a));
    dr_h1_s_a = 0.5*ks *(besselh(n-1,1,ks*a)-besselh(n+1,1,ks*a));
    dr_h2_s_a = 0.5*ks *(besselh(n-1,2,ks*a)-besselh(n+1,2,ks*a));

    dr_h1_p = 0.5*kp *(besselh(n-1,1,kp*b)-besselh(n+1,1,kp*b));
    dr_h1_s = 0.5*ks *(besselh(n-1,1,ks*b)-besselh(n+1,1,ks*b));
    dr_h2_p = 0.5*kp *(besselh(n-1,2,kp*b)-besselh(n+1,2,kp*b));
    dr_h2_s = 0.5*ks *(besselh(n-1,2,ks*b)-besselh(n+1,2,ks*b)); 
    if (n==1)
      dr2_h1_p = 0.25*(kp**2) * (- 3*besselh(1,1,kp*b)+besselh(3,1,kp*b)); 
      dr2_h2_p = 0.25*(kp**2) * (- 3*besselh(1,2,kp*b)+besselh(3,2,kp*b));
      dr2_h1_s = 0.25*(ks**2) * (- 3*besselh(1,1,ks*b)+besselh(3,1,ks*b));
      dr2_h2_s = 0.25*(ks**2) * (- 3*besselh(1,2,ks*b)+besselh(3,2,ks*b));
    else   
      dr2_h1_p = 0.25*(kp**2) * (besselh(n-2,1,kp*b)- 2*besselh(n,1,kp*b)+besselh(n+2,1,kp*b));
      dr2_h2_p = 0.25*(kp**2) * (besselh(n-2,2,kp*b)- 2*besselh(n,2,kp*b)+besselh(n+2,2,kp*b));
      dr2_h1_s = 0.25*(ks**2) * (besselh(n-2,1,ks*b)- 2*besselh(n,1,ks*b)+besselh(n+2,1,ks*b));
      dr2_h2_s = 0.25*(ks**2) * (besselh(n-2,2,ks*b)- 2*besselh(n,2,ks*b)+besselh(n+2,2,ks*b));
    end
  end