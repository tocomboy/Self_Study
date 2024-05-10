#include <stdio.h>
/*
int main(){
    short student[20]; // short형(2바이트 정수형) * 20 = 40바이트//
    student[0] = 'a';
    printf("%c", student[0]);
    return 0;
}
*/
/*
int main(){
    short student[20];

    student[1] = 10;
    printf("%d %d\n", student[1], student[2]); // 배열 초기화 안하면 이상한 숫자 대입됨. 무조건 초기화.
    return 0;
}
*/
/*
int main(){
    short student[20] = {0, }; // {0, } 첫번째에 0을 집어넣고 나머지를 0으로 초기화 - 0대신 다른 수를 넣으면 첫째 자리만 바뀌고 나머지는 그대로 0 // 초기화 시에만 사용.
    
    student[1] = 10;
    printf("%d %d\n", student[1], student[2]);

    return 0;
}
*/

int main(){
    char data[5] = {1, 2, 3, 4, 5};
    int result = 0, i;

    for (i = 0; i < 5; i++){
        result = result + data[i]; // 배열끼리 사칙연산 가능.
    }
    printf("data 배열의 각 요소의 합은 %d입니다.\n", result);
    return 0;
}