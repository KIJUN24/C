/*
	함수와 변수(실습-5)
	- 지역변수와 전역변수의 변수명이 같을 때, 어떠한 값이 우선이 되는지에 대한 실습
*/

#include<stdio.h>

// 전역변수 선언 및 초기화
int number = 15;	

int main(void)
{
	printf("number의 값 출력 : % d\n", number);

	int number = -15;	// 지역변수의 선언 및 초기화

	printf("number의 값 출력 : % d\n", number);

	printf("================================\n");
	printf("전역변수 number의 값 출력 : ");
	printf("number = 15\n");
	printf("지역변수 number의 값 출력 : ");
	printf("number = -15\n");

	printf("어떤 number를 출력하는지 확인\n");
	printf("출력> number : %d\n\n", number);

	// 출력결과는 결론적으로 전역변수와 지역변수가 같은 명이라면
	// 지역변수가 전역변수보다 우선시 되어 지역변수가 전역변수를 가리게 된다.
	// 이러한 문제점을 해결하기 위해서는 현업에서 실제로 프로그래밍 할 때,
	// 전역변수와 지역변수의 이름을 다르게 하여 코딩한다.

	return 0;
}