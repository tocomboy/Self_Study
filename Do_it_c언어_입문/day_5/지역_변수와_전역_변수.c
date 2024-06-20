#include <stdio.h>

/* // 지역 변수는 함수 내에서만 적용
int ReturnNum(){
    int num = 5;
    return num;
}

int main(){
    ReturnNum();
    printf("%d", num); //num을 찾을 수 없음. - 지역 변수
    return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////
/*
int Sum(int data_1, int data_2){
    int result = data_1 + data_2;
    return result;
}
int main(){
    int result; // 지역 변수는 중복 사용 가능
    result = Sum(5, 3);
    printf("5 + 3  = %d");
    return 0;
}
*/

/////////////////////////////////////////////////////////////////////////////////////////
/*
int result; // 모든 전역변수는 초기화 하지 않아도 자동으로 0으로 초기화 

void Sum(int data_1, int data_2){
    result = data_1 + data_2;
}

int main(){
    Sum(5, 3);
    printf("5 + 3 = %d", result);
    return 0;
}
*/
// 만약 전역 변수와 지역 변수가 함께 사용되면 함수 내에 있는 지역 변수가 우선 처리됨
/////////////////////////////////////////////////////////////////////////////////////////