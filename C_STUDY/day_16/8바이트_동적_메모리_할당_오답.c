#include <stdio.h>
#include <malloc.h>

void GetMyData(int* q) {
	q = (int*)malloc(8); // q�� ���ο� �ּҰ� ���� �Ǿ����� p���� ���� X
	// *p = q // ���� �߻� - p�� �ٸ� �Լ��� ��������.
}

int main() {
	int* p;
	GetMyData(p);
	// *p = 5; // ���� �߻�. - p�� �����Ⱚ�� ���ϰ� ����.
	free(p);
	return 0;
}