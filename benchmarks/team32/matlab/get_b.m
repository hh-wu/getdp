function b = get_b(b1, h1, h2, n)
% b1 - induction at previous step
% h1 - magnetic field at previous step
% h2 - magnetic field at current step
% n  - number of integration points for computing b2 
    
    global mu0 Msat aa kk cc alpha
    
    b = b1 ;
    dh = (h2-h1)/n ;
    
    for k = 0:n-1
        h = (n-k)/n*h1 + k/n*h2 ;
        m = b/mu0 - h ;     % magnetisation
        he = h + alpha * m ; % effective field
        
        % anhysteretic magnetisation
        if(abs(he)<0.01*aa)
            man = Msat*he/(3*aa) ;
        else
            man = Msat*(cosh(he/aa)/sinh(he/aa)-aa/he) ;
        end
        
        %Irreversible magnetisation
        mi = (m-cc*man) / (1-cc) ;
        
        if (abs(he) < 0.01*aa) 
            dmandhe=Msat/(3.*aa) ;
        else 
            dmandhe=Msat/aa*(1-(cosh(he/aa)/sinh(he/aa)).^2+(aa/he).^2) ;
        end
        
        if (~abs(man-mi) || (man-mi)*dh < 0.)
            dmidhe = 0 ;
        else
            dmidhe = abs(man-mi)/(kk) ;
        end

        % differential susceptibility
        dmdh = (cc*dmandhe + (1-cc)*dmidhe) / ...
               (1 - alpha*cc*dmandhe - alpha*(1-cc)*dmidhe) ;
        
        dbdh = mu0*(1+dmdh) ;
        b = b + dbdh * dh ;
    end