#include <stdio.h>
/*
void MyFunc(char* p_char, short* p_short, int* p_int) {
	if (p_char != NULL)  *p_char = 1;
	else if (p_short != NULL) *p_short = 1;
	else *p_int = 1;
}

int main() {
	short data = 5;
	MyFunc(NULL, &data, NULL);
	printf("%d", data);
	return 0;
}
*/
/*
void MyFunc(void* p, char flag) { // 매개변수가 많아지면 void 형으로 받는게 매개 변수를 줄일 수 있음.
	if (flag == 0) *(char*)p = 1;
	else if (flag == 1) *(short*)p = 1;
	else *(int*)p = 1;
}

int main() {
	short data = 5;
	MyFunc(&data, 1);
	printf("%d", data);

	return 0;
}
*/

int GetData(void* p_data, char type) { // 포인터를 이용해 대상의 크기 조절
	int result = 0;
	if (type == 1) result = *(char*)p_data;
	else if (type == 2) result = *(short*)p_data;
	else if (type == 4) result = *(int*)p_data;
	return result;
}

int main() {
	int data = 0x12345678;
	printf("%X\n", GetData(&data, 1));
}

