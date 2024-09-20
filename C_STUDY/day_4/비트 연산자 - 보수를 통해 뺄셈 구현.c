#include <stdio.h>

int main() {
	/*
	unsigned char data = 255; // unsigned char에서의 최댓값
	data++; // 오버플로우로 0이됨
	data++; // 따라서 1
	*/
	// A - B = A + (~B) + 1
	unsigned char data_1 = 0xFF, data_2 = 0x0F;
	data_1 += ~data_2 + 1;
	printf("%x\n\n", data_1);
	// XOR 연산자로 암호화 가능
	unsigned char data_3 = 0x56, data_password = 0x37;
	data_3 = data_3 ^ data_password;
	printf("&x\n", data_3);
	data_3 = data_3 ^ data_password;
	printf("&x", data_3);


	return 0;
}