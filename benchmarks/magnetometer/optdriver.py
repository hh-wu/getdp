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

# This script shows how to create a python-based (un-)constrained optimization
# solver for problems of the following form,
# min_{x} Objective(x), s.t. Constraints(x) <= upperBoundConstr
# driving a onelab client. The sensitivity of the "objective" and
# "constraints" wrt design variables "x" required by the gradient-based
# optimzer is obtained using finite differences. The script calls getdp/gmsh
# from python with direct access to the onelab database.
#
# You should run the script by opening it with Gmsh: either interactively
#     (with 'File->Open') or in batch mode (with 'gmsh optdriver.py -')

# import interesting modules
import onelab
import mma
import numpy as np

# Useful functions for optimization

def setOptions(clientOnelab, optdic):
    opt_defaults = {
        'gmsh':'',
        'getdp':'',
        'CADFEMOptions':{},
        'file':'untitled',
        'resolution':'res',
        'structuredGrid':0,
        'objective':'',
        'constraints':[],
        'designVariables':[],
        'FDperturbStep':1e-8,
        'tolDesignVariables':1e-2,
        'iterMax':50,
        'printLevel':1,
        'n':1,
        'm':1
    }
    opt = {}
    for (prop, default) in opt_defaults.iteritems():
        opt[prop] = optdic.get(prop, default)

    # set some additional parameters
    opt['n'] = len(opt['designVariables'])
    opt['m'] = len(opt['constraints'])
    opt['gmsh'] = getPathGmsh(clientOnelab)
    opt['getdp'] = getPathGetDP(clientOnelab)
    return opt

def escapePath(path):
    return '"' + path + '"'

def getPathGmsh(client): # escape string if path contains white space
    return escapePath(client.getString('General.ExecutableFileName'))

def getPathGetDP(client):
    mygetdp = ''
    for s in range(9):
        n = client.getString('Solver.Name' + str(s))
        if(n == 'GetDP'):
            mygetdp = client.getString('Solver.Executable' + str(s))
            break
    if(not len(mygetdp)):
        client.sendError('This appears to be the first time you are trying to run GetDP')
        client.sendError('Please run a GetDP model interactively once with Gmsh to ' + 'initialize the solver location')
        exit(0)
    else:
        return escapePath(mygetdp)

def setCADFEM(client,options):
    for key,val in options['CADFEMOptions'].iteritems():
        if (type(val) == str):
            options['CADFEMOptions'][key] = client.defineString(key,value=val)
        else:
            options['CADFEMOptions'][key] = client.defineNumber(key,value=val)
    return options

def setDesign(client, values, names):
    for name, val in zip(names, values):
        client.setNumber(name,value=val)

def mesh(client,opt,meshOut):
    client.runSubClient('MyGmsh', opt['gmsh'] + ' '
            + escapePath(opt['file'] + '.geo')
            + ' -v 3 -3 -parametric'
            + ' -o ' + meshOut)

