# -*- coding: utf-8 -*-
res = '/Users/murphy/Desktop/个人文档/iMurphy/云课程/python/Python教程/test01.txt'
# try:
# 	f = open(res,'r')
# 	print(f.read())
# except Exception as e:
# 	print(e)
# # else:
# # 	print("success")
# finally:
# 	if f:
# 		f.close()

# with open(res,'r') as f:
# 	print(f.read())
from io import StringIO
# f = StringIO()
# print(f.write('hello'))
# print(f.write(' '))
# print(f.write('world!'))
# print(f.getvalue())

f = StringIO('Hello!\nHi!\nGoodbye!')
while True:
	s = f.readline()
	if s == '':
		break
	print(s.strip())

