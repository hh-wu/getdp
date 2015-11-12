
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
x = np.array([.4])
varName = ['Input/Constructive Parameters/Hole Length']
func = compliance #compliance,vm_pnorm,eig0
load = 2
execMode = 'plot-perturb' #'response','derivative','plot-perturb','plot'
Nlc = 0
msh = ''
if (Nlc==0): msh=['beam1.msh']
step =  np.logspace(-11, -1, num=11) #[1.0e-06]
sensMeth =['FiniteDifference']#,'AdjointSemi','AdjointLie']
#sensMeth = ['FiniteDifference','AdjointLie'] #,'AnalyticNotEplicit']
pathSave = 'resSens'
if(execMode=='response'):xmin=[0.002,0.002];xmax=[0.02,0.006];nbSample=5
femParam = {'OptType':['Input/Optimization Type','shape'],
            'load':['Input/Loading/case',load],
            'degVM':['Input/Optimization/degVM',2]}

# ************************************************************************
# **** Derivative computation                                        *****
# ************************************************************************
main(IP,file,sys,varName,func,x,step,Nlc,execMode,pathSave,femParam,sensMeth,msh)
