#include <stdio.h>

int main(){
    //읽기
    FILE *p_file = fopen("tips.dat", "rb"); // 바이너리 파일 "r"만 사용해도 됨
    FILE *p_file = fopen("tips.txt", "rt"); // 텍스트 파일

    //쓰기
    FILE *p_file = fopen("tips.dat", "wb"); // "w"만 사용해도 됨
    FILE *p_file = fopen("tips.txt", "wt");

    //이어 쓰기
    FILE *p_file = fopen("tips.dat", "ab"); // "a"만 사용해도 됨
    FILE *p_file = fopen("tips.txt", "at");

    // rb+ r+b / rt+ r+t 읽기 강조 - 읽기와 쓰기를 같이 사용할 때 "읽기 강조" // 기존 파일이 없으면 읽기 실패, 있는 경우에는 원래 존재하는 파일의 내용을 지우지는 않지만 덮어 쓰기는 가능

    // wb+ w+b / wt+ w+t 쓰기 강조 - 읽기와 쓰기를 같이 사용할 때 "쓰기 강조" // 파일이 없으면 새로 만듦, 이미 존재하면 기존 파일 내용을 모두 지우고 시작.

    // ab+ a+b / at+ a+t 읽기와 이어쓰기를 같이 사용하기. - 읽기 + 쓰기 사용시 "확장 강조" // 기존 파일이 없으면 파일을 새로 만듦, 파일이 존재하면 파일 내용을 지우지 않고 이어서 시작함.

    // 즉 읽기 쓰기를 동시에 사용할 경우에는 위에 있는 세 가지중 골라 사용.

    FILE *p_file = fopen("tipssoft.dat", "r+b");
    if(NULL != p_file){
        fclose(p_file); // 파일 닫기. - 열지 않고 사용하거나 이미 닫은 파일에 한번더 사용할 경우 프로그램에서 오류가 발생할 수 있음.
    } else {

    }
    return 0;
}