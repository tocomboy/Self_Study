#include <stdio.h>

// ���� �ּ� ��� - �������
// short birthday; /* birth�� �޸��ּ� 0x00000066�� ��ġ�Ѵٰ� ������. */
// brithday = 0x0412; /* mov word ptr[00000066h], 0412h�� ������. */
/*
int main(){
    short birthday; // short�� ���� birthday �� ������
    short *ptr; // ������ ���� ������.
    ptr = &birthday; // birthday ������ �ּҸ� ptr ������ ������.

    printf("birthday ������ �ּҴ� %p�Դϴ�.\n", ptr);

    return 0;
}
*/
///////////////////////////////
/*
int main(){
    short birthday;
    short *ptr = &birthday; // ������ ������ �����ϱ� ���� ���
    *ptr = 1042; // ���� ���� ������, ptr �����ڰ� ����Ű�� ��� ���� 1042 ���� �����ϰڴٴ� �ǹ�.

    return 0;
}
*/
///////////////////////////// �ٸ� ������ �ּҸ� ����Ͽ� �����ͷ� �� �����ϱ�. ///////////////////////////
/*
int main(){
    short birthday;
    short *ptr;
    ptr = &birthday; // birthday ������ �ּҸ� ptr ������ ������.
    *ptr = 0x0412; // birth = 0x0412; �� ���� ��� - �� ptr�� ����� �ּҷ� �̵��ؼ� ����.

    printf("birtday = %d (0x%04x)\n", birthday, birthday);

    return 0;
}
*/
// short *ptr;
// ptr = (short *)0x0000006C; - ������ ���� ptr�� �ּҸ� ���� ����.

/* ////////// �Ű������� �ٸ� �Լ��� ���� �ּ� �ޱ� ////////////////////////
void Test(short *ptr){
    short soft = 0;
    soft = *ptr;
    *ptr = 3;
}

int main(){
    short tips = 0;
    Test(&tips); // ptr = &tips; �� ����.

    return 0;
}
*/

/////////////// ���� �ּ� ���� ������� ���� �� ��ȯ�ϱ� /////////////////////////////
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int start = 96, end = 5;

    printf("brfore : start = %d, end = %d\n", start, end);
    if(start > end){
        Swap(&start, &end);
    }
    printf("after : start = %d, end = %d\n", start, end);

    return 0;
}