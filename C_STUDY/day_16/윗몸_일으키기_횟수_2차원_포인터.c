#include <stdio.h>
#include <malloc.h>



int main() {
	unsigned char* p_limit_table;
	unsigned char** p;
	int age, age_step, member, temp, sum;
	printf("20����� �����ؼ� �������� �� �� �ΰ��� : ");
	scanf_s("%d", &age_step);
	p_limit_table = (unsigned char*)malloc(age_step); // �ο���
	p = (unsigned char**)malloc(sizeof(unsigned char*) * age_step); // �ο��� ��ŭ ������ ����� ����.

	for (age = 0; age < age_step; age++) {
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
		printf("�� ���ɴ�� �� ���Դϱ�? : ");
		scanf_s("%d", &temp);
		*(p_limit_table + age) = (unsigned char)temp;
		*(p + age) = (unsigned char*)malloc(*(p_limit_table + age));
		for (member = 0; member < *(p_limit_table + age); member++) {
			printf("%dth : ", member + 1);
			scanf_s("%d", &temp);
			*(*(p + age) + member) = (unsigned char)temp;
		}
	}
	printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");
	for (age = 0; age < *(p_limit_table + age); age++) {
		sum = 0;
		printf("%d0�� : ", age + 2);
		for (member = 0; member < *(p_limit_table + age); member++) {
			sum += *(*(p + age) + member);
		}

		printf("%5.2f\n", (double)sum / *(p_limit_table + age));
		free(*(p + age));
	}
	free(p);
	free(p_limit_table);

}