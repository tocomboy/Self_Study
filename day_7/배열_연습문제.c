#include <stdio.h>
/*
int main(){ // data 배열의 짝수 번째 값 합산
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
int main(){ // 배열 속 최댓값
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
int main(){  // 3행 4열 크기의 바둑판에 놓여있는 돌 정보로 재구성하기
    char data[12] = {0, }; 
    data[5] = 1; //검은 돌
    data[11] = 2; //흰 돌
    char data_trans[3][4];
    int x, y, i;
    for(i=0; i<12; i++){
        y = i/4; // 행
        x = i%4; // 열
        data_trans[y][x] = data[i];
        printf("%d 행 %d 열 값은 %d 입니다.\n", y+1, x+1, data[i]);
    }

    return 0;
}