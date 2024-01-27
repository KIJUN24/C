/*
	순환(재귀)함수(recursive function, recursive call) 실습-1
	순환(재귀)함수 : 함수 호출 후, 그 함수 내에서 자기 자신을 계속 호출하는 것이다.
	탈출코드가 없다면 무한루프에 빠지게 된다.(주의)
	팩토리얼 실습
*/

#include<stdio.h>

int factorial(int n);

int main(void)
{
	int input = 0, result = 0;

	printf("어디까지 팩토리얼을 구할까요? ");
	scanf_s("%d", &input);

	result = factorial(input);

	printf("%d까지의 팩터리얼 : %d\n", input, result);

	return 0;
}

int factorial(int n)
{
	if (n == 1)	// 재귀함수의 무한루프를 탈출하는 코드
	{
		return 1;
	}
	else
	{
		printf("수행> %d! : %d * (%d - 1)\n", n, n, n);
		return n * factorial(n - 1);
	}

}