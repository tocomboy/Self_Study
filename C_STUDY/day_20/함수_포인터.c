#include <stdio.h>

int Sum(int a, int b){
    int result = 0;
    result = a + b;
    return result;
}

int main(){
    int result = Sum(2, 3);

    &Sum; // Sum �Լ��� ù ��° ��ɹ� �ּҸ� �ǹ���. &�� ���� �ʾƵ� ���� ó����. -> 4�� - int result = 0; �� �ּҰ�.
    int (*p)(int, int); // Sum �Լ��� ����ų �� �ִ� �Լ� �����͸� ����.
    p = &Sum; // Sum �Լ��� �ּҸ� p�� ������.

    int p_result = (*p)(2, 3); // == Sum(2, 3);
    printf("%d", p_result);

    return 0;
}