def fem(client,opt,msh):
    client.runSubClient('myGetDP', opt['getdp'] + ' '
            + escapePath(opt['file'] + '.pro')
            + ' -v 3 -v2 -solve '+ opt['resolution']
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
    geoName = escapePath(opt['file']+'.geo'); pp = 'Optimization/'
    client.setNumber(pp+'Structured grid?',value=opt['structuredGrid'])
    client.setNumber(pp+'Compute perturbation velocity field',value=1)
    client.setNumber(pp+'Perturbation value', value=opt['FDperturbStep'])
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
        xvalPert = xval; xvalPert[k] += opt['FDperturbStep']
        setDesign(client, [x0+opt['FDperturbStep']], [x0Name])
        
        # analysis in the perturbed CAD
        fem(client, opt, escapePath(opt['file']+'Perturb.msh'))
        
        # extract pertrubed performance function
        dfunc = getPerformanceFunctions(client, xvalPert, opt)
        
        # sensitivity wrt xk
        for ll, (ff,dff) in enumerate(zip(fval,dfunc)):
            dfdx[ll,k] = (dff-ff)/opt['FDperturbStep']
        
        # back to the initial CAD
        setDesign(client, [x0-opt['FDperturbStep']], [x0Name])
    
    return dfdx

def printTerminal(client,s):
    print(s)

def printGmsh(client,s):
    client.sendInfo(s)

def printOptProblem(client,printf,xval,xmin,xmax,fmax,opt):
    if opt['printLevel'] >= 1:
        printf(client,'='*80)
        printf(client,'==='+str(' '*25)+'Optimization Problem'+str(' '*29)+'===')
        printf(client, '='*80)
        printf(client, 'Model setting')
        for key,val in options['CADFEMOptions'].iteritems():
            printf(client, '  * "{:50s}": {}'.format(key,val))
        printf(client, 'Design variables (n:{})'.format(len(xval)))
        for k, xkName in enumerate(opt['designVariables']):
            printf(client, '  * "{:50s}": {:.2e} <= {:.2e} <= {:.2e}'.\
                  format(xkName,xmin[k],xval[k],xmax[k]))
        printf(client, 'Performance functions (m:{})'.format(len(fmax)))
        printf(client, '  * {:20s}:"{}"'.\
              format('Objective',opt['objective']))
        for k,(fmaxk,fkName) in enumerate(zip(fmax,opt['constraints'])):
            printf(client, '  * {:20s}:"{:20s}" <= {:.3e}'.\
                format('Constraint',fkName,fmax[k]))
        printf(client, 'Stop critera')
        printf(client, '  {:30s}: {}'.\
            format('Design variables tol.',opt['tolDesignVariables']))
        printf(client, '  {:30s}: {} '.\
            format('Maximum number of iterations',opt['iterMax']))
        printf(client, '='*80)

def printCurrIterate(client,printf,xval,fval,change,loop,opt):
    if opt['printLevel'] >= 1:
        printf(client, '='*80)
        printf(client, 'It. {:4d},'.format(loop))
        for k,xk in enumerate(xval):
            printf(client, 'x{}: {:.3e},'.format(k,xk)),
        for k,fk in enumerate(fval):
            printf(client, 'f{}: {:.3e},'.format(k,fk))
        printf(client, 'change: {:.3e}'.format(change))
        printf(client, '='*80)

def makeSurfaceResponse(client,xval,options):
    # Set the CAD/FEM parameters
    options = setCADFEM(clientOnelab, options)
    
    ff = []
    for xx in xval:
        # set design variables at xval
        setDesign(clientOnelab, [xx], options['designVariables'])
        
        # mesh the CAD model
        mesh(clientOnelab, options, escapePath(options['file']+'.msh'))
        
        # compute performance functions at xval
        fval = analysis(clientOnelab, xx, options, escapePath(options['file']+'.msh'))
        print client.getNumber('Output/Fundamental eigen frequency [Hz]')
        ff.append(fval)
    return fval


def optimize(clientOnelab, clientOpt, xval, xmin, xmax, fmax, opt):
    
    # Set the CAD/FEM parameters
    opt = setCADFEM(clientOnelab, opt)

    # Summary of the optimization problem
    printOptProblem(clientOnelab, printTerminal, xval, xmin, xmax, fmax, opt)
    printOptProblem(clientOnelab, printGmsh, xval, xmin, xmax, fmax, opt)
    
    # Run the optimization loop ...
    meshOut = escapePath(opt['file']+'.msh')
    xold1 = np.copy(xval); xold2 = np.copy(xval)
    low = np.array([]); upp = np.array([])
    change = 1.0; loop = 1;
    while (change > opt['tolDesignVariables'] and loop <= opt['iterMax']):
        
        # set design variables at xval
        setDesign(clientOnelab, xval, opt['designVariables'])
        
        # mesh the CAD model
        mesh(clientOnelab, opt, meshOut)
        
        # compute performance functions at xval
        fval = analysis(clientOnelab, xval, opt, meshOut)
        
        # sensitivity analysis of performance functions at xval
        dfdx = sensitivity(clientOnelab, xval, fval, opt)
        
        # update xval: call optimizer
        ff0val = fval[0]; dff0dx = dfdx[0]
        ffval = fval[1:] - fmax; dffdx = dfdx[1:]
        # normalize
        if loop == 1: ff0val0 = np.copy(ff0val); ffval0 = np.copy(fmax)
        ff0val /= np.abs(ff0val0); dff0dx /= np.abs(ff0val0)
        ffval /= np.abs(ffval0)
        for k in range(opt['m']): dffdx[k] /= np.abs(ffval0[k])
        # move limits
        clientOpt.xmin = np.maximum(xmin, 1e-3*np.array(xval))
        clientOpt.xmax = np.minimum(xmax, 1e3*np.array(xval))
        print('{}'.format(xval))
        print('{},{}'.format(xmin,clientOpt.xmin))
        print('{},{}'.format(xmax,clientOpt.xmax))
        xmma,y,z,lam,xsi,eta,mu,zet,s,low,upp,factor = \
            clientOpt.mma(xval,xold1,xold2,low,upp,\
                ff0val,ffval,dff0dx,dffdx,loop)
        
        # compute residual
        change = np.linalg.norm(xmma-xval,np.inf)
        
        # Print the current iterate
        printCurrIterate(clientOnelab,printTerminal,xval,fval,change,loop,opt)
        printCurrIterate(clientOnelab,printGmsh,xval,fval,change,loop,opt)
    
        # update design variables
        xold2 = np.copy(xold1)
        xold1 = np.copy(xval)
        xval = np.copy(xmma)
        loop = loop + 1

    # print the final iteration
    printCurrIterate(clientOnelab, printTerminal, xval, fval, change, loop, opt)
    printCurrIterate(clientOnelab, printGmsh, xval, fval, change, loop, opt)
    
    # output data
    xopt = np.copy(xval)
    objOpt = np.copy(fval[0])
    constrOpt = np.copy(fval[1:])
    
    return xopt,objOpt,constrOpt


if __name__ == "__main__":
    
    # Create a onelab client
    clientOnelab = onelab.client(__file__)
    if clientOnelab.action == 'check': exit(0)

    # Set options for both optimization problem and CAD/FEM model
    options = setOptions(clientOnelab,{
        'CADFEMOptions':{
            'Input/Geometry/00Mesh size factor':1,
            'Input/0Type of analysis':0,
            'Optimization/Desired fundamental frequency [Hz]':2.5e05},
        'file':clientOnelab.getPath('magnetometer'),
        'structuredGrid':1,
        'resolution':'Analysis',
        'objective':'Output/diffEigenFreqNorm',
        'constraints':[],
        'designVariables':[
            'Input/Geometry/5Support position [m]'],
        'FDperturbStep':1.0e-8,
        'tolDesignVariables':1e-6,
        'iterMax':50
    })

    # Starting value of design variables
    desVar = [1.5e-04]
    
    # Lower and upper bounds of design variables
    lowerBoundDesVar = [6.0e-05]
    upperBoundDesVar = [2.0e-04]
    
    # Upper bound of constraints
    upperBoundConstr = []

    # Create an optimizer client
    clientOpt = mma.client({
        'm':options['m'],
        'xmin':lowerBoundDesVar,'xmax':upperBoundDesVar,
        #'asyinit':0.2,'asyincr':0.8,'asydecr':0.3
    })
    
    # Call the optimization routine (get the optimal value of design variables)
    xopt,objOpt,constrOpt = optimize(clientOnelab, clientOpt,
        desVar,lowerBoundDesVar,upperBoundDesVar, upperBoundConstr, options)

