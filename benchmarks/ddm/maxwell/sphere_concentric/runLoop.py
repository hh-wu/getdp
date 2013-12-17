from os import system

lambdaList = [5, 10]
kList = [1] # *Pi
# nDomList = range(2,4) # last is not done !
nDomList = [2,3] # last is not done !

for lambdaN in lambdaList:
    for k in kList:
        for n in nDomList:

            f = open('runParams.geo', 'w')

            f.write('N_DOM = %d;\n'%n)
            f.write('WAVENUMBER = %d*Pi;\n'%k)
            f.write('LAMBDA = 2*Pi/WAVENUMBER;\n')
            f.write('LC = LAMBDA/%d;\n'%lambdaN)

            # f.write('SILVER_MULLER = 0;\n')
            # f.write('OSRC = 1;\n')
            # f.write('JFLee = 0;\n')
            f.close()

            fname = 'ddmMaxwell_k%dPi_lambda%d_nDom%d.txt'%(k, lambdaN, n)

            print 'Meshing'
            system('gmsh sphere_concentric_mshcut.geo -3')
            print 'Done meshing'
            print 'getdp > %s'%fname
            system('mpirun -np %d getdp sphere_concentric.pro -sol DDM -v 0 -bin -ksp_monitor > %s'%(n, fname))
            
