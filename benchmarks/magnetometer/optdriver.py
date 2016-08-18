#!/usr/bin/env python
"""
    optdriver.py - Copyright (C) 2016 University of Liege
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
"""


"""
    This script shows how to create a python-based (un-)constrained optimization
    solver for problems of the following form,
        min Objective(x)
         x
         st Constraints(x) <= upperBoundConstr
    driving a onelab client. The sensitivity of the "objective" and 
    "constraints" wrt design variables "x" required by the gradient-based
    optimzer is obtained using finite differences. The script calls getdp/gmsh
    from python with direct access to the onelab database.
    
    You should run the script by opening it with Gmsh: either interactively 
    (with 'File->Open') or in batch mode (with 'gmsh optdriver.py -')
"""
# import interesting modules
import onelab
import mma
import numpy as np
import pprint

# Useful functions
def dummyConstraint(xval, opt):
    # dummy constraint: Sum(xval) <= 1 + Sum(xvalMax)
    return np.sum(xval)

def mergeOptions(optionsModel,optionsOptimization,optionsOptimizer):
    opt = {
        'model':optionsModel,
        'optimization':optionsOptimization,
        'optimizer':optionsOptimizer
    }
    return opt

def setOptionsPath(client,opt):
    # get gmsh and getdp path
    mygmsh = client.getString('General.ExecutableFileName')
    mygetdp = ''
    for s in range(9):
        n = client.getString('Solver.Name' + str(s))
        if(n == 'GetDP'):
            mygetdp = client.getString('Solver.Executable' + str(s))
            break
    if(not len(mygetdp)):
        client.sendError('This appears to be the first time you are trying to run GetDP')
        client.sendError('Please run a GetDP model interactively once with Gmsh to ' +
                'initialize the solver location')
        exit(0)
    else:
        client.sendInfo('Will use gmsh={} and getdp={}'.format(mygmsh, mygetdp))
        opt['optimization']['gmsh'] = mygmsh+' '
        opt['optimization']['getdp'] = mygetdp+' '
    return opt

def setModel(client,modelParam):
    for key,val in zip(modelParam.keys(),modelParam.values()):
        if (type(val) == str):
            client.setString(key,value=val)
        else:
            client.setNumber(key,value=val)

def setDesign(client, values, names):
    for name, val in zip(names, values):
        client.setNumber(name,value=val)

def mesh(client,opt,meshOut):
    client.runSubClient('MyGmsh', opt['gmsh'] + ' '
            + client.getPath(opt['file'] + '.geo')
            +' -v 3 -3 -parametric -o ' + meshOut)

def fem(client,opt,msh):
    client.runSubClient('myGetDP', opt['getdp']+ ' '
            + client.getPath(opt['file'] + '.pro')
            + ' -v2 -v 3 -slepc -solve '+ opt['resolution']
            + ' -msh '+ msh)

def getPerformanceFunctions(client, xval, opt):
    perfs = [opt['objective']]; perfs.extend(opt['constraints'])
    fval = []
    for k,fName in enumerate(perfs):
        if type(fName) == str:
            fval.append(client.getNumber(fName))
        else:
            fval.append(fName(xval, opt))
    return np.array(fval)

def analysis(client, xval, opt, meshName):
    fem(client, opt, meshName)
    fval = getPerformanceFunctions(client, xval, opt)
    return fval

def relocalizeMesh(client, paramName, opt):
    geoName = client.getPath(opt['file']+'.geo'); pp = opt['optimizationOnelabPath']
    client.setNumber(pp+'Structured grid?',value=opt['structuredGrid'])
    client.setNumber(pp+'Compute perturbation velocity field',value=1)
    client.setNumber(pp+'Perturbation value', value=opt['perturbationStep'])
    client.setString(pp+'Parameter to perturb',value=paramName)
    client.run('MyGmsh',opt['gmsh'] + ' ' + geoName + ' -run')
    client.setNumber(pp+'Compute perturbation velocity field',value=0)

