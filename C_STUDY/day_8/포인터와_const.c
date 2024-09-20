#include <stdio.h>
/* //////// const로 주소 변경 실수 차단. /////////////////////////
void Swap(int * const pa, int * const pb){ // const를 통해 변경 제한.
    int temp = *pa;
    *pa = *pb; // const 를 사용하여 pa = pb를 입력할 경우 오류 처리 됨으로써 잘못된 코딩 방지. const를 사용하지 않으면 찾기 어려움.
    *pb = temp;
}

int main(){
    int a=96, b=5;
    printf("%d, %d\n", a, b);
    Swap(&a, &b);
    printf("%d, %d", a, b);

    return 0;
}
*/
/* /////////////////// const의 위치에 따른 차이 ///////////////////////////////////
int main(){
    int data = 5, temp  = 0;
    int *const p = &data;
    *p = 3;
    // p = &temp; *const p 는 p에 저장되는 주소를 고정함.

    int data = 5;
    const int *p = &data; // 반면 이 경우에는 *p 를 즉 주소의 도착점인 data의 값을 고정함.
    // *p = 3; // 따라서 이 경우에도 오류발생.
    return 0;
}
// const int * const p 와 같이 p와 *p 둘다 고정할 수 있음.
*/