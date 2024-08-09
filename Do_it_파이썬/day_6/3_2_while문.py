
treeHit = 0
while treeHit < 10:
    treeHit += 1
    print("나무를 %d번 찍었습니다." %(treeHit))
    if treeHit == 10:
        print("나무가 넘어갑니다.")
        
# while문 강제 종료 break
coffee = 10
money = 300
while money:
    print("돈을 받았으니 커피를 줍니다.")
    coffee = coffee - 1
    print("남은 커피의 양은 %d개입니다." % coffee)
    if not coffee:
        print("커피가 다 떨어졌습니다. 판매를 중지합니다.")
        break

# 조건에 맞지 않는 경우 맨 처음으로 돌아가기
a = 0
while a < 10:
    a += 1
    if a % 2 == 0: continue # a를 2로 나누었을때 나머지가 0이면 처음으로 돌아감.
    print(a)
    
# 무한 루프
while True:
    print("Ctrl+C를 눌러야 while 문을 빠져 나갈 수 있습니다.")