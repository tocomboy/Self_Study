#include <stdio.h>
#include <malloc.h>

typedef struct node{
    int number;
    struct node *p_next;
} NODE;


void AddNumber(NODE** pp_head, NODE **pp_tail, int data){
    if(NULL != *pp_head){
        (*pp_tail) -> p_next = (NODE *)malloc(sizeof(NODE));
        *pp_tail = (*pp_tail) -> p_next;
    } else {
        *pp_head = (NODE*)malloce(sizeof(NODE));
        *pp_tail = *pp_head;
    }
    (*pp_tail) -> number = data; // *pp_tail�� ��������ν� while(NULL != p -> p_next) p = p -> p_next; �ʿ� ����.
    (*pp_tail) -> p_next = NULL; // ������ ��带 Ž���ϴ� �ݺ���. �ʿ����.
    
}

int main(){
    NODE p_data;
    NODE p_data_tail;
    int data = 1;
    AddNumber(&p_data, &p_data_tail, data);

    return 0;
}