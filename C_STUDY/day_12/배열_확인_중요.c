#include <stdio.h>

void test(int score[]){
    for(int i=0; i<5; i++){
        printf("%d", score[i]);
    }
}

int main(){
    int score[4][5];
    for(int i=0; i<5; i++){
        score[1][i] = i;
    }
    test(score[1]); // �̷������� �����ϸ� score[1]�� �����ִ� �迭�� ������. -- �� score[1][0] ~ score[1][4]���� ������.
    printf("\n");
    test(score[2]);

    return 0;
}