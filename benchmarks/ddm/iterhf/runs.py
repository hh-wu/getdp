from os import system

lcRatioList = [5]#[1,2,3,4,5,10]
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


print ' ***** MAKE MESH FOR REF *****'
print ' gmsh circles_fine.geo -bin -'
print ' !!! refine as necessary: gmsh circles_fine_for_Full.msh -refine -bin'
raw_input()

system('getdp circles_New.pro -sol Wave_Dirichlet_0 -bin -v 5')

for lcRatio in lcRatioList:
    with open(rpFilename, 'w') as rpf:
        rpf.write('Nv = %d; Nh = %d;\n'%(Nv, Nh))
        rpf.write('nlambda = %f;\n'%nlambda)        
        rpf.write('ratiolc1lc0 = %f;\n'%lcRatio)

    outputFilename = 'error_Nv%d_Nh%d_k%.2f_lcRatio%.1f_nLambda%d.txt'%(Nv, Nh, k, lcRatio, nlambda)

    print outputFilename

    print 'Generating prfem mesh'
    system('gmsh circles.geo -bin -')
    print 'Generating prfem solution'
    system('getdp circles_New.pro -sol Iterhf_Transport_Dirichlet_Numeric_PP -bin -v 3')
    print 'Calculating error'
    system('gmsh combine_from_a.geo -bin -v 3 - > %s'%outputFilename)
