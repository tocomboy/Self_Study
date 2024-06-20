#include <stdio.h>
#include <malloc.h>
#define limit_1 2
#define limit_2 3
#define limit_3 4

int main() {
	int i, j;
	char*** p;
	p = (char***)malloc(sizeof(char**) * limit_1);

	for (i = 0; i < limit_1; i++) {
		*(p + i) = (char**)malloc(sizeof(char*) * limit_2);
		for (j = 0; j < limit_2; j++) {
			*(*(p + i) + j) = (char*)malloc(sizeof(char) * limit_3);
		}
	}
	printf("%x\n", **(*(p + 1)));
	printf("%x\n", *(*(*(p + 1)+2)));
	printf("%x\n", *(*(*(p + 1)+2)+3));
	///////////////////////////////
	free(p);

	for (i = 0; i < limit_2; i++) {
		free(*(p + i));
	}

	for (i = 0; i < limit_2; i++) {
		for (j = 0; j < limit_3; j++) {
			free(*(*(p + i) + j));
		}
	}
	return 0;
}