sysName2 = 'primal';

% -- get solution vector --
run(strcat('file_sol_',sysName2,'.m'));

potVec = eval(strcat('sol_',sysName2));
potVec = potVec';

% -- Save teh result .mat file --
save('potVec.mat','potVec');

