sysName1 = 'adjVar';
sysName2 = 'primal';

% -- get solution vector --
run(strcat('file_sol_',sysName1,'.m'));
run(strcat('file_sol_',sysName2,'.m'));

lambda = eval(strcat('sol_',sysName1));
potVec = eval(strcat('sol_',sysName2));
lambda = lambda';
potVec = potVec';

% -- Save teh result .mat file --
save('adjointVec.mat','lambda');
save('potVec.mat','potVec');

