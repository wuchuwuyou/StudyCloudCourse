# -*- coding: utf-8 -*-

# def is_palindrome(n):
# 	n=str(n)
# 	# print('origin:'+ n[:])
# 	# print('reverse:'+ n[::-1])
# 	return n[::]==n[::-1]


# output = filter(is_palindrome, range(1, 1000))
# print(list(output))

L = [('Bob', 75), ('Adam', 92), ('Bart', 66), ('Lisa', 88)]

def by_name(t):
	t[0].lower()
	return t

def by_score(t):
	return t[1]
L2 = sorted(L, key=by_name)
L3 = sorted(L, key = by_score,reverse = True)
print(L2)
print(L3)