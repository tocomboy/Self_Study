#include <stdio.h>
#include <malloc.h>

typedef struct node {
	int number;
	struct node* p_next;
} NODE;

void AddNumber(NODE** pp_head, int data) { // ������ ��ü�� �޾ƿͼ� -> 12��
	NODE* p; 
	if (NULL != *pp_head) {
		p = *pp_head; // �ּҰ��� ���.
		while (NULL != p->p_next) p = p->p_next; // ��� ������ �̵�
		p->p_next = (NODE*)malloc(sizeof(NODE));
		p = p->p_next;
	}
	else {
		*pp_head = (NODE*)malloc(sizeof(NODE)); // ��尡 ������.
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