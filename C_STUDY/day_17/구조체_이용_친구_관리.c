#include <stdio.h>
#define MAX_COUNT 5

typedef struct Peope {
	char name[14];
	unsigned short int age;
	float height;
	float weight;
} Person;

int AddFriend(Person *p_frined, int count) {
	if (count < MAX_COUNT) {
		p_frined += count; // count ��ġ�� �̵�.
		printf("\n���ο� ģ�� ������ �Է��ϼ���\n");
		printf("1. �̸� : ");
		scanf_s("%s", p_frined->name,14);
		printf("2. ���� : ");
		scanf_s("%hu", &p_frined->age);
		printf("3. Ű : ");
		scanf_s("%f", &p_frined->height);
		printf("4. ������ : ");
		scanf_s("%f", &p_frined->weight);
		printf("�Է��� �Ϸ��߽��ϴ�\n\n");
		return 1;
	} else {
		printf("�ִ� �ο��� �ʰ��Ͽ� �Է��� �� �� �����ϴ�. \n");
		printf("�ִ� %d������ ���� �����մϴ�.\n\n", MAX_COUNT);
	}
	return 0;
}

void ShowFriendList(Person *p_frined, int count) {
	int i;
	if (count > 0) {
		printf("\n��ϵ� ģ�� ���\n");
		printf("============================================\n");
		/*
		for (i = 0; i < count; i++) { // 1�� ����
			printf("%-14s, %3d, %6.2f, %6.2f\n", p_frined->name, p_frined->age, p_frined->height, p_frined->weight);
			p_frined++;
		}
		*/
		for (i = 0; i < count; i++) { // 2�� ����
			printf("%-14s, %3d, %6.2f, %6.2f\n", (p_frined+i)->name, (p_frined+i)->age, (p_frined + i)->height, (p_frined + i)->weight);
		}
		printf("============================================\n");
	}
	else {
		printf("\n��ϵ� ģ���� �����ϴ�.\n\n");
	}
}

int main() {
	Person frineds[MAX_COUNT];
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
			if (1 == AddFriend(frineds, count)) count++;
		}
		else if (num == 2) {
			ShowFriendList(frineds, count);
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