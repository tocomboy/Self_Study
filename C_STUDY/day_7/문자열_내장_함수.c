#include <stdio.h>
#include <string.h>

// ���ڿ� ���� strlen �Լ�
/*
int main(){
    int data_length;
    char data[10] = {'h', 'a', 'p', 'p', 'y', 0,};
    data_length = strlen(data);
    printf("%d\n\n", data_length);
}
*/
/*
// ���ڿ� ���� strcpy , ���ڿ� �߰� strcat
int main(){
    char data[10] = {'a', 'b', 'c', 0,};
    char result[16];

    strcpy(result, data);
    strcat(result, "def"); // �ڿ� ������.

    printf("%s + \"def\" = %s\n", data, result);
    return 0;
}
*/

int main(){
char data[10] = {'H', 'e', 'l', 'l', 'o', 0,};
char result[13];
strcpy(result, data);
strcat(result, " world!");
printf("%s", result);
    return 0;
}