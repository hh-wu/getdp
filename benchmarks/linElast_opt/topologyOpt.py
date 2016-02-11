"""
    Author: Erin Kuci
    Topology optimization using SIMP method and MMA algorithm (matlab)
"""
import sys
sys.path.append('../../benchmarks_kst/tool/')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *
import defPerfFunc

testCase = 7 #7:L-bracket
pIn = 'Input/Constructive Parameters/'
ppC = 'Input/0Cao/'
cao = 'square' #'square','rotor'
extrude=0;nz=10;hole=0
pl1=1.;pl2=1.;pl3=1.;pl4=1.
if testCase < 7:
    Lx = 3.0; Ly = 1.0; nyPad = 1
    if os.path.isfile('data.npy'):
        data = np.load('data.npy')
        nx=data[0];ny=data[1]
    else:
        nx=20;ny=50
elif testCase == 7:
    Lx = 0.4; Ly = 1.0
    nx = 25; ny = 50; nxPad = 75
# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = {
    'plot':1,'Print':2,'file':'beam',
    'analysis':['u_Mec'],
    'analysisPost':['u_Mec_Post'],
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'project_xe':0,
    'allowCentralFD':0,
    'MeshRefine':1,
    'defaultValue':{
        'OptType':['Input/Optimization Type','topology'],
        'Deg2':['Input/degree 2?',1],
        'cao':[ppC+'0 Cao?',cao],
        'extrude':[ppC+'extrude?',extrude],
        'load':['Input/Loading/case',7],
        'MaterialInterpLaw':['Input/Optimization/Material Law','simp'],
        'SimpDegree':['Input/Optimization/Simp Degree',3.0],
        'Lx':[pIn+'X length [m]',Lx],
        'Ly':[pIn+'Y length [m]',Ly],
        'LxPad':[pIn+'X length pad [m]',0.6],
        'LyPad':[pIn+'Y length pad [m]',0.4],
        'Transfinite':[ppC+'transfinite?',0],
        'Nx':[ppC+'Nx',nx],
        'Ny':[ppC+'Ny',ny],
        'Nz':[ppC+'Nz',nz],
        'NxPad':[ppC+'Nx pad',nxPad],
        'NyPad':[ppC+'Ny pad',ny],
        'pl1':[ppC+'progression l1',pl1],
        'pl2':[ppC+'progression l2',pl2],
        'pl3':[ppC+'progression l3',pl3],
        'pl4':[ppC+'progression l4',pl4],
        'Hole':[ppC+'Hole',hole]
    },
    'archivate':1,
    'TAG':[1000], #1000,1001
    'performance':opt_VolumeVMelem, #opt_complianceVolume,opt_maxBeta_eig
    'rmin':1.5*Lx/nx, #0.0125,
    'optimizer':'mma3',#'mma2007','conlinFile','gcmma','openopt'
    'xtol':1.0e-02,
    'iterMax':1000,'parallel':2,'nbCPU':4}

x = np.array([.25]);xmax = np.array([1.0]);xmin = np.array([0.001])

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters,xmin,xmax,x)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
#op.preprocessing(op.parameters)

# Call optimizer
if parameters['optimizer'] == 'mma3':
    a0 = 1.0; a=[0.]*op.m;c=[1000.]*op.m;d=[1.]*op.m
    op.mmaPy(op.x,op.xmin,op.xmax,a0,a,c,d,op.parameters['performance'],0,1)
elif parameters['optimizer'] == 'mma2007':
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




