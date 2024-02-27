/*
	문제1
	정수형 배열요소가 3개인 것을 선언 후, 초기화하도록 한다.
	사용자로부터 배열 요소를 3개 입력받고 배열에 저장 후,
	3개의 배열값 중에서 최대값을 구하는 프로그램을 작성해보자.

	실행결과
	1번째 정수를 입력하시오 : 10
	2번째 정수를 입력하시오 : 6
	3번쨰 정수를 입력하시오 : 115
	가장 큰 수는 115이다.
*/

#include<stdio.h>

int main(void)
{
	int arr[3] = {0};
	int i = 0;
	
	
	for (i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		printf("%d번째 정수를 입력하시오 : ", i+1);
		scanf_s(" %d", &arr[i]);
	}

	if (arr[0] > arr[1] && arr[0] > arr[2])
	{
		printf("가장 큰 수는 %d이다.\n", arr[0]);
	}
	if (arr[1] > arr[0] && arr[1] > arr[2])
	{
		printf("가장 큰 수는 %d이다.\n", arr[1]);
	}
	if (arr[2] > arr[0] && arr[2] > arr[1])
	{
		printf("가장 큰 수는 %d이다.\n", arr[2]);
	}

	return 0;
}