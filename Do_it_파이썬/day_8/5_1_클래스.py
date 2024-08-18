class Calculator:
    def __init__(self):
        self.result = 0
        
    def adder(self, num):
        self.result += num
        return self.result
    
cal1 = Calculator()
cal2 = Calculator()
print(cal1.adder(3))
print(cal1.adder(4))
print(cal2.adder(3))
print(cal2.adder(7))

# 파이썬 클래스
class Simple: # 클래스
    pass

a = Simple() # 인스턴스

# 클래스 기초

class Service:
    secret = "영구는 배꼽이 두 개다."
    
pey = Service()
print(pey.secret)

# 클래스 함수
class Service:
    secret = "영구는 배꼽이 두 개다."
    def sum(self, a, b):
        result = a + b
        print("%s + %s = %s입니다." %(a, b, result))

pey = Service()
pey.sum(1, 1)

# self 기초
class Service: # class 내 함수의 첫 번째 인수는 무조건 self 를 사용.
    def sum(self, a, b): # self 를 통해 함수를 이용할 수 있는 아이디 확인.
        result = a + b
        print("%s + %s = %s입니다." %(a, b, result))

pey = Service()
#pey.sum(pey, 1, 1) # 이와 같이 사용해야 하지만
pey.sum(1, 1) # self에 전달되는 변수를 생략하고 사용함.

# self 심화
class Service:
    secret = "영구는 배꼽이 두 개다."
    def setname(self, name): # self는 아이디를 표현
        self.name = name # 즉 self.name 은 아이디(pey)에 저장된 이름임.
    def sum(self, a, b):
        result = a + b
        print("%s님 %s + %s = %s입니다." %(self.name, a, b, result))

pey = Service() 
pey.setname("홍길동") # self에 pey를 입력받으므로 pey.name = "홍길동" 으로 작동됨.
pey.sum(1, 1) # self.name을 출력할 경우 pey.name 으로 변경되어 실행.

# __init__
class Service:
    secret = "영구는 배꼽이 두 개다"
    def __init__(self, name): # 인스턴스를 만들 때 항상 실행 - 아이디를 부여받을 때 항상 실행됨.
        self.name = name
    def sum(self, a, b):
        result = a + b
        print("%s님 %s + %s = %s입니다." %(self.name, a, b, result))
        
pey = Service("홍길동")