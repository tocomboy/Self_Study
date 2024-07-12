#include <stdio.h>

int main(){
/*
    short int data = 0x0412;

    FILE *p_file = fopen("tipssoft_1.txt", "wt");
    if(NULL != p_file){
        fprintf(p_file, "Hello\n"); // printf 와 비슷하게 동작함.
        fprintf(p_file, "%x\n", data); // 바이너리 형태를 문자열 형태로 저장.
        fclose(p_file);
    }
    */
    int data;

    FILE *p_file = fopen("tipssoft_1.txt", "rt");
    if(NULL != p_file){
        fscanf(p_file, "%d", &data); // scanf 와 비슷하게 동작함.
        fclose(p_file);
    }
    printf("%d", data);
    return 0;
}