#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* /////////////////////////////////////////////
	int score;
	char grade;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &score); // ���� ����  #define _CRT_SECURE_NO_WARNINGS �� �ذ�

	if (score >= 90){
		grade = 'A';
		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
	}
	else {
		grade = 'B';
		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
	}
	printf("�۾� ���� \n");
	*/
	/*
	int value = 50000;
	double point;
	point = (value >= 10000) ? value * 0.1 : value * 0.05;
	printf("%.0f", point);
	*/
	// ��ø ���ǹ�//////////////////////////////////////
	/*
	int score = 56;
	char grade;
	
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
	printf("����� ������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
	*/
	// switch ///////////////////////////////////////////
	int score = 86;
	char grade;
	printf("������ �Է��Ͻʽÿ�: ");
	scanf("%d", &score);
	switch (score / 10) {
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
	}
	printf("����� ������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
	return 0;
}