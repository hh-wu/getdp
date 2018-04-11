function [Aj,Bj] = ComplexPadeISqrt2(N,theta)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% COMPLEX - PADE  RATIONAL  APPROXIMATION
%  compute  Aj and Bj such that
%
%     (1+z)^(-0.5) ~  sum{ Aj /( Bj + z ) }, j=0,N-1
%
% N     : order of pade
% theta : branch rotating angle
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


j = (0:N-1)'; 

tang=tan((pi/(2*N))*(0.5+j));
aj= (1+tang.*tang)/N;
bj= (1+tang.*tang);


Aj=aj*exp(i*theta/2);
Bj=bj*exp(i*theta)+1-exp(i*theta);

  
 
 