import base64
def safe_base64_decode(s):
    print('start')
    s=s.decode('utf-8')if isinstance(s,bytes) else s
    print(s)
    if len(str(s))%4 != 0:
        s=str(s)+(4-len(str(s))%4)*'='
    print(s)
    print('end')
    return base64.b64decode(s)

a = base64.b64encode(b'abcd')
print(a)
print(safe_base64_decode(b'YWJjZA'))
# assert b'abcd' == safe_base64_decode(b'YWJjZA=='), safe_base64_decode('YWJjZA==')
# assert b'abcd' == safe_base64_decode(b'YWJjZA'), safe_base64_decode('YWJjZA')
print('Pass')
