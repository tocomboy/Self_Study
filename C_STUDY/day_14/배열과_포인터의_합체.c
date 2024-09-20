#include <stdio.h>

int main(){
    char data1, data2, data3, data4, data5, i;
    char *p[5] = {&data1, &data2, &data3, &data4, &data5};
    for(i=0; i<5; i++) *p[i] = 'a';

    for(i=0; i<5; i++) printf("%c\n", *p[i]);

    return 0;
} // char *p[5] 와 char (*p)[5]는 완전히 다름.
// char *p[5]는 배열이 선언된 후 포인터가 배열안에 들어감.(포인터는 배열의 요소) p[5] 배열에 주소가 저장됨.
// char (*p)[5]는 포인터가 선언되고 포인터가 가리키는 배열이 생김.(포인터가 배열을 가리킴.) char [5]를 가리킴.

/*
int main(){
        char (*p)[5];
        p++; // p = p + 1; 과 같으므로 주소가 5 증가함. -> 가리키는 배열의 크기만큼 더 움직임.
    return 0;
}
*/

int main(){
    char data[3][5];
    char (*p)[5];
    p = data;
    (*p)[1] = 3;
    (*(p+1))[2] = 4;
    (*(p+2))[4] = 5;

    return 0;
}