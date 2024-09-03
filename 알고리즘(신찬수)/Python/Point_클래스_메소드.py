import math

class Point:
	def __init__(self, x=0, y=0):
		self.x = x
		self.y = y
	
 # 연산자 오버로딩
	def __str__(self):
		return f"({self.x}, {self.y})"

	def __add__(self, other):
		return Point(self.x + other.x, self.y + other.y)

	def __sub__(self, other):
		return Point(self.x - other.x, self.y - other.y)

	def __rmul__(self, other):
		return Point(self.x * other, self.y * other)
	
 # 일반
	def length(self):
		return math.sqrt(self.x**2 + self.y**2)

	def dot(self, q):
		return self.x * q.x + self.y * q.y

	def dist(self, q):
		return (self-q).length()

	def move(self, dx=0, dy=0):
		self.x += dx
		self.y += dy

# 더하기
p = Point(1, 2)
q = Point(3, 4)
r = p + q
s = p.__add__(q)
print(r, s)

# 빼기
r = p - q
s = p.__sub__(q)
print(r, s)

# 곱하기
r = 3 * p # 순서 중요! ********************************************
# r = p * 3 
s = p.__rmul__(3) # right multiplication 으로 오른쪽 객체가 self 가 되고 왼쪽 객체가 other이 됨.
print(r, s)

# 벡터 공식
p = Point(1, 2)
q = Point(2, 3)
print(f"p = {p}, q = {q}")
print("length of p =", p.length())
print("dot of p and q =", p.dot(q))
print("dist of p and q =", p.dist(q))
p.move(3, 5)
print("move p by (3, 5) =", p)