#include <stdio.h>
#include <string.h> // strlen 함수.
#include <stdlib.h> // atoi 함수.
/*
int main(){ /////////// 아스키 코드를 이용해 정수 변환. /////////////////////////////////
    int pos_num = 100, num = 0, i, temp_num; // pos_num - 각 자릿수에 곱할 숫자, num은 정수로 변환될 숫자를 저장할 변수

    char num_string[4] = "123";

    for(i = 0; i<3 ; i++){
        temp_num = num_string[i] - '0'; // 문자열 아스키 숫자에서 '0'을 빼면 숫자가 나옴. 1(49) - 0(48) = 1(1)
        num = num + temp_num * pos_num;
        pos_num = pos_num / 10; // 왼쪽부터 오른쪽으로 이동하므로 한자리씩 내려감.
    }

    printf("%s -> %d\n", num_string, num);

    return 0;
}
*/
/*
int main(){ //////////// 길이 제한 없이 문자열 형식의 숫자를 정수로 변환. ///////////////////////////////////
    int pos_num = 1, num = 0, i, count;
    char num_string[4] = "123";

    count = strlen(num_string);
    for(i=0; i<(count-1); i++) pos_num *= 10; // 문자열 길이를 사용해 pos_num 즉 최대 자릿수를 확인.

    for(i=0; i<count; i++){
        num += (num_string[i] - '0') * pos_num;
        pos_num /= 10;
    }
    printf("%s -> %d\n", num_string, num);

    return 0;
}
*/
/*
int main(){ /////////////// 길이 제한 없이 문자열 형식의 숫자를 정수로 변환. strlen 불필요. /////////////////////////////
    int num = 0, count = 0;
    char num_string[4] ="123";
    while(num_string[count] != 0){
        num = num * 10 + (num_string[count] - '0'); // 다음 자릿수로 넘어갈때 이전 숫자들을 한자리씩 올림. (num * 10)
        count++;
    }
    printf("%s -> %d\n", num_string, num);
    return 0;
}
*/
/* ///////////////// 두 개의 숫자를 입력받아 합산하기. ////////////////////////////
int ArrayToInterger(char string[]){
    int count = 0, num = 0;

    while(string[count] != 0){ // fgets 를 사용하기 위해서는 현 조건에다 && string[count] != '\n' 을 추가해야함. fgets 끝에는 엔터까지 가져오기 때문에 현 조건문으로는 오류발생.
        num = num * 10 + string[count] - '0';
        count++;
    }
    return num;
}

int main(){
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number : ");
    gets(first_string);
    printf("input second number : ");
    gets(second_string); // fgets를 사용하니 오류 발생. -> 53줄에서 문제 발생.

    first_num = ArrayToInterger(first_string);
    second_num = ArrayToInterger(second_string);
    printf("%d + %d = %d\n", first_num, second_num, first_num+second_num);

    return 0;
}
*/
int main(){
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number : ");
    gets(first_string);
    printf("input second number : ");
    gets(second_string);

    first_num = atoi(first_string); // 문자열 -> 정수
    second_num = atoi(second_string); // 문자열 -> 정수
    printf("%d + %d = %d\n", first_num, second_num, first_num+second_num);

    return 0;
}