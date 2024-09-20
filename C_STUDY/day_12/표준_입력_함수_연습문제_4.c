#include <stdio.h>
#include <stdlib.h> // atoi
#include <string.h> // strcpy
#define Num_student 3 // �л���
#define Name_length 10 // �̸� �ִ� ����.
#define KOR 0 // 0 ���� 
#define ENG 1 // 1 ���� 
#define MATH 2 // 2 ���� 
#define TOTAL 3 // 3 �հ�
#define Part_Count 4

// �� ���� �л��� ���� �й��� ���� ������ �Է� �޾Ƽ� ����� �������� ����ϴ� ���� ó�� ���α׷�.
/*
1 ��° �л� �̸�: ȫ�浿
���� ����: 50
���� ����: 60
���� ����: 40

2 ��° �л� �̸�: �����
���� ����: 45
���� ����: 55
���� ����: 65

3 ��° �л� �̸�: �躸��
���� ����: 80
���� ����: 88
���� ����: 75

ȫ�浿
50
60
40
�����
45
55
65
�躸��
80
88
75
*/


void Input_data(char name[][Name_length], int score[][Part_Count]){ // �ڷ� �Է¹ޱ�.
    for(int i=0; i<Num_student; i++){
        printf("%d ��° �л� �̸�: ", i+1);
        scanf("%s", &name[i]);
        printf("���� ����: ");
        scanf("%d", &score[i][KOR]);
        printf("���� ����: ");
        scanf("%d", &score[i][ENG]);
        printf("���� ����: ");
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

void Bubble_Sort(char name[][Name_length], int score[][Part_Count]){ // �����ʺ��� �����ϴ� ����.
    for(int i=0; i<Num_student-1; i++){ // ������ ���� ��ġ�� �����ϴ� ����.
        for(int j=0; j<Num_student-1-i; j++){ // ���� Num_student-1-i (-i)�� ���� �����ʺ��� ��ĭ�� ����.
            if(score[j][TOTAL] < score[j+1][TOTAL]){
                Swap_Name(name[j], name[j+1]);
                Swap_Score(score[j], score[j+1]); // score[j]�� ���� KOR, ENG, MATH, TOTAL �迭�� �̵���. -- ���� �̵��Ŀ��� 1���� �迭�� ��� ����. **�߿�!�߿�!�߿�!�߿�!**
            }
        }
    }

}


int main(){
    char name[5][Name_length];
    int score[Num_student][Part_Count], count=0, num=0, table=0;
    Input_data(name, score);
    Bubble_Sort(name, score);
    printf("--------------------------------------\n �̸�   ���� ���� ���� ���� ��� ��� \n--------------------------------------\n");
    for(int j=0; j<Num_student; j++){
        printf("%s   %d   %d   %d   %d   %d   %d��\n", name[j], score[j][KOR], score[j][ENG], score[j][MATH], score[j][TOTAL], score[j][TOTAL]/Num_student, j+1);
    }
    return 0;
}