#include <stdio.h>

int main(){
/*
    short int data = 0x0412;

    FILE *p_file = fopen("tipssoft_1.txt", "wt");
    if(NULL != p_file){
        fprintf(p_file, "Hello\n"); // printf �� ����ϰ� ������.
        fprintf(p_file, "%x\n", data); // ���̳ʸ� ���¸� ���ڿ� ���·� ����.
        fclose(p_file);
    }
    */
    int data;

    FILE *p_file = fopen("tipssoft_1.txt", "rt");
    if(NULL != p_file){
        fscanf(p_file, "%d", &data); // scanf �� ����ϰ� ������.
        fclose(p_file);
    }
    printf("%d", data);
    return 0;
}