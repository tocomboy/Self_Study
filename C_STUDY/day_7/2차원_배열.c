#include <stdio.h>
/*
int main(){
    char data[5][4]; // 5�� 4�� (y, x) 
    char data[4][5]; // 4�� 5�� (x, y) - ���⿡�� ���ϳ� ������ ������ �־� ��Ʊ� ������ ������ ��츦 �� ���� �����.
    return 0;
}
*/
/*
int main(){
    char temp[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2���� �迭 �ʱ�ȭ
    char data[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    return 0;
}
*/
//char temp[M][N]; 2���� �迭�� 1���� �迭�� ���輺.
//char test[L]; // M * N = L �̶� ������.
// �̶� test[a] == temp[a/M][a%N]
// temp[b][c] == test[b*N+c]
/*
int main(){ // 1�� �迭�� �ٵ��� ���� �����ϰ� ���
    char data[13] = {0, 0, 2, 0, 1, 1, 0, 0, 2, 1, 0, 2, 4}; // 3�� 4�� �ٵ��� ���� 0 - ���� / 1 - ���� �� / 2 - �� ��
    int i, x, y;

    for (i = 0; i < 13; i++){
        x = i%4 + 1; // ��
        y = i/4 + 1; // ��
        printf("%d�� %d����", y, x);
        switch (data[i]){
            case 0 : 
                printf("�� ���� ���� ���� �ʽ��ϴ�.\n");
                break;
            case 1 : 
                printf(" ���� ���� ���� �ֽ��ϴ�.\n");
                break;
            case 2 : 
                printf(" �� ���� ���� �ֽ��ϴ�.\n");
                break;
            default:
                printf(" �ش� ������ �����ϴ�.");
                break;
        }
    }

    return 0;
}
*/
int main(){
    char data[3][4] = {{0, 0, 2, 0}, {1, 1, 0, 0}, {2, 1, 0, 2}}; // 3�� 4�� �ٵ��� ���� 0 - ���� / 1 - ���� �� / 2 - �� ��
    int x, y;

    for(y = 0; y < 3; y++){
        for(x = 0; x < 4; x++){
            printf("%d�� %d����", y+1, x+1);
            if(data[x][y] == 1) printf(" �� ���� ���� �ֽ��ϴ�.\n");
            else if (data[x][y] == 2) printf(" ���� ���� ���� �ֽ��ϴ�.\n");
            else printf("�� ���� ���� ���� �ʽ��ϴ�\n");
        }
    }
    return 0;
}