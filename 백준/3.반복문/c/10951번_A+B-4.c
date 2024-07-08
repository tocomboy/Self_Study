#include <stdio.h>

/*두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.*/
/*케이스가 끝나는 값이 지정 안되어있음.*/

int main(){
    int A, B;
    while(scanf("%d %d", &A, &B) != EOF){ // EOF(End Of File) - C언어는 파일에 끝에 도달 했을때 언제나 특별한 값을 반환하도록 함. == -1 , EOF -> 파일 끝 확인해서 정지.
        printf("%d\n", A+B);
    }

    return 0;
}