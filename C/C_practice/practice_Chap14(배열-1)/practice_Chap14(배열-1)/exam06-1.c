/*
	배열에 대한 실습-6
	배열의 요소의 개수를 구하는 방법(공식)
	1. 배열의 요소 개수 = sizeof(배열명) / sizeof(배열명[0])
	2. 배열의 요소 개수 = sizeof(배열명) / sizeof(배열의 데이터 타입)
*/

// 배열의 요소의 개수를 구하는 실습

#include<stdio.h>

int main(void)
{
	/*
		아래는 배열의 방의 개수를 지정하지 않아도 컴파일러가 알아서 배열요소의 개수를 보고
		스택 메모리에 40바이트를 각각 연속적으로 할당하고 초기화된 값으로 저장된다.
	*/
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int cnt = 0;	// 배열의 개수를 저장할 변수
	int cnt1 = 0;	
	int cnt2 = 0;
	int i = 0;

	printf("arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }\n");

	printf("arr의 바이트 수 : %d바이트\n", sizeof(arr));		// 40바이트
	printf("arr의 바이트 수 : %d바이트\n", sizeof(arr[0]));		//  4바이트
	printf("arr의 바이트 수 : %d바이트\n", sizeof(int));		//  4바이트

	// 1. 배열 요소의 개수 구하기
	cnt = sizeof(arr);
	cnt1 = sizeof(arr) / sizeof(arr[0]);
	printf("arr[]배열 요소의 개수 : %d\n", cnt1);

	// 1. 배열 요소의 개수 구하기
	cnt2 = sizeof(arr) / sizeof(int);
	printf("arr[]배열 요소의 개수 : %d\n", cnt2);

	// 배열의 요소를 직접 출력해보기
	for (i = 0; i < cnt1; i++)
	{
		printf("arr[%d]의 값 : %2d \n", i, arr[i]);
	}

	return 0;
}