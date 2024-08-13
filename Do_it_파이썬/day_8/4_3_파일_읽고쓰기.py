### 파일 객체 = open(파일 이름, 파일 열기 모드) ###
f = open("새파일.txt", 'w')
f.close()

### 파일 열기 모드 ###
# r / 읽기 모드 - 파일 읽기만 할 때 사용
# w / 쓰기 모드 - 파일에 내용을 쓸 때 사용
# a / 추가 모드 - 파일의 마지막에 새로운 내용을 추가할 때 사용

f = open("C:/새파일.txt", 'w') # C드라이브에 새파일.txt 생성
f.close()

### 파일 쓰기 모드로 열어 출력 값 작성 ###
# writedata.py

### 프로그램 외부에 저장된 파일 읽는 방법들 ###
# 1. readline() 함수 # 값이 없으면 None 반환
# readline.py
# readline_all.py

# 2. readlines() 함수 # 각각의 줄을 요소로 갖는 리스트 반환
f = open("C:/Python/새파일.txt", 'r')
lines = f.readlines() 
for line in lines:
    print("%s" %line)
f.close()

# 3. read() 함수 # 파일 전체를 문자열로 리턴
f = open("C:/Python/새파일.txt", 'r')
data = f.read()
print(data)
f.close()

### 파일에 새로운 내용 추가 ###
# adddata.py

### with문 ###
f = open("C:/Python/foo.txt", 'w')
f.wirte("Life is too short, you need python")
f.close()

with open("foo.txt", 'w') as f: # with문을 사용하면 with 블록을 벗어나는 순간 파일이 자동으로 close 됨. --- f.close() 자동화
    f.write("Life is too short, you need python")
    
### sys 모듈로 입력 인수 주기 ### - 실행창(cmd)에서 인수 직접 입력 가능
# sys1.py
# sys2.py
