#include <stdio.h>
/*
int main(){
    int int_data;
    float float_data;

    scanf("%d", &int_data); // 공백문자 or 엔터로 구분함. 실제 값만 인식하기 때문에 중간에 엔터, 공백이 많이 들어와도 상관 X.
    scanf("%f", &float_data);

    printf("%d, %f", int_data, float_data);

    return 0;
}
*/
////// scanf 사용시 "서울시 광진구 자양동"(공백문자가 포함된 문자열)을 입력 받으면 공백문자 때문에 "서울시" 만 저장됨. 이에 주의하여 사용 (gets 를 사용하기).
/*
int main(){
    char temp[32];
    scnaf("%s", &temp);
    printf("input string : %s", temp);
    return 0;
}
*/
/*
int main(){
    int num1, num2, num3;
    scanf("%o %d %x", &num1, &num2, &num3);
    printf("input : %d, %d, %d \n", num1, num2, num3);

    return 0;
}
*/ // short 형으로 입력받고 싶으면 %hd, %ho, %hx 사용.



