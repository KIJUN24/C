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


// 2. 정적(static)변수를 선언하고 지역변수의 증감 값의 차이를 보는 실습
#include<stdio.h>

void start();	// 사용자 정의 함수 선언

int main(void)
{
	printf("start()함수 3회 호출 결과\n");
	start();
	start();
	start();
	return 0;
}

// 사용자 정의 함수 구현0
void start()
// 정적변수는 함수가 종료되더라도, 값을 유지할 때 사용한다.
// 하지만 동적변수는 함수가 종료되면 할당된 공간이 소멸되기 때문에 아래와 같은 결과가 출력이 된다.
{
	static int static_count = 0;	// 지역 정적변수의 선언 및 초기화
	auto int auto_count = 0;		// 동적 정적변수의 선언 및 초기화

	printf("지역 정적변수 = %d\t 지역 동적변수 = %d\n", static_count, auto_count);

	static_count++;
	auto_count++;

	return;
}