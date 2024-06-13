#include <stdio.h>
#include <malloc.h>

int SP = 0; // BP, SP 스택에서 마지막 값의 위치.

void push(short* stack, int data) {
    *(stack + SP) = (short)data;
    SP++;
    printf("SP : %d\n", SP);
}

void pop(short* stack) {
    SP--; // SP가 이미 증가한 상태이므로 현재 위치를 찾기 위해 -1
    printf("POP : %d\n", (int)*(stack + SP));
    *(stack + SP) = NULL;
}



int main() {
    short* stack;
    int stack_limit, temp, i;
    printf("스택 자료 구조의 크기는? (최대 30개로 제한) : ");
    scanf_s("%d", &stack_limit);
    stack = (short*)malloc(sizeof(short) * stack_limit);
    for (i = 0; i < stack_limit; i++) {
        printf("스택에 들어갈 정수값을 입력하십시오. : ");
        scanf_s("%d", &temp);
        push(stack, temp);
    }
    for (i = 0; i < stack_limit; i++) {
        pop(stack);
    }
   
    free(stack);
    return 0;
}