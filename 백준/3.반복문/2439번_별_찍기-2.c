#include <stdio.h>

int main(){
    int N, i=1, j;
    scanf("%d", &N);
    do{
        for(j=0; j<N-i; j++){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
        i++;
    }while(i<=N);

    return 0;
}