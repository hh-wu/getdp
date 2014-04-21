% -- get stiffnness matrix and load vector --
run('file_mat_primal.m');
run('file_vec_primal.m');

K = full(mat_primal);%check
g = vec_primal';

% -- Save teh result .mat file --
save('stiffMat.mat','K')
save('loadVec.mat','g')
