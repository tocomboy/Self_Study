#include <stdio.h>
void Show() {
	int n, i, j;
	printf("Show Function\n");
}

void Test() {
	int y;
	Show();
}

int main() {
	int a, b, c;
	Test();
	return 0;
}
/* �۵� ����
1. main ȣ��
2. ���ÿ� SP-12 // a, b, c
3. IP(Instruction Pointer) �� ���� - ���� ���� ��ġ ���
4. BP(Base Pointer) �� ���� - main ���� ��ġ
5. Test ȣ��
6. BP�� ���Ŀ� SP-4 // y
7. IP(Instruction Pointer) �� ���� - ���� ���� ��ġ ���
8. BP(Base Pointer) �� ���� - main ���� ��ġ
9. Show ȣ��
10.BP�� ���Ŀ� SP-12 // n, i, j
11.printf ����.
12.���� �� pop���� ���ÿ��� �ϳ��� ��������.
13.BP���� pop�ϸ� ���� BP���� pop�� ������ ����. 
*/