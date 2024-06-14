#include <stdio.h>
#include <malloc.h>

typedef struct node {
	int number;
	struct node* p_next; // 구조체가 만들어 지지 않았기 때문에 한번 선언하면서 사용.
} NODE;

int main() {
	NODE* p_head = NULL; // 첫 노드가 없도록 초기화. 명시
	p_head = (NODE*)malloc(sizeof(NODE));
	p_head->number = 12;
	p_head->p_next = NULL;
	printf("p_head->number : %d", (p_head->number));
	free(p_head);
	return 0;
}