import sys # sys.getrefcount(객체)

print(type(3)) # 파이썬에서 3은 상수가 아닌 정수임. (변하는 값)

a = 3
b = 3
print(a is b) # 동일한 객체를 가르키는지 확인. - a = 3 을 입력하는 순간 정수형 객체 3 이 생성됨. -> 이후 b = 3 을 작성하면 a에서 생성된 정수형 객체 3 을 동일하게 가르키게 됨.

print(sys.getrefcount(3)) # 자료형에 대한 참조 개수를 알려주는 함수.
c = 3
print(sys.getrefcount(3)) # c = 3을 작성하자 정수형 객체 3에 대한 참조 개수가 1개 늘어남.

# 변수 만드는 방법
a, b = ('python', 'life') # 튜플 사용
print(a, b)

(a, b) = 'python', 'life' # 튜플 사용
print(a, b)

[a, b] = ['python', 'life'] # 리스트 사용
print(a, b)

a = b = 'python'

a = 3
b = 5
a, b = b, a # 두 값을 간단하게 바꾸는 법
print(a)
print(b)

# 메모리에 생성된 변수 없애기
a = 3
b = 3
sys.getrefcount(3)
del(a)
del(b)
sys.getrefcount(3)

# 리스트를 변수에 넣고 복사
a = [1, 2, 3]
b = a # 같은 리스트를 가르키게 됨.
a[1] = 4 # a 리스트의 값을 바꾸면 b 리스트의 값도 함께 바뀜
print(a)
print(b)

# 리스트 복사할 때 다른 객체를 가르키게 만드는 방법
# 1. [:] 이용
a = [1, 2, 3]
b = a[:]
a[1] = 4
print(a is b) # 다른 객체이므로 False

# 2. copy 모듈 이용
from copy import copy
b = copy(a)
print(a is b) # 다른 객체이므로 False