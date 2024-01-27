/*
	문제-4
	배열을 하나 선언하자. 아래와 같이 선언하도록 한다.
	int arr[10] = {10, 50, 100, 111, 222, 300, 355, 400, 1000};
	함수를 주소에 의한 호출(call by reference)로 아래와 같은 결과를 출력하도록 프로그램을 작성하자.
	함수 선언부 : int arrlen(int* arr);

	출력결과
	숫자 = [10], arr배열의 인덱스 = 0
	포인터 주소 위치 이동 : 주소값

	숫자 = [30], arr배열의 인덱스 = 1
	포인터 주소 위치 이동 : 주소값

	숫자 = [50], arr배열의 인덱스 = 2
	포인터 주소 위치 이동 : 주소값

	...

	배열원본 값 : arr = [10 30 50 100 111 222 300 344 400 1000]
	배열의 길이 = 10
*/

#include<stdio.h>

int arrlen(int* arr);


int main(void)
{
	// 배열명은 곧 주소다.(포인터 상수에 해당)
	int arr[10] = { 10, 30, 50,100,111,222,300,355,400,1000 };
	int* ptr = arr;
	int length = 0, i = 0;

	length = arrlen(arr);	// 주소에 의한 호출

	printf("배열의 원본 값 : arr[");

	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("]\n");
	printf("배열의 길이 : %d", length);
	return 0;
}

int arrlen(const int* arr)
{
	int index = 0;

	while (index <= 9)
	{
		printf("숫자 = [%d], arr배열의 인덱스 = %d\n", *arr, index);
		printf("포인터 주소 위치 이동 : %p\n\n", arr);
		index++;
		arr++;	// 포인터 위치를 이동하는 부분, ++증가 연산자를 사용하면 포인터 변수의 타입에 바이트 수만큼 이동을 시킨다.
	}
	printf("\n");


	return index;	// 배열의 길이 return
}