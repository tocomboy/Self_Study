# 일반적인 함수
def sum(a, b):
    return a+b
    
a = 3
b = 4
c = sum(a, b)
print(c)

# 입력값이 없는 함수
def say():
    return "Hi"
a = say()
print(a)

# 결과값이 없는 함수
def sum(a, b):
    print("%d, %d의 합은 %d입니다." %(a, b, a+b))
sum(3, 4)

# 입력값도 결과값도 없는 함수
def say():
    print("Hi")
say()

# 여러 개의 입력값을 받는 함수 / 입력 받는 갯수를 모를 경우
def sum_many(*args): # args 는 임의로 정한 변수명으로 temp, python 등 직접 변수명을 설정하면 됨.
    sum = 0
    for i in args:
        sum = sum + i
    return sum

result = sum_many(1, 2, 3)
print(result)
result = sum_many(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
print(result)

def sum_mul(choice, *args):
    if choice == "sum":
        result = 0
        for i in args:
            result = result + i
    elif choice == "mul":
        result = 1
        for i in args:
            result = result * i
    return result

result = sum_mul("sum", 1, 2, 3, 4, 5)
print(result)
result = sum_mul("mul", 1, 2, 3, 4, 5)
print(result)

# 함수의 결과값은 하나임.
def sum_and_mul(a, b):
    return a+b, a*b
    return a-b # 리턴을 두개 사용하면 하나만 작동함.
result = sum_and_mul(3, 4)
print(result) # 결과값을 하나만 리턴하기 위해 튜플로 묶어서 반환함.

# return의 활용
def say_nick(nick):
    if nick == "바보":
        return
    print("나의 별명은 %s입니다." % nick)
    
say_nick("야호")
say_nick("바보")

# 입력 인수 초깃값 설정
def say_myself(name, old, man=True):
    print("나의 이름은 %s입니다." %name)
    print("나이는 %d살입니다." %old)
    if man:
        print("남자입니다.")
    else:
        print("여자입니다.")
        
say_myself("박응용", 27)
say_myself("박응용", 27, True)

say_myself("박응선", 27, False)

# 함수 인수 초깃값 설정시 주의점
"""
def say_myself(name, man=True, old):
    print("나의 이름은 %s입니다." %name)
    print("나이는 %d살입니다." %old)
    if man:
        print("남자입니다.")
    else:
        print("여자입니다.")
        
say_myself("박응선", 27) # man 인수에 27이 입력되기 때문에 인수 입력 순서도 중요함. / name, man=True, old -> name, old, man=True
"""

# 함수 안에서 선언된 변수의 효력 범위
a = 1
def vartest(a):
    a = a + 1 # 함수 내에서 선언된 변수는 함수 자체적으로만 동작함.
    
vartest(a)
print(a)

# 함수 안에서 함수 밖의 변수를 변경
#1. return
a = 1
def vartest(a):
    a = a + 1
    return a
a = vartest(a)
print(a)

#2. global 명령어
a = 1
def vartest():
    global a # 좋은 방법은 아님.
    a = a + 1
vartest()
print(a)
