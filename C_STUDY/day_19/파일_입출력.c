#include <stdio.h>

int main(){
    char temp[8] = {'a', 'b', 'c', 0,};
    char dest[8];

    // memcpy(dest, temp, sizeof(temp)); // temp ���� dest�� 8����Ʈ Ű�� ��ŭ �޸𸮸� ���� - �޸� ��ü�� ������. -> ���̳ʸ�
    // strcpy(dest, temp); // temp ���� dest�� 4����Ʈ ũ��(NULL ����) ��ŭ ���� - NULL ���� 0�� ���ö� ���� �����ϹǷ� ���̰� �ʿ� ����. -> �ؽ�Ʈ

    return 0;
}