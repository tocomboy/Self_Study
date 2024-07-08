#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, 
kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.*/

/*첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에 단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.*/

/*첫째 줄에 그룹 단어의 개수를 출력한다.*/
int Group_Word_Checker(char *word){
    int i, j, len=strlen(word), result=1;
    for(i=0; i<len; i++){
        while(word[i] == word[i+1]) i++; // 반복되는 알파벳 끝까지 이동.
        for(j=i+2; j<len; j++){
            if(word[i] == word[j]) result = 0; // 이후 한칸 띄워진 index 부터 동일한 알파벳이 존재하면 그룹 단어가 아님.
        }
    }

    return result;
}

int main(){
    int N, i, count = 0;
    char *word;
    word = (char*)malloc(sizeof(char)*101);

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%s", word);
        count += Group_Word_Checker(word);
    }

    printf("%d", count);

    free(word);
    return 0;
}