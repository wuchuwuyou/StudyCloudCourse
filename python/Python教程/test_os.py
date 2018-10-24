# -*- coding: utf-8 -*-

import os 

# def dir_l(path = '.'):
# 	L = os.listdir(os.path.abspath(path))
# 	for f in L:
# 		print(f)


# dir_l()
#编写一个程序，能在当前目录以及当前目录的所有子目录下查找文件名包含指定字符串的文件，并打印出相对路径。

import sys,os
def FindFile(filename, value):
    try:
        dirlist = os.listdir(filename)
        for x in dirlist:
            tmp = os.path.join(filename,x)
            if os.path.isdir(tmp):      #tmp必须为绝对路径
                FindFile(tmp, value)
            elif os.path.isfile(tmp):  #tmp必须为绝对路径，不然判断出错
                if value in x:      #if需要路径中包含value则用tmp；否则用x
                    print(tmp)
    except Exception as e:
        print(e)

FindFile('.', 'py')