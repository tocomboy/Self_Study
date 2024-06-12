#include <stdio.h>
#include <malloc.h> // malloc free 사용.

int main() {
	void* p = malloc(100); // memory allocation - 100바이트의 메모리를 할당하여 포인터 p에 저장.
	// 만약 heap에 공간이 부족하면 NULL 반환.
	// if(NULL != p) 형식으로 사용하는 것이 좋음.
	short* p_1 = (short*)malloc(100); // 2바이트 * 50개.
	int* p_2 = (int*)malloc(100); // 4바이트 * 25개. 그룹으로 묶어 사용 가능.
	// void *malloc(size_t size) // size_t는 unsigned int와 같은 자료형. - 4,294,967,296 - 1 만큼 저장 -1은 0을 포함하기 때문.

	free(p);// 메모리 할당 해제.
	free(p_1);
	free(p_2);
	return 0; 
}