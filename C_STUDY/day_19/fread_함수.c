#include <stdio.h>

int main(){
    int data_1, data_2[5];
    FILE *p_file = fopen("jin.dat", "rb");
    if(NULL != p_file){
        fread(&data_1, sizeof(int), 1, p_file); // 처음부터 4바이트(int 값) 만큼 데이터를 읽어와 data의 시작 주소에 저장함.

        fread(data_2, sizeof(int), 5, p_file); // fwrite 함수와 전반적으로 동일함.

        fread(data_2, sizeof(int)*5, 1, p_file); // 9줄과 동일

        fread(data_2, sizeof(data_2), 1, p_file); // 9줄과 동일

        if(5 == fread(&data_1, sizeof(int), 1, p_file)){ // fwrite 함수와 동일하게 실패할 수 있으므로 조건문으로 확인. - 성공시 반복한 횟수만큼 반환함.

        }

        fclose(p_file);
        printf("file data : %d(0x%04x)\n", data_1, data_1);
    } else {
        printf("file open fail");
    }

    return 0;
}