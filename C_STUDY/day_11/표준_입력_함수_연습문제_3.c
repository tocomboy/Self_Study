#include <stdio.h>

int main(){
    char name[10], blood[10];
    int heart;
    float kg, cm;
    scanf("%s %f %f %s %d", &name, &kg, &cm, &blood, &heart);
    printf("�̸�: %s, ������: %.1fkg, Ű: %.1fcm, ������: %s��, �ɹڼ�: %dȸ", name, kg, cm, blood, heart);

    return 0;
}