#include <stdio.h>
/*
int main(){
    char input_string[15];
    printf("���� �̸��� �Է��Ͻÿ�: ");
    gets(input_string);
    // rewind(stdin); // gets �Լ��� "����"���� �Է� ���ۿ��� �о�� ó���ϹǷ� �Է� ���� �ʱ�ȭ �ʿ� X
    printf("����� ���� �̸���: %s\n", input_string);

    return 0;
}
*/ // gets ��� fgets(input_string, 15, stdin)�� ��밡��. stdin�� �Է� ���۸� �ǹ�. ������ �޸��� �ִ� ũ�� - ������ ũ��.
/* ///////////////////////////////////// ����ڰ� �Է� ��ҽ� ���� ���� /////////////////////////////////////
int main(){
    char input_string[10];

    if(NULL != gets(input_string)){ // ����ڰ� Ctrl + c �� �Է��� ����ϴ��� ���� X (NULL)
        printf("input : %s\n", input_string);
    } else {
        printf("input -> Canceled\n");
    }

    return 0;
}
*/
/* ////////////////// �Է� ���� ���Ѱɱ�. /////////////////////////////
int GetMyString(char buffer[], int limit){
    int i;
    for(i = 0; i<limit; i++){
        buffer[i] = getchar();
        if(buffer[i] == '\n'){ // ���� Ƚ�� �ȿ��� ����Ű�� Ȯ�εǸ�.
            buffer[i] = 0;
            return 1; // ���������� �Է� �Ϸ�
        }
    }
    buffer[i] = 0;
    rewind(stdin);
    return 0; // �Է� �ʰ� �߻�.
}

int main(){
    char temp[10];
    if(GetMyString(temp, 9)) printf("input : %s\n", temp);
    else printf("input : %s -> out of range\n", temp);

    return 0;
}
*/
