#include <stdio.h>

int Sum(int a, int b){
    return a+b;
}

int Sub(int a, int b){
    return a-b;
}

int Mul(int a, int b){
    return a*b;
}

int Div(int a, int b){
    return a/b;
}

int main(){
    int result_1, result_2, result_3, result_4;
    result_1 = Sum(8, 2);
    result_2 = Sub(8, 2);
    result_3 = Mul(8, 2);
    result_4 = Div(8, 2);

    int (*p[4])(int, int) = {&Sum, &Sub, &Mul, &Div}; // 포인터 배열로 4가지 함수 다 사용 가능.
    int result[4], i;
    for(i=0; i<4; i++) result[i] = (*p[i])(8, 2);

    for(i=0; i<4; i++) printf("%d ", result[i]);

    typedef int (*OP_TPYE)(int, int); // OP_TYPE 라는 새로운 자료형을 정의함.
    OP_TPYE p[4] = {&Sum, &Sub, &Mul, &Div}; // typedef 문법으로 단순화 시켜 사용함.


    return 0;
}