#include <stdio.h>
#define Max_Count 5 // 동적 메모리 배열로 인해 입력 받은 갯수가 달라지면 매번 새로 컴파일 해서 배포해야함.

int main() {
    int num[Max_Count], count = 0, sum = 0, i;
    while (count < Max_Count) {
        printf("숫자를 입력하세요 (9999를 누르면 종료) : ");
        scanf_s("%d", num+count);
        if (num[count] == 9999) break;
        count++;
    }

    for (i = 0; i < count; i++) {
        if (i > 0) printf(" + ");
        printf(" %d ", num[i]);
        sum += num[i];
    }
    printf(" = %d\n", sum);


    return 0;
}