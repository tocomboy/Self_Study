#include <stdio.h>

//FILE *p_file; // 표준 입출력 라이브러리는 'FILE 구조체'로 포인터 변수를 선언하고 파일 입출력 함수를 호출할 때 마다 이 변수를 넘겨주도록 만들어져 있음. 
//fseek(p_file, 0, SEEK_SET);

int main(){

    FILE *p_file = fopen("tipssoft.dat", "r"); // 프로그램 작업 경로에 해당 파일이 존재하는 경우.
    //FILE *p_file = fopen("C:\\tipssoft\\tips.dat", "r"); // 프로그램 작업 경로에 존재하지 않는 경우.
    if(NULL != p_file){ // 파일 열기 성공
        printf("opne");
    } else { // 파일 열기 실패
        printf("fail");
    }

    return 0;
}