/*
	포인터와 배열은 서로 비슷하다.
	int * ptr	int arr[3]	이렇게 두 개를 선언했을 때
	ptr은 변수, arr은 상수인 것만 빼고 모두 동일하다.
	ptr, arr 모두 int * (정수형 포인터) 이다.
*/

#include<stdio.h>

int main(void)
{
	int arr[3] = { 0, 0, 0 };
	
	printf("*arr를 하기 전\n");
	printf("%d %d %d\n\n", arr[0], arr[1], arr[2]);

	(*arr) = 10;
	
	printf("*arr를 한 후\n");
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);

	return 0;
}