import hashlib
import time
def calc_md5(password):
	md5 = hashlib.md5()
	md5.update(password.encode('utf-8'))
	s = md5.hexdigest()
	return s

db = {}
def register(username,password):
	db[username] = get_md5(username,password)
	print(db)

def get_md5(username,password):
	s = password+username+'salt'
	result = calc_md5(s)
	return result

def login(username,password):

	if username not in db:
		print('没有该用户')
		return;	

	pwd = get_md5(username,password)
	if db[username] == pwd:
		print('登录成功')
	else:
		print('密码不正确')


register("A","123456")	
time.sleep(2)
login("A","123456")
login("B","123456")
login("A","12345")