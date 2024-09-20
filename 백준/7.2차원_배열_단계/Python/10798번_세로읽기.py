cols = 15
rows = 5

string = []
string = list((input()) for _ in range(rows)) # 문자열 입력시 map 함수 X

for j in range(cols):
    for i in range(rows):
        if j < len(string[i]): # cols 범위만 잘 정해주기.
            print(string[i][j], end="")
    
    