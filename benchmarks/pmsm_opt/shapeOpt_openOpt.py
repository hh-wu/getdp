""" 
    Author: Erin Kuci
    
    Template for shape optimization routine 
    - Application: Permanent magnet synchronous machine
    - MESH + FEM code: Gmsh + GetDp
    - Algorithm package: OpenOpt (http://openopt.org/Problems)
    - Sensitivity Analysis: Finite Differences/Semi-Analytic AVM
    - Obj: Torque variance
"""

import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool import *
#print help(OPTIMIZATION)
#print dir(OPTIMIZATION)

# ************************************************************************
# ***** create the parameters                                        *****
# ************************************************************************
parameters = Dictionnaire()

# Set useful path
parameters['modelName'] = 'pmsm'
parameters['warmStart'] = 0
parameters['plot'] = 1

# Model
parameters['AnalysisModelType'] = 'FEM'
parameters['flagParallel'] = 0
parameters['flagOptType'] = 'Shape' #'Shape', 'Topology'
parameters['modelType'] = 'machine'
parameters['analysisType'] = 0.0 #if machine
parameters['NLferro'] = 0.0      #if machine
parameters['NLferroLaw'] = 1.0   #if machine
parameters['TorqueNominal'] = 0.1 #3.9

# Design variables
parameters['paramNameDisp'] = ['x']*11
if(not(parameters['warmStart'])):
    x0 = np.array([0.0]*11)
    parameters['n'] = len(x0)
else:
    x0 = []
    parameters['n'] = 11
thickPM = 2.35e-03          # m
gap = 0.41999e-03           # m
xmax = gap*0.9/3.0*np.ones(parameters['n'])
xmin = -2.0*thickPM/3.0*np.ones(parameters['n'])
parameters['normalizeDesVar'] = 1

# Performance functions
parameters['performance'] = ['BradialErrorInt'] #['TorqueVariance']
#['TorqueVariance']
#['BradialErrorInt']
parameters['rotorAngles'] = np.linspace(0.1,44.5,10)
#np.array([15.0])
parameters['m'] = 0
parameters['sign'] = [1.0] # -1:>=, 1:<=
parameters['fiMax'] = [0.0]

# Sensitivity analysis
parameters['flag_computeGrad'] = 1
parameters['SensitivityMethod'] = ['SemiAnalyticAvm']
parameters['allowCentralFD'] = 1
parameters['step'] = 1.0e-06
parameters['FilterSensitivity'] = []

# Optimizer set-up
parameters['optimizer']='openopt'
parameters['solverName'] = 'mma' #'mma'
parameters['xtol'] = 1.0e-18

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = OPTIMIZATION(parameters,xmin,xmax,x0)
print(' xoff = {0}\n xnorm = {1}'.format(op.desvarOffset,op.desvarNorm))

# ************************************************************************
# ***** Shape Optimization routine                                   *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

# Create optimizer
op.create(op.parameters)

# Call Optimizer
f0Call=op.ObjFunc
df0Call=op.ObjFuncDeriv
fjCall=[]
dfjCall=[]

op.openOptCall(op.x0,op.xmax,op.xmin,op.parameters,
               f0Call,df0Call,fjCall,dfjCall)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x,f = op.postprocessing(parameters)
iter = len(x[:,0])

# Plot objective function history
plotVector([],f[0:iter-2,0],1,'f0.eps',
           ['Iteration Number','f0'],0)

# Torque comparison
angles=np.linspace(0.0,15.0,15*3)
pathSave = ['resOpt/torqueBasic.npy','resOpt/torqueBasic.eps',
            'resOpt/torqueOpt.npy','resOpt/torqueOpt.eps',
            'resOpt/torqueCompare.eps']
#pathLoad = ['resOpt/torqueBasic.npy','resOpt/torqueOpt.npy']
#pathLoad = ['resOpt/torqueBasic.npy','']
pathLoad = ['','']
#xf = x[iter-1]
xf = np.array([ 13.43415849,   8.26349395,   7.81867494,   7.54137912,
               7.02114888, 6.18636768, 4.09598992,1.43435973,  0., 0.,13.43415849])
print xf
print xf*op.desvarNorm + op.desvarOffset
x0 = np.zeros(5)
#xf = (xf - op.desvarOffset)/op.desvarNorm
op.compareTorque(x0,xf,angles,op.parameters,pathSave,pathLoad)

    # --- Example (torque variance minimization) ---
#    x0 = np.array([0.04, 0.010, 1.82, 0.004, 0.004])
#    xf = [ 0.04981567,  0.00874515,  2.18602155,  0.01237202,  0.0071595 ]
#    Tnom = 90.0
#    xmax = np.array([0.05, 0.015, 2.2, 0.015, 0.01])
#    xmin = np.array([0.02, 0.008, 0.01, 0.001, 0.001])
#    basic model[Nm] (Mean,Ripple) = 105.485322347;279.311229406
#    optimized model [Nm] (Mean,Ripple) = 84.0854488099;85.7804079115
#    Relative variation of Mean Torque  = -0.202870627503
#    Relative variation of Torque Ripple = -0.692885931963

