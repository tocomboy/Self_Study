#include <stdio.h>

void main() {
	/*
	printf("%c\n", 65); # �ƽ�Ű �ڵ� ���
	float value = 2.1;
	printf("%.1f\n", value);
	int data1 = -32;
	unsigned int data2 = 4294967295;
	printf("%d, %o, %d, %u\n\n", data1, data1, data2, data2); # -1�̶� 4294967295�� %u(��ȣ ������� �ʰ� ���)�� �̿��ϸ� ���� ������ ��� - 4294967295

	int data_1 = 10;
	int data_2 = 010;
	int data_3 = 0x10;
	printf("%x, %d, %o", data_1, data_2, data_3); hexadecimal-16���� / decimal-���� / octal-8����
	*/
	/*
	float data = 12.34;
	printf("%f, %e, %E", data, data, data); // e�� E�� ������ �������·� ���
	*/
	/*
	int data1 = 7;
	printf("[%5d] [%05d] [%-5d]\n", data1, data1, data1);

	double data2 = 3.141592;
	printf("[%f] [%.4f] [%8.4f] [%-8.4f]", data2, data2, data2, data2); //%�� �ڷ��� ���� ������ ��� �ڸ���, �Ҽ��� �Ҽ��� �ڸ���. ������ ������ ��� �������� ����� ��� ��������
	*/
	float data = 3.14;
	printf("%07.3f", data);

}