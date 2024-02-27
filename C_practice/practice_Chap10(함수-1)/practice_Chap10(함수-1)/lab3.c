/*
	문제3 - 사용자 정의 함수에 대한 연습문제 실습
	함수 호출(3단계)을 선언, 호출, 구현을 통하여 사용자에게 2개의 값을 입력받고 거듭제곱을 구하는 프로그램을 작성해보자.
	+ 모듈 분리도 해보자.
	사용자 입력 함수 : int get_integer(void){}
	거듭제곱을 구하는 함수 : int power(int x, int y){}
	출력결과
	정수를 입력하세요 : 5
	정수를 입력하세요 : 5
	5의 5승은 3125입니다.
*/

#include "my_power.h"	// 사용자 헤더 파일은 <>사용하지 않고 ""을 사용해 포함시킨다.

int get_integer(void);
int power(int x, int y);

int main(void) {

	int x = 0, y = 0, result = 0;

	printf("거듭제곱 대상 정수를 입력하세요 : ");
	x = get_integer();
	printf("지수를 입력하세요 : ");
	y = get_integer();

	//printf("x : %d\n", x);
	//printf("x : %d\n", y);

	result = power(x, y);

	printf("%d의 %d승은 %d입니다.\n", x, y, result);

	return 0;
}

