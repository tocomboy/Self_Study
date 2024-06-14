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
		p_frined += count; // count 위치로 이동.
		printf("\n새로운 친구 정보를 입력하세요\n");
		printf("1. 이름 : ");
		scanf_s("%s", p_frined->name,14);
		printf("2. 나이 : ");
		scanf_s("%hu", &p_frined->age);
		printf("3. 키 : ");
		scanf_s("%f", &p_frined->height);
		printf("4. 몸무게 : ");
		scanf_s("%f", &p_frined->weight);
		printf("입력을 완료했습니다\n\n");
		return 1;
	} else {
		printf("최대 인웡을 초과하여 입력을 할 수 없습니다. \n");
		printf("최대 %d까지만 관리 가능합니다.\n\n", MAX_COUNT);
	}
	return 0;
}

void ShowFriendList(Person *p_frined, int count) {
	int i;
	if (count > 0) {
		printf("\n등록된 친구 목록\n");
		printf("============================================\n");
		/*
		for (i = 0; i < count; i++) { // 1번 형태
			printf("%-14s, %3d, %6.2f, %6.2f\n", p_frined->name, p_frined->age, p_frined->height, p_frined->weight);
			p_frined++;
		}
		*/
		for (i = 0; i < count; i++) { // 2번 형태
			printf("%-14s, %3d, %6.2f, %6.2f\n", (p_frined+i)->name, (p_frined+i)->age, (p_frined + i)->height, (p_frined + i)->weight);
		}
		printf("============================================\n");
	}
	else {
		printf("\n등록된 친구가 없습니다.\n\n");
	}
}

int main() {
	Person frineds[MAX_COUNT];
	int count = 0, num;

	while (1) {
		printf("	  [메뉴]	  \n");
		printf("==================\n");
		printf("1. 친구추가       \n");
		printf("2. 친구 목록 보기 \n");
		printf("3. 종료           \n");
		printf("==================\n");
		printf("번호 선택 : ");
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
			printf("1~3 번호만 선택할 수 있습니다!!\n\n");
		}
	}

	return 0;
}