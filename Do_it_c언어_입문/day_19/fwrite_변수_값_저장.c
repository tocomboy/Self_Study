#include <stdio.h>

int main(){
    int data_1 = 0x00000412;
    int data_2[5] = {0, 1, 2, 3, 4};
    FILE *p_file = fopen("jin.dat", "wb"); // 쓰기 모드로 바이너리 파일 오픈
    if(NULL != p_file){ // fwrite(입력 자료 시작 주소, 단위 크기, 반복 횟수, 입력 파일)
        fwrite(&data_1, sizeof(int), 1, p_file); // data의 시작 주소 부터 / 4바이트(int) 크기 만큼 / 한번만 / p_file 포인터가 가르키는 파일에 저장.

        fwrite(data_2, sizeof(int), 5, p_file); // 횟수를 지정할 수 있는 이유 - 배열 값을 저장 가능.

        fwrite(data_2, sizeof(int)*5, 1, p_file); // 10줄과 동일

        fwrite(data_2, sizeof(data_2), 1, p_file); // 10줄과 동일

        if( 5 == fwrite(data_2, sizeof(int), 5, p_file)){ // fwrite 함수를 성공시 실제 성공한 횟수를 반환 - 함수가 실패하는 경우도 있으므로 if문을 사용해 예외처리 해주기. 
        fclose(p_file);
    }
    else {
        printf("file open fail");
    }

    return 0;
}