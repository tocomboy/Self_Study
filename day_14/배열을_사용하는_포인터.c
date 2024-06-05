#include <stdio.h>
/*
int main(){
    char data[5] = {1, 2, 3, 4, 5};

    int i, sum = 0, select = 2;
    char *p = data + select; // &data[select] 와 동일.
    for(i=0; i<10; i++) sum += *p;

    return 0;
}
*/

int main(){
    char data[5] = {1, 2, 3, 4, 5};
    int result = 0, i;
    char *p = data;

    for(i=0; i<5; i++){
        result += *(p+i); // *p 이후 p++ 와 같은 형식도 가능. -> *p++로 축약해서 사용해도 됨.
        // result += *p++; // 증감 연산자도 다른 연산과 함께 사용 가능.
    }
    printf("data의 각 배열 요소의 합은 : %d", result);

    return 0;
}