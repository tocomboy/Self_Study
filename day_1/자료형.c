#include <stdio.h>
#define MAX_Count 5
#define dsum(a) (a + a)

void Print_Pi() { //파이값 출력
	float pi;
	pi = 3.14;
	printf("%.2f\n", pi);
}
int sum(int value1, int value2);


void main() {
	Print_Pi();
	printf("%d\n", sum(1, 2));
	printf("%d\n", MAX_Count);
	int a = MAX_Count;
	printf("%d\n", a);
	printf("%.1f", dsum(2.4));
}

int sum(int value1, int value2) {
	return value1 + value2;
}