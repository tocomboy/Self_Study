#include <stdio.h>

int main(){
    char temp[64];
    FILE *p_file = fopen("tipssoft.txt", "rt");
    if(NULL != p_file){
        while(NULL != fgets(temp, sizeof(temp), p_file)){
            printf("%s", temp);
        }
        fclose(p_file);
    } else {
        printf("fail");
    }

    return 0;
}