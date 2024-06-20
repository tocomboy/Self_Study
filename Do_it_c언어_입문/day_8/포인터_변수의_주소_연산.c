#include <stdio.h>
/*
int main(){
    short data = 0;
    short *p = &data;
    printf("%d\n", p);
    //p = p + 1; // 포인터에 저장된 주소 값을 1 만큼 증가시킴.
    //printf("%d\n", p); // short의 크기인 2바이트 만큼 움직여 주소에 +2로 적용됨. -> 다른 값 출력.

    short *a = (short *)6422294; // data와 같은 주소값을 대입하여 같은 값 출력.
    printf("*a = %d, *p = %d\n", *a, *p);
    return 0;
}
*/
int main(){
    char *p1 = (char *)100; // 일괄적으로 주소 100에 저장.
    *p1++; // 1바이트 늘어남
    short *p2 = (short *)100;
    *p2++; // 2바이트 늘어남.
    int *p3 = (int *)100;
    *p3++; // 4바이트 늘어남.
    double *p4 = (double *)100;
    *p4++; // 8바이트 늘어남.

    return 0;
}