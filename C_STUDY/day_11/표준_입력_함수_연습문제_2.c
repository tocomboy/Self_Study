#include <stdio.h>
#include <string.h>
// strcat�� Ȱ���Ͽ� �ΰ��� ���ڿ� ��ġ��. ��, fgets ��� / ���ڿ� �߰��� ���� ���� X
int main(){
    char str_1[10], str_2[10];
    int i;
    fgets(str_1, 10, stdin); // fgets �� ���ڿ� ���� '\n' �� �����Ͽ� ������.
    rewind(stdin);
    fgets(str_2, 10, stdin);
    rewind(stdin);
    for(i=0; i < strlen(str_1); i++){
        if(str_1[i] == '\n'){
            str_1[i] = 0; // ���͸� 0���� �ʱ�ȭ.
        }
    }
    strcat(str_1, str_2);
    printf("%s", str_1);

    return 0;
}