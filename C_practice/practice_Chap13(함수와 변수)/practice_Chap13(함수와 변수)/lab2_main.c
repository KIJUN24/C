/*
	문제-2
	소스 파일 2개를 생성하는데 덧셈 연산 수행은 외부 연결 함수에서 수행
	전역변수를 2개 선언하는데 전역변수 1개, 정적 전역변수 1개 선언
	내부함수 역할은 문자열 "전역 변수를 연결하는 함수 프로그램" 출력을 수행
	extern 키워드로 외부 파일 사용자 정의함수를 연결함(매개변수 2개 선언)
	외부 함수 역할은 메인 함수에서 2개의 정수값 500, 1000을 전달받아 덧셈 연산 후 결과값 반환을 하도록 한다.
	
	출력결과
	전역 변수를 연결하는 프로그램
	연산 결과 : 1500
*/

#include<stdio.h>

static void inner_function();
extern int outter_function(int num1, int num2);

int ex_num1 = 500, ex_num2 = 1000;

int main(void)
{	
	int result = 0;

	inner_function();
	//add();

	result = outter_function(500, 1000);

	printf("외부함수로부터 받은 연산결과 값 : %d\n\n", result);

	return 0;
}

void inner_function()
{
	printf("전역 변수를 연결하는 프로그램\n");
	return;
}