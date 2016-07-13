# -*- coding: utf-8 -*-
# mine 
# 1 
# 利用map()函数，把用户输入的不规范的英文名字，变为首字母大写，其他小写的规范名字。输入：['adam', 'LISA', 'barT']，输出：['Adam', 'Lisa', 'Bart']：

def normalize(name):
	arr = str2StrArray(name)
	s = arr[0].upper()
	# s = s + n.lower() for n in arr[1:]
	for n in arr[1:]:
		s = s + n.lower()
	return s
def str2StrArray(str):
	return [s for s in str]
def array2Str(arr):
	return [n for n in arr]

L1 = ['adam', 'LISA', 'barT']
L2 = list(map(normalize, L1))
print(L2)

#2
# Python提供的sum()函数可以接受一个list并求和，请编写一个prod()函数，可以接受一个list并利用reduce()求积：

from functools import reduce

def prod(L):
	return reduce(multi,L)
def multi(x,y):
	return x * y
print('3 * 5 * 7 * 9 =', prod([3, 5, 7, 9]))

#3
# 利用map和reduce编写一个str2float函数，把字符串'123.456'转换成浮点数123.456：

def asf(x,y):
	re = x + y / (10 ** len(str(y)))
	return re

def str2Float(s):
	print (s.split('.'))
	s = map(int,s.split('.'))
	return reduce(asf,s)

s = str2Float('123.456')
print(s)
print(asf(123,456))

# Internet Answer 
# 第一题
# return name.capitalize()
# # 第二题
# return reduce(lambda x,y:x*y,L)
# # 第三题
# return reduce(lambda x,y:x+y/(10**len(str(y))),map(int,s.split('.')))

