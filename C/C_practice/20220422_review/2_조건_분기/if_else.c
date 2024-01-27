#include <stdio.h>

int main(void)
{
	//// 버스를 탄다고 가정, 학생 /  일반인으로 구분 (일반인 : 20세 이상)
	//int age = 15;
	//if (age >= 20)
	//	printf("일반인");
	//else
	//	printf("학생");

	// 초 / 중 / 고
	int age = 25;
	//if (17 <= age <= 19)
	if (age >= 17 && age <= 19)
	{
		printf("고딩");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중딩");
	}
	else if (age >= 8 && age <= 13)
	{
		printf("초딩");
	}
	else if (19 < age)
	{
		printf("성인");
	}
	else
	{
		printf("어린이 / 유치부");
	}
	return 0;
}