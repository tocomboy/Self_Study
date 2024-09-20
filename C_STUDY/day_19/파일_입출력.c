#include <stdio.h>

int main(){
    char temp[8] = {'a', 'b', 'c', 0,};
    char dest[8];

    // memcpy(dest, temp, sizeof(temp)); // temp 에서 dest로 8바이트 키기 만큼 메모리를 복사 - 메모리 자체를 복사함. -> 바이너리
    // strcpy(dest, temp); // temp 에서 dest로 4바이트 크기(NULL 포함) 만큼 복사 - NULL 문자 0이 나올때 까지 복사하므로 길이가 필요 없음. -> 텍스트

    return 0;
}