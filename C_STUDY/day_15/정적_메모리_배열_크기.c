#include <stdio.h>
#define Max_Count 5 // ���� �޸� �迭�� ���� �Է� ���� ������ �޶����� �Ź� ���� ������ �ؼ� �����ؾ���.

int main() {
    int num[Max_Count], count = 0, sum = 0, i;
    while (count < Max_Count) {
        printf("���ڸ� �Է��ϼ��� (9999�� ������ ����) : ");
        scanf_s("%d", num+count);
        if (num[count] == 9999) break;
        count++;
    }

    for (i = 0; i < count; i++) {
        if (i > 0) printf(" + ");
        printf(" %d ", num[i]);
        sum += num[i];
    }
    printf(" = %d\n", sum);


    return 0;
}