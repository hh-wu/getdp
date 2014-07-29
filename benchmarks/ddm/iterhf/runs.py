from os import system

lcRatioList = [1,2,3,4,5,10]
k = 15
Nv = 2
Nh = 2
nlambda = 30

with open('freq.pro', 'w') as ff:
    ff.write('k0=%f;\n'%k)

rpFilename = 'runParams.pro'
with open(rpFilename, 'w') as rpf:
    rpf.write('Nv = %d; Nh = %d;\n'%(Nv, Nh))
    rpf.write('nlambda = %f;\n'%nlambda)        
    rpf.write('ratiolc1lc0 = %f;\n'%lcRatioList[0])
    rpf.write('computeOnFine = 1;\n')


print ' ***** CHECK PARAMETERS *****'
print ' k = %.2f; Nv = %d; Nh = %d; nLambda=%.1f'%(k, Nv, Nh, nlambda)

print ' ***** MAKE MESH FOR REF *****'
print ' gmsh circles_fine.geo -bin -'
print ' !!! refine as necessary: gmsh circles_fine_for_Full.msh -refine -bin'
raw_input()

outputFilenameGetdp = 'getdpOut_Nv%d_Nh_extDom_%d_k%.2f_solverFem_nLambda%d_ref.txt'%(Nv, Nh, k, nlambda)
# system('getdp circles_New.pro -sol Wave_Dirichlet_0 -bin -v 3 > %s'%outputFilenameGetdp)

for lcRatio in lcRatioList:
    with open(rpFilename, 'w') as rpf:
        rpf.write('Nv = %d; Nh = %d;\n'%(Nv, Nh))
        rpf.write('nlambda = %f;\n'%nlambda)        
        rpf.write('ratiolc1lc0 = %f;\n'%lcRatio)
        rpf.write('computeOnFine = 0;\n')

    outputFilenameGmsh = 'error_Nv%d_Nh_extDom_%d_k%.2f_lcRatio%.1f_solverPRFem_nLambda%d.txt'%(Nv, Nh, k, lcRatio, nlambda)
    outputFilenameGetdp = 'getdpOut_Nv%d_Nh_extDom_%d_k%.2f_lcRatio%.1f_solverPRFem_nLambda%d.txt'%(Nv, Nh, k, lcRatio, nlambda)

    print outputFilenameGmsh
    print outputFilenameGetdp

    print 'Generating prfem mesh'
    system('gmsh circles.geo -bin -')
    print 'Generating fem solution'
    system('getdp circles_New.pro -sol Iterhf_Transport_Dirichlet_Numeric_PP -bin -v 3 > %s'%outputFilenameGetdp)
#     system('getdp circles_New.pro -sol Wave_Dirichlet_0 -bin -v 3 > %s'%outputFilenameGetdp)
    print 'Calculating error'
    system('gmsh combine_from_a.geo -bin -v 3 - > %s'%outputFilenameGmsh)
