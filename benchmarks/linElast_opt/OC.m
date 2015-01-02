% Load data from fem analysis
load('res/designVar.mat');
load('res/objectiveDeriv.mat');
load('res/volumeFraction.mat');
n = length(x);

l1 = 0; l2 = 100000; move = 0.2;
while (l2-l1 > 1e-4)
  lmid = 0.5*(l2+l1);
  xnew = max(0.001,max(x-move,min(1.,min(x+move,x.*sqrt(-dfdx./lmid)))));
  if sum(xnew) - volfrac*n > 0;
    l1 = lmid;
  else
    l2 = lmid;
  end
end

% Save data
xnew = xnew';
save('res/designVarUpdate.mat','xnew');

