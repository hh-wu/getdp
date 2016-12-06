function compute_phase_velocity_concave
    
%     %Plot
%     x = 0.1:0.01:0.5;
%     y = 0.1:0.01:0.5;
%     [X,Y] = meshgrid(x,y);
%     Z = zeros(size(X));
%     for i = 1:length(x)
%         for j = 1:length(y)
%             Z(j,i) = f([x(i) y(j)]);
%         end
%     end
%     close all
%     surf(X,Y,Z)
%     axis([0.05 0.5 0.05 0.5 0 1])
    
    rv = input('Give real part of initial guess: ')
    iv = input('Give imaginary part of initial guess: ')
    v = [rv,iv];

    omegav = fminsearch(@f,v,optimset('TolX',1e-18,'MaxFunEvals',1000));
    omega =  omegav(1) + omegav(2)*1i
    
    n=2;
    lambda = 1;
    mu = 1;
    rho=1;
    
    alpha = sqrt((lambda+2.*mu)/rho);
    beta = sqrt(mu/rho);
    Ka = omega/alpha;
    Kb = omega/beta;
    
    Ja = besselh(n,2,Ka);
    Jap = Ka/2*(besselh(n-1,2,Ka)-besselh(n+1,2,Ka));
    Japp = Ka^2/4*(besselh(n-2,2,Ka)-2*besselh(n,2,Ka)+besselh(n+2,2,Ka));
    Jb = besselh(n,2,Kb);
    Jbp = Kb/2*(besselh(n-1,2,Kb)-besselh(n+1,2,Kb));
     
    M = [-((Kb^2-2*Ka^2)*Ja-2*Japp), 2*1i*n*(Jbp-Jb);...
         2*1i*n*(Jap-Ja), (Kb^2-2*n^2)*Jb+2*Jbp];

    A = 1
    c = omega/n
    B = -M(1,1)*A/M(1,2)
    
    

end

function abs_f = f(v)
    
    n=2;
    lambda = 1;
    mu = 1;
    rho=1;
    
    alpha = sqrt((lambda+2.*mu)/rho);
    beta = sqrt(mu/rho);
    
    x = v(1)+1i*v(2);
    
    f = ((x.^2/beta.^2-2.*x.^2/alpha.^2).*besselh(n,2,x/alpha)-1/2.*x.^2/alpha.^2.*(besselh(n-2,2,x/alpha)-2.*besselh(n,2,x/alpha)+besselh(n+2,2,x/alpha))).*...
        ((x.^2/beta.^2-2.*n.^2).*besselh(n,2,x/beta)+x/beta.*(besselh(n-1,2,x/beta)-besselh(n+1,2,x/beta)))-...
        4.*n.^2.*(x/2/alpha.*(besselh(n-1,2,x/alpha)-besselh(n+1,2,x/alpha))-besselh(n,2,x/alpha)).*(x/beta/2.*(besselh(n-1,2,x/beta)-besselh(n+1,2,x/beta))-besselh(n,2,x/beta));
    
    
    abs_f = real(f).^2+imag(f).^2;
       
end