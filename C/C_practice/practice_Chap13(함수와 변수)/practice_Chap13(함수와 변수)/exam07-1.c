/*
	함수와 변수(실습-7)
	동적변수(automatic variable)와 정적변수(static variable)에 대한 실습
	- 정적변수
	: 전역변수와 마찬가지로 프로그램의 실행과 동시에 메모리(데이터 영역)에 데이터 타입의 크기만큼
	  할당을 받고 초기화를 하지 않아도 자동으로 데이터 타입의 맞게 자동 초기화가 이루어진다.
	  생면주기가 프로그램의 실행과 종료에 의해서 같이 항당되고 소멸이 이루어진다.
	  정적변수가 동적변수와 차이점은 정적변수가 선언된 함수 또는 코드 블록 구간을 벗어나도
	  정적변수의 값은 유지가 된다.
	  정적변수를 선언하기 위해서는 변수명 앞에 static키워드를 붙여주면 된다.
*/

// 1. 정적변수의 자동 초기화 실습
#include<stdio.h>

static int int_num1;	// 전역 정적변수 선언(초기화 하지 않음)
static double double_num1;

int main(void)
{
	static int int_num2;	// 지역 정적변수 선언(초기화 하지 않음)
	static double double_num2;

	printf("전역 정적(static)변수 int_num1의 값 : %d\n", int_num1);
	printf("지역 정적(static)변수 int_num2의 값 : %d\n", int_num2);
	printf("\n");
	printf("전역 정적(static)변수 double_num1의 값 : %lf\n", double_num1);
	printf("지역 정적(static)변수 doubld_num2의 값 : %lf\n", double_num2);

	return 0;
}