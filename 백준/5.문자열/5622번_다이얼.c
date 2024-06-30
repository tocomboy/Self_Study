#include <stdio.h>
#include <string.h>

/*첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어의 길이는 2보다 크거나 같고, 15보다 작거나 같다.*/

/*첫째 줄에 다이얼을 걸기 위해서 필요한 최소 시간을 출력한다.*/

int main(){
    char number_str[16];
    int i, time=0;
    gets(number_str);
    for(i=0; i<strlen(number_str); i++){
        if(number_str[i] >= 'A' && number_str[i] <= 'C'){
            time += 3;
        } else if(number_str[i] >= 'D' && number_str[i] <= 'F'){
            time += 4;
        } else if(number_str[i] >= 'G' && number_str[i] <= 'I'){
            time += 5;
        } else if(number_str[i] >= 'J' && number_str[i] <= 'L'){
            time += 6;
        } else if(number_str[i] >= 'M' && number_str[i] <= 'O'){
            time += 7;
        } else if(number_str[i] >= 'P' && number_str[i] <= 'S'){
            time += 8;
        } else if(number_str[i] >= 'T' && number_str[i] <= 'V'){
            time += 9;
        } else if(number_str[i] >= 'W' && number_str[i] <= 'Z'){
            time += 10;
        }
    }
    printf("%d", time);

    return 0;
}