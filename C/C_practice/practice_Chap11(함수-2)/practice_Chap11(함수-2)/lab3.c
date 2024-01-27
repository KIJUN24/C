/*
	문제-3
	주소에 의한 호출 방법을 이용하는 문제(call by reference)
	사용자로부터 2개의 실수값을 입력받고 연산자도 입력을 받아
	아래 함수 선언부분에 맞게끔 코드를 작성한다.
	함수의 선언
	double add(double* num1, double* num2);
	double sub(double* num1, double* num2);
	double mul(double* num1, double* num2);
	double div(double* num1, double* num2);

	실행 결과
	두 개의 실수를 입력해주세요(, 연산자 사용) : 10.55, 55.579
	연산자를 입력하세요(+, -, *, /) : +
	10.55 + 55.58 = 66.13
	계속 진행하시겠습니까(Y / N) : n
	프로그램을 종료합니다.
*/

#include<stdio.h>

double add(double* num1, double* num2);
double sub(double* num1, double* num2);
double mul(double* num1, double* num2);
double div(double* num1, double* num2);

int main(void)
{
	double input_num1 = 0.0, input_num2 = 0.0;
	double result = 0.0;
	char choice_cul = ' ', yn = ' ';

	while (1)
	{
		// 실수 입력
		printf("두 개의 실수를 입력해주세요(, 연산자 사용) : ");
		scanf_s("%lf, %lf", &input_num1, &input_num2);
		// 실수 입력 scanf_s 확인용
		//printf("%.2lf %.2lf\n", input_num1, input_num2);
		getchar();
		
re1:		// 연산자 입력
		printf("연산자를 입력하세요(+, -, *, /) : ");
		scanf_s("%c", &choice_cul, sizeof(char));
		// 연산자 입력 scanf_s 확인용
		//printf("%c\n", choice_cul);
		
		switch (choice_cul)
		{
			case '+':
				result = add(&input_num1, &input_num2);
				printf("%.2lf + %.2lf = %.2lf\n", input_num1, input_num2, result);
				/*printf("계속 진행하시겠습니까? (Y / N) : ");
				scanf_s("%c", &yn, sizeof(yn));*/
				getchar();

				break;

			case '-':
				result = sub(&input_num1, &input_num2);
				printf("%.2lf - %.2lf = %.2lf\n", input_num1, input_num2, result);
				/*printf("계속 진행하시겠습니까? (Y / N) : ");
				scanf_s("%c", &yn, sizeof(yn));*/
				getchar();
				break;

			case '*':
				result = mul(&input_num1, &input_num2);
				printf("%.2lf * %.2lf = %.2lf\n", input_num1, input_num2, result);
				/*printf("계속 진행하시겠습니까? (Y / N) : ");
				scanf_s("%c", &yn, sizeof(yn));*/
				getchar();
				break;

			case '/':
				result = div(&input_num1, &input_num2);
				printf("%.2lf / %.2lf = %.2lf\n", input_num1, input_num2, result);
				/*printf("계속 진행하시겠습니까? (Y / N) : ");
				scanf_s("%c", &yn, sizeof(yn));*/
				getchar();
				break;

			default:
				printf("다시 입력해주세요\n");
				goto re1;
		}

re2:
		printf("계속 진행하시겠습니까? (Y / N) : ");
		scanf_s("%c", &yn, sizeof(char));
		if (yn == 'Y' || yn == 'y')
		{
			getchar();
			continue;
		}
		else if (yn == 'N' || yn == 'n')
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
		{
			printf("다시 입력해주세요\n");
			getchar();
			goto re2;
		}
	}

	return 0;
}

// *를 붙이지 않으면 가리키고 있는 변수의 주소값을 의미한다.
// *를 붙이면 간접참조를 통하여 변수에 저장된 값을 의미한다.

double add(double* num1, double* num2)
{
	double result_add = 0.0f;

	result_add = *num1 + *num2;

	return result_add;
}

double sub(double* num1, double* num2)
{
	double result_sub = 0.0f;

	result_sub = *num1 - *num2;

	return result_sub;
}

double mul(double* num1, double* num2)
{
	double result_mul = 0.0f;

	result_mul = *num1 * *num2;

	return result_mul;
}

double div(double* num1, double* num2)
{
	double result_div = 0.0f;
	
	result_div = *num1 / *num2;

	return result_div;
}