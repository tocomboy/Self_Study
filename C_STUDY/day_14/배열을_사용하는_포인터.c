#include <stdio.h>
/*
int main(){
    char data[5] = {1, 2, 3, 4, 5};

    int i, sum = 0, select = 2;
    char *p = data + select; // &data[select] �� ����.
    for(i=0; i<10; i++) sum += *p;

    return 0;
}
*/

int main(){
    char data[5] = {1, 2, 3, 4, 5};
    int result = 0, i;
    char *p = data;

    for(i=0; i<5; i++){
        result += *(p+i); // *p ���� p++ �� ���� ���ĵ� ����. -> *p++�� ����ؼ� ����ص� ��.
        // result += *p++; // ���� �����ڵ� �ٸ� ����� �Բ� ��� ����.
    }
    printf("data�� �� �迭 ����� ���� : %d", result);

    return 0;
}