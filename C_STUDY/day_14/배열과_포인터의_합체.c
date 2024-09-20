#include <stdio.h>

int main(){
    char data1, data2, data3, data4, data5, i;
    char *p[5] = {&data1, &data2, &data3, &data4, &data5};
    for(i=0; i<5; i++) *p[i] = 'a';

    for(i=0; i<5; i++) printf("%c\n", *p[i]);

    return 0;
} // char *p[5] �� char (*p)[5]�� ������ �ٸ�.
// char *p[5]�� �迭�� ����� �� �����Ͱ� �迭�ȿ� ��.(�����ʹ� �迭�� ���) p[5] �迭�� �ּҰ� �����.
// char (*p)[5]�� �����Ͱ� ����ǰ� �����Ͱ� ����Ű�� �迭�� ����.(�����Ͱ� �迭�� ����Ŵ.) char [5]�� ����Ŵ.

/*
int main(){
        char (*p)[5];
        p++; // p = p + 1; �� �����Ƿ� �ּҰ� 5 ������. -> ����Ű�� �迭�� ũ�⸸ŭ �� ������.
    return 0;
}
*/

int main(){
    char data[3][5];
    char (*p)[5];
    p = data;
    (*p)[1] = 3;
    (*(p+1))[2] = 4;
    (*(p+2))[4] = 5;

    return 0;
}