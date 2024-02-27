/*
	프로젝트-2 함수 5개를 선언 및 구형하여 학점 처리 프로그램을 만들고 모듈로 나누어서 완성하는 실습.
	함수의 종류
	1. main() : do~while문을 이용하여 무한루프를 수행
	2. score_fun() : 중간고사, 기말고사 점수를 입력받아서 총점을 구하고 전달하는 명령을 수행
	3. grade_fun() : 전달받은 총점을 가지고 등급(A+ ~ F)을 결정하고 반환하는 명령을 수행
	4. alpha_err() : 입력한 알파벳이 대소문자 구별 없이 Y나 N 이외의 문자를 입력하면 오류메시지를 반환하는 명령을 수행
	5. jumsu_err() : 중간, 기말(0~50점)고사의 점수의 유효범위를 벗어나면 점수와 오류메시지를 반환하는 명령을 수행
	6. end_fun() : 알파벳 대소문자 구별없이 N이 입력되면 입력받은 알파벳을 출력하고 프로그램 종료를 하는 명령을 수행
*/

#include "grade_process.h"

int main(void)
{
	char choice = ' ';
	int jumsu_input = 0;

	
	do
	{
		printf("[main()함수 영역]\n");
		printf("학점 계산기를 실행하시겠습니까? (Y / N) ");
		scanf_s("%c", &choice, sizeof(char));

		switch (choice)
		{
			case 'Y':
			case 'y':
				score_fun();	// 점수 입력 함수 호출
				getchar();		// 버퍼 지우기

			case 'N':
			case 'n':
				end_fun(choice);	// 프로그램 종료 함수 호출
				break;

			default:
				alpha_err(choice);	// 잘못 입력했을 때 호출
				getchar();			// 버퍼지우기
		}

	} while (1);

	return 0;
}