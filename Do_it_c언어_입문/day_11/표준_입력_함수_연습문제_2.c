#include <stdio.h>
#include <string.h>
// strcat을 활용하여 두개의 문자열 합치기. 단, fgets 사용 / 문자열 중간에 엔터 포함 X
int main(){
    char str_1[10], str_2[10];
    int i;
    fgets(str_1, 10, stdin); // fgets 는 문자열 끝에 '\n' 을 포함하여 가져옴.
    rewind(stdin);
    fgets(str_2, 10, stdin);
    rewind(stdin);
    for(i=0; i < strlen(str_1); i++){
        if(str_1[i] == '\n'){
            str_1[i] = 0; // 엔터를 0으로 초기화.
        }
    }
    strcat(str_1, str_2);
    printf("%s", str_1);

    return 0;
}