import time, threading

# def loop():
# 	print('Thread %s is running' % threading.current_thread().name)
# 	n = 0
# 	while  n <5:
# 		n = n + 1
# 		print('Thread %s >>> %s' % (threading.current_thread().name,n))
# 		time.sleep(1)
# 	print('Thread %s ended.' % threading.current_thread().name)


# print('Thread %s is running' % threading.current_thread().name)
# t = threading.Thread(target=loop,name='LoopThread')
# t.start()
# t.join()
# print('thread %s ended.' % threading.current_thread().name)

# balance = 0
# lock = threading.Lock()

# def change_it(n):
# 	global balance
# 	balance = balance + n
# 	balance = balance - n
# def run_thread(n):
# 	for i in range(100000):
# 		lock.acquire()
# 		try:
# 			change_it(n)
# 		finally:
# 			lock.release()

# t1 = threading.Thread(target = run_thread,name = "t1",args=(5,))
# t2 = threading.Thread(target = run_thread,name = "t2",args=(8,))
# t1.start()
# t2.start()
# t1.join()
# t2.join()
# print(balance)


local_school = threading.local()

def process_student():
	std = local_school.student
	print('%s (%s)' % (std,threading.current_thread().name))

def process_thread(n):
	local_school.student = n
	process_student()

t1 = threading.Thread(target = process_thread,args =('A',),name = 'T_A')
t2 = threading.Thread(target = process_thread,args =('',),name = 'T_B')
t1.start()
t2.start()
t1.join()
t2.join()	
