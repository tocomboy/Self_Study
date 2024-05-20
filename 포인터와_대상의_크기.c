#include <stdio.h>

int main() {
	int data = 0x12345678, i;
	const char* p = (char*)&data; // data가 int형이라 char 형으로 형변환. 단 포인터 이므로 char과 포인터를 묶어 변환

	for (i = 0; i < 4; i++) {
		printf("0x%X\n", *(p+i));
		// p++; // char 형이므로 1(바이트). 만큼 주소이동
	}

	return 0;
}