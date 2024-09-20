#include <stdio.h>
#include <malloc.h>

typedef struct  node
{
    int number;
    struct  node *p_next;  
} NODE;

void AddNumber(NODE **pp_head, NODE **pp_tail, int data){
    if(NULL != *pp_head){
        (*pp_tail) -> p_next = (NODE*)malloc(sizeof(NODE)); // p_head 를 사용하지 않고 p_tail만 움직임.
        *pp_tail = (*pp_tail)->p_next;
    } else {
        *pp_head = (NODE*)malloc(sizeof(NODE)); // p_head 가 NULL 인 경우에만 동적할당 실시.
        *pp_tail = *pp_head;
    }
    (*pp_tail) -> number = data; // p_head 를 사용하지 않고 p_tail만 사용해서 노드 구성.
    (*pp_tail) -> p_next = NULL; // p_head 를 사용하지 않고 p_tail만 사용.
}

void main(){
    NODE *p_head = NULL, *p_tail = NULL, *p;
    int sum = 0, temp;

    while(1){
        printf("숫자를 입력하세ㅐ요 (9999를 누르면 종료) : ");
        scanf("%d", &temp);
        if(9999 == temp) break;
        AddNumber(&p_head, &p_tail, temp);
    }

    p = p_head;
    while(NULL != p){
        if(p != p_head) printf(" + ");
        printf(" %d ", p->number);
        sum += p -> number;
        p = p -> p_next;
    }
    printf(" = %d\n", sum);

    while(NULL != p_head){
        p = p_head;
        p_head = p_head -> p_next;
        free(p_head);
    }
    p_tail = p_head;
}