#include <stdio.h>
void Show() {
	int n, i, j;
	printf("Show Function\n");
}

void Test() {
	int y;
	Show();
}

int main() {
	int a, b, c;
	Test();
	return 0;
}
/* 작동 순서
1. main 호출
2. 스택에 SP-12 // a, b, c
3. IP(Instruction Pointer) 값 저장 - 현재 실행 위치 기억
4. BP(Base Pointer) 값 저장 - main 시작 위치
5. Test 호출
6. BP값 이후에 SP-4 // y
7. IP(Instruction Pointer) 값 저장 - 현재 실행 위치 기억
8. BP(Base Pointer) 값 저장 - main 시작 위치
9. Show 호출
10.BP값 이후에 SP-12 // n, i, j
11.printf 실행.
12.종료 후 pop으로 스택에서 하나씩 지워나감.
13.BP값을 pop하면 현재 BP값을 pop한 값으로 변경. 
*/