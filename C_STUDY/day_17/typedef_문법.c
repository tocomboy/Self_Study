#include <stdio.h>

typedef unsigned short int US; // #define�� ġȯ �۾��� �����ϴ� ��ó���� �̰� 
// typedef�� ���� �ڷ����� �ٸ� �̸����� ���Ӱ� �����ϴ� ���.
int main() {
	unsigned short int data = 5;
	US temp; // �迭, ������, �ڷ��� ��� ����.

	temp = data;
	printf("temp = %d\n", temp);

	return 0;
}
// (*p).data == p->data ������ �����ڰ� . ������ ���� �켱������ ����. �̸� �ذ�.