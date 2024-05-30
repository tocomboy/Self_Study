#include <stdio.h>

int main(){
    char name[10], blood[10];
    int heart;
    float kg, cm;
    scanf("%s %f %f %s %d", &name, &kg, &cm, &blood, &heart);
    printf("이름: %s, 몸무게: %.1fkg, 키: %.1fcm, 혈액형: %s형, 심박수: %d회", name, kg, cm, blood, heart);

    return 0;
}