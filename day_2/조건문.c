#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* /////////////////////////////////////////////
	int score;
	char grade;

	printf("점수를 입력하세요: ");
	scanf("%d", &score); // 사용시 에러  #define _CRT_SECURE_NO_WARNINGS 로 해결

	if (score >= 90){
		grade = 'A';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	}
	else {
		grade = 'B';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	}
	printf("작업 종료 \n");
	*/
	/*
	int value = 50000;
	double point;
	point = (value >= 10000) ? value * 0.1 : value * 0.05;
	printf("%.0f", point);
	*/
	// 중첩 조건문//////////////////////////////////////
	/*
	int score = 56;
	char grade;
	
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
	printf("당신의 점수는 %d이고 등급은 %c입니다. \n", score, grade);
	*/
	// switch ///////////////////////////////////////////
	int score = 86;
	char grade;
	printf("점수를 입력하십시오: ");
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
	printf("당신의 점수는 %d이고 등급은 %c입니다. \n", score, grade);
	return 0;
}