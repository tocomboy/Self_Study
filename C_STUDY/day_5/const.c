#include <stdio.h>
static const a;

double GetArea(const double pi, double radius, int limit){
    double result;
    //pi = 3.14; // const double pi�� ����� ������ ���Ƿ� ���� �Ұ���.
    result = pi * radius * radius;
    return result;
}

int main(){
    double Area;
    Area = GetArea(3.14, 4, 0);
    printf("%f ", Area);
}