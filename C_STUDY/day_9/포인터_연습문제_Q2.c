#include <stdio.h>

void Change_Data(short* p_data, short* p_change) {
    *p_data = *p_change;
}

int main() {
    int data = 0x12345678;
    short change = 0x0412;
    printf("%x\n", data);
    Change_Data((short *) & data, &change); // 포인터로 형변환 하면서 주소 보낼시 * 붙여야함.
    printf("%x", data);
    return 0;
}

