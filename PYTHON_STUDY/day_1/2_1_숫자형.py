# 정수형
a = 123
a = -178
a = 0

# 실수형
a = 1.2
a = -3.45
a = 4.24E10
a = 4.24e-10

# 8진수와 16진수
a = 0o177
a = 0x8ff
a = 0xABC

# 복소수
a = 1+2j
a = 3-4J

a = 1+2j
a.real # 복소수의 실수 부분 리턴
print(a.real)

a.imag # 복소수의 허수 부분 리턴
print(a.imag)

a.conjugate # 복소수의 켤레복소수 리턴 - 1-2j
print(a.conjugate)

abs(a) # 복소수의 절대값 리턴
print(abs(a))

# 연산자
# + - * /

a = 3
b = 4
a ** b # 제곱 연산자
print(a ** b)

a % b # 나머지 연산자
print(a % b)

a // b # 소숫점 아랫자리 버림.
print(a // b)