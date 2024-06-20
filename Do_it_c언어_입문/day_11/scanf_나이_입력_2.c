#include <stdio.h>

int main(){
    int num = 0;

    while(1){
        printf("input age : ");
        if(scanf("%d", &num) == 0) { // scanf 는 실패하면 0 반환. - 이상한 입력 방지.
            rewind(stdin);
            printf("[Enter] digit number!! \n");
        } else {
            if(num > 0 && num <= 130){
                break;
            } else {
                printf("Incorrect Age!! \n");
            }
        }
    }
    printf("your age : %d \n", num);

    return 0;
}