def sensitivity(client,xval,fval,opt):
    n = len(xval); m = len(fval)
    dfdx = np.zeros([m,n])
    
    # Loop over each design variable
    for k, (x0, x0Name) in enumerate(zip(xval,opt['designVariables'])):
        # mesh relocation onto the perturbed CAD !!!
        relocalizeMesh(client, x0Name, opt)
        
        # forward perturbation of the CAD
        xvalPert = xval; xvalPert[k] += opt['perturbationStep']
        setDesign(client, [x0+opt['perturbationStep']], [x0Name])
        
        # analysis in the perturbed CAD
        fem(client, opt, client.getPath(opt['file']+'Perturb.msh'))
        
        # extract pertrubed performance function
        dfunc = getPerformanceFunctions(client, xvalPert, opt)
        
        # sensitivity wrt xk
        for ll, (ff,dff) in enumerate(zip(fval,dfunc)):
            dfdx[ll,k] = (dff-ff)/opt['perturbationStep']
        
        # back to the initial CAD
        setDesign(client, [x0-opt['perturbationStep']], [x0Name])
    
    return dfdx

def printOptProblem(client,xval,xmin,xmax,fmax,opt):
    if opt['optimization']['printLevel'] >= 1:
        client.sendInfo('='*80)
        client.sendInfo('==='+str(' '*25)+'Optimization Problem'+str(' '*29)+'===')
        client.sendInfo('='*80)
        client.sendInfo('Model setting')
        for key,val in zip(opt['model'].keys(),opt['model'].values()):
            client.sendInfo('  * "{:50s}": {}'.format(key,val))
        client.sendInfo('Design variables (n:{})'.format(len(xval)))
        for k, xkName in enumerate(opt['optimization']['designVariables']):
            client.sendInfo('  * "{:50s}": {:.2e} <= {:.2e} <= {:.2e}'.\
                  format(xkName,xmin[k],xval[k],xmax[k]))
        client.sendInfo('Performance functions (m:{})'.format(len(fmax)))
        client.sendInfo('  * {:20s}:"{}"'.\
              format('Objective',opt['optimization']['objective']))
        for k,(fmaxk,fkName) in enumerate(zip(fmax,opt['optimization']['constraints'])):
            client.sendInfo('  * {:20s}:"{:20s}" <= {:.3e}'.\
                  format('Constraint',fkName,fmax[k]))
        client.sendInfo('Stop critera')
        client.sendInfo('  {:30s}: {}'.\
              format('Design variables tol.',
                     opt['optimization']['tolDesignVariables']))
        client.sendInfo('  {:30s}: {} '.\
              format('Maximum number of iterations',
                     opt['optimization']['iterMax']))
        client.sendInfo('='*80)

def printCurrIterate(client,xval,fval,change,loop,opt):
    if opt['printLevel'] >= 1:
        client.sendInfo('='*80)
        client.sendInfo('It. {:4d},'.format(loop))
        for k,xk in enumerate(xval):
            client.sendInfo('x{}: {:.3e},'.format(k,xk))
        for k,fk in enumerate(fval):
            client.sendInfo('f{}: {:.3e},'.format(k,fk))
        client.sendInfo('change: {:.3e}'.format(change))
        client.sendInfo('='*80)
        
