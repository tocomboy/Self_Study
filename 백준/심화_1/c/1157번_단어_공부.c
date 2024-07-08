#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.*/

/*첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.*/

/*첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.*/
int main(){
    int i, temp, alphabet_count[28] = {0, }, max_count=0, prev_max_count=-1, index= 0, prev_index=-1;
    char str[1000001];
    scanf("%s", str);

    int len = strlen(str); // 반복문 안에서 strlen 사용하면 시간 초과 걸림! 절대 사용 X

    for(i=0; i<len; i++){
        if('a' <= str[i] && str[i] <= 'z') str[i] = toupper(str[i]);
        alphabet_count[(int)str[i]-65] += 1;
    }

    max_count = alphabet_count[0];
    index = 0;

    for(i=1; i<28; i++){
        if(alphabet_count[i] >= max_count){
            prev_max_count = max_count;
            prev_index = index;
            max_count = alphabet_count[i]; // 알파벳 카운트
            index = i; // 알파벳 확인용 인덱스
        }
    }
    
    if(prev_index != index && prev_max_count == max_count) printf("?");
    else printf("%c", index+65);
    

    

    return 0;
}

/*
int main(){ //////////////////// 시간 초과.
    char str[1000000], max_alphabet, second_max_alphabet;
    int i, j, max_count = 0, second_max_count = 0, temp_count;
    scanf("%s", str);
    int len = strlen(str);
    for(i=0; i<len; i++){
        str[i] = toupper(str[i]);
    }
    for(i=0; i<len; i++){
        
        temp_count = 0;
        for(j=i; j<len; j++){
            if(str[i] == str[j]){
                temp_count++;
            }
        }
        if(max_count < temp_count) { // 제일 많은 알파벳
            max_count = temp_count;
            max_alphabet = str[i];
        } else if(second_max_count < temp_count) { // 두번째로 많은 알파벳
            second_max_count = temp_count;
            second_max_alphabet = str[i];
        }
    }

    if(max_alphabet != second_max_alphabet && max_count == second_max_count){ // 가장 많이 사용된 서로 다른 알파벳의 수가 같을 경우
        printf("?");
    } else{
        printf("%c", max_alphabet);
    }

    return 0;
}
*/