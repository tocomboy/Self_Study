odd = [1, 3, 5, 7, 9]

#리스트 인덱싱
a = [1, 2, 3]
print(a)

print(a[0])

print(a[-1])

a = [1, 2, 3, ['a', 'b', 'c']]
print(a[0])
print(a[-1])
print(a[3])

a[-1][0]

# 삼중 리스트에서 인덱싱
a = [1, 2, ['a', 'b', ['Life', 'is']]]
print(a[2][2][0])

#리스트 슬라이싱
a = [1, 2, 3, 4, 5]
print(a[0:2])

#중첩된 리스트 슬라이싱
a = [1, 2, 3, ['a', 'b', 'c'], 4, 5]
print(a[2:5])
print(a[3][:2])

#리스트 연산자
a = [1, 2, 3]
b = [4, 5, 6]
print(a + b)
print(a * 3)

#형 변환
print(str[a[2]] + "hi")