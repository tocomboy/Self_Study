#include <stdio.h>
/*
void Sum(int, int);
void main(){
    Sum(5, 3);
    printf("5 + 3 = %d", result); // 파일이 분리되면서 result 인식 안됨
}
*/
/////////////////////////////////////////////////////////////////////////////////////////

void Sum(int, int);
extern int result;
void main(){
    Sum(5, 3);
    printf("5 + 3 = %d", result);
}