# 전형적인 for문
test_list = ['one', 'two', 'three']
for i in test_list:
    print(i)

# 다양한 for문의 사용
a = [(1,2), (3,4), (5,6)]
for (first, last) in a:  # 리스트 안의 튜플 형식을 그대로 가져올 수 있음.
    print(first + last)

# for문의 응용
#marks1.py

#for문과 continue
#marks2.py

#for문과 range함수
a = range(10)
print(a)
sum = 0
for i in range(1, 11):
    sum += i
print(sum)

#marks3.py

# 구구단
for i in range(2, 10):
    for j in range(1, 10):
        print(i*j, end=" ") # 입력 인수 end = " " 를 통해 결과값을 출력할 때 다음 줄로 넘기지 않고 " " 공백을 출력함.
    print('')
    
# 리스트 안에 for 문 포함하기
# 1
a = [1, 2, 3, 4]
result = []
for num in a:
    result.append(num*3)
print(result)

result = [num * 3 for num in a] # 1 간략화
print(result)

result = [num * 3 for num in a if num % 2 == 0] # 짝수만 3 곱해서 입력
print(result)

#[표현식 for 항목 in 반복 가능 객체 if 조건]
#[표현식 for 항목1 in 반복 가능 객체1 if 조건1
#       for 항목2 in 반복 가능 객체2 if 조건2
#       ...
#       for 항목n in 반복 가능 객체n if 조건n]

result = [ x*y for x in range(2, 10) 
          for y in range(1, 10)]
print(result)