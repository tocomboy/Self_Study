#include <stdio.h>

struct People { // ù��° ���
	char name[12];
	unsigned short int age;
	float height;
	float weight;
};
typedef struct People Person; // ���� ����.

typedef struct People { // �ι�° ���
	char name[12];
	unsigned short int age;
	float height;
	float weight;
} Person; // ���ļ� ����.

int main() {
	
	return 0;
}