#include <stdio.h>
#include <malloc.h>

void GetMyData(int** q) {
	*q = (int*)malloc(8); // 2���� �����ͷ� �������� *p�� �ּҰ��� ������ ������ �� ����.
	// �ٸ� �Լ��� ��ġ�� ���������� ���� ���������� ���ص� �ּҰ��� �̿� ������.
}

int main() {
	int* p;
	GetMyData(&p);
	*p = 5;
	printf("%d", *p);
	free(p);
	return 0;
}