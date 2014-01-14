#!/usr/bin/python
import sys
import os

def readTimes(fname):
    f = open(fname, 'r')
    tStrList = f.readlines()
    f.close()
    return tStrList

pfList = list()
pbList = list()
opList = list()
faList = list()

for file in os.listdir('.'):
    if 'time' and 'forward' in file:
        pfList.append(file)
    if 'time' and 'backward' in file:
        pbList.append(file)
    if 'time' and 'operator' in file:
        opList.append(file)
    if 'time' and 'factor' in file:
        faList.append(file)

if not (opList or pfList or pbList or faList):
    sys.exit('Error: no time file could be found')

def getProcTime(fList):
    procTimeList = list()
    for fname in fList:
        tStr = readTimes(fname)
        tNumList = list()
        tNumList.append(int(fname.split('_')[1]))
        for s in tStr:
            tHum = s.strip('\n').split('.')
            tMach = 3600*int(tHum[0])+60*int(tHum[1])+int(tHum[2])+int(tHum[3])/1e9
            tNumList.append(tMach)
        procTimeList.append(tNumList)
    return procTimeList

procTimeForwardList = getProcTime(pfList)
procTimeBackwardList = getProcTime(pbList)
procTimeOperatorList = getProcTime(opList)
procTimeFactorList = getProcTime(faList)

import pylab as pl
pl.ion()
# pl.rcParams['axes.color_cycle'] = ['r', 'k', 'c']

fig = pl.figure()
ax = pl.axes()

def plotTimeList(ax, timeList, marker='o'):
    for tList in timeList:
        r = tList[0]
        for t in tList[1:]:
            ax.plot(t, r, marker)

plotTimeList(ax, procTimeForwardList, marker='or')
plotTimeList(ax, procTimeBackwardList, marker='sk')
plotTimeList(ax, procTimeOperatorList, marker='dc')
plotTimeList(ax, procTimeFactorList, marker='*b')

try:
    ax.set_ylim([-1, len(procTimeFactorList)])
    if False:#procTimeForwardList:
        ax.set_xticks(procTimeForwardList[0][1:])
    else:
        ax.set_xticks(procTimeOperatorList[0][1:])
    ax.set_yticks(range(len(procTimeOperatorList)))
except:
    pass

ax.grid('on')

ax.set_xlabel('Time')
ax.set_ylabel('#Proc')
raw_input()
