# case 1
def gcd_sub(a, b): # 빼기 연산
    while a != 0 and b != 0:
        if a > b:
            a -= b
        else:
            b -= a
    return a + b

# gcd_sub(12, 8) = gcd_sub(12-8, 8) -> 점화식
# O(n) - n번 작동
# a, b = n, n-1 - 최악의 경우 입력
# worstcase input - 알고리즘 성능 테스트

#case 2
def gcd_mod(a, b): # 나머지 연산
    while a != 0 and b != 0:
        if a > b:
            a = a % b
        else:
            b = b % a
    return a + b

# gcd_mod(12, 8) = gcd_mod(12%8, 8) -> 점화식
# case 1 보다 case 2 가 어떠한 경우에도 빠름.

# case 3
def gcd_rec(a, b): # 나머지 연산 + 재귀 함수
    if a == 0 and b == 0: # 재귀 함수는 탈출 조건을 무조건 작성해줘야함.
        return a+b
    if a > b:
        return gcd_rec(a%b, b)
    else:
        return gcd_rec(a, b%a)
        
# 재귀 함수인 gcd_rec 가 gcd_mod 보다 느림.
# 알고리즘의 차이가 아닌 재귀 함수를 불러오는 과정에서 발생하는 시간 차이.
# 따라서 알고리즘은 재귀적으로 작성하지 않는게 좋음.

    """ # 이해만 시키면 됨. 어떤 방법이든 상관 X
    algorithm gcd_sub(a, b): # 입력값 갯수 n = 2 ######## 수행시간이 입력의 갯수가 아닌 입력값의 크기로 결정됨
    input: 두 자연수 a, b      - 설명 주석
    output: a와 b의 최대공약수 - 설명 주석
    
    while != 0 and b != 0 do(콜론(:) 같은 의미) -> while 제어문 구조연산 무시
        if (a > b) # 기본연산 1
            a = a - b # 기본연산 1
        else
            b = b - a # 기본연산 1
        end-of-while - 설명 주석
        return a+ b
    end_of_algorithm - 설명 주석
    """
    
    """ # 이해만 시키면 됨. 어떤 방법이든 상관 X ################ 수행시간이 값의 갯수에 의해 결정됨.
    algorithm arrayMax(A, n): -------------------------- T(n)(수행시간) = 2n-1 ------------------------
        input: n개의 정수가 저장된 배열 A
        output: A의 최대값
        
        currentMax = A[0] -> 대입 연산 - 1
        for i = 1 to n-1 do -> 무시함 - ### 66줄 참조 ###
        if currentMax < A[i]: -> 비교연산 1 -> for문 안에서 n-1번 수행
            current = A[i] -> 수행 될 경우도 안될 경우도 있음. - 최소 0번, 최대 n-1번 - ### 68줄 참조 ###
        return currentMax
        --------------------------------------------
        for 제어문 (61줄) 안에서 작동하는 기본연산들은 무시.
        --------------------------------------------
        n개가 저장된 배열 A의 경우의 수 = n!
        배열에 따라 기본 연산 횟수 또한 n1 발생.
        수행 시간 = 가장 오래 걸린 시간 - worstcase (평균은 계산하기 어렵기 때문에 차선책)
    """