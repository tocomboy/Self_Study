#include <stdio.h>

void Combination(char* t, char* c, char* a, char* b) { // int short char로 자료형이 모두 다름. 따라서 
    for (int i = 0; i < 4; i++) {   // char 자료형으로 통일하여 int(4바이트) 내에서 char(1바이트)만큼 이동하며 대입.
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

