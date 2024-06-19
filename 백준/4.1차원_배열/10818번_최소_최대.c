#include <stdio.h>
#include <malloc.h>
//문제
/*N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.*/
/*// 입력
첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
*/
//출력
/*첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.*/

int main(){
    int N, *integer, i, biggest, smallest;
    scanf("%d", &N);
    integer = (int*)malloc(sizeof(int)*N);
    for(i=0; i<N; i++){
        scanf("%d", (integer+i));
    }
    biggest = *(integer+0);
    smallest = *(integer+0);
    for(i=0; i<N; i++){
        if(biggest < *(integer+i)) biggest = *(integer+i);
        if(smallest > *(integer+i)) smallest = *(integer+i);
    }
    printf("%d %d", smallest, biggest);

    return 0;
}