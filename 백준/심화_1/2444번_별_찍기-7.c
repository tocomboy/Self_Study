#include <stdio.h>

/*예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.*/

/*첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.*/

/*첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.*/

/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

int main(){
    int N, i, j, star=1, blank;
    scanf("%d", &N);
    blank = N-1;
    for(i=1; i<=(2*N)-1; i++){ // 중간 까지 별 2개씩 늘어남 이후 2개씩 감소 / 빈칸도 맞춰서 줄어들었다 중간 이후부터 늘어남.
        if(i<N){
            for(j=0; j<blank; j++){
                printf(" ");
            }
            for(j=0; j<star; j++){
                printf("*");
            }
            printf("\n");
            blank--;
            star += 2;
        } else {
            for(j=0; j<blank; j++){
                printf(" ");
            }
            for(j=0; j<star; j++){
                printf("*");
            }
            printf("\n");
            blank++;
            star -= 2;
        }
    }

    return 0;
}