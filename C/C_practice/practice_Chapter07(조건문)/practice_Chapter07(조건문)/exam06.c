#include<stdio.h>
#include<string.h>

int main(void) {
	int jumsu = 0;
	// grade(배열명)는 주소다.
	// 하지만, 배열명은 변하지 않은 주소값을 지녀야 하기 떄문에 포인터 상수에 해당하는 것이다.
	// 상수 값에 무엇인가를 저장하면, C2106이란 에러 코드가 발생한다.
	// char grade[3] = {0};

	char* p_grade = NULL;

	printf("당신의 과목 점수를 입력하세요 : ");
	scanf_s("%d", &jumsu);

	//중첩 if문을 이용하여 학점을 선정하는 코드
	if (jumsu >= 90 && jumsu <= 100)
	{
		if (jumsu >= 95)
		{
			p_grade = "A+";
			printf("당신의 성적은 %s입니다.\n", p_grade);
		}
		else {
			p_grade = "A-";
			printf("당신의 성적은 %s입니다.\n", p_grade);
		}
	}
	else if (jumsu >= 75 && jumsu < 89)
	{
		if (jumsu >= 85)
		{
			p_grade = "B+";
			printf("당신의 성적은 %s입니다.\n", p_grade);
		}
		else {
			p_grade = "B-";
			printf("당신의 성적은 %s입니다.\n", p_grade);
		}
	}
	else if (jumsu >= 60 && jumsu < 74)
	{
		if (jumsu >= 70)
		{
			p_grade = "C+";
			printf("당신의 성적은 %s입니다.\n", p_grade);
		}
		else {
			p_grade = "C-";
			printf("당신의 성적은 %s입니다.\n", p_grade);
		}
	}
	else if (jumsu >= 45 && jumsu < 59)
	{
		if (jumsu >= 53)
		{
			p_grade = "D+";
			printf("당신의 성적은 %s입니다.\n", p_grade);
		}
		else {
			p_grade = "D-";
			printf("당신의 성적은 %s입니다.\n", p_grade);
		}
	}
	else if (jumsu >= 0 && jumsu < 44)
	{
		p_grade = "F";
		printf("당신의 성적은 %s입니다.\n", p_grade);
	}

	return 0;
}