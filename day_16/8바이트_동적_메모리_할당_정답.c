#include <stdio.h>
#include <malloc.h>

void GetMyData(int** q) {
	*q = (int*)malloc(8); // 2차원 포인터로 가져오면 *p의 주소값을 가져와 수정할 수 있음.
	// 다른 함수에 위치한 지역변수는 값을 변경하지는 못해도 주소값은 이용 가능함.
}

int main() {
	int* p;
	GetMyData(&p);
	*p = 5;
	printf("%d", *p);
	free(p);
	return 0;
}