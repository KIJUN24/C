/*
	문제2
	정수형 배열 100개의 방을 가지는 배열을 선언하고 초기화 한다.
	정수형 배열 100개의 방을 가지는 배열을 통해서 2의 배수를 출력하는데
	사용자로부터 어디까지 2의 배수를 출력할 것인지 입력받고
	그 입력받은 수까지 루프를 돌면서 2의 배수를 출력하는 프로그램을 작성하시오.

	실행결과
	배열 arr[100]개의 방이 0으로 초기화 되었습니다.
	어디까지 2의 배수를 출력할까요? : 10
	2
	4
	6
	8
	10
*/

#include<stdio.h>
#define LENGTH 100

int main(void)
{
	int arr[LENGTH] = { 0 };
	int i = 0, cnt = 0;


	printf("배열 arr[100]개의 방이 0으로 초기화 되었습니다.\n");
	for (i = 0; i < LENGTH; i++)
	{
		arr[i] = i;
	}

	printf("어디까지 2의 배수를 출력할까요? : ");
	scanf_s("%d", &cnt);
	
	for (i = 0; i <= cnt; i++)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		if ((arr[i] % 2) == 0)		// 짝수이면서 2의 배수이다
		{
			printf("%2d \n", arr[i]);
		}
		else		// 홀수일 때
		{
			continue;
		}
	}

	return 0;
}