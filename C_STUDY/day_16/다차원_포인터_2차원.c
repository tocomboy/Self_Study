#include <stdio.h>

int main() {
	short data = 3;
	short* p = &data;
	short** pp = &p;

	printf("[Before ] data : %d\n", data);
	*p = 4;
	printf("[Use *p ] data = %d\n", data);
	**pp = 5;
	printf("[Use **pp] data : %d\n", data);
	*pp = 6;
	printf("[Use *pp] data : %d\n", data); // data ���� ���� ����. p�� ����.
	printf("[Use *pp] p : %d\n", p);
	return 0;
}