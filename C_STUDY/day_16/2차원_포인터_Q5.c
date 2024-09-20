#include <stdio.h>
#include <malloc.h>

int SP = 0; // BP, SP ���ÿ��� ������ ���� ��ġ.

void push(short* stack, int data) {
    *(stack + SP) = (short)data;
    SP++;
    printf("SP : %d\n", SP);
}

void pop(short* stack) {
    SP--; // SP�� �̹� ������ �����̹Ƿ� ���� ��ġ�� ã�� ���� -1
    printf("POP : %d\n", (int)*(stack + SP));
    *(stack + SP) = NULL;
}



int main() {
    short* stack;
    int stack_limit, temp, i;
    printf("���� �ڷ� ������ ũ���? (�ִ� 30���� ����) : ");
    scanf_s("%d", &stack_limit);
    stack = (short*)malloc(sizeof(short) * stack_limit);
    for (i = 0; i < stack_limit; i++) {
        printf("���ÿ� �� �������� �Է��Ͻʽÿ�. : ");
        scanf_s("%d", &temp);
        push(stack, temp);
    }
    for (i = 0; i < stack_limit; i++) {
        pop(stack);
    }
   
    free(stack);
    return 0;
}