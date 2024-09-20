#include <stdio.h>
#include <malloc.h>

void GetMyData(int* q) {
	q = (int*)malloc(8); // q에 새로운 주소가 저장 되었을뿐 p에는 영향 X
	// *p = q // 오류 발생 - p는 다른 함수의 지역변수.
}

int main() {
	int* p;
	GetMyData(p);
	// *p = 5; // 오류 발생. - p는 쓰레기값을 지니고 있음.
	free(p);
	return 0;
}