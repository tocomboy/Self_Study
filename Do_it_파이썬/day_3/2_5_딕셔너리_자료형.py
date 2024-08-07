dic = {"name":"pey", "phone":"011993323", "birth":"1118"}
# 딕셔너리는 key : value 로 이루어짐.

a = {1:'hi'}
# a = {[1,2,3]:'a'} # 딕셔너리 key 값으로 리스트 사용 불가능 - 변경불가능한(immutable) 값을 사용해야함 -> 튜플 사용
a = {'a':[1,2,3]}

# 딕셔너리 쌍 추가
a = {1: 'a'}
a[2] = 'b' # key - 2 / value = 'b'
print(a)

a['name'] = 'pey' # key - 'name' / value - 'pey'
print(a)

a[3] = [1,2,3] # key - 3 / value - [1, 2, 3]
print(a)

# 딕셔너리 요소 삭제

del a[1] # key 1인 key-value 삭제
print(a)

# 딕셔너리 Key 로 Value 얻기

grade = {'pey':10, 'julliet':99}
print(grade['pey'])
print(grade['julliet'])

a = {1:'a', 2:'b'}
print(a[1])
print(a[2])

a = {'a':1, 'b':2}
print(a['a'])
print(a['b'])

dic = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(dic['name'])
print(dic['phone'])
print(dic['birth'])

# 딕셔너리 주의점.

a = {1:'a', 1:'b', 1:'c'}
print(a) # key 값을 중복으로 사용하면 1:'a'쌍이 무시되고 출력됨. (맨 뒤값이 출력됨.)
# key 값을 중복사용 하지 않도록 주의.

# a = {[1, 2] : "hi"} # 리스트를 key로 사용하면 형 오류 발생. - 리스트 대신 튜플 사용