#include <stdio.h>
#include <malloc.h>

typedef struct node {
	int number;
	struct node* p_next; // ����ü�� ����� ���� �ʾұ� ������ �ѹ� �����ϸ鼭 ���.
} NODE;

int main() {
	NODE* p_head = NULL; // ù ��尡 ������ �ʱ�ȭ. ���
	p_head = (NODE*)malloc(sizeof(NODE));
	p_head->number = 12;
	p_head->p_next = NULL;
	printf("p_head->number : %d", (p_head->number));
	free(p_head);
	return 0;
}