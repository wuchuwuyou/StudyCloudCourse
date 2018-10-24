
# http://www.liaoxuefeng.com/wiki/0014316089557264a6b348958f449949df42a6d3a2e542c000/001431929340191970154d52b9d484b88a7b343708fcc60000
import time,sys,queue
from multiprocessing.managers import BaseManager

class QueueManager(BaseManager):
	pass

QueueManager.register('get_task_queue')
QueueManager.register('get_result_queue')

server_addr = '127.0.0.1'
print('Connect to server %s...' % server_addr)
m = QueueManager(address = (server_addr,5000),authkey=b'abc')
m.connect()

task = m.get_task_queue()
result = m.get_result_queue()

for i in range(10):
	try:
		n = task.get(timeout = 1)
		print('run task %d * %d...' % (n,n))
		r = '%d * %d = %d' % (n,n,n*n)
		time.sleep(1)
		result.put(r)
	except Queue.Empty:
		print('task queue is empty')

print('worker exit')