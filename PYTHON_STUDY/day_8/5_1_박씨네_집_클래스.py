class HousePark:
    lastname = '박'
    def setname(self, name):
        self.fullname = self.lastname + name
    def travel(self, where):
        print("%s, %s여행을 가다." %(self.fullname, where))
    
pey = HousePark()
pey.setname("응용")
print(pey.fullname)
pey.travel("부산")

class HousePark:
    lastname = '박'
    def __init__(self, name): # setname -> __init__  // 초깃값 설정
        self.fullname = self.lastname + name
    def travel(self, where):
        print("%s, %s여행을 가다." %(self.fullname, where))

pey = HousePark("응용")
pey.travel("태국")


# 클래스 상속
class HouseKim(HousePark): # class 상속받을 클래스(상속할 클래스 명)
    lastname = "김"
    
juliet = HouseKim("줄리엣") # 상속받은 클래스의 함수(메서드)를 그대로 사용 가능
juliet.travel("독도")

# 메서드 오버라이딩
class HouseKim(HousePark):
    lastname = "김"
    def travel(self, where, day):
        print("%s, %s여행 %d일 가네."%(self.fullname, where, day)) # 상속받은 클래스의 메서드 이름을 동일하게 다시 구현하면 함수가 오버라이딩 됨.(덮어쓰기)

juliet = HouseKim("줄리엣")
juliet.travel("독도", 5)

# 연산자 오버로딩
# house.py
