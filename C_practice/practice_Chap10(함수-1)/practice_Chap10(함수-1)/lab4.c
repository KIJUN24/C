/*
	문제4 - 계산기를 만들어 보자.
	아래와 같은 함수 5개를 존재하니 선언, 호출, 구현을 하자.
	무한루프를 사용하도록 한다. 모듈 분리도 진행하자.
	double add(int x, int y)
	double sub(int x, int y)
	double mul(int x, int y)
	double div(int x, int y)
	int remain(int x, int y)

	출력결과
	두 수를 입력하세요 : 10, 5
	연산자를 선택하세요 (+, -, *, /, %) : *
	곱셈 함수 호출 후 50.0입니다.
	계속 연산하시겠습니까? (Y / N) : y

	두 수를 입력하세요 : 20, 30
	연산자를 선택하세요 (+, -, *, /, %) : +
	곱셈 함수 호출 후 50.0입니다.
	계속 연산하시겠습니까? (Y / N) : n
	계산기 프로그램을 종료합니다.
*/

#include "my_calculator.h"

double add(int x, int y);
double sub(int x, int y);
double mul(int x, int y);
double div(int x, int y);
int remain(int x, int y);

int main(void) {

	int num1 = 0, num2 = 0, result_remain = 0;
	double	result = 0;
	char get_choice = ' ', yorn = ' ';

	while (1) {

		printf("두 수를 입력하세요 : ");
		scanf_s("%d %d", &num1, &num2);
		getchar();
		printf("연산자를 선택하세요 : ");
		scanf_s("%c", &get_choice, sizeof(char));

		switch(get_choice) {
			case '+':
				result = add(num1, num2);
				printf("덧셈 함수 호출 후 %.1lf입니다.\n", result);
	re:			getchar();

				printf("연산을 계속 하시겠습니까?");
				scanf_s("%c", &yorn, sizeof(char));
				if (yorn == 'y' || yorn == 'Y') {
					continue;
				}
				else if (yorn == 'n' || yorn == 'N') {
					printf("계산기 프로그램을 종료합니다.\n");
					break;
				}
				else {
					printf("잘못된 입력값입니다.\n");
					printf("다시 입력해주세요\n");
					goto re;
				}
				break;


			case '-':
				result = sub(num1, num2);
				printf("뺄셈 함수 호출 후 %.1lf입니다.\n", result);
				getchar();

				printf("연산을 계속 하시겠습니까?");
				scanf_s("%c", &yorn, sizeof(char));
				if (yorn == 'y' || yorn == 'Y') {
					continue;
				}
				else if (yorn == 'n' || yorn == 'N') {
					printf("계산기 프로그램을 종료합니다.\n");
					break;
				}
				else {
					printf("잘못된 입력값입니다.\n");
					printf("다시 입력해주세요\n");
					goto re;
				}
				break;


			case '*':
				result = mul(num1, num2);
				printf("곱셈 함수 호출 후 %.1lf입니다.\n", result);
				getchar();

				printf("연산을 계속 하시겠습니까?");
				scanf_s("%c", &yorn, sizeof(char));
				if (yorn == 'y' || yorn == 'Y') {
					continue;
				}
				else if (yorn == 'n' || yorn == 'N') {
					printf("계산기 프로그램을 종료합니다.\n");
					break;
				}
				else {
					printf("잘못된 입력값입니다.\n");
					printf("다시 입력해주세요\n");
					goto re;
				}
				break;


			case '/':
				result = div(num1, num2);
				printf("나눗셈 함수 호출 후 %.1lf입니다.\n", result);
				getchar();

				printf("연산을 계속 하시겠습니까?");
				scanf_s("%c", &yorn, sizeof(char));
				if (yorn == 'y' || yorn == 'Y') {
					continue;
				}
				else if (yorn == 'n' || yorn == 'N') {
					printf("계산기 프로그램을 종료합니다.\n");
					break;
				}
				else {
					printf("잘못된 입력값입니다.\n");
					printf("다시 입력해주세요\n");
					goto re;
				}
				break;


			case '%':
				result_remain = remain(num1, num2);
				printf("나머지 함수 호출 후 %d입니다.\n", result_remain);
				getchar();

				printf("연산을 계속 하시겠습니까?");
				scanf_s("%c", &yorn, sizeof(char));
				if (yorn == 'y' || yorn == 'Y') {
					continue;
				}
				else if (yorn == 'n' || yorn == 'N') {
					printf("계산기 프로그램을 종료합니다.\n");
					break;
				}
				else {
					printf("잘못된 입력값입니다.\n");
					printf("다시 입력해주세요\n");
					goto re;
				}
				break;


			default:
				printf("다시 입력해주세요\n");
				printf("계속 연산을 진행하시겠습니까?");
				scanf_s("%c", &yorn, sizeof(char));
				getchar();
				break;
		}
		if (yorn == 'n' || yorn == 'N') {
			break;
		}
	}

	return 0;
}