# -*- coding: utf-8 -*-

def triangles(max):
    N = [1]
    n = 0 
    while n < max:
        yield N
        N.append(0)
        N = [N[i-1] + N[i] for i in range(len(N))] 
        n=n+1


for t in triangles(10):
    print(t)

print (triangles(10))