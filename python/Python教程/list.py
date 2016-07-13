# -*- coding: utf-8 -*-

L1 = ['Hello', 'World', 18, 'Apple', None]
data = []
for s in L1:
	if isinstance(s,str):
		s = s.lower()
		data.append(s)

print(data)

L2 = [s.lower() for s in L1 if isinstance(s,str)]
print(L2)