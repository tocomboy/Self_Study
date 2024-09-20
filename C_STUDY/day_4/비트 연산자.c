#include <stdio.h>
unsigned char GetBit(unsigned char data, unsigned char bit_num) { // bit ���� ������
	unsigned char bit_state = 0;
	if (bit_num < 8) {
		bit_state = data & (0x01 << bit_num);
		bit_state = bit_state >> bit_num; // bit�� 0���� 1���� ����Ϸ��� ù��° �ڸ����� 0���� 1���� Ȯ���ϸ� ��
	}
	return bit_state;
}

int main() {
	/*
	& - AND / | - OR / ^ - XOR / ~ - NOT ��Ʈ ������
	*/
	// Ư�� ��Ʈ�� 0���� �����ϱ� (&) // 1�� �����Ϸ��� OR ��� ( | )
	/*
	unsigned char lamp_state;
	lamp_state = lamp_state & 0xFB; // lamp state�� ������ 2��° ��Ʈ�� 0���� ����
	*/
	/*
	unsigned char lamp_state;
	unsigned char bit_num = 2; // ������ ��Ʈ ��ġ
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