#include <stdio.h>
/*
int main() {
	int input_data; // �ڷ����� ������� int�� �ƽ�Ű�ڵ�, char�� �״�� ������.
	input_data = getchar(); // �ܾ� �ϳ��� �Է� ����. �� �̻��� ���õ�.
	printf("input_data = %c", input_data);
	// input_data = getchar(); // �ٷ� �����ؼ� ����ϸ� �տ��� �����Է����� �Ѵ� �۵��ع���.
	// printf("input_data = %c", input_data);
	// �ذ�å 1 - getchar()�� ���̿� �ѹ� ����ؼ� �ʱ�ȭ. - ����Ƚ���� ���� ���۵� ����. �ذ�å X
	// �ذ�å 2 - rewind(stdin) - ���ۿ� �Էµ� ù��° ���� �ΰ� �������� ����.
	return 0;
}
*/
/*
int main() {
	int input_data;
	input_data = getchar(); // getc(stdin) ���� ��ü ������. getchar�� getc�� ����ȭ �ؼ� �����Ѱ�.(define)
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