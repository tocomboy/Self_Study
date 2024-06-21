#include <stdio.h>
#include <malloc.h>
#define MAX_NAME 15

typedef struct node{
    char name[MAX_NAME];
    int kor;
    int eng;
    int math;
    int total;
    struct node *p_next;
} NODE;

void AddData(NODE **pp_head, NODE **pp_tail, int count){
    NODE *p_data = (NODE*)malloc(sizeof(NODE)), *p_temp_node, *p_prev_node;
    printf("%d번째 학생 이름: ", count); // 입력받기
    scanf("%s", p_data->name);
    printf("국어 점수: ");
    scanf("%d", &p_data->kor);
    printf("영어 점수: ");
    scanf("%d", &p_data->eng);
    printf("수학 점수: ");
    scanf("%d", &p_data->math);
    p_data->total = p_data->kor + p_data->eng + p_data->math;
    
    // 노드 추가
    p_temp_node = *pp_head;
    while(p_temp_node != NULL && p_temp_node->total > p_data->total){ // 노드가 NULL이 아니고 total이 입력보다 클 동안 이동.
        p_prev_node = p_temp_node; // 중간 삽입을 대비해 이전 노드 저장.
        p_temp_node = p_temp_node->p_next;
    }

    if(*pp_head == NULL){ // head가 빈 노드 일 때.
        *pp_head = p_data;
        *pp_tail = *pp_head;
        (*pp_tail)->p_next = NULL; // pp_tail이 참조한 값 -> pp_head 의 p_next

    } else if(p_temp_node == *pp_head){ // head보다 data의 total이 클 때.
        p_data->p_next = *pp_head;
        *pp_head = p_data;

    } else if(p_temp_node == NULL){ // 노드가 tail 보다 작을 때.
        (*pp_tail)->p_next = p_data;
        *pp_tail = (*pp_tail)->p_next;
        (*pp_tail)->p_next = NULL;

    } else { // 노드 가 노드 사이에 들어갈 때.
        p_data->p_next = p_temp_node;
        p_prev_node->p_next = p_data;
    }


}

void PrintData(NODE **pp_head){
    int rank = 1;
    NODE *p_print = *pp_head;
    printf("---------------------------------------\n");
    printf("  이름  국어 영어 수학 총점 평균 등수\n");
    printf("---------------------------------------\n");
    while(p_print != NULL){
        printf("%s   %d    %d    %d    %d    %d    %d등\n", p_print->name, p_print->kor, p_print->eng, p_print->math, p_print->total, (p_print->total)/3, rank);
        p_print = p_print->p_next;
        rank++;
    }

}

int main(){
    NODE *p_head = NULL, *p_tail = NULL;
    int menu, count=1;
    while(1){
        printf("[Menu]\n");
        printf("1. 성적 입력\n");
        printf("2. 성적 확인\n");
        printf("3. 종료\n");
        printf("-------------------");
        printf("선택(1 ~ 3) : ");
        scanf("%d", &menu);

        if(menu == 1){
            AddData(&p_head, &p_tail, count);
            printf("%s %s\n", p_head->name, p_tail->name);
            count++;

        } else if(menu == 2){
            PrintData(&p_head);

        } else if(menu == 3){
            printf("프로그램을 종료합니다.\n");
            break;

        }
        
    }

    return 0;
}