#include <stdio.h>
/*
void Test(){
    int data = 0;
    printf("%d", data++);
}

int main(){
    for(int i = 0; i < 5; i++) Test(); // data가 지역 변수라 출력: 00000
    return 0;
}
*/

void Test(){
    static int data = 0; // 이 함수 내에서는 전역 변수로 취급. 
    printf("%d ", data++);
}

int main(){
    int data = 1;
    for(int i = 0; i < 5; i++) {
        Test(); // data가 static 전역 변수라 출력: 01234
        printf("data = %d\n", data); // 함수를 벗어난 data는 다른 변수.
        } 

    return 0;
}