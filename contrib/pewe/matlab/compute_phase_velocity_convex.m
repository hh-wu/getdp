function compute_phase_velocity_convex
 
    close all

    E = 20;
    x = 0:0.001:E;
    F = f(x);
    plot(x,F,'linewidth',2)
    axis([0 E -10 10])
    pause
    initial_guess = input('Give initial guess: ')     
    %
    omega = fzero(@f,initial_guess);
    %
    %Define n = k*a and material parameters 
    n=6;
    lambda = 1;
    mu = 1;
    rho=1;
    %
    alpha = sqrt((lambda+2.*mu)/rho);
    beta = sqrt(mu/rho);
    Ka = omega/alpha;
    Kb = omega/beta;
     
    Ja = besselj(n,Ka);
    Jap = Ka/2*(besselj(n-1,Ka)-besselj(n+1,Ka));
    Japp = Ka^2/4*(besselj(n-2,Ka)-2*besselj(n,Ka)+besselj(n+2,Ka));
    Jb = besselj(n,Kb);
    Jbp = Kb/2*(besselj(n-1,Kb)-besselj(n+1,Kb));

    M = [-((Kb^2-2*Ka^2)*Ja-2*Japp), 2*1i*n*(Jbp-Jb);...
         2*1i*n*(Jap-Ja), (Kb^2-2*n^2)*Jb+2*Jbp];
     
    A = 1;
    
    %Compute phase velocity c and coefficient B
    c = omega/n
    B = -M(1,1)*A/M(1,2)
   

    

end

function f = f(x)
    
    %Define n = k*a and material parameters
    n=6;
    lambda = 1;
    mu = 1;
    rho=1;

    alpha = sqrt((lambda+2.*mu)/rho);
    beta = sqrt(mu/rho);
    
    f = ((x.^2/beta.^2-2.*x.^2/alpha.^2).*besselj(n,x/alpha)-1/2.*x.^2/alpha.^2.*(besselj(n-2,x/alpha)-2.*besselj(n,x/alpha)+besselj(n+2,x/alpha))).*...
        ((x.^2/beta.^2-2.*n.^2).*besselj(n,x/beta)+x/beta.*(besselj(n-1,x/beta)-besselj(n+1,x/beta)))-...
        4.*n.^2.*(x/2/alpha.*(besselj(n-1,x/alpha)-besselj(n+1,x/alpha))-besselj(n,x/alpha)).*(x/beta/2.*(besselj(n-1,x/beta)-besselj(n+1,x/beta))-besselj(n,x/beta));
    
end