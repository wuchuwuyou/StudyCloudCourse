# -*- coding: utf-8 -*-
class Student(object):

	def __init__(self, name):
		self.name = name

	def  __call__(self,value):
		print('My name is %s %s ' % (self.name,value))


s = Student("Michael")
