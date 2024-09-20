class FourCal:
    def setdata(self, first, second): # self: 객체 / first: 변수 / second: 변수
        self.first = first
        self.second = second        
    def sum(self):
        result = self.first + self.second
        return result
    def mul(self):
        result = self.first * self.second
        return result
    def sub(self):
        result = self.first - self.second
        return result
    def div(self):
        result = self.first / self.second
        return result

a = FourCal()
a.setdata(4, 2)
print(a.div())