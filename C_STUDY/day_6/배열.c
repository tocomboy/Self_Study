#include <stdio.h>
/*
int main(){
    short student[20]; // short��(2����Ʈ ������) * 20 = 40����Ʈ//
    student[0] = 'a';
    printf("%c", student[0]);
    return 0;
}
*/
/*
int main(){
    short student[20];

    student[1] = 10;
    printf("%d %d\n", student[1], student[2]); // �迭 �ʱ�ȭ ���ϸ� �̻��� ���� ���Ե�. ������ �ʱ�ȭ.
    return 0;
}
*/
/*
int main(){
    short student[20] = {0, }; // {0, } ù��°�� 0�� ����ְ� �������� 0���� �ʱ�ȭ - 0��� �ٸ� ���� ������ ù° �ڸ��� �ٲ�� �������� �״�� 0 // �ʱ�ȭ �ÿ��� ���.
    
    student[1] = 10;
    printf("%d %d\n", student[1], student[2]);

    return 0;
}
*/

int main(){
    char data[5] = {1, 2, 3, 4, 5};
    int result = 0, i;

    for (i = 0; i < 5; i++){
        result = result + data[i]; // �迭���� ��Ģ���� ����.
    }
    printf("data �迭�� �� ����� ���� %d�Դϴ�.\n", result);
    return 0;
}