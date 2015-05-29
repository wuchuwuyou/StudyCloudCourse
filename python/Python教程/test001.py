# -*- coding: utf-8 -*-
"""
Created on Tue Dec 30 22:32:22 2014

@author: tiny
"""
'''
a = int(raw_input("please input a number:"))
#print(a)
if a > 100:
    print a
else:
    print -a

def my_abs(x):
    if not isinstance(x,(int,float)):
        raise TypeError('bad operand type')
    if x >= 0:
        return x
    else:
        return -x
b = raw_input()
print (my_abs(b))
'''
import math

def move(x, y, step, angle=0):
    nx = x + step * math.cos(angle)
    ny = y - step * math.sin(angle)
    return nx, ny
    
x,y = move(100,100,60,math.pi / 6)
print x,y
r = move(100,100,60,math.pi / 6)
print r