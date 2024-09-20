#include <stdio.h>
/*
void Test(){
    int data = 0;
    printf("%d", data++);
}

int main(){
    for(int i = 0; i < 5; i++) Test(); // data�� ���� ������ ���: 00000
    return 0;
}
*/

void Test(){
    static int data = 0; // �� �Լ� �������� ���� ������ ���. 
    printf("%d ", data++);
}

int main(){
    int data = 1;
    for(int i = 0; i < 5; i++) {
        Test(); // data�� static ���� ������ ���: 01234
        printf("data = %d\n", data); // �Լ��� ��� data�� �ٸ� ����.
        } 

    return 0;
}