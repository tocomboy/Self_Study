def fib(n): # n번째 피보나치 수열까지 출력.
    if n == 0: return 0
    if n == 1: return 1
    return fib(n-1) + fib(n-2) # 0과 1이 아닌 n항은 n-1항 + n-2항

# fib(n)은 이전 수열들의 합으로 구성되어 있기 때문에 fib(0), fib(1) 값들의 합으로 표현 가능.
# 재귀 함수로써 한번 재귀할때마다 함수가 두배 증가하므로 시간 복잡도는 O(2^n)임.

n = int(input("정수를 입력하세요 : "))
for i in range(n):
    print(fib(i))