#include <stdio.h>
#include <malloc.h> // malloc free ���.

int main() {
	void* p = malloc(100); // memory allocation - 100����Ʈ�� �޸𸮸� �Ҵ��Ͽ� ������ p�� ����.
	// ���� heap�� ������ �����ϸ� NULL ��ȯ.
	// if(NULL != p) �������� ����ϴ� ���� ����.
	short* p_1 = (short*)malloc(100); // 2����Ʈ * 50��.
	int* p_2 = (int*)malloc(100); // 4����Ʈ * 25��. �׷����� ���� ��� ����.
	// void *malloc(size_t size) // size_t�� unsigned int�� ���� �ڷ���. - 4,294,967,296 - 1 ��ŭ ���� -1�� 0�� �����ϱ� ����.

	free(p);// �޸� �Ҵ� ����.
	free(p_1);
	free(p_2);
	return 0; 
}