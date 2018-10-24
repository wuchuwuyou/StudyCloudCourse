
# http://www.liaoxuefeng.com/wiki/0014316089557264a6b348958f449949df42a6d3a2e542c000/001431929340191970154d52b9d484b88a7b343708fcc60000

import random,time,queue 
from multiprocessing.managers import BaseManager

task_queue = queue.Queue()
result_queue =queue.Queue()

class QueueManager(BaseManager):
	pass

QueueManager.register("get_task_queue",callable=lambda:task_queue)
QueueManager.register("get_result_queue",callable=lambda:result_queue)

manager = QueueManager(address=('',5000),authkey=b'abc')

manager.start()

task = manager.get_task_queue()
result = manager.get_result_queue()

for i in range(10):
	n = random.randint(0,10000)
	print('Put task %d...' % n)
	task.put(n)

print('Try get results...')

for i in range(10):
	r = result.get(timeout=10)
	print('Result: %s' % r)

manager.shutdown()
print('master exit')
		