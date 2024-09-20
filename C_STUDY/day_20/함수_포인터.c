#include <stdio.h>

int Sum(int a, int b){
    int result = 0;
    result = a + b;
    return result;
}

int main(){
    int result = Sum(2, 3);

    &Sum; // Sum 함수의 첫 번째 명령문 주소를 의미함. &을 적지 않아도 같게 처리됨. -> 4줄 - int result = 0; 의 주소값.
    int (*p)(int, int); // Sum 함수를 가리킬 수 있는 함수 포인터를 선언.
    p = &Sum; // Sum 함수의 주소를 p에 저장함.

    int p_result = (*p)(2, 3); // == Sum(2, 3);
    printf("%d", p_result);

    return 0;
}