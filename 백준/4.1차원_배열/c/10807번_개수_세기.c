#include <stdio.h>
#include <malloc.h>

/*총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.*/

int main(){
    //int N, v, i, integer[100], count=0; // 1번
    int N, v, i, *integer, count=0; // 2번
    
    scanf("%d", &N);
    /*
    for(i=0; i<N; i++){ // 1번
        scanf("%d", &integer[i]);
    }
    */
    integer = (int*)malloc(sizeof(int)*N); // 2번
    for(i=0; i<N; i++){
        scanf("%d", integer+i);
    }
    scanf("%d", &v);


    for(i=0; i<N; i++){
        if(integer[i] == v) count++;
    }
    printf("%d", count);
    
    free(integer);
    return 0;
}