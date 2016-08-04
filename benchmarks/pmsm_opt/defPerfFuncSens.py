""" 
    Author: Erin Kuci
    
    Common derivative of performance functions
"""
from tool import *

# ************************************************************************
# ***** create the design functions                                  *****
# ************************************************************************
# -- convex problem --
def convexSens_0(x,data,parameters):
    result = np.zeros(len(x))
    result[0] = -1.0/x[0]**2.0
    result[1] = -1.0/x[1]**2.0
    return result
def convexSens_1(x,data,parameters):#constr 1
    result = np.zeros(len(x))
    result[0] = 1.0
    result[1] = 2.0
    return result
def convexSens_2(x,data,parameters):#constr 2
    result = np.zeros(len(x))
    result[0] = 2.0
    result[1] = 1.0
    return result

# -- quadratic problem --
def quadraticSens_0(x,data,parameters):
    result = np.zeros(len(x))
    result[0] = 2.0*x[0]
    result[1] = 2.0*(x[1]-6.0)
    return result
def quadraticSens_1(x,data,parameters):
    result = np.zeros(len(x))
    result[0] = 2.0*x[0]
    result[1] = 2.0*x[1]
    return result
def quadraticSens_2(x,data,parameters):
    result = np.zeros(len(x))
    result[0] = 2.0*(x[0]-5.0)
    result[1] = 2.0*(x[1]-5.0)
    return result
def quadraticSens_3(x,data,parameters):
    result = np.zeros(len(x))
    result[0] = 1.0
    result[1] = -1.0
    return result

# -- cantilever beam --
def cantileverSens_0(x,data,parameters):
    return np.array([0.0624]*5)
def cantileverSens_1(x,data,parameters):
    aa = np.array([-3.0*61.0/(x[0]**4.0),-3.0*37.0/(x[1]**4.0),
                   -3.0*19.0/(x[2]**4.0),-3.0*7.0/(x[3]**4.0),
                   -3.0/(x[4]**4.0)])
    return aa

# -- quadratic Svanberg problem --
def quadraticSvanSens_0(x,data,parameters):
    result = np.zeros(len(x))
    result[0] = 2.0*x[0]
    result[1] = 2.0*x[1]
    result[2] = 2.0*x[2]
    return result
def quadraticSvanSens_1(x,data,parameters):
    result = np.zeros(len(x))
    result[0] = 2.0*(x[0]-5.0)
    result[1] = 2.0*(x[1]-2.0)
    result[2] = 2.0*(x[2]-1.0)
    return result
def quadraticSvanSens_2(x,data,parameters):
    result = np.zeros(len(x))
    result[0] = 2.0*(x[0]-3.0)
    result[1] = 2.0*(x[1]-4.0)
    result[2] = 2.0*(x[2]-3.0)
    return result

# -- quadratic qp:cvxopt problem --
def quadraticCvxSens_0(x,data,parameters):
    return np.array([x[0]+3.0,4.0])
def quadraticCvxSens_1(x,data,parameters):
    return np.array([-1.0,-3.0])
def quadraticCvxSens_2(x,data,parameters):
    return np.array([2.0,5.0])
def quadraticCvxSens_3(x,data,parameters):
    return np.array([3.0*x[0],4.0*x[1]])

# -- rosenbrock --
def rosenbrock_0(x,data,parameters):
    result = np.zeros(len(x))
    result[0] = -2.0*(1.0-x[0]) -400.0*(x[1]-x[0]**2.0)*x[0]
    result[1] = 200.0*(x[1]-x[0]**2.0)
    return result

def volumeSens(x,data,parameters):
    return data['ElementVolume'][0]

#def dummy(x,data,parameters):
#    aa = np.zeros(len(x)); aa[0] = 1.0
#    return aa #np.ones(len(x))

def dummy(x,data,parameters):
    return np.ones(len(x))

def dummy0(x,data,parameters):
    return np.zeros(1)






