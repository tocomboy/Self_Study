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
    printf("%d��° �л� �̸�: ", count); // �Է¹ޱ�
    scanf("%s", p_data->name);
    printf("���� ����: ");
    scanf("%d", &p_data->kor);
    printf("���� ����: ");
    scanf("%d", &p_data->eng);
    printf("���� ����: ");
    scanf("%d", &p_data->math);
    p_data->total = p_data->kor + p_data->eng + p_data->math;
    
    // ��� �߰�
    p_temp_node = *pp_head;
    while(p_temp_node != NULL && p_temp_node->total > p_data->total){ // ��尡 NULL�� �ƴϰ� total�� �Էº��� Ŭ ���� �̵�.
        p_prev_node = p_temp_node; // �߰� ������ ����� ���� ��� ����.
        p_temp_node = p_temp_node->p_next;
    }

    if(*pp_head == NULL){ // head�� �� ��� �� ��.
        *pp_head = p_data;
        *pp_tail = *pp_head;
        (*pp_tail)->p_next = NULL; // pp_tail�� ������ �� -> pp_head �� p_next

    } else if(p_temp_node == *pp_head){ // head���� data�� total�� Ŭ ��.
        p_data->p_next = *pp_head;
        *pp_head = p_data;

    } else if(p_temp_node == NULL){ // ��尡 tail ���� ���� ��.
        (*pp_tail)->p_next = p_data;
        *pp_tail = (*pp_tail)->p_next;
        (*pp_tail)->p_next = NULL;

    } else { // ��� �� ��� ���̿� �� ��.
        p_data->p_next = p_temp_node;
        p_prev_node->p_next = p_data;
    }


}

void PrintData(NODE **pp_head){
    int rank = 1;
    NODE *p_print = *pp_head;
    printf("---------------------------------------\n");
    printf("  �̸�  ���� ���� ���� ���� ��� ���\n");
    printf("---------------------------------------\n");
    while(p_print != NULL){
        printf("%s   %d    %d    %d    %d    %d    %d��\n", p_print->name, p_print->kor, p_print->eng, p_print->math, p_print->total, (p_print->total)/3, rank);
        p_print = p_print->p_next;
        rank++;
    }

}

int main(){
    NODE *p_head = NULL, *p_tail = NULL;
    int menu, count=1;
    while(1){
        printf("[Menu]\n");
        printf("1. ���� �Է�\n");
        printf("2. ���� Ȯ��\n");
        printf("3. ����\n");
        printf("-------------------");
        printf("����(1 ~ 3) : ");
        scanf("%d", &menu);

        if(menu == 1){
            AddData(&p_head, &p_tail, count);
            printf("%s %s\n", p_head->name, p_tail->name);
            count++;

        } else if(menu == 2){
            PrintData(&p_head);

        } else if(menu == 3){
            printf("���α׷��� �����մϴ�.\n");
            break;

        }
        
    }

    return 0;
}