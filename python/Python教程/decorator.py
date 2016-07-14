# -*- coding: utf-8 -*-

import functools

def log(f):
	@functools.wraps(f)
	def wrapper(*args,**kw):
		print('begin call %s():' % f.__name__)
		result = f(*args,**kw)
		print('end call %s():' % f.__name__)
		return result
	return wrapper

@log
def canRun():
    print('running...')

func= canRun
func()