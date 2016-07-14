# -*- coding: utf-8 -*-
"""docstring for Chain"""

class Chain(object):
	def __init__(self, path=''):
		# super(Chain, self).__init__()
		self.__path = path

	def __getattr__(self,path):
		print("__getattr__ %s %s " % (self.__path,path))
		return Chain('%s/%s' % (self.__path,path))

	def  __str__(self):
		return self.__path

	__repr__ = __str__

	def __call__(self,path = ""):
		print("__call__ %s %s " % (self.__path,path))
		return Chain('%s/%s' %(self.__path,path))
		


# s = Chain().status.user.timeline.list
# print(s)
s1 = Chain('api.sever').users('name').repos()
# s1 = Chain("1111")
print(s1)