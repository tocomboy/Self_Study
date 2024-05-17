#include <stdio.h>

// 직접 주소 방식 - 어셈블리어
// short birthday; /* birth가 메모리주소 0x00000066에 위치한다고 가정함. */
// brithday = 0x0412; /* mov word ptr[00000066h], 0412h로 번역함. */
/*
int main(){
    short birthday; // short형 변수 birthday 를 선언함
    short *ptr; // 포인터 변수 선언함.
    ptr = &birthday; // birthday 변수의 주소를 ptr 변수에 대입함.

    printf("birthday 변수의 주소는 %p입니다.\n", ptr);

    return 0;
}
*/
///////////////////////////////
/*
int main(){
    short birthday;
    short *ptr = &birthday; // 포인터 변수를 선언하기 위해 사용
    *ptr = 1042; // 번지 지정 연산자, ptr 연사자가 가리키는 대상에 가서 1042 값을 대입하겠다는 의미.

    return 0;
}
*/
///////////////////////////// 다른 변수의 주소를 사용하여 포인터로 값 대입하기. ///////////////////////////
/*
int main(){
    short birthday;
    short *ptr;
    ptr = &birthday; // birthday 변수의 주소를 ptr 변수에 대입함.
    *ptr = 0x0412; // birth = 0x0412; 와 같은 결과 - 즉 ptr에 저장된 주소로 이동해서 대입.

    printf("birtday = %d (0x%04x)\n", birthday, birthday);

    return 0;
}
*/
// short *ptr;
// ptr = (short *)0x0000006C; - 포인터 변수 ptr에 주소를 직접 대입.

/* ////////// 매개변수로 다른 함수의 변수 주소 받기 ////////////////////////
void Test(short *ptr){
    short soft = 0;
    soft = *ptr;
    *ptr = 3;
}

int main(){
    short tips = 0;
    Test(&tips); // ptr = &tips; 와 동일.

    return 0;
}
*/

/////////////// 간접 주소 지정 방식으로 변수 값 교환하기 /////////////////////////////
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int start = 96, end = 5;

    printf("brfore : start = %d, end = %d\n", start, end);
    if(start > end){
        Swap(&start, &end);
    }
    printf("after : start = %d, end = %d\n", start, end);

    return 0;
}