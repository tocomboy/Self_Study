money = 1
if money:
    print("택시를")
    print("타고")
    
# 조건문
#자료형: 숫자  참: 0이 아닌 숫자  거짓: 0
#자료형: 문자열  참: "abc"  거짓: ""
#자료형: 리스트  참: [1, 2, 3] 거짓: [] 
#자료형: 튜플    참: (1, 2, 3)  거짓: ()
#자료형: 딕셔너리  참: {"a":"b"}  거짓: {}

# 비교 연산자
# x > y
# x < y
# x == y
# x != y
# x >= y
# x <= y

# and, or, not
# x or y
# x and y
# not x

# x in 리스트 / x not in 리스트
# x in 튜플   / x not in 튜플
# x in 문자열 / x no in 문자열

# 조건문 pass
pocket = ["paper", "money", "cellphone"]
if "money" in pocket:
    pass
else:
    print("카드를 꺼내라")
    
# elif
pocket = ["paper", "cellphone"]
card = 1
if "money" in pocket:
    print("택시를 타고 가라")
else:
    if card:
        print("택시를 타고 가라")
    else:
        print("걸어 가라")
# 조건문에 elif 적용
pocket = ["paper", "cellphone"]
card = 1
if "money" in pocket:
    print("택시를 타고 가라")
elif card:
    print("택시를 타고 가라")
else:
    print("걸어 가라")
    
# if문 한 줄로 작성
pocket = ["paper", "money", "cellphone"]
if "money" in pocket: pass
else: print("카드를 꺼내라")