#include <stdio.h>

/*첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제*/

int main(){
    int N, i=1, j;
    scanf("%d", &N);
    do{
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
        i++;
    }while(i<=N);

    return 0;
}