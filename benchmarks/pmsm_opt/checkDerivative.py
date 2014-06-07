""" 
    Author: Erin Kuci
    
    Check the computation of sensitivity 
    
    analytic derivative = -0.0046 (see BradErrorInt_vs_rSpline_ang0.pdf)
    
"""

import numpy as np
import pylab as pl
import matplotlib.pyplot as plt

import sys
#sys.path[:0] = ['tool']
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool import *
    
# *****************************************************************************
#                               MAIN PROGRAM 
# *****************************************************************************
if __name__ == "__main__":

    # --- create the parameters ---
    parameters = {}
    # Set useful path
    parameters['pathGmsh'] = '/Applications/Gmsh.app/Contents/MacOS/gmsh '
    parameters['pathGetdp'] = '/Applications/getdp '
    parameters['modelName'] = 'pmsm'
    
    #0(serial computation of objective and its derivative); 1 (otherwise)
    parameters['AnalysisModelType']='FEM'
    parameters['flagParallel'] = 0
    parameters['flagOptType'] = 'Shape' #'Shape', 'Topology'
    parameters['modelType'] = 'machine'
    parameters['analysisType'] = 0.0 #if machine
    parameters['NLferro'] = 0.0      #if machine
    parameters['NLferroLaw'] = 1.0   #if machine

    # Design variables
    parameters['paramName'] = 'lm_em_vm_xm_rma'
    paramNameDisp = 'lm em vm xm rma'
    x0 = np.array([0.0])
    parameters['nbDesignVar'] = len(x0)
    n = len(x0)
    
    # Performance function
    parameters['performance'] = ['BradialErrorInt']#['TorqueVariance']
    parameters['allowCentralFD'] = 0
    
    # Physical quantities computation
    parameters['rotorAngles'] = np.zeros(1) #np.linspace(7.5,15.0,6)
    parameters['TorqueNominal'] = 30.0
    parameters['m'] = 0        # number of constraints
    
    # --- Set Machine Model and Optimizer ---
    op = Machine(parameters)
# ----------------------------------------------------------------------------- 
# --- Impact of finite difference discretization step ---
# -----------------------------------------------------------------------------
    # Parameter
    #step = [1e-15,1e-14,1e-13,1e-12,1e-11,1e-10,1e-09,1e-08,
    #        1e-07,1e-06,1e-05,1e-04,1e-03]
    step=[1.0e-06]
    print step
    
    # Init
    N = len(step)
    dfdx_fd = np.zeros(N)
    dfdx_fdc = np.zeros(N)
    dfdx_saavm = np.zeros(N)
    dfdx_saavmc = np.zeros(N)
    dKdx0 = np.zeros(N)
    dKdx0c = np.zeros(N)
    relErr1 = np.zeros(N)
    relErr2 = np.zeros(N)
    relErr3 = np.zeros(N)
    relErr4 = np.zeros(N)
    
    perfLabel = 0 #consider first component of parameters['performance']
    
    # 1. Compute f and iec (serial pr parallel)
    resAnalysis = op.Analysis(x0,parameters)
    print('obj:'+str(resAnalysis[0]))

    # 2. Compute the derivative: Loop over Parameter value:
    for k in range(0,N):
        print('-------------------------------------------------')
        print('iter '+str(k))
        print('-------------------------------------------------')
        
        op.parameters['step'] = step[k]
        print('step = '+str(step[k]))

        print('-- finite Dif. --')
        op.parameters['allowCentralFD'] = 0
        resSens1 = op.FiniteDifference(x0, perfLabel,resAnalysis[0],parameters)
        print resSens1

        print('-- finite Dif. Central --')
        op.parameters['allowCentralFD'] = 1
        resSens1c = op.FiniteDifference(x0, perfLabel,resAnalysis[0],parameters)
        print resSens1c

        print('-- Semi-analytic AVM --')
        op.parameters['allowCentralFD'] = 0
        resSens2 = op.SemiAnalytic(x0,perfLabel,parameters)
        print resSens2

        print('-- Semi-analytic central AVM --')
        op.parameters['allowCentralFD'] = 1
        resSens2c = op.SemiAnalytic(x0,perfLabel,parameters)
        print resSens2c

        # save data and relative error computation
        dfdx_fd[k] = resSens1
        dfdx_fdc[k] = resSens1c
        dfdx_saavm[k] = resSens2
        dfdx_saavmc[k] = resSens2c
        relErr1[k] = (dfdx_saavmc[k] - dfdx_fdc[k])/dfdx_fdc[k]
        relErr2[k] = (dfdx_saavm[k] - dfdx_fdc[k])/dfdx_fdc[k]
        relErr3[k] = (dfdx_fd[k] - dfdx_fdc[k])/dfdx_fdc[k]
        print('relErr(SAAVMC-FDC) = ' +str(relErr1[k]))
        print('relErr(SAAVM-FDC) = ' +str(relErr2[k]))
        print('relErr(FD-FDC) = ' +str(relErr3[k]))

#    np.save('PerturbStep.npy',step)
#    np.save('dfdx_fd.npy',dfdx_fd)
#    np.save('dfdx_fdc.npy',dfdx_fdc)
#    np.save('dfdx_saavm.npy',dfdx_saavm)
#    np.save('dfdx_saavmc.npy',dfdx_saavmc)
#    np.save('dfdx_relErr1.npy',relErr1)
#    np.save('dfdx_relErr2.npy',relErr2)
#    np.save('dfdx_relErr3.npy',relErr3)
#
#    step = np.load('PerturbStep.npy')
#    dfdx_fd = np.load('dfdx_fd.npy')
#    dfdx_fdc = np.load('dfdx_fdc.npy')
#    dfdx_saavm = np.load('dfdx_saavm.npy')
#    dfdx_saavmc = np.load('dfdx_saavmc.npy')
#    relErr1 = np.load('dfdx_relErr1.npy')
#    relErr2 = np.load('dfdx_relErr1.npy')
#    relErr3 = np.load('dfdx_relErr1.npy')
#    print step
#    print dfdx_saavm
#    print dfdx_saavmc
#    print dfdx_fd
#    print dfdx_fdc
#
#    # Plot the results
#    xlabel = 'discretization step [m]'
#    plt.figure
#    #plt.semilogx(step,dfdx_fd,'*-',label='FD')
#    plt.semilogx(step,dfdx_fdc,'o-',linewidth=2,label='FD-C')
#    #plt.semilogx(step,dfdx_saavm,'-',label='SA-AVM')
#    plt.semilogx(step,dfdx_saavmc,'--',linewidth=2,label='SA-C-AVM')
#    plt.xlabel(xlabel)
#    plt.ylabel("df/dx")
#    plt.legend(loc="upper right")
#    plt.grid(True)
#    plt.savefig('compare_FD_SAAVM_FDC.pdf')
#    plt.show()
#
#    plt.figure
#    plt.semilogx(step,relErr1,linewidth=2,label='relErr(SAAVMC-FDC)')
#    #plt.semilogx(step,relErr2,'o-',linewidth=2,label='relErr(SAAVM-FDC)')
#    #plt.semilogx(step,relErr3,'*-', linewidth=2,label='relErr(FD-FDC)')
#    plt.xlabel(xlabel)
#    plt.ylabel("relative error [-]")
#    plt.legend(loc="upper right")
#    plt.grid(True)
#    plt.savefig('relError_FD_SAAVM_FDC.pdf')
#    plt.show()


