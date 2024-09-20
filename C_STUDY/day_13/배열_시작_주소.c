#include <stdio.h>

int main(){
    char data[4]; // &data -> 주소를 얻겠다 //  *data -> data가 가리키는 대상.
    char *p = &data[0]; // 배열의 첫 번째 항목의 주소가 배열 전체의 시작 주소와 같음.
    //char *p = &*(data + 0);
    //char *p = &*(data); // & * 은 상반됨으로 상쇄됨.
    //char *p = data; // 모두 동일함.

    return 0;
}
// #define A 100
// A = A + 1 는 불가능함. A의 값이 100으로 치환되기 때문에 대입 불가능.
// 배열도 마찬가지임.
// char data[5];
// data = data + 1; 또한 불가능. 배열의 이름 자체가 컴파일러에서 주소로 바로 치환하기 때문에 사용 불가능.
// data[0] = data[0] + 1 은 가능.