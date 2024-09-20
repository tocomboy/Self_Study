w_height = 100
w_length = 100
b_height = 10
b_length = 10

Coordinate = []
n = int(input())
for _ in range(n):
    Coordinate = list(map(int, input().split()))
    
for i in range(n):
    print(Coordinate[i][0])