"""
    Author: Erin Kuci
    Check the computation of sensitivity
"""
import sys
sys.path.append('../../benchmarks_kst/tool/')
from defPerfFunc import *
from defPerfFuncSens import *
from _checkDerivative import *

# ************************************************************************
# **** Input                                                         *****
# ************************************************************************
ppC = 'Input/0Cao/';pIn = ppC+'Constructive Parameters/'
tagElem = [1000]
femParam = {'OptType':['Input/Optimization Type','shape'],
    'load':['Input/Loading/case',2],
    'Sym':[ppC+'Symetry',2],
    'extrude':[ppC+'extrude?',0],
    'Hole':[ppC+'Hole',1],
    'Lx':[pIn+'X length [m]',1.5],
    'Ly':[pIn+'Y length [m]',1.5],
    'Nx':[ppC+'Nx',18],
    'Ny':[ppC+'Ny',6],
    'Nz':[ppC+'Nz',2],
    'Transfinite':[ppC+'transfinite?',0],
    'degVM':['Input/Optimization/degVM',2],
    'Deg2':['Input/degree 2?',0]}
parameters = {
    'Print':4,
    'file':'beam',
    'analysis':['u_Mec'],
    'analysisPost':['u_Mec'],
    'adjoint':['Adjoint_u_Mec'],
    'semiPost':['Semi_Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'gmshRead':{8:'res/u.pos',9:'res/lambda.pos'},
    'defaultValue':femParam,
    'variables':[pIn+'Hole Width'],
    'performance':compliance,#VMelem,opt_eig_sens,compliance,vm_pnorm,eig0
    'allowCentralFD':0,
    'MeshRefine':1,
    'project_xe':0,'TAG':tagElem,
    'smoothVelocity':0,
    'parallel':0,
    'nbCPU':6
}
x = [0.4]
varName = []
func = compliance
execMode = 'derivative' #'derivative','plot-perturb','plot-converge'
Nlc = 1
msh = []
if (Nlc==0): msh=['beam3.msh']#['beam'+str(k)+'.msh' for k in range(6)]
step = [1e-06]#np.logspace(-11, -1, num=11)
sensMeth = ['FiniteDifference']
#['FiniteDifference','AdjointLie','DirectLie']
#'SelfFixedDom','AdjointLie','AnalyticNotEplicit','AdjointFixedDom'
pathSave = 'sens'
if(execMode=='response'):xmin=[0.002,0.002];xmax=[0.02,0.006];nbSample=5

# ************************************************************************
# **** Derivative computation                                        *****
# ************************************************************************
main(x,execMode,sensMeth,step,Nlc,femParam,parameters,pathSave,msh)

