#문자열 연산
head = "Python"
tail = ' is Fun!'
print(head + tail)

a = "python"
print(a * 2)

print("=" * 50)
print("My Program")
print("=" * 50)

#문자열 인덱싱 슬라이싱
a = "Life is too short, You need Python"
print(a[3])
print(a[11])
print(a[-0])
print(a[-2])
print(a[-5])

# 문자열 슬라이싱
a = "Life is too short, You need Python"
b = a[0] + a[1] + a[2] + a[3]
print(b)
print(a[0:4])
print(a[0:3])

a = "20010331Rainy"
data = a[:8]
weather = a[8:]
print(data)
print(weather)


