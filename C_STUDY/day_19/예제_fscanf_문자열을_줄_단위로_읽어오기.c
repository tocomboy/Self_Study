#include <stdio.h>

int main(){
    char temp[64];
    FILE *p_file = fopen("tipssoft.txt", "rt");
    if(NULL != p_file){
        while(EOF != fscanf(p_file, "%s", temp)){ // temp = &temp[0]
            printf("%s\n", temp);
        }
        fclose(p_file);
    } else {
        printf("fail");
    }

    return 0;
}