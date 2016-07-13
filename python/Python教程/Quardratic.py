#!/usr/bin/env python3
#-- coding: utf-8 --
# ax2 + bx + c = 0
import math
def quadratic(a, b, c):
    delta = (b**2) - (4*a*c)
    if delta < 0:
        print("No real solutions.")
    else:
        rt1 = (-b + math.sqrt(delta))/(2*a)
        rt2 = (-b - math.sqrt(delta))/(2*a)
        print("root1 =", rt1, "and root2 =", rt2)
        
quadratic(2, 3, 1)
quadratic(1, 3, -4)
quadratic(1, 2, 3)
