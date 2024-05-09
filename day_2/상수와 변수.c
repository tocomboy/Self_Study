#include <stdio.h>

void main() {
	/*
	printf("%c\n", 65); # 아스키 코드 출력
	float value = 2.1;
	printf("%.1f\n", value);
	int data1 = -32;
	unsigned int data2 = 4294967295;
	printf("%d, %o, %d, %u\n\n", data1, data1, data2, data2); # -1이랑 4294967295는 %u(부호 고려하지 않고 출력)를 이용하면 같은 값으로 출력 - 4294967295

	int data_1 = 10;
	int data_2 = 010;
	int data_3 = 0x10;
	printf("%x, %d, %o", data_1, data_2, data_3); hexadecimal-16진수 / decimal-정수 / octal-8진수
	*/
	/*
	float data = 12.34;
	printf("%f, %e, %E", data, data, data); // e와 E는 정수를 지수형태로 출력
	*/
	/*
	int data1 = 7;
	printf("[%5d] [%05d] [%-5d]\n", data1, data1, data1);

	double data2 = 3.141592;
	printf("[%f] [%.4f] [%8.4f] [%-8.4f]", data2, data2, data2, data2); //%와 자료형 사이 정수는 출력 자릿수, 소수는 소수점 자릿수. 정수가 음수일 경우 좌측정렬 양수일 경우 우측정렬
	*/
	float data = 3.14;
	printf("%07.3f", data);

}

