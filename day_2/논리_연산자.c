#include <stdio.h>

void main() {
	
	int data1 = 5, data2 = 3;

	int result1 = 0 || 1;
	int result2 = 3 && -1; // 0이외 숫자는 무조건 참
	int result3 = data1 == 3 || data2 == 3;
	int result4 = data1 == 3 && data2 == 3;
	int result5 = !data1;
	printf("result : %d, %d, %d, %d, %d\n", result1, result2, result3, result4, result5);
	int data3 = 0;
	printf("%d", !data3);
	
}