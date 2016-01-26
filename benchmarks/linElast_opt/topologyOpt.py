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

pIn = 'Input/Constructive Parameters/'
ppC = 'Input/0Cao/'
cao = 'square' #'square','rotor'
extrude=0;nz=10;hole=0
if os.path.isfile('data.npy'):
    data = np.load('data.npy')
    nx=data[0];ny=data[1]
else:
    nx=60*2;ny=20*2
Lx = 3; Ly = 1
# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = {
    'plot':1,'Print':0,'file':'beam',
    'analysis':['u_Mec'],
    'analysisPost':['u_Mec_Post'],
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'project_xe':0,
    'MeshRefine':1,
    'defaultValue':{
        'OptType':['Input/Optimization Type','topology'],
        'Deg2':['Input/degree 2?',0],
        'cao':[ppC+'0 Cao?',cao],
        'extrude':[ppC+'extrude?',extrude],
        'load':['Input/Loading/case',0],
        'MaterialInterpLaw':['Input/Optimization/Material Law','simp'],
        'SimpDegree':['Input/Optimization/Simp Degree',3.0],
        'Lx':[pIn+'X length [m]',Lx],
        'Ly':[pIn+'Y length [m]',Ly],
        'Transfinite':[ppC+'transfinite?',1],
        'Nx':[ppC+'Nx',nx],
        'Ny':[ppC+'Ny',ny],
        'Nz':[ppC+'Nz',nz],
        'Hole':[ppC+'Hole',hole]
    },
    'archivate':1,
    'TAG':[1000], #1000,1001
    'performance':opt_complianceVolume,#opt_maxBeta_eig,
    'rmin':1.5*Lx/nx, #0.0125,
    'optimizer':'mma',#'mma2007','conlinFile','gcmma','openopt'
    'xtol':1.0e-02,
    'iterMax':1}

x = np.array([0.5])
xmax = np.array([1.0])
xmin = np.array([0.001])

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
if parameters['optimizer'] == 'mma':
    a0 = 1.0; a=[0.]*op.m;c=[1000.]*op.m;d=[1.]*op.m
    op.mmaPy(op.x,op.xmin,op.xmax,a0,a,c,d,op.parameters['performance'],0)
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




