#include <stdio.h>
/*
int ShowMultiplication(int step) { //////// 구구단 받아서 출력 //////////////////
	int i;
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", step, i, i * step);
	}
	return 0;
}
*/

int main() {
	/*
	int sum = 0, num; //for 반복문 ///////////////
	for (num = 1; num <= 5; num++) {
		printf("num(%d) + sum(%d) = ", num, sum);
		sum += num;
		printf("%d\n", sum);
	}
	printf("\nResult : num = %d  sum = %d\n", num, sum);
	*/

	/*
	int sum = 0, num = 1; ///for 반복문(무한 break) //////////////////
	for (; ; ){
		printf("num(%d) + sum(%d) = ", num, sum);
		sum += num;
		printf("%d\n", sum);
		num++;
		if (num > 5) {
			break;
		}
	}
	printf("\nResult : num = %d sum = %d\n", num, sum);
	*/

	/*
	int sum = 0, num = 1; // while 반복문 ////////////////
	while (num <= 5) {
		printf("num(%d) + sum(%d) = ", num, sum);
		sum += num;
		printf("%d\n", sum);
		num++;
	}
	printf("\nResult : num = %d  sum = %d\n", num, sum);
	*/

	/*
	int sum = 0, num = 1; // do - while 반복문 ////////////////////
	do {
		printf("num(%d) + sum(%d) = ", num, sum);
		sum += num;
		printf("%d\n", sum);
		num++;
	} while (num <= 5);
	printf("\nResult : num = %d  sum = %d\n", num, sum);
	*/

	/*
	int num;
	scanf_s("%d", &num);
	ShowMultiplication(n); //함수를 통한 반복문 //////////////////////////
	*/

	/*
	int step, i;
	for (step = 2; step <= 9; step++) { // 중첩 반복문으로 구구단 전체 출력 ////////////////////////////////////
		for (i = 1; i <= 9; i++) {
			printf("%d * %d = %d\n", step, i, step * i);
		}
	}
	*/

	
}