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
    (*pp_tail) -> number = data; // *pp_tail을 사용함으로써 while(NULL != p -> p_next) p = p -> p_next; 필요 없음.
    (*pp_tail) -> p_next = NULL; // 마지막 노드를 탐색하는 반복문. 필요없음.
    
}

int main(){
    NODE p_data;
    NODE p_data_tail;
    int data = 1;
    AddNumber(&p_data, &p_data_tail, data);

    return 0;
}