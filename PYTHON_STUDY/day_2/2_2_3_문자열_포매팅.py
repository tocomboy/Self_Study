# 숫자 바로 대입
print("I eat %d apples." % 3)

# 문자열 바로 대입
print("I eat %s apples." %"five")

# 숫자 값을 나타내는 변수로 대입
number = 3
print("I eat %d apples." %number)

# 2개 이상의 값 넣기
number = 10
day = "three"
print("i ate %d apples. so i was sick for %s days." %(number, day))

# 문자열 포맷 코드
# %s 문자열
# %c 문자 1개
# %d 정수
# %f 부동 소수
# %o 8진수
# %x 16진수
# %% 문자 '%' -> %d 등과 함께 쓰려면 무조건 %% 를 사용해야함

# 포맷 코드와 숫자 함께 사용
#정렬과 공백
print("%10s" %"hi") # hi 가 우측 정렬
print("%-10sjane" %"hi")

#소수점 표현
print("%0.4f" %3.42134234)
print("%10.4f" %3.42134234)

# 문자열 함수
a = "hobby"
print(a.count('b')) # 문자 개수 세기

a = "Python is best choice"
a.find('b') # 문자열에서 b가 처음 나온 위치
a.find('k') # 없으면 -1 반환

a = "Life is too short"
a.index('t') # find 함수와 동일
# a.index('k') # 없으면 오류 발생

a = ','
print(a.join('abcd')) #문자열 사이에 ',' 삽입

a = "hi"
print(a.upper()) # 소문자 -> 대문자

a = "HI"
print(a.lower()) # 대문자 -> 소문자

a = " hi "
print(a.lstrip()) # 좌측 공백 삭제

a = " hi "
print(a.rstrip()) # 우측 공백 삭제

a = " hi "
print(a.strip()) # 공백 삭제 (한 칸 이상의 연속된 공백)

a = "Life is too short"
print(a.replace("Life", "Your leg")) # 문자열 바꾸기

a = "Life is too short"
print(a.split()) # 문자열 나누기

a = "a:b:c:d"
print(a.split(':')) # 문자 기준으로 나누기 가능
