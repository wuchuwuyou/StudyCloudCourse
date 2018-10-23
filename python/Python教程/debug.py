# -*- coding: utf-8 -*-
# import logging
# logging.basicConfig(level=logging.INFO)
# import pdb

# s = '0'
# n = int(s)
# # logging.info('n = %d' % n)
# pdb.set_trace() 
# print(10/n)

def fact(n):
    '''
    Function to calculate n!
    Example:
    >>> fact(0)
    Traceback (most recent call last):
    ...
    ValueError
    >>> fact(2)
    2
    >>> fact(3)
    6
    >>> fact(10)
    3628800
    '''
    if n < 1:
        raise ValueError()
    if n == 1:
        return 1
    return n * fact(n - 1)

if __name__ == '__main__':
    import doctest
    doctest.testmod()
