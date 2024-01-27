/*
	함수 원형 종류에 대한 실습6 - 반환값 없는 함수
	종류는 2가지가 존재한다.
	1. 매개변수가 없는 void형 함수
	2. 매개변수가 있는 void형 함수
	반환값이 존재하지 않는데 호출한 곳에서 반환값을 요구하는 변수나 수식이 존재하면 오류가 발생함
*/

#include<stdio.h>

void test(int num1, int num2);

int main(void) {

	int x = 10, y = 30, hap = 0;

	printf("void형은 변수나 수식을 사용하면 오류가 발생합니다.\n");
	printf("[main()함수 영역]\n");
	printf("두 수의 합을 구하는 함수 호출\n");

	// hap = test(x, y); 오류가 발생하는 부분
	test(x, y);

	return 0;
}

void test(int num1, int num2) {

	int sum = 0;
	sum = num1 + num2;
	printf("[test() 함수 영역]\n");
	printf("두 수의 합 : %d\n", sum);
	return;
}
