#include <stdio.h>
#include <string.h> // strlen �Լ�.
#include <stdlib.h> // atoi �Լ�.
/*
int main(){ /////////// �ƽ�Ű �ڵ带 �̿��� ���� ��ȯ. /////////////////////////////////
    int pos_num = 100, num = 0, i, temp_num; // pos_num - �� �ڸ����� ���� ����, num�� ������ ��ȯ�� ���ڸ� ������ ����

    char num_string[4] = "123";

    for(i = 0; i<3 ; i++){
        temp_num = num_string[i] - '0'; // ���ڿ� �ƽ�Ű ���ڿ��� '0'�� ���� ���ڰ� ����. 1(49) - 0(48) = 1(1)
        num = num + temp_num * pos_num;
        pos_num = pos_num / 10; // ���ʺ��� ���������� �̵��ϹǷ� ���ڸ��� ������.
    }

    printf("%s -> %d\n", num_string, num);

    return 0;
}
*/
/*
int main(){ //////////// ���� ���� ���� ���ڿ� ������ ���ڸ� ������ ��ȯ. ///////////////////////////////////
    int pos_num = 1, num = 0, i, count;
    char num_string[4] = "123";

    count = strlen(num_string);
    for(i=0; i<(count-1); i++) pos_num *= 10; // ���ڿ� ���̸� ����� pos_num �� �ִ� �ڸ����� Ȯ��.

    for(i=0; i<count; i++){
        num += (num_string[i] - '0') * pos_num;
        pos_num /= 10;
    }
    printf("%s -> %d\n", num_string, num);

    return 0;
}
*/
/*
int main(){ /////////////// ���� ���� ���� ���ڿ� ������ ���ڸ� ������ ��ȯ. strlen ���ʿ�. /////////////////////////////
    int num = 0, count = 0;
    char num_string[4] ="123";
    while(num_string[count] != 0){
        num = num * 10 + (num_string[count] - '0'); // ���� �ڸ����� �Ѿ�� ���� ���ڵ��� ���ڸ��� �ø�. (num * 10)
        count++;
    }
    printf("%s -> %d\n", num_string, num);
    return 0;
}
*/
/* ///////////////// �� ���� ���ڸ� �Է¹޾� �ջ��ϱ�. ////////////////////////////
int ArrayToInterger(char string[]){
    int count = 0, num = 0;

    while(string[count] != 0){ // fgets �� ����ϱ� ���ؼ��� �� ���ǿ��� && string[count] != '\n' �� �߰��ؾ���. fgets ������ ���ͱ��� �������� ������ �� ���ǹ����δ� �����߻�.
        num = num * 10 + string[count] - '0';
        count++;
    }
    return num;
}

int main(){
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number : ");
    gets(first_string);
    printf("input second number : ");
    gets(second_string); // fgets�� ����ϴ� ���� �߻�. -> 53�ٿ��� ���� �߻�.

    first_num = ArrayToInterger(first_string);
    second_num = ArrayToInterger(second_string);
    printf("%d + %d = %d\n", first_num, second_num, first_num+second_num);

    return 0;
}
*/
int main(){
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number : ");
    gets(first_string);
    printf("input second number : ");
    gets(second_string);

    first_num = atoi(first_string); // ���ڿ� -> ����
    second_num = atoi(second_string); // ���ڿ� -> ����
    printf("%d + %d = %d\n", first_num, second_num, first_num+second_num);

    return 0;
}