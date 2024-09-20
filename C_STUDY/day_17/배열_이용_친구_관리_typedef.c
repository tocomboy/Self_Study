#include <stdio.h>
#define MAX_COUNT 5

typedef char NAME_TYPE[14];

int AddFriend(NAME_TYPE* p_name, unsigned short int* p_age, float *p_height, float *p_weight, int count) {
	if (count < MAX_COUNT) {
		printf("\n���ο� ģ�� ������ �Է��ϼ���\n");
		printf("1. �̸� : ");
		scanf_s("%s", *(p_name + count), 14);
		printf("2. ���� : ");
		scanf_s("%hu", p_age + count);
		printf("3. Ű : ");
		scanf_s("%f", p_height + count);
		printf("4. ������ : ");
		scanf_s("%f", p_weight + count);
		printf("�Է��� �Ϸ��߽��ϴ�\n\n");
		return 1;
	} else {
		printf("�ִ� �ο��� �ʰ��Ͽ� �Է��� �� �� �����ϴ�. \n");
		printf("�ִ� %d������ ���� �����մϴ�.\n\n", MAX_COUNT);
	}
	return 0;
}

void ShowFriendList(NAME_TYPE* p_name, unsigned short int* p_age, float* p_height, float* p_weight, int count) {
	int i;
	if (count > 0) {
		printf("\n��ϵ� ģ�� ���\n");
		printf("============================================\n");
		for (i = 0; i < count; i++) {
			printf("%-14s, %3d, %6.2f, %6.2f\n", *(p_name + i), *(p_age + i), *(p_height + i), *(p_weight + i));
		}
		printf("============================================\n");
	}
	else {
		printf("\n��ϵ� ģ���� �����ϴ�.\n\n");
	}
}

int main() {
	NAME_TYPE name[MAX_COUNT];
	unsigned short int age[MAX_COUNT];
	float height[MAX_COUNT];
	float weight[MAX_COUNT];
	int count = 0, num;

	while (1) {
		printf("	  [�޴�]	  \n");
		printf("==================\n");
		printf("1. ģ���߰�       \n");
		printf("2. ģ�� ��� ���� \n");
		printf("3. ����           \n");
		printf("==================\n");
		printf("��ȣ ���� : ");
		scanf_s("%d", &num);

		if (num == 1) {
			if (1 == AddFriend(name, age, height, weight, count)) count++;
		}
		else if (num == 2) {
			ShowFriendList(name, age, height, weight, count);
		}
		else if(num == 3) {
			break;
		}
		else {
			printf("1~3 ��ȣ�� ������ �� �ֽ��ϴ�!!\n\n");
		}
	}

	return 0;
}