def optimLoop(clientOnelab, clientOpt, xval, xmin, xmax, fmax, opt):
    # Summary of the optimization problem
    printOptProblem(clientOnelab,xval, xmin, xmax, fmax, opt)

    # Run the optimization loop ...
    meshOut = clientOnelab.getPath(opt['optimization']['file']+'.msh')
    xold1 = np.copy(xval); xold2 = np.copy(xval)
    low = np.array([]); upp = np.array([])
    change = 1.0; loop = 1;
    while (change > opt['optimization']['tolDesignVariables'] \
        and loop <= opt['optimization']['iterMax']):
        
        # set design variables at xval
        setDesign(clientOnelab, xval, opt['optimization']['designVariables'])
        
        # mesh the CAD model
        mesh(clientOnelab, opt['optimization'], meshOut)
        msh = clientOnelab.getPath(opt['optimization']['file']+'.msh')
        
        # compute performance functions at xval
        fval = analysis(clientOnelab, xval, opt['optimization'], meshOut)
        
        # sensitivity analysis of performance functions at xval
        dfdx = sensitivity(clientOnelab, xval, fval, opt['optimization'])

        # update xval: call optimizer
        ff0val = fval[0]; dff0dx = dfdx[0]
        ffval = fval[1:] - fmax; dffdx = dfdx[1:]
        # normalize
        if loop == 1: ff0val0 = np.copy(ff0val); ffval0 = np.copy(fmax)
        ff0val /= np.abs(ff0val0); dff0dx /= np.abs(ff0val0)
        ffval /= np.abs(ffval0)
        for k in range(m): dffdx[k] /= np.abs(ffval0[k])
        xmma,y,z,lam,xsi,eta,mu,zet,s,low,upp,factor = \
            clientOpt.mma(xval,xold1,xold2,low,upp,\
                ff0val,ffval,dff0dx,dffdx,loop)
        
        # compute residual
        change = np.linalg.norm(xmma-xval,np.inf)
        
        # Print the current iterate
        printCurrIterate(clientOnelab,xval,fval,change,loop,opt['optimization'])

        # update design variables
        xold2 = np.copy(xold1)
        xold1 = np.copy(xval)
        xval = np.copy(xmma)
        loop = loop + 1

    # print the final iteration
    printCurrIterate(clientOnelab,xval,fval,change,loop,opt['optimization'])
    
    # output data
    xopt = np.copy(xval)
    objOpt = np.copy(fval[0])
    constrOpt = np.copy(fval[1:])
    
    return xopt,objOpt,constrOpt


if __name__ == "__main__":
    # Set options of onelab model
    optionsModel = {
        'Input/Geometry/00Mesh size factor': 1,
        'Input/0Type of analysis':0,
        'Optimization/Desired natural frequency [Hz]':2.5e5
    }
    
    # Set options of optimization problem
    optionsOptimization = {
        'file':'magnetometer',
        'resolution':'Analysis',
        'optimizationOnelabPath':'Optimization/',
        'structuredGrid': 1,
        'objective':'Output/Objective',
        'constraints':[],
        'designVariables':['Input/Geometry/5Support position [m]'],
        'perturbationStep':1.0e-9,
        'tolDesignVariables':1e-6,
        'iterMax':50,
        'printLevel':1
    }

    # Starting value of design variables
    desVar = [0.224*500.*1.0e-6-0.5*2.*1.0e-6]

    # Lower and upper bounds of design variables
    lowerBoundDesVar = [desVar[0]*0.5]
    upperBoundDesVar = [desVar[0]*1.8]

    # Upper bound of constraints
    upperBoundConstr = [] #[1.0+np.sum(upperBoundDesVar)]

    # Set options of optimizer (mma)
    m = len(optionsOptimization['constraints'])
    n = len(optionsOptimization['designVariables'])
    a0 = 1.0; aa = [0.]*m; cc = [1000.]*m; dd = [1.]*m
    optionsOptimizer = {
        'm':m,'n':n,
        'xmin':np.array(lowerBoundDesVar),'xmax':np.array(upperBoundDesVar),
        'a0':a0,'a':np.array(aa),'c':np.array(cc),'d':np.array(dd),'IP':1,
        'epsimin':1e-07,'raa0':1.0e-05,'approx':'mma',
        'asyinit':0.5,'asyincr':1.2,'asydecr':0.7,'albefa':0.1,'move':0.5
    }

    # Merge all options
    opt = mergeOptions(optionsModel, optionsOptimization, optionsOptimizer)

    # Create a onelab client
    clientOnelab = onelab.client(__file__)
    if clientOnelab.action == 'check': exit(0)

    # Set Gmsh/GetDP paths
    opt = setOptionsPath(clientOnelab, opt)
    pp = pprint.PrettyPrinter(indent=4)
    pp.pprint(opt)

    # Set the parameters of the FE model
    setModel(clientOnelab, opt['model'])

    # Create an optimizer client (with the optimzer parameters)
    clientOpt = mma.mma(opt['optimizer'])

    # Call the optimization routine (get the optimal value of design variables)
    xopt,objOpt,constrOpt = optimLoop(clientOnelab, clientOpt, desVar,
        lowerBoundDesVar,upperBoundDesVar, upperBoundConstr, opt)

