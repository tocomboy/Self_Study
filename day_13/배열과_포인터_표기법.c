#include <stdio.h>
/*
int main(){ // 배열과 포인터 표기법의 차이.
    int data[2] = {0x12345678, 0x12345678};
    //data[1] = 0x22; ///////// 0x12345678 -> 0x22
    // *(data + 1) = 0x22; //// 0x12345678 -> 0x22 int형으로 저장되기 때문에 자료형 전체가 바뀜.
    *(char *)(data + 1) = 0x22; // 0x12345678 -> 0x12345622 char형으로 대입하기 때문에 1바이트만 바뀜. (int 4바이트 -> char 2바이트)
    printf("0x%x", data[1]);

    return 0;
}   ////////// 배열 대신 포인터로 표현하면 세부적인 내용 바꾸기 좋음. (주소 사용.)
*/
int main(){
    int tips = 0x12345678, sum;
    char *p;
    p = (char *)&tips;
    sum = *(p + 0)+*(p + 1)+*(p + 2)+*(p + 3); // 둘다 같음.
    sum = p[0] + p[1] + p[2] + p[3]; // 둘다 같음.

    return 0;
}