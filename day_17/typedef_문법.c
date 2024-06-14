#include <stdio.h>

typedef unsigned short int US; // #define는 치환 작업을 수행하는 전처리기 이고 
// typedef는 기존 자료형을 다른 이름으로 새롭게 구성하는 기능.
int main() {
	unsigned short int data = 5;
	US temp; // 배열, 포인터, 자료형 모두 가능.

	temp = data;
	printf("temp = %d\n", temp);

	return 0;
}
// (*p).data == p->data 포인터 연산자가 . 연산자 보다 우선순위가 낮음. 이를 해결.