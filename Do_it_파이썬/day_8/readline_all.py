f = open("C:/Python/새파일.txt", 'r')
while True:
    line = f.readline() # 값이 없으면 None 반환
    if not line: break # not line == True
    print(line)
f.close()
