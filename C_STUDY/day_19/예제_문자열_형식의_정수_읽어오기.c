#include <stdio.h>

int main(){
    int num1, num2, num3;
    FILE *p_file = fopen("tipssoft.txt", "rt");
    if(NULL != p_file){
        fscanf(p_file, "%d %d %d", &num1, &num2, &num3);
        printf("%d %d %d\n", num1, num2, num3);
        // 모든 숫자를 출력하게 하려면.
        while(EOF != fscanf(p_file, "%d", &num1)){
            printf("%d\n", num1);
        }
        fclose(p_file);
    } else {
        printf("fail");
    }


    return 0;
}