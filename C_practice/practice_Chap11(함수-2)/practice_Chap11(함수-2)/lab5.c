/*
	문제-5
	재귀(순환)함수에 대한 문제
	math.h에 double pow(double x, double n);과 동일한 기능을 하는 프로그램 작성(재귀함수 사용)
	함수 선언 2개
	1. int input_num() -> 사용자로부터 입력을 받는 함수
	2. int power(int pow_target, int square); -> 거듭제곱을 구하는 함수
*/

/*
	실행결과
	[main()함수 영역]

	제곱 대상을 입력하세요 : 5
	지수(제곱값)을 입력하세요 : 

	[power()함수 호출]

	5의 4승은 625입니다.

	[main()함수 영역]

	프로그램 종료.
*/

#include<stdio.h>

int input_num();
int power(int pow_target, int square);


int main(void)
{
	int input_target = 0, input_square = 0, result = 0;

	printf("[main()함수 영역]\n\n");

	printf("제곱 대상을 입력하세요 : ");
	input_target = input_num();
	printf("지수(제곱값)을 입력하세요 : ");
	input_square = input_num();
	printf("\n");
	result = power(input_target, input_square);

	printf("%d의 %d승은 %d입니다.\n", input_target, input_square, result);
	printf("\n");
	printf("[main()함수 영역]\n\n");
	printf("프로그램 종료.\n");

	return 0;
}


int input_num()
{
	int input = 0;
	scanf_s("%d", &input);

	return input;
}
int power(int pow_target, int square)
{

	if (square == 0)
	{
		printf("[power()함수 호출]\n\n");
		return 1;
	}
	else
	{
		printf("%d의 %d승\n", pow_target, square);
		return pow_target * power(pow_target, square - 1);
	}
}