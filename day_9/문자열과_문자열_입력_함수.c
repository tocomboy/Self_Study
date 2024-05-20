#include <stdio.h>
/*
int main() {
	int input_data; // 자료형은 상관없음 int면 아스키코드, char면 그대로 저장함.
	input_data = getchar(); // 단어 하나만 입력 가능. 그 이상은 무시됨.
	printf("input_data = %c", input_data);
	// input_data = getchar(); // 바로 연결해서 사용하면 앞에서 엔터입력으로 둘다 작동해버림.
	// printf("input_data = %c", input_data);
	// 해결책 1 - getchar()를 사이에 한번 사용해서 초기화. - 엔터횟수에 따라 오작동 가능. 해결책 X
	// 해결책 2 - rewind(stdin) - 버퍼에 입력된 첫번째 값만 두고 나머지는 버림.
	return 0;
}
*/
/*
int main() {
	int input_data;
	input_data = getchar(); // getc(stdin) 으로 대체 가능함. getchar는 getc를 간략화 해서 정의한것.(define)
	rewind(stdin);
	printf("input_data = %c\n", input_data);
	input_data = getchar();
	rewind(stdin);
	printf("input_data = %c\n", input_data);
	return 0;
}
*/
int main() {
	char input_string[10];
	gets(input_string);
	printf("%s", input_string);

	return 0;
}