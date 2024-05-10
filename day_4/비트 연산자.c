#include <stdio.h>
unsigned char GetBit(unsigned char data, unsigned char bit_num) { // bit 정보 꺼내기
	unsigned char bit_state = 0;
	if (bit_num < 8) {
		bit_state = data & (0x01 << bit_num);
		bit_state = bit_state >> bit_num; // bit가 0인지 1인지 출력하려면 첫번째 자리에서 0인지 1인지 확인하면 됨
	}
	return bit_state;
}

int main() {
	/*
	& - AND / | - OR / ^ - XOR / ~ - NOT 비트 연산자
	*/
	// 특정 비트를 0으로 설정하기 (&) // 1로 설정하려면 OR 사용 ( | )
	/*
	unsigned char lamp_state;
	lamp_state = lamp_state & 0xFB; // lamp state는 모르지만 2번째 비트만 0으로 변경
	*/
	/*
	unsigned char lamp_state;
	unsigned char bit_num = 2; // 변경할 비트 위치
	unsigned char mask = ~(0x01 << bit_num);
	lamp_state = lamp_state & mask;
	*/
	unsigned char lamp_state = 0x75;
	unsigned char bit_state;
	int i;

	printf("%x\n", lamp_state);
	for (i = 0; i < 8; i++) {
		bit_state = GetBit(lamp_state, 7 - i);
		if (i == 4) {
			printf(" ");
		}
		printf("%d", bit_state);
	}


	return 0;
}