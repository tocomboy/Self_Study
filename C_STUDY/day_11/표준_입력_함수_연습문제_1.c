#include <stdio.h>
// 사용자에게 세 개의 정수 값을 입력 받아서 평균 값을 출력하는 프로그램 (입력은 scanf 사용, 입력 실수에 대한 예외처리 X)
int main(){ 
    int num_1, num_2, num_3;
    scanf("%d %d %d", &num_1, &num_2, &num_3);
    printf("%d", (num_1 + num_2 + num_3)/3);

    return 0;
}