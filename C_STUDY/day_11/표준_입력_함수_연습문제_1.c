#include <stdio.h>
// ����ڿ��� �� ���� ���� ���� �Է� �޾Ƽ� ��� ���� ����ϴ� ���α׷� (�Է��� scanf ���, �Է� �Ǽ��� ���� ����ó�� X)
int main(){ 
    int num_1, num_2, num_3;
    scanf("%d %d %d", &num_1, &num_2, &num_3);
    printf("%d", (num_1 + num_2 + num_3)/3);

    return 0;
}