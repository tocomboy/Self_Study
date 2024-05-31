#include <stdio.h>
#include <stdlib.h> // atoi
#include <string.h> // strcpy
#define Num_student 3 // 학생수
#define Name_length 10 // 이름 최대 길이.
#define KOR 0 // 0 국어 
#define ENG 1 // 1 영어 
#define MATH 2 // 2 수학 
#define TOTAL 3 // 3 합계
#define Part_Count 4

// 세 명의 학생에 대한 학번과 과목별 성적을 입력 받아서 등수를 시준으로 출력하는 성적 처리 프로그램.
/*
1 번째 학생 이름: 홍길동
국어 점수: 50
영어 점수: 60
수학 점수: 40

2 번째 학생 이름: 마재승
국어 점수: 45
영어 점수: 55
수학 점수: 65

3 번째 학생 이름: 김보라
국어 점수: 80
영어 점수: 88
수학 점수: 75

홍길동
50
60
40
마재승
45
55
65
김보라
80
88
75
*/


void Input_data(char name[][Name_length], int score[][Part_Count]){ // 자료 입력받기.
    for(int i=0; i<Num_student; i++){
        printf("%d 번째 학생 이름: ", i+1);
        scanf("%s", &name[i]);
        printf("국어 점수: ");
        scanf("%d", &score[i][KOR]);
        printf("영어 점수: ");
        scanf("%d", &score[i][ENG]);
        printf("수학 점수: ");
        scanf("%d", &score[i][MATH]);
        
        score[i][TOTAL] = score[i][KOR] + score[i][ENG] + score[i][MATH];
    }

}

void Swap_Score(int score_1[], int score_2[]){
    int temp_score[Part_Count];
    for(int i=0; i<Part_Count; i++){
        temp_score[i] = score_1[i];
        score_1[i] = score_2[i];
        score_2[i] = temp_score[i];
    }
}

void Swap_Name(char name_1[], char name_2[]){
    char temp_name[Name_length];
    strcpy(temp_name, name_1);
    strcpy(name_1, name_2);
    strcpy(name_2, temp_name);
}

void Bubble_Sort(char name[][Name_length], int score[][Part_Count]){ // 오른쪽부터 정리하는 정렬.
    for(int i=0; i<Num_student-1; i++){ // 정렬이 끝난 위치를 제외하는 변수.
        for(int j=0; j<Num_student-1-i; j++){ // 따라서 Num_student-1-i (-i)를 통해 오른쪽부터 한칸씩 정렬.
            if(score[j][TOTAL] < score[j+1][TOTAL]){
                Swap_Name(name[j], name[j+1]);
                Swap_Score(score[j], score[j+1]);
            }
        }
    }

}


int main(){
    char name[5][Name_length];
    int score[Num_student][Part_Count], count=0, num=0, table=0;
    Input_data(name, score);
    Bubble_Sort(name, score);
    printf("--------------------------------------\n 이름   국어 영어 수학 총점 평균 등수 \n--------------------------------------\n");
    for(int j=0; j<Num_student; j++){
        printf("%s   %d   %d   %d   %d   %d   %d등\n", name[j], score[j][KOR], score[j][ENG], score[j][MATH], score[j][TOTAL], score[j][TOTAL]/Num_student, j+1);
    }
    return 0;
}