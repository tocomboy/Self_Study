#include <stdio.h>
#include <string.h>

// 문자열 길이 strlen 함수
/*
int main(){
    int data_length;
    char data[10] = {'h', 'a', 'p', 'p', 'y', 0,};
    data_length = strlen(data);
    printf("%d\n\n", data_length);
}
*/
/*
// 문자열 복사 strcpy , 문자열 추가 strcat
int main(){
    char data[10] = {'a', 'b', 'c', 0,};
    char result[16];

    strcpy(result, data);
    strcat(result, "def"); // 뒤에 덧붙임.

    printf("%s + \"def\" = %s\n", data, result);
    return 0;
}
*/

int main(){
char data[10] = {'H', 'e', 'l', 'l', 'o', 0,};
char result[13];
strcpy(result, data);
strcat(result, " world!");
printf("%s", result);
    return 0;
}