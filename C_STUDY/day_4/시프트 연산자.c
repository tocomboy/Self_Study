#include <stdio.h>

int main(void) {
	unsigned char data = 0x1A; // 16������ char �ڷ����� ASCII �ڵ� ���·� ����
	/*0001 1010*/
	data = data << 2; // data * 2^2�� ����
	/*0110 1000*/
	data = 0x1A;
	data = data >>  2; // data / 2^2�� ����
	/*0000 0110*/
	
	char data_2 = 0x85; /*10���� -123*/
	/*1000 0101*/
	// ���� ���� ��Ʈ�� ��ȣ��Ʈ�ν� (0�̸� ��� 1�̸� ����)
	data_2 = data_2 >> 3;
	/*1111 0000*/
	// ������ ���ڸ��� ��ȣ��Ʈ�� 1�̸� 1�� ä�� (signed �� ��쿡�� unsigned�� 0���� ����)

	return 0;
}