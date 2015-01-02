% Load data from fem analysis
load('res/designVar.mat');
load('res/designVarOld1.mat');
load('res/designVarOld2.mat');
load('res/designVarMin.mat');
load('res/designVarMax.mat');
load('res/objective.mat'); %f
load('res/objectiveDeriv.mat'); %dfdx
load('res/constraint.mat'); %iec
load('res/constraintDeriv.mat'); %diecdx
load('res/iterationNumber.mat');
load('res/LowBound');
load('res/UppBound');
load('res/param_s0.mat');
load('res/param_a0.mat');
load('res/param_a.mat');
load('res/param_c_const.mat');
load('res/param_d.mat');
m = length(iec);
n = length(x);
diecdx = diecdx;

% Call MMA (Svanberg) solver
%[xnew,~,~,~,~,~,~,~,~,low, upp] = ...
 [xnew,ymma,zmma,lam,xsi,eta,mu,zet,s,low,upp] = ...
        mmasub(m,n,loop,x,xmin,xmax,xold1,xold2, ...
        f,dfdx,0*dfdx,iec,diecdx,0*diecdx,low,upp,a0,a,c_const,d);


% Save data
xnew = xnew';
save('res/designVarUpdate.mat','xnew');
save('res/LowBound.mat','low');
save('res/UppBound.mat','upp');
save('res/lam.mat','lam');


