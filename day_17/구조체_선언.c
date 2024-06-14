#include <stdio.h>

struct People { // 첫번째 방법
	char name[12];
	unsigned short int age;
	float height;
	float weight;
};
typedef struct People Person; // 따로 선언.

typedef struct People { // 두번째 방법
	char name[12];
	unsigned short int age;
	float height;
	float weight;
} Person; // 합쳐서 선언.

int main() {
	
	return 0;
}