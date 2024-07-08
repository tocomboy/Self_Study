#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    int i, word_count=0;
    scanf("%s", str);

    int len = strlen(str);

    for(i=0; i<len;){
        if(str[i] == 'c' && (str[i+1] == '=' || str[i+1] == '-')){              // c= c-
            word_count++;
            i += 2;
        } else if(str[i] == 'd'){
            if(str[i+1] == 'z' && str[i+2] == '=') {       // dz=
                i += 3;                 
                word_count++;
            } else if(str[i+1] == '-') {                   // d-
                i += 2;
                word_count++;
            } else {
                word_count++;                              // 중첩 if문이므로 크로아티아 알파벳이 아닌 경우를 예외 처리
                i += 1;
            }
        } else if(str[i] == 'l' && str[i+1] == 'j'){       // lj
            i += 2;
            word_count++;
        } else if(str[i] == 'n' && str[i+1] == 'j'){       // nj
            i += 2;
            word_count++;
        } else if(str[i] == 's' && str[i+1] == '='){       // s=
            i += 2;
            word_count++;
        } else if(str[i] == 'z' && str[i+1] == '='){       // z=
            i += 2;
            word_count++;
        } else if('a' <= str[i] && str[i] <= 'z') {
            word_count++;
            i += 1;
        }
    }
    printf("%d", word_count);

    return 0;
}