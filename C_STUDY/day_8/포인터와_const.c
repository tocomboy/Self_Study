#include <stdio.h>
/* //////// const�� �ּ� ���� �Ǽ� ����. /////////////////////////
void Swap(int * const pa, int * const pb){ // const�� ���� ���� ����.
    int temp = *pa;
    *pa = *pb; // const �� ����Ͽ� pa = pb�� �Է��� ��� ���� ó�� �����ν� �߸��� �ڵ� ����. const�� ������� ������ ã�� �����.
    *pb = temp;
}

int main(){
    int a=96, b=5;
    printf("%d, %d\n", a, b);
    Swap(&a, &b);
    printf("%d, %d", a, b);

    return 0;
}
*/
/* /////////////////// const�� ��ġ�� ���� ���� ///////////////////////////////////
int main(){
    int data = 5, temp  = 0;
    int *const p = &data;
    *p = 3;
    // p = &temp; *const p �� p�� ����Ǵ� �ּҸ� ������.

    int data = 5;
    const int *p = &data; // �ݸ� �� ��쿡�� *p �� �� �ּ��� �������� data�� ���� ������.
    // *p = 3; // ���� �� ��쿡�� �����߻�.
    return 0;
}
// const int * const p �� ���� p�� *p �Ѵ� ������ �� ����.
*/