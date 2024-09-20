class Vector:
    def __init__(self, *args):
        self._coords = list(args) # _coords 와 같이 _로 시작하는 멤버 변수는 nonpublic -> import 해도 nonpublic 변수는 감춰짐. 참고를 위해서는 magic 메소드 __getitem__ 과 __setitem__을 사용함.
    
    def __str__(self):
        return str(tuple(self._coords)) # 튜플로 바꿔주는 이유는 (x, y, z) 형식으로 출력하기 위함.
    
    def __len__(self):
        return len(self._coords)
    
    def __getitem__(self, k): # 값 찾기
        return self._coords[k]
    
    def __setitem__(self, k, val): # 값 변경
        self._coords[k] = val
        
v = Vector(1, 2, 3)
print(v)
for c in v:
    print(c, end = " ")
print()

v[-1] = 9
for c in v:
    print(c, end = " ")