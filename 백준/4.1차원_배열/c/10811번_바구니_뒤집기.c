#include <stdio.h>
#include <malloc.h>

/*도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 순서대로 적혀져 있다. 
바구니는 일렬로 놓여져 있고, 가장 왼쪽 바구니를 1번째 바구니, 그 다음 바구니를 2번째 바구니, ..., 가장 오른쪽 바구니를 N번째 바구니라고 부른다. 
도현이는 앞으로 M번 바구니의 순서를 역순으로 만들려고 한다. 도현이는 한 번 순서를 역순으로 바꿀 때, 순서를 역순으로 만들 범위를 정하고, 그 범위에 들어있는 바구니의 순서를 역순으로 만든다.
바구니의 순서를 어떻게 바꿀지 주어졌을 때, M번 바구니의 순서를 역순으로 만든 다음, 바구니에 적혀있는 번호를 가장 왼쪽 바구니부터 출력하는 프로그램을 작성하시오.*/

/*첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.
둘째 줄부터 M개의 줄에는 바구니의 순서를 역순으로 만드는 방법이 주어진다. 방법은 i j로 나타내고, 왼쪽으로부터 i번째 바구니부터 j번째 바구니의 순서를 역순으로 만든다는 뜻이다. (1 ≤ i ≤ j ≤ N)
도현이는 입력으로 주어진 순서대로 바구니의 순서를 바꾼다.*/

/*모든 순서를 바꾼 다음에, 가장 왼쪽에 있는 바구니부터 바구니에 적혀있는 순서를 공백으로 구분해 출력한다.*/
void change_baskets(int *basket, int i, int j){
    int temp_basket, middle, count=0;
    middle = (i+j)/2; // 짝수면 중간 값, 홀수면 소수점을 제외한 중간 값. - 5.5 -> 5
    for(;i<=middle; i++){
        temp_basket = *(basket+i);
        *(basket+i) = *(basket+j-count);
        *(basket+j-count) = temp_basket;
        count++;
    }
}

int main(){
    int N, M, i, j, temp, *basket;
    scanf("%d %d", &N, &M);
    basket = (int*)malloc(sizeof(int)*N);
    for(temp=0; temp<N; temp++){ // 바구니 숫자 매김
        *(basket+temp) = temp+1;
    }
    for(temp=0; temp<M; temp++){
        scanf("%d %d", &i, &j);
        change_baskets(basket, i-1, j-1); // i, j를 -1 해야 실제 위치.
    }
    for(temp=0; temp<N; temp++){
        printf("%d ", *(basket+temp));
    }
    free(basket);
    return 0;
}