#include <stdio.h>
#include <malloc.h>



int main() {
	unsigned char limit_table[3];
    unsigned char *p[3];
    int age, member, temp, sum;

    for(age=0; age<3; age++){
        printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age+2);
        printf("�� ���ɴ�� �� �� �Դϱ�?");
        scanf("%d", &temp);
        limit_table[age] = (unsigned char)temp;
        p[age] = (unsigned char)malloc(limit_table[age]);
        for(member=0; member<limit_table[age]; member++){
            printf("%dth : ", member+1);
            scanf("%d", &temp);
            *(p[age]+member) = (unsigned char)temp;
        }
    }
    printf("\n\n ���ɺ� ��� ���� ����Ű�� Ƚ��\n");
    for(age=0; age<3; age++){
        sum = 0;
        printf("%d0�� : ", age+2);
        for(member = 0; member<limit_table[age]; member++){
            sum += *(p[age]+member);
        }
        printf("%5.2f\n", (double)sum/limit_table[age]);
        free(p[age]);
    }
	return 0;
}