/*
	배열에 대한 실습-6__사용자로부터 입력을 받기
	배열의 요소의 개수를 구하는 방법(공식)
	1. 배열의 요소 개수 = sizeof(배열명) / sizeof(배열명[0])
	2. 배열의 요소 개수 = sizeof(배열명) / sizeof(배열의 데이터 타입)
*/

// 배열의 요소의 개수를 구하는 실습

#include<stdio.h>
#define LENGTH 10
int main(void)
{

	int arr[LENGTH] = { 0 };
	int cnt = 0;	// 배열의 개수를 저장할 변수
	int cnt1 = 0;
	int cnt2 = 0;
	int i = 0;


	printf("배열의 요소의 값을 입력하세요.\n");

	// 10번 루핑하면서 사용자로부터 배열의 값을 입력받는 코드
	for (i = 0; i < LENGTH; i++)
	{
		printf("arr[%d]방의 값 입력 : ", i);
		scanf_s("%d", &arr[i]);
	}
	printf("\n\n");

	// 1. 배열 요소의 개수 구하기
	cnt = sizeof(arr);
	cnt1 = sizeof(arr) / sizeof(arr[0]);
	printf("arr배열 요소의 개수 : %d\n", cnt1);

	// 1. 배열 요소의 개수 구하기
	cnt2 = sizeof(arr) / sizeof(int);
	printf("arr배열 요소의 개수 : %d\n", cnt2);

	printf("\n\n");

	// 배열의 요소를 직접 출력해보기
	for (i = 0; i < cnt1; i++)
	{
		printf("arr[%d]의 값 : %2d \n", i, arr[i]);
	}

	return 0;
}