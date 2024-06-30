#include <stdio.h>
#include <malloc.h>
#include <string.h>

/*영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.*/

/*첫 줄에 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 
단어는 공백 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열은 공백으로 시작하거나 끝날 수 있다.*/

/*첫째 줄에 단어의 개수를 출력한다.*/
int main(){
    int word_count = 1, i;
    char *str;
    str = (char*)malloc(sizeof(char)*1000001);
    gets(str);

    if(strlen(str) == 1 && str[0] == ' ') word_count--; // 공백 하나만 주어짐.
    
    for(i=0; i<strlen(str); i++){ // 1. 공백만 입력 / 2. 문자열 끝이 공백 / 3. 공백으로 시작하는 문자열.
        if(str[i] == ' ' && str[i-1] != ' ' && str[i+1] != ' ') {  // 단어 사이에 있는 공백 확인
            if(i==0) continue; // 공백으로 문자열 시작
            else if(i==strlen(str)-1) continue; // 공백으로 문자열 끝
            else word_count++;
        }
    }

    printf("%d", word_count);

    free(str);
    return 0;
}