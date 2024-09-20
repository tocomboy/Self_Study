#include <stdio.h>
/*
int main(){
    char input_string[15];
    printf("영문 이름을 입력하시오: ");
    gets(input_string);
    // rewind(stdin); // gets 함수는 "엔터"까지 입력 버퍼에서 읽어와 처리하므로 입력 버퍼 초기화 필요 X
    printf("당신의 영문 이름은: %s\n", input_string);

    return 0;
}
*/ // gets 대신 fgets(input_string, 15, stdin)을 사용가능. stdin은 입력 버퍼를 의미. 저장할 메모리의 최대 크기 - 변수의 크기.
/* ///////////////////////////////////// 사용자가 입력 취소시 오류 차단 /////////////////////////////////////
int main(){
    char input_string[10];

    if(NULL != gets(input_string)){ // 사용자가 Ctrl + c 로 입력을 취소하더라도 오류 X (NULL)
        printf("input : %s\n", input_string);
    } else {
        printf("input -> Canceled\n");
    }

    return 0;
}
*/
/* ////////////////// 입력 길이 제한걸기. /////////////////////////////
int GetMyString(char buffer[], int limit){
    int i;
    for(i = 0; i<limit; i++){
        buffer[i] = getchar();
        if(buffer[i] == '\n'){ // 제한 횟수 안에서 엔터키가 확인되면.
            buffer[i] = 0;
            return 1; // 정상적으로 입력 완료
        }
    }
    buffer[i] = 0;
    rewind(stdin);
    return 0; // 입력 초과 발생.
}

int main(){
    char temp[10];
    if(GetMyString(temp, 9)) printf("input : %s\n", temp);
    else printf("input : %s -> out of range\n", temp);

    return 0;
}
*/
