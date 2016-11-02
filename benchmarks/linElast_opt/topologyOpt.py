"""
    Author: Erin Kuci
    Topology optimization template
"""
import sys
sys.path.append('../../benchmarks_kst/tool/')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *
#import defPerfFunc

testCase = 0 #7:L-bracket
ppC = 'Input/0CAD model/';pp = ppC+'Constructive Parameters/'
cao = 'square';extrude=0;nz=10;hole=0;pl1=1.;pl2=1.;pl3=1.;pl4=1.
if testCase == 7:
    Lx = 0.4; Ly = 1.0
    nx = 25; ny = 75; nxPad = 75
else:
    Lx = 2.0; Ly = 1.0; nyPad = 1; nxPad = 1
    #if os.path.isfile('data.npy'):
    #    data = np.load('data.npy')
    #    nx=data[0];ny=data[1]
    #else:
    ny=30*3;nx=ny*Lx/Ly
# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = {
    'plot':1,'Print':2,'file':'beam',
    'analysis':['u_Mec'],
    'analysisPost':['u_Mec_Post'],
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'project_xe':1,
    'allowCentralFD':0,
    'MeshRefine':2,
    'defaultValue':{
        'OptType':['Optimization/Optimization Type','topology'],
        'Deg2':['Input/degree 2?',0],
        'cao':[ppC+'0 Cao?',cao],
        'Pad':[pp+'add pad',testCase==7],
        'extrude':[pp+'extrude?',extrude],
        'load':['Input/Loading',testCase],
        'MaterialInterpLaw':['Optimization/Material Law','modif-simp'],
        'SimpDegree':['Optimization/Simp Degree',3.0],
        'StressDegree':['Optimization/Stress Degree',0.5],
        'Lx':[pp+'X length [m]',Lx],
        'Ly':[pp+'Y length [m]',Ly],
        'LxPad':[pp+'X length pad [m]',0.6],
        'LyPad':[pp+'Y length pad [m]',0.4],
        'Transfinite':[pp+'transfinite?',0],
        'Nx':[pp+'Nx',nx],
        'Ny':[pp+'Ny',ny],
        'Nz':[pp+'Nz',nz],
        'NxPad':[pp+'Nx pad',nxPad],
        'NyPad':[pp+'Ny pad',ny],
        'pl1':[pp+'progression l1',pl1],
        'pl2':[pp+'progression l2',pl2],
        'pl3':[pp+'progression l3',pl3],
        'pl4':[pp+'progression l4',pl4],
        'Hole':[pp+'Hole',hole]
    },
    'archivate':1,
    'TAG':[1000], #1000,1001
    'performance':topopt_complianceVolume,
    #opt_VolumeVMelem,opt_maxBeta_eig
    'rmin':3.5*Ly/ny,
    'optimizer':'mma3',
    #'mmaDualNewton',#'mmaDualCG','conlinFile','gcmma','openopt','mma3'
    'xtol':1.0e-02,
    'iterMax':1000,'parallel':0,'nbCPU':6}

x = np.array([0.5]);xmax = np.array([1.0]);xmin = np.array([0.0])

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters,xmin,xmax,x)
#print('#x:{}'.format(len(op.x)))
# check the dv in the problem of #x=#f; SNOPT -> qsp (cant enforce feasible sol
# during iteration)
# for large scale:
# small step on desv (0.05) -> LP (linear programming) method
# same updating scheme as for the moving asymptotes
# simplification if the New meth
#(early nineties: LP danemark; without m.a. scheme on the step)
# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
#op.preprocessing(op.parameters)

# Call optimizer
if parameters['optimizer'] == 'mma3':
    a0 = 1.0; a=[0.]*op.m;c=[1000.]*op.m;d=[0.]*op.m
    op.mmaPy(op.x,op.xmin,op.xmax,a0,a,c,d,op.parameters['performance'],0,1)
elif parameters['optimizer'] in ['mmaDualNewton','mmaDualCG','mmaDualNewtonDiag']:
    mm = len(op.fjMax) - 1
    cc = 1000.0*np.ones(mm)
    aa = np.zeros(mm);#aa[0:3]=1.0
    op.mmaSvanFortran07(op.x,op.xmax,op.xmin,op.fjMax,op.parameters,aa,cc,1)
else:
    op.OC(op.x,op.fjMax,op.parameters)

#op.solveOpt(op.x,op.xmax,op.xmin,op.fjMax,2,op.parameters)
#np.save('out_timing.npy',np.array([op.time]))


#aa = np.zeros(len(op.fjMax)); aa[0:4]=1.0
#print('aa:{}'.format(aa))
#op.mmaSvanMatlab(op.x,op.xmax,op.xmin,op.fjMax[1:],op.parameters,aa,1)

# Close optimizer
#op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
#op.postprocessing('resOpt/histOptClassAttr.txt',op.iter-1)
#op.postprocessing('hist/TO_2D_cantil_100.400_midlPnt_Filt0.005_vfrac0.5/histOptClassAttr.txt',146)




