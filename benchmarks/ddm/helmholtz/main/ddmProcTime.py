#!/usr/bin/python
from sys import argv
from time import clock

with open('time_%s_%s.txt'%(argv[1], argv[2]),'a') as myfile:
    myfile.write(str(clock()))
