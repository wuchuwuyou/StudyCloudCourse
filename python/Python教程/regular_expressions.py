import re
s = r'^(\d{3})-(\d{3,8}$)'
re_telephone = re.compile(s)

# m = re.match(s,'010-12345')
# print(m.group(0))
# print(m.group(1))
# print(m.group(2))
print (re_telephone.match('010-12345').groups())

print (re_telephone.match('022-26822279').groups())