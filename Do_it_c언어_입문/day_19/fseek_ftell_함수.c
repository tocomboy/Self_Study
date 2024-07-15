#include <stdio.h>

int main(){
    int file_size = 0;
    FILE *p_file = fopen("tipssoft.dat", "rb");
    if(p_file != NULL){
        fseek(p_file, 0, SEEK_SET); // 파일의 시작 위치로 이동.
        fseek(p_file, 32, SEEK_CUR); // 현재 위치에서 32바이트 만큼 뒤로 이동.
        fseek(p_file, 0, SEEK_END);
        file_size = ftell(p_file); // 현재 파일 위치로 파일 크기를 구함.
        printf("파일 크기 : %d\n", file_size);
        fclose(p_file);
    } else {
        printf("file fail");
    }
    

    return 0;
}