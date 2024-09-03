class Point:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y
        
    def __str__(self): # magic method
        return f"({self.x}, {self.y})" # f-string(f 문자열)
    
p = Point(1, 2)
s = str(p)