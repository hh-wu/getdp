"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and MMA algorithm (matlab)
    
"""

import pyipopt

import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool3 import *

# REM:
# - normalize objective function !!
# - don't normalize constraints !!
# *****************************************************************************
#                               MAIN PROGRAM 
# *****************************************************************************
if __name__ == "__main__":
    
# -----------------------------------------------------------------------------
# --- Parameters ---
# -----------------------------------------------------------------------------
    # --- create the parameters ---
    parameters = Dictionnaire()
    # Set useful path
    parameters['pathGmsh'] = '/Applications/Gmsh.app/Contents/MacOS/gmsh '
    parameters['pathGetdp'] = '/Applications/getdp '
    parameters['modelName'] = 'def'
    
    # Model
    parameters['AnalysisModelType']='FEM'
    parameters['flagParallel'] = 0
    parameters['flagOptType'] = 'Topology' #'Shape', 'Topology'
    parameters['modelType'] = 'beam'
    
    # Design variables
    parameters['paramName'] = 'E'
    parameters['VolFrac'] = 0.4

    # Performance function
    parameters['performance'] = ['Compliance', 'Volume']
    parameters['m'] = len(parameters['performance']) - 1 # number of constraint
    parameters['fiMax'] = np.zeros(parameters['m'])
    parameters['fiMin'] = np.array([-2.0*pow(10.0, 19)]*parameters['m'])
    parameters['sign'] = np.array([1.0,1.0])
    parameters['normalizeObj'] = 0
    
    # Allow computation of sensitivity analysis
    parameters['solverName'] = 'mma'
    parameters['xtol'] = 1.0e-02
    parameters['flag_computeGrad'] = 1
    parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
    parameters['FilterSensitivity'] = [1, 0]
    parameters['rmin'] = 2*0.007
# -----------------------------------------------------------------------------
# --- Model + Optimizer ---
# -----------------------------------------------------------------------------
    op = OPTIMIZATION(parameters)
# -----------------------------------------------------------------------------
# --- Optimization ---
# -----------------------------------------------------------------------------
    # Resume
    print('------------------------')
    print('Begin Optimization ...')
    print('------------------------')
    print('Perform topology optimization? ' + op.parameters['flagOptType'])
    print('design variables: ' + op.parameters['paramName'])
    print('nbr of design variables: ' + str(op.n))
    print('offset = ' + str(op.indexStart))
    print('objective function: ' + str(op.parameters['performance'][0]))
    if(parameters['m']):
        print('constraint: ' + str(op.parameters['performance'][1:]))
    else:
        print('constraint: Unconstrained')

    print('algo: ' + op.parameters['solverName'])

    # -- Initialize Ipopt --
    op.parameters['fiMax'][0] = op.parameters['VolFrac']*op.parameters['n']
    op.parameters['VolMax'] =  op.parameters['n']
    x0 = np.array([op.parameters['VolFrac']]*op.parameters['n'])
    xmax = np.array([1.0]*op.parameters['n'])
    xmin = np.array([0.001]*op.parameters['n'])

    print "-- Create Optimizer --"
    pyipopt.set_loglevel(0)

    nvar = op.parameters['n']
    ncon = op.parameters['m']
    g_L = op.parameters['fiMin']
    g_U = op.parameters['fiMax']
    eval_f = op.ObjFunc_ipopt
    eval_grad_f = op.ObjFuncDeriv_ipopt
    eval_g = op.ineqConstr_ipopt
    eval_jac_g = op.ineqConstrDeriv_ipopt
    nnzj = nvar*ncon
    nnzh = 0

    nlp = pyipopt.create(nvar, xmin, xmax, ncon, g_L, g_U, nnzj,
                         nnzh, eval_f,eval_grad_f,eval_g,eval_jac_g)
    nlp.str_option("output_file","topologyOpt_ipopt.dat")
    nlp.int_option("max_iter", 2)

    print "-- Call Optimizer --"
    xf, zl, zu, constraint_multipliers, objf, status = nlp.solve(x0)
    nlp.close()

    print "-- Results --"
    print('xf='+str(xf)+';obj(xf)='+str(objf))
    path = 'resOpt/'
    np.save(path+'xf.npy',xf)
    xf = np.load(path+'xf.npy')
    op.refreshPostOpFile(x=xf, path='res/designVar.pos',
                         indexStart=op.parameters['indexStart'])





