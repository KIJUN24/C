#include <stdio.h>
#include <stdlib.h>

int main(void) {

	system("title 정수 2개 입력 후 덧셈 연산 프로그램");

	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	printf("1번째 정수 입력 : ");
	scanf_s("%d", &num1);

	printf("2번째 정수 입력 : ");
	scanf_s("%d", &num2);

	sum = num1 + num2;

	printf("결과값 : %d", sum);

	return 0;
}