#include <stdio.h>

int main(void) {
	unsigned char data = 0x1A; // 16진수를 char 자료형에 ASCII 코드 형태로 저장
	/*0001 1010*/
	data = data << 2; // data * 2^2와 같음
	/*0110 1000*/
	data = 0x1A;
	data = data >>  2; // data / 2^2와 같음
	/*0000 0110*/
	
	char data_2 = 0x85; /*10진수 -123*/
	/*1000 0101*/
	// 제일 왼쪽 비트는 부호비트로써 (0이면 양수 1이면 음수)
	data_2 = data_2 >> 3;
	/*1111 0000*/
	// 왼쪽의 빈자리는 부호비트가 1이면 1로 채움 (signed 의 경우에만 unsigned는 0으로 고정)

	return 0;
}