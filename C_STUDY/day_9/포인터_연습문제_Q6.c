#include <stdio.h>

void Combination(char* t, char* c, char* a, char* b) { // int short char�� �ڷ����� ��� �ٸ�. ���� 
    for (int i = 0; i < 4; i++) {   // char �ڷ������� �����Ͽ� int(4����Ʈ) ������ char(1����Ʈ)��ŭ �̵��ϸ� ����.
        if (i < 2) *(t + i) = *(c + i);
        else if (i == 2) *(t + i) = *b;
        else *(t + i) = *a;
    }
}

int main() { /// 0x12345678
    char a = 0x12, b = 0x34;
    short c = 0x5678;
    int t;
    Combination((char *)&t, (char *) & c, &a, &b);
    printf("0x%X", t);
    return 0;
}

