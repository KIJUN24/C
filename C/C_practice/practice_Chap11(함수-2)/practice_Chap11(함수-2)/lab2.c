/*
	문제-2
	단위 변환 계산(무한루프 사용)
	1. km/h를 mile/h로 환산하는 함수
	2. kg을 lb로 환산하는 함수
	3. 탈출코드
	4. 에러코드를 출력시키는 코드
	
	실행결과
	A. km/h -> mile/h 환산 프로그램
	B. kg -> lb 환산 프로그램
	Q. 프로그램 종료

	선택 : a
	A.km/h -> mile/h 환산 프로그램
	문> 속도(km/h)를 입력하세요 : 77

	[km/h를 mile/h로 환산하는 함수 호출]

	답>77.0000km/h는 47.84557mile/h입니다.

	성공적으로 환산을 수행하였습니다.
*/

#include<stdio.h>
#define MILE 1.609344
#define LB 0.45359237

double exchange_mile(int km);
double exchange_lb(int kg);
void exit();
void choice_error(void);

int main(void)
{
	char choice_ch = ' ';
	int km = 0, kg = 0;
	double result_mile = 0.0f, result_lb = 0.0f;

	do
	{

		printf("A. km/h -> mile/h 환산 프로그램\n");
		printf("B. kg -> lb 환산 프로그램\n");
		printf("Q. 프로그램 종료\n");
		printf("\n");
		printf("선택 : ");
		scanf_s("%c", &choice_ch, sizeof(char));
	
		switch (choice_ch)
		{
			case 'A':
			case 'a':
				printf("문> 속도(km/h)를 입력하세요 : ");
				scanf_s("%d", &km);
				result_mile = exchange_mile(km);
				printf("답> %dKm는 %lfMile입니다.\n", km, result_mile);
				printf("성공적으로 환산을 수행하였습니다.\n\n\n\n");
				break;

			case 'B':
			case 'b':
				printf("문> Kg를 입력하세요 : ");
				scanf_s("%d", &kg);
				result_lb = exchange_lb(kg);
				printf("답> %dKg는 %lflb입니다.\n", kg, result_lb);
				printf("성공적으로 환산을 수행하였습니다.\n\n\n\n");
				break;
			
			case 'Q':
			case 'q':
				exit();
				break;

			default:
				choice_error();
				break;
		}
		if (choice_ch == 'Q' || choice_ch == 'q')
		{
			break;
		}
		getchar();
	} while (1);

	return 0;
}

double exchange_mile(int km)
{
	double result_mile = 0.0f;
	printf("\n[km/h를 mile/h로 환산하는 함수 호출]\n");
	result_mile = km / MILE;
	//result_mile = km / 1.609344;

	return result_mile;
}


double exchange_lb(int kg)
{
	double result_lb = 0.0f;
	printf("\n[kg를 lb로 환산하는 함수 호출]\n");
	result_lb = kg / LB;

	return result_lb;
}


void exit()
{
	printf("프로그램을 종료합니다.\n");
	return;
}


void choice_error()
{
	printf("선택을 다시 해주세요.\n\n\n");
	return;
}