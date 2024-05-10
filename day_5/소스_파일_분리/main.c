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
extern int result; // 다른 소스파일에서 선언한 전역 변수를 사용하려면 extern 으로 가져와야함.

int main(){
    Sum(5, 3);
    printf("5 + 3 = %d", result);
    return 0;
} // visual studio 에서는 정상 작동함. vscode 에서는 한 프로젝트로 인식하지 않는듯 함.