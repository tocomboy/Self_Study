#include <stdio.h>

int main() {
	int data = 0x12345678, i;
	const char* p = (char*)&data; // data�� int���̶� char ������ ����ȯ. �� ������ �̹Ƿ� char�� �����͸� ���� ��ȯ

	for (i = 0; i < 4; i++) {
		printf("0x%X\n", *(p+i));
		// p++; // char ���̹Ƿ� 1(����Ʈ). ��ŭ �ּ��̵�
	}

	return 0;
}