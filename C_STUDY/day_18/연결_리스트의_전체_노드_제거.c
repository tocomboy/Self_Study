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
    (*pp_tail) -> number = data;
    (*pp_tail) -> p_next = NULL;
    
}

int main(){
    NODE *p_head = NULL;
    NODE *p_tail = NULL;
    int data = 1;
    AddNumber(&p_head, &p_tail, data);
    // CASE 1
    /* 
    NODE *p = p_head;
    while(NULL != p_head){
        free(p);
        p = p->p_next; // ���� - ���� ���� �̵��� �� ����.
    }
    */

    // CASE 2
    NODE *p = p_head, *p_save_next;  
    while(NULL != p_head){
        p_save_next = p -> p_next; // �޸𸮸� �����ϸ� ��带 �̿��� �� �����Ƿ� �ٸ����� �̸� �����ص�.
        free(p);
        p = p->p_next;
    }

    p_head = p_tail = NULL;

    // CASE 3
    // *p�� *p_save_next ��� ��� ����.
    NODE *p = p_head;
    while(NULL != p_head){
        p = p_head -> p_next;
        free(p_head);
        p_head = p;
    }
    p_tail = p_head;
   
    return 0;
}