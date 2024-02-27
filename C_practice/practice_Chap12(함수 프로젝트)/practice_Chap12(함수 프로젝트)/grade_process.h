#include<stdio.h>
#include<stdlib.h>	// exit() 함수를 사용하기 위해 포함함.

void score_fun();
char grade_fun(int jumsu);
char alpha_err(char op);
void jumsu_err(int jumsu);
void end_fun(char op);

void score_fun()
{
	int jumsu_m = 0, jumsu_f = 0, total = 0;	// 지역변수는 반드시 초기화가 원칙이다.

	printf("\n[score_fun()함수 영역]\n");

	printf("중간고사 점수 입력(50점 만점) : ");
	scanf_s("%d", &jumsu_m);
	if (jumsu_m < 0 || jumsu_m > 50)
	{
		jumsu_err(jumsu_m);
	}
	else
	{
		total += jumsu_m;	// 점수 누적
	}

	printf("기말고사 점수 입력(50점 만점) : ");
	scanf_s("%d", &jumsu_f);
	if (jumsu_f < 0 || jumsu_f > 50)
	{
		jumsu_err(jumsu_f);
	}
	else
	{
		total += jumsu_f;	// 점수 누적
		grade_fun(total);
		getchar();
		printf("\n");
		main();		// 누적된 점수를 가지고 grade_fun()함수에 학점을 출력했으므로 main()를 호출
	}

	return;
}

char grade_fun(int jumsu)
{
	printf("\n[grade_fun()함수 영역]\n");

	if (jumsu >= 95 && jumsu <= 100)
	{
		printf("score_fun() 함수에 전달받은 점수 : %d\n", jumsu);
		return printf("학점 : A+학점 \n\n");
	}
	else if (jumsu >= 90 && jumsu <= 94)
	{
		printf("score_fun() 함수에 전달받은 점수 : %d\n", jumsu);
		return printf("학점 : A0학점 \n\n");
	}
	else if (jumsu >= 85 && jumsu <= 89)
	{
		printf("score_fun() 함수에 전달받은 점수 : %d\n", jumsu);
		return printf("학점 : B+학점 \n\n");
	}
	else if (jumsu >= 80 && jumsu <= 84)
	{
		printf("score_fun() 함수에 전달받은 점수 : %d\n", jumsu);
		return printf("학점 : B0학점 \n\n");
	}
	else if (jumsu >= 75 && jumsu <= 79)
	{
		printf("score_fun() 함수에 전달받은 점수 : %d\n", jumsu);
		return printf("학점 : C+학점 \n\n");
	}
	else if (jumsu >= 70 && jumsu <= 74)
	{
		printf("score_fun() 함수에 전달받은 점수 : %d\n", jumsu);
		return printf("학점 : C0학점 \n\n");
	}
	else if (jumsu >= 65 && jumsu <= 69)
	{
		printf("score_fun() 함수에 전달받은 점수 : %d\n", jumsu);
		return printf("학점 : D+학점 \n\n");
	}
	else if (jumsu >= 60 && jumsu <= 64)
	{
		printf("score_fun() 함수에 전달받은 점수 : %d\n", jumsu);
		return printf("학점 : D0학점 \n\n");
	}
	else
	{
		printf("score_fun() 함수에 전달받은 점수 : %d\n", jumsu);
		return printf("학점 : F학점 \n\n");
	}
}

char alpha_err(char op)
{
	printf("\n[alpha_err()함수 영역]\n");


	return printf("main()함수에서 입력한 알파벳 %c는 유효하지 않습니다.\n\n", op);
}

void jumsu_err(int jumsu)
{
	printf("\n[jumsu_err()함수 영역]\n");
	printf("점수 %d는(은) 유효범위가 아닙니다.\n\n", jumsu);
	return;
}

void end_fun(char op)
{
	printf("\n[end_fun()함수 영역]\n");
	printf("main()함수에서 프로그램 종료를 요청했습니다.\n");
	printf("알파벳 \"%c\"를(을) 전달받아 프로그램을 종료합니다.\n", op);
	exit(0);	// 해당 프로세스를 kill하는 함수.
}