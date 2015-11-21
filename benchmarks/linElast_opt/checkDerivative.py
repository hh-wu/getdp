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
IP = 4
file='beam'
sys = 'u_Mec'
gmshRead = {8:'res/u.pos',9:'res/lambda.pos'}
x = [0.4]
varName = ['Input/Constructive Parameters/Hole Length']
func = compliance #compliance,vm_pnorm,eig0
load = 2
execMode = 'derivative' #'derivative','plot-perturb','plot-converge'
Nlc = 0
msh = ''
if (Nlc==0): msh=['beam'+str(k)+'.msh' for k in range(6)]
step = [1.0e-06] #np.logspace(-11, -1, num=11)
sensMeth = ['FiniteDifference','AdjointLie'] #,'AnalyticNotEplicit']
pathSave = 'resSens'
if(execMode=='response'):xmin=[0.002,0.002];xmax=[0.02,0.006];nbSample=5
pIn = 'Input/Constructive Parameters/'
femParam = {'OptType':['Input/Optimization Type','shape'],
            'load':['Input/Loading/case',load],
            'Lx':[pIn+'X length [m]',4],
            'Ly':[pIn+'Y length [m]',4],
            'degVM':['Input/Optimization/degVM',2],
            'Deg2':['Input/degree 2?',1]}

# ************************************************************************
# **** Derivative computation                                        *****
# ************************************************************************
main(IP,file,sys,varName,func,x,step,Nlc,
     execMode,pathSave,femParam,sensMeth,msh,gmshRead)

