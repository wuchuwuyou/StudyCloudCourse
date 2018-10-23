# -*- coding: utf-8 -*-
# class Student(object):

# 	def __init__(self, name):
# 		self.name = name

# 	def  __call__(self,value):
# 		print('My name is %s %s ' % (self.name,value))


# s = Student("Michael")
# import debug.py

# fact(0)
# from collections import deque
# q = deque(['a','b','c'])
# q.append('x')
# q.appendleft('y')
# print (q)
# q.pop()
# print (q)
# q.popleft()
# print (q)

# from collections import  defaultdict
# dd = defaultdict(lambda :'N/A')
# dd['key1'] = 'aaa'
# print dd['key1']
# print dd['key2']

# from collections import Counter
# c = Counter()
# for ch in 'programming':
#     c[ch] = c[ch]+1
#
# print(c)
# import  base64
# a = base64.b64encode(b'abcdefg')
# print(a)
# b = base64.b64decode(a)
# print(b)
import hashlib
md5 = hashlib.md5()
md5.update('how to use md5 in python hashlib?'.encode('utf-8'))
print(md5.hexdigest())
