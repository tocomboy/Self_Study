#include <stdio.h>
/*
int main(){
    short data = 0;
    short *p = &data;
    printf("%d\n", p);
    //p = p + 1; // �����Ϳ� ����� �ּ� ���� 1 ��ŭ ������Ŵ.
    //printf("%d\n", p); // short�� ũ���� 2����Ʈ ��ŭ ������ �ּҿ� +2�� �����. -> �ٸ� �� ���.

    short *a = (short *)6422294; // data�� ���� �ּҰ��� �����Ͽ� ���� �� ���.
    printf("*a = %d, *p = %d\n", *a, *p);
    return 0;
}
*/
int main(){
    char *p1 = (char *)100; // �ϰ������� �ּ� 100�� ����.
    *p1++; // 1����Ʈ �þ
    short *p2 = (short *)100;
    *p2++; // 2����Ʈ �þ.
    int *p3 = (int *)100;
    *p3++; // 4����Ʈ �þ.
    double *p4 = (double *)100;
    *p4++; // 8����Ʈ �þ.

    return 0;
}