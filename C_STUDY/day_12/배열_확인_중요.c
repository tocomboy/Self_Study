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
    test(score[1]); // 이런식으로 선언하면 score[1]에 속해있는 배열이 보내짐. -- 즉 score[1][0] ~ score[1][4]까지 보내짐.
    printf("\n");
    test(score[2]);

    return 0;
}