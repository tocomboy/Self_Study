#include <stdio.h>
/*
int main(){ // data �迭�� ¦�� ��° �� �ջ�
    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result=0, i;
    for(i=1; i<10; i+=2){
            result += data[i];
    }
    printf("%d", result);
    return 0;
}
*/
/*
int main(){ // �迭 �� �ִ�
    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int biggest = 0, i;
    for(i=0; i<10; i++){
        if(data[i] > data[biggest]){
            biggest = i;
        }
    }
    printf("Biggest number in data is %d", data[biggest]);
}
*/
int main(){  // 3�� 4�� ũ���� �ٵ��ǿ� �����ִ� �� ������ �籸���ϱ�
    char data[12] = {0, }; 
    data[5] = 1; //���� ��
    data[11] = 2; //�� ��
    char data_trans[3][4];
    int x, y, i;
    for(i=0; i<12; i++){
        y = i/4; // ��
        x = i%4; // ��
        data_trans[y][x] = data[i];
        printf("%d �� %d �� ���� %d �Դϴ�.\n", y+1, x+1, data[i]);
    }

    return 0;
}