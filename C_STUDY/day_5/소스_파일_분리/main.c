#include <stdio.h>
/*
void Sum(int, int);
void main(){
    Sum(5, 3);
    printf("5 + 3 = %d", result); // ������ �и��Ǹ鼭 result �ν� �ȵ�
}
*/
/////////////////////////////////////////////////////////////////////////////////////////

void Sum(int, int);
extern int result; // �ٸ� �ҽ����Ͽ��� ������ ���� ������ ����Ϸ��� extern ���� �����;���.

int main(){
    Sum(5, 3);
    printf("5 + 3 = %d", result);
    return 0;
} // visual studio ������ ���� �۵���. vscode ������ �� ������Ʈ�� �ν����� �ʴµ� ��.