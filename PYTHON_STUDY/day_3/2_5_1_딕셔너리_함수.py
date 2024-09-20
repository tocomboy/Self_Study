#Key 리스트 만들기(keys)
a = {'name' : 'pey', 'phone' : '0119993323', 'birth' : '1118'}
print(a.keys())

for k in a.keys():
    print(a[k])
    
print(list(a.keys())) # key 를 리스트로 묶기
    
#Value 리스트 만들기(values)
print(a.values())

#Key, Value 쌍 얻기(items)
print(a.items())

#Key, Value 쌍 모두 지우기(clear)
a.clear()

#Key로 Value얻기(get)
a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(a.get('name')) # 값이 없으면 None 반환
print(a['name']) # 값이 없으면 Key 오류 발생

print(a.get('foo', 'bar')) #딕셔너리 안에 'foo' 값이 없으면 'bar' 값을 가져옴 / get(key, 'default')

#Key가 딕셔너리 안에 있는지 조사(in)
a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print('name' in a)
print('email' in a)