#include <stdio.h>
/* �⺻���� ���ڿ� ���� ���ϱ�.
int main(){
    char data[6] = "happy";
    int count = 0;
    while(data[count] != 0){
        count++;
    }
    printf("%d", count);

    return 0;
}
*/
int GetStringLength(char data[]){ // �����͸� ���� �����鼭 data�� �����.
    int count = 0;
    while(data[count] != 0) count++;
    return count;
}

int main(){
    int data_length;
    char data[10] = {'h', 'a', 'p', 'p', 'y', 0,};
    data_length = GetStringLength(data);
    printf("%d\n", data_length);

    return 0;
}