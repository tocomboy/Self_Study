#include <stdio.h>
#include <malloc.h>

typedef struct node {
	int number;
	struct node* p_next;
} NODE;

void AddNumber(NODE** pp_head, int data) { // 포인터 자체를 받아와서 -> 12줄
	NODE* p; 
	if (NULL != *pp_head) {
		p = *pp_head; // 주소값을 사용.
		while (NULL != p->p_next) p = p->p_next; // 노드 끝까지 이동
		p->p_next = (NODE*)malloc(sizeof(NODE));
		p = p->p_next;
	}
	else {
		*pp_head = (NODE*)malloc(sizeof(NODE)); // 노드가 없을때.
		p = *pp_head;
	}

	p->number = data;
	p->p_next = NULL;
}

int main() {
	NODE* p_head = NULL;
	AddNumber(&p_head, 10);
	printf("%d\n", p_head->number);
	AddNumber(&p_head, 11);
	printf("%d", p_head->p_next->number);

	return 0